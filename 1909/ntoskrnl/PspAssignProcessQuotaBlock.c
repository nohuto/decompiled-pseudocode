/*
 * XREFs of PspAssignProcessQuotaBlock @ 0x140694668
 * Callers:
 *     PspAllocateProcess @ 0x140681A9C (PspAllocateProcess.c)
 *     PspSetQuotaLimits @ 0x1406D7FE0 (PspSetQuotaLimits.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14003EC70 (ExAcquirePushLockSharedEx.c)
 *     PspUnlockQuotaListShared @ 0x1400EDB34 (PspUnlockQuotaListShared.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     PspDereferenceQuotaBlock @ 0x1405C8BB8 (PspDereferenceQuotaBlock.c)
 *     SeQueryUserSidToken @ 0x140656D1C (SeQueryUserSidToken.c)
 *     RtlCopySid @ 0x1406583A0 (RtlCopySid.c)
 *     PspLookupProcessQuotaBlock @ 0x140694848 (PspLookupProcessQuotaBlock.c)
 *     PspReadUserQuotaLimits @ 0x140694974 (PspReadUserQuotaLimits.c)
 *     PspSafeReferenceQuotaBlock @ 0x140695014 (PspSafeReferenceQuotaBlock.c)
 *     PspInitializeQuotaBlock @ 0x140787A98 (PspInitializeQuotaBlock.c)
 */

__int64 __fastcall PspAssignProcessQuotaBlock(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rdi
  unsigned __int8 v6; // r13
  _BYTE *v7; // r14
  ULONG v8; // esi
  volatile signed __int32 *v9; // rbx
  int UserQuotaLimits; // edi
  struct _KTHREAD *CurrentThread; // rdi
  int *v12; // r12
  signed __int64 *v13; // rsi
  volatile signed __int32 *PoolWithTag; // rax
  __int64 v16; // rdi
  ULONG DestinationSidLength[2]; // [rsp+20h] [rbp-59h] BYREF
  __int64 v18; // [rsp+28h] [rbp-51h]
  _BYTE SourceSid[80]; // [rsp+30h] [rbp-49h] BYREF
  char v20; // [rsp+80h] [rbp+7h] BYREF

  v18 = a1;
  v5 = a1;
  memset(SourceSid, 0, 0x44uLL);
  v6 = 0;
  v7 = 0LL;
  SeQueryUserSidToken(a3, SourceSid, 0x44u, DestinationSidLength);
  if ( v5 && (*(_DWORD *)(v5 + 80) & 0x10) != 0 )
  {
    v8 = 0;
    v6 = 1;
    DestinationSidLength[0] = 0;
  }
  else
  {
    v8 = DestinationSidLength[0];
    v7 = SourceSid;
  }
  v9 = (volatile signed __int32 *)PspLookupProcessQuotaBlock(v7, v8, v6, 0LL, DestinationSidLength[0]);
  if ( v9 )
    goto LABEL_10;
  if ( v5 )
  {
    v12 = 0LL;
  }
  else
  {
    UserQuotaLimits = PspReadUserQuotaLimits(SourceSid);
    if ( UserQuotaLimits < 0 )
      return (unsigned int)UserQuotaLimits;
    if ( DestinationSidLength[1] )
    {
      CurrentThread = KeGetCurrentThread();
      v12 = PspDefaultResourceLimits;
      v13 = (signed __int64 *)PspQuotaBlockTable;
      v7 = 0LL;
      DestinationSidLength[0] = 0;
      v6 = 1;
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockSharedEx((ULONG_PTR)v13, 0LL);
      v9 = (volatile signed __int32 *)PspDefaultQuotaBlock;
      if ( PspDefaultQuotaBlock && (unsigned int)PspSafeReferenceQuotaBlock(PspDefaultQuotaBlock) )
      {
        PspUnlockQuotaListShared((__int64)CurrentThread, v13);
        _InterlockedIncrement(v9 + 129);
        goto LABEL_10;
      }
      PspUnlockQuotaListShared((__int64)CurrentThread, v13);
      v8 = DestinationSidLength[0];
    }
    else
    {
      v12 = (int *)&v20;
    }
    v5 = v18;
  }
  PoolWithTag = (volatile signed __int32 *)ExAllocatePoolWithTag(NonPagedPoolNxCacheAligned, v8 + 576LL, 0x62517350u);
  v9 = PoolWithTag;
  if ( PoolWithTag )
  {
    UserQuotaLimits = PspInitializeQuotaBlock(v5, v12, PoolWithTag);
    if ( UserQuotaLimits < 0 )
    {
LABEL_28:
      if ( v9 )
      {
        _InterlockedAdd(v9 + 129, 0xFFFFFFFF);
        PspDereferenceQuotaBlock(v9);
      }
      return (unsigned int)UserQuotaLimits;
    }
    if ( v7 )
      RtlCopySid(v8, (PSID)(v9 + 144), SourceSid);
    v16 = PspLookupProcessQuotaBlock(v7, v8, v6, v9, DestinationSidLength[0]);
    if ( v16 )
    {
      _InterlockedAdd(v9 + 129, 0xFFFFFFFF);
      PspDereferenceQuotaBlock(v9);
      v9 = (volatile signed __int32 *)v16;
    }
LABEL_10:
    if ( !*(_QWORD *)(a2 + 1040) )
    {
      *(_QWORD *)(a2 + 1040) = v9;
      return 0LL;
    }
    if ( (_UNKNOWN *)_InterlockedCompareExchange64(
                       (volatile signed __int64 *)(a2 + 1040),
                       (signed __int64)v9,
                       (signed __int64)&PspSystemQuotaBlock) == &PspSystemQuotaBlock )
      return 0LL;
    UserQuotaLimits = -1073741823;
    goto LABEL_28;
  }
  return (unsigned int)-1073741670;
}
