/*
 * XREFs of SepSetTokenCachedHandles @ 0x14061F890
 * Callers:
 *     SepSetTokenBnoIsolation @ 0x140085F14 (SepSetTokenBnoIsolation.c)
 *     NtCreateLowBoxToken @ 0x14069CB70 (NtCreateLowBoxToken.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     SepReferenceCachedTokenHandles @ 0x140088160 (SepReferenceCachedTokenHandles.c)
 *     SepCloseCachedTokenHandles @ 0x1400881F0 (SepCloseCachedTokenHandles.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     RtlCreateHashTable @ 0x140157F10 (RtlCreateHashTable.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     SepGetCachedHandlesEntry @ 0x14061FA4C (SepGetCachedHandlesEntry.c)
 *     SepValidateReferencedCachedHandles @ 0x14061FF14 (SepValidateReferencedCachedHandles.c)
 */

__int64 __fastcall SepSetTokenCachedHandles(_QWORD *a1, _DWORD *a2, unsigned int a3, HANDLE *a4)
{
  HANDLE *v4; // rsi
  char v6; // r12
  HANDLE *PoolWithTag; // rax
  int CachedHandlesEntry; // ebp
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v13; // rdi
  bool v14; // dl
  __int64 v15; // rcx
  char v16; // cl
  HANDLE *v17; // rax
  char v18; // bl
  bool v20; // zf
  _QWORD v21[7]; // [rsp+20h] [rbp-38h] BYREF
  char v22; // [rsp+70h] [rbp+18h] BYREF

  v4 = 0LL;
  v6 = 0;
  v22 = 0;
  if ( !a3 )
    goto LABEL_5;
  PoolWithTag = (HANDLE *)ExAllocatePoolWithTag(PagedPool, 8LL * a3, 0x63486553u);
  v4 = PoolWithTag;
  if ( !PoolWithTag )
    return (unsigned int)-1073741801;
  CachedHandlesEntry = SepReferenceCachedTokenHandles(a3, a4, (__int64)PoolWithTag);
  if ( CachedHandlesEntry >= 0 )
  {
    v6 = 1;
    CachedHandlesEntry = SepValidateReferencedCachedHandles(a1, a2, a3, v4);
    if ( CachedHandlesEntry >= 0 )
    {
LABEL_5:
      CurrentThread = KeGetCurrentThread();
      v13 = a1[27] + 88LL;
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockExclusiveEx(v13, 0LL);
      if ( !*(_QWORD *)(v13 + 8) && !RtlCreateHashTable((PRTL_DYNAMIC_HASH_TABLE *)(v13 + 8), 0, 0) )
      {
        CachedHandlesEntry = -1073741670;
        goto LABEL_27;
      }
      CachedHandlesEntry = SepGetCachedHandlesEntry(v13, a2, &v22, v21);
      if ( CachedHandlesEntry )
      {
LABEL_27:
        v20 = (_InterlockedExchangeAdd64((volatile signed __int64 *)v13, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2;
        goto LABEL_31;
      }
      v14 = 0;
      if ( *a2 )
      {
        if ( *a2 != 1 )
        {
LABEL_13:
          v16 = 0;
          if ( !v14 )
            v16 = v6;
          v17 = 0LL;
          v6 = v16;
          if ( !v14 )
            v17 = v4;
          v4 = v17;
          v18 = _InterlockedExchangeAdd64((volatile signed __int64 *)v13, 0xFFFFFFFFFFFFFFFFuLL);
          if ( (v18 & 2) == 0 )
            goto LABEL_18;
          v20 = (v18 & 4) == 0;
LABEL_31:
          if ( v20 )
            ExfTryToWakePushLock((volatile signed __int64 *)v13);
LABEL_18:
          KeAbPostRelease(v13);
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
          goto LABEL_19;
        }
        v14 = v22 == 0;
        v15 = v21[0];
        a1[144] = v21[0];
      }
      else
      {
        v15 = v21[0];
        if ( a3 )
          v14 = *(_DWORD *)(v21[0] + 56LL) == 0;
        a1[136] = v21[0];
      }
      if ( v14 )
      {
        *(_DWORD *)(v15 + 56) = a3;
        *(_QWORD *)(v15 + 64) = v4;
      }
      goto LABEL_13;
    }
  }
LABEL_19:
  if ( v4 )
  {
    if ( v6 )
      SepCloseCachedTokenHandles(a3, v4);
    ExFreePoolWithTag(v4, 0);
  }
  return (unsigned int)CachedHandlesEntry;
}
