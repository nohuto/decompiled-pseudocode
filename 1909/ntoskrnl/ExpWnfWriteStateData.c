/*
 * XREFs of ExpWnfWriteStateData @ 0x14065491C
 * Callers:
 *     NtUpdateWnfStateData @ 0x140654FA0 (NtUpdateWnfStateData.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14003E350 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     ExAllocatePoolWithQuotaTag @ 0x14009EE00 (ExAllocatePoolWithQuotaTag.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     KiStackAttachProcess @ 0x1400CD9F0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CDDC0 (KiUnstackDetachProcess.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400EF920 (ExfAcquirePushLockExclusiveEx.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ZwSetValueKey @ 0x1401C1850 (ZwSetValueKey.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     ExpWnfComposeValueName @ 0x14063F9FC (ExpWnfComposeValueName.c)
 */

__int64 __fastcall ExpWnfWriteStateData(__int64 a1, const void *a2, unsigned int a3, int a4, int a5)
{
  size_t v6; // r13
  const void *v7; // r12
  volatile signed __int64 *v9; // rsi
  _RTL_BALANCED_NODE *v10; // rax
  _RTL_BALANCED_NODE *v11; // rbx
  _DWORD *v12; // rcx
  _DWORD *v13; // r14
  __int32 i; // esi
  void *v15; // rcx
  char v16; // bl
  signed __int64 v18; // rax
  _KPROCESS *v19; // rcx
  int v20; // r12d
  _DWORD *PoolWithTag; // r14
  _RTL_BALANCED_NODE *v22; // rax
  _RTL_BALANCED_NODE *v23; // r14
  char v24; // bl
  _DWORD *v25; // [rsp+30h] [rbp-D8h]
  NTSTATUS v26; // [rsp+38h] [rbp-D0h]
  PVOID P; // [rsp+40h] [rbp-C8h]
  UNICODE_STRING ValueName; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v30; // [rsp+68h] [rbp-A0h]
  signed __int64 v31; // [rsp+70h] [rbp-98h]
  _BYTE v32[48]; // [rsp+78h] [rbp-90h] BYREF
  char v33; // [rsp+A8h] [rbp-60h] BYREF

  v6 = a3;
  v7 = a2;
  v30 = a1;
  memset(v32, 0, sizeof(v32));
  v26 = 0;
  *(_QWORD *)&ValueName.Length = 2228224LL;
  ValueName.Buffer = (wchar_t *)&v33;
  if ( *(_QWORD *)(a1 + 104) )
    ExpWnfComposeValueName(*(_QWORD *)(a1 + 40), &ValueName);
  v25 = 0LL;
  P = 0LL;
  v9 = (volatile signed __int64 *)(a1 + 80);
  v10 = KeAbPreAcquire(a1 + 80, 0LL, 0);
  v11 = v10;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 80), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 80), v10, a1 + 80);
  if ( v11 )
    BYTE2(v11[1].Left) |= 1u;
  if ( a5 && *(_DWORD *)(a1 + 96) != a4 )
  {
    v24 = _InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v24 & 2) != 0 && (v24 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 80));
    KeAbPostRelease(a1 + 80);
    return 3221225473LL;
  }
  v12 = 0LL;
  if ( *(_QWORD *)(a1 + 88) != 1LL )
    v12 = *(_DWORD **)(a1 + 88);
  if ( !v12 && (*(_QWORD *)(a1 + 104) || (_DWORD)v6) || (v13 = v12) != 0LL && v12[1] < (unsigned int)v6 )
  {
    v18 = _InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL);
    v31 = v18;
    if ( (v18 & 2) != 0 && (v18 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 80));
    KeAbPostRelease(a1 + 80);
    if ( ((*(_DWORD *)(a1 + 40) >> 4) & 3) != 3 || PsInitialSystemProcess == *(PEPROCESS *)(a1 + 152) )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)(v6 + 16), 0x20666E57u);
      v25 = PoolWithTag;
    }
    else
    {
      v19 = *(_KPROCESS **)(a1 + 152);
      if ( !v19 )
        return 3221225524LL;
      if ( v19 == KeGetCurrentThread()->ApcState.Process )
      {
        v20 = 0;
      }
      else
      {
        v20 = 1;
        KiStackAttachProcess(v19, 0, (__int64)v32);
      }
      PoolWithTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)9, (unsigned int)(v6 + 16), 0x20666E57u);
      v25 = PoolWithTag;
      if ( v20 )
        KiUnstackDetachProcess((struct _KTHREAD *)v32, 0);
      v7 = a2;
    }
    if ( !PoolWithTag )
      return 3221225626LL;
    *((_QWORD *)PoolWithTag + 1) = 0LL;
    *PoolWithTag = 1050884;
    PoolWithTag[1] = v6;
    v22 = KeAbPreAcquire(a1 + 80, 0LL, 0);
    v23 = v22;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v9, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 80), v22, a1 + 80);
    if ( v23 )
      BYTE2(v23[1].Left) |= 1u;
    v13 = 0LL;
    if ( *(_QWORD *)(a1 + 88) != 1LL )
      v13 = *(_DWORD **)(a1 + 88);
    if ( !v13 || v13[1] < (unsigned int)v6 )
      v13 = v25;
  }
  for ( i = *(_DWORD *)(a1 + 96) + 1; !i; i = 1 )
    ;
  if ( !v13 )
  {
    *(_QWORD *)(a1 + 88) = 1LL;
LABEL_19:
    _InterlockedExchange((volatile __int32 *)(a1 + 96), i);
    goto LABEL_24;
  }
  memmove(v13 + 4, v7, v6);
  v13[2] = v6;
  v13[3] = i;
  v15 = *(void **)(a1 + 104);
  if ( !v15 || (v26 = ZwSetValueKey(v15, &ValueName, 0, 3u, v13 + 3, v6 + 4), v26 >= 0) )
  {
    if ( v13 == v25 )
    {
      P = *(PVOID *)(a1 + 88);
      *(_QWORD *)(a1 + 88) = v13;
      v25 = 0LL;
    }
    goto LABEL_19;
  }
  P = *(PVOID *)(a1 + 88);
  *(_QWORD *)(a1 + 88) = 0LL;
LABEL_24:
  v16 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 80), 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v16 & 2) != 0 && (v16 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 80));
  KeAbPostRelease(a1 + 80);
  if ( (unsigned __int64)P >= 2 )
    ExFreePoolWithTag(P, 0x20666E57u);
  if ( v25 )
    ExFreePoolWithTag(v25, 0x20666E57u);
  return (unsigned int)v26;
}
