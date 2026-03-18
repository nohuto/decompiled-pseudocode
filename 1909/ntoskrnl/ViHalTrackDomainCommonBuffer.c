/*
 * XREFs of ViHalTrackDomainCommonBuffer @ 0x14096C688
 * Callers:
 *     VfAllocateDomainCommonBuffer @ 0x140327660 (VfAllocateDomainCommonBuffer.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008590 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxReleaseSpinLock @ 0x1400916D0 (KxReleaseSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall ViHalTrackDomainCommonBuffer(__int64 *a1)
{
  KIRQL v2; // bl
  __int64 v3; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 result; // rax

  v2 = KeAcquireSpinLockRaiseToDpc(&qword_1409C8100);
  v3 = ViDomainCommonBufferList;
  if ( *(__int64 **)(ViDomainCommonBufferList + 8) != &ViDomainCommonBufferList )
    __fastfail(3u);
  a1[1] = (__int64)&ViDomainCommonBufferList;
  *a1 = v3;
  *(_QWORD *)(v3 + 8) = a1;
  ViDomainCommonBufferList = (__int64)a1;
  KxReleaseSpinLock(&qword_1409C8100);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v2 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  result = v2;
  __writecr8(v2);
  return result;
}
