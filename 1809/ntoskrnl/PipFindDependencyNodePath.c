/*
 * XREFs of PipFindDependencyNodePath @ 0x140157FBC
 * Callers:
 *     IoTestDependency @ 0x140157F60 (IoTestDependency.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CE80 (KeAcquireSpinLockRaiseToDpc.c)
 *     PipDependencyGraphDepthFirstSearch @ 0x140158058 (PipDependencyGraphDepthFirstSearch.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall PipFindDependencyNodePath(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4)
{
  KIRQL v8; // bp
  int v9; // ebx
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD v12[6]; // [rsp+20h] [rbp-18h] BYREF

  v8 = KeAcquireSpinLockRaiseToDpc(&PiDependencyEdgeWriteLock);
  PipDependencyGraphDepthFirstSearch(a1, a2, v12, a4);
  KxReleaseSpinLock(&PiDependencyEdgeWriteLock);
  v9 = 0;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v8 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  result = v8;
  __writecr8(v8);
  if ( v12[0] )
  {
    LOBYTE(v9) = v12[0] != 1;
    ++v9;
  }
  *a3 = v9;
  return result;
}
