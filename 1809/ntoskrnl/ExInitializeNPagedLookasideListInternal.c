/*
 * XREFs of ExInitializeNPagedLookasideListInternal @ 0x14015FAA0
 * Callers:
 *     ExInitializeNPagedLookasideList @ 0x14015FA60 (ExInitializeNPagedLookasideList.c)
 *     RtlInitializeCompression @ 0x1402ECA24 (RtlInitializeCompression.c)
 *     CcInitializeCacheManager @ 0x1409B16D8 (CcInitializeCacheManager.c)
 *     ObInitSystem @ 0x1409B2964 (ObInitSystem.c)
 *     PoInitSystem @ 0x1409B3C10 (PoInitSystem.c)
 *     MiInitNucleus @ 0x1409BA108 (MiInitNucleus.c)
 *     WmipInitializeRegistration @ 0x1409D55A0 (WmipInitializeRegistration.c)
 *     FsRtlInitSystem @ 0x1409D8714 (FsRtlInitSystem.c)
 *     FsRtlInitializeFileLocks @ 0x1409D8B60 (FsRtlInitializeFileLocks.c)
 *     PopInitializeIrpWorkers @ 0x1409DD56C (PopInitializeIrpWorkers.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CE80 (KeAcquireSpinLockRaiseToDpc.c)
 *     InitializeSListHead @ 0x1400F3200 (InitializeSListHead.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall ExInitializeNPagedLookasideListInternal(
        __int64 a1,
        PVOID (__stdcall *a2)(POOL_TYPE PoolType, SIZE_T NumberOfBytes, ULONG Tag),
        void (__stdcall *a3)(PVOID P),
        int a4,
        int a5,
        int a6,
        __int16 a7,
        int a8)
{
  KIRQL v12; // bl
  _QWORD *v13; // rax
  _QWORD *v14; // rdi
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx

  InitializeSListHead((PSLIST_HEADER)a1);
  *(_WORD *)(a1 + 16) = ExMinimumLookasideDepth;
  *(_WORD *)(a1 + 18) = 256;
  *(_DWORD *)(a1 + 40) = a6;
  *(_DWORD *)(a1 + 44) = a5;
  *(_QWORD *)(a1 + 20) = 0LL;
  *(_QWORD *)(a1 + 28) = 0LL;
  *(_DWORD *)(a1 + 36) = a4;
  if ( !a2 )
    a2 = ExAllocatePoolWithTag;
  *(_QWORD *)(a1 + 48) = a2;
  if ( !a3 )
    a3 = ExFreePool;
  *(_QWORD *)(a1 + 56) = a3;
  *(_QWORD *)(a1 + 80) = 0LL;
  v12 = KeAcquireSpinLockRaiseToDpc(&ExNPagedLookasideLock);
  if ( a8 )
  {
    *(_WORD *)(a1 + 18) = -1;
    *(_WORD *)(a1 + 16) = a7;
  }
  else if ( !ExMinimumLookasideDepth )
  {
    *(_DWORD *)(a1 + 16) = -65536;
  }
  v13 = (_QWORD *)qword_1404080A8;
  v14 = (_QWORD *)(a1 + 64);
  if ( *(__int64 **)qword_1404080A8 != &ExNPagedLookasideListHead )
    __fastfail(3u);
  *v14 = &ExNPagedLookasideListHead;
  v14[1] = v13;
  *v13 = v14;
  qword_1404080A8 = (__int64)v14;
  KxReleaseSpinLock(&ExNPagedLookasideLock);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v12 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  result = v12;
  __writecr8(v12);
  return result;
}
