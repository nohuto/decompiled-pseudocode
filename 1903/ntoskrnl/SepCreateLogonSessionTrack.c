/*
 * XREFs of SepCreateLogonSessionTrack @ 0x1406D223C
 * Callers:
 *     SepRmCreateLogonSessionWrkr @ 0x1406D2210 (SepRmCreateLogonSessionWrkr.c)
 *     SeInitServerSilo @ 0x1408D9F44 (SeInitServerSilo.c)
 *     SepRmDbInitialization @ 0x140A1C86C (SepRmDbInitialization.c)
 * Callees:
 *     PsGetCurrentServerSilo @ 0x1400064D0 (PsGetCurrentServerSilo.c)
 *     ObfReferenceObjectWithTag @ 0x14000D6B0 (ObfReferenceObjectWithTag.c)
 *     ExReleaseResourceLite @ 0x14003BBD0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x14003C350 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     ExInitializePushLock @ 0x140082020 (ExInitializePushLock.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepCreateLogonSessionTrack(__int64 a1)
{
  KSPIN_LOCK *PoolWithTag; // rax
  KSPIN_LOCK *v3; // rbx
  __int64 v4; // rcx
  KSPIN_LOCK *v5; // r15
  struct _KTHREAD *CurrentThread; // rax
  struct _ERESOURCE *v7; // rbp
  KSPIN_LOCK v8; // rdi
  void *CurrentServerSilo; // rsi

  PoolWithTag = (KSPIN_LOCK *)ExAllocatePoolWithTag(PagedPool, 0xC0uLL, 0x734C6553u);
  v3 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, 0xC0uLL);
  v3[1] = *(_QWORD *)a1;
  v3[3] = 1LL;
  v3[17] = (KSPIN_LOCK)(v3 + 16);
  v3[16] = (KSPIN_LOCK)(v3 + 16);
  v3[18] = 0LL;
  ExInitializePushLock(v3 + 19);
  if ( *(_DWORD *)((char *)&NlsMbCodePageTag + 3) )
  {
    v3[23] = (KSPIN_LOCK)(v3 + 22);
    v3[22] = (KSPIN_LOCK)(v3 + 22);
  }
  v4 = (unsigned int)(1529154084 * *(_DWORD *)a1) >> 28;
  v5 = (KSPIN_LOCK *)(SepLogonSessions + 8 * v4);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v7 = &SepRmDbLock + (v4 & 3);
  ExAcquireResourceExclusiveLite(v7, 1u);
  v8 = *v5;
  CurrentServerSilo = (void *)PsGetCurrentServerSilo();
  while ( v8 )
  {
    if ( CurrentServerSilo == *(void **)(v8 + 160)
      && *(_DWORD *)a1 == *(_DWORD *)(v8 + 8)
      && *(_DWORD *)(a1 + 4) == *(_DWORD *)(v8 + 12) )
    {
      ExReleaseResourceLite(v7);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      ExFreePoolWithTag(v3, 0);
      return 3221225710LL;
    }
    v8 = *(_QWORD *)v8;
  }
  if ( CurrentServerSilo )
    ObfReferenceObjectWithTag(CurrentServerSilo, 0x734C6553u);
  v3[20] = (KSPIN_LOCK)CurrentServerSilo;
  *v3 = *v5;
  *v5 = (KSPIN_LOCK)v3;
  ExReleaseResourceLite(v7);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return 0LL;
}
