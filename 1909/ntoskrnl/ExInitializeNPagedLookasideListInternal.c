/*
 * XREFs of ExInitializeNPagedLookasideListInternal @ 0x140175AD0
 * Callers:
 *     ExInitializeNPagedLookasideList @ 0x140175A90 (ExInitializeNPagedLookasideList.c)
 *     RtlInitializeCompression @ 0x14030AA94 (RtlInitializeCompression.c)
 *     MiInitNucleus @ 0x1409F3CC8 (MiInitNucleus.c)
 *     CcInitializeCacheManager @ 0x140A040E4 (CcInitializeCacheManager.c)
 *     WmipInitializeRegistration @ 0x140A191CC (WmipInitializeRegistration.c)
 *     FsRtlInitSystem @ 0x140A1A600 (FsRtlInitSystem.c)
 *     FsRtlInitializeFileLocks @ 0x140A1AA78 (FsRtlInitializeFileLocks.c)
 *     PopInitializeIrpWorkers @ 0x140A1F9F0 (PopInitializeIrpWorkers.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008590 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxReleaseSpinLock @ 0x1400916D0 (KxReleaseSpinLock.c)
 *     InitializeSListHead @ 0x1400EA4C0 (InitializeSListHead.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall ExInitializeNPagedLookasideListInternal(
        __int64 a1,
        PVOID (__stdcall *a2)(POOL_TYPE PoolType, SIZE_T NumberOfBytes, ULONG Tag),
        void (__stdcall *a3)(PVOID P, ULONG Tag),
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
    a3 = ExFreePoolWithTag;
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
  v13 = (_QWORD *)qword_14042F548;
  v14 = (_QWORD *)(a1 + 64);
  if ( *(__int64 **)qword_14042F548 != &ExNPagedLookasideListHead )
    __fastfail(3u);
  *v14 = &ExNPagedLookasideListHead;
  v14[1] = v13;
  *v13 = v14;
  qword_14042F548 = (__int64)v14;
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
