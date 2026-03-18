/*
 * XREFs of RtlCSparseBitmapLeaveLockingRegion @ 0x14010FA58
 * Callers:
 *     RtlpCSparseBitmapPageDecommit @ 0x14010ECFC (RtlpCSparseBitmapPageDecommit.c)
 *     RtlCSparseBitmapBitmaskWrite @ 0x14010F0D8 (RtlCSparseBitmapBitmaskWrite.c)
 *     RtlSparseArrayElementAllocate @ 0x14010F9A4 (RtlSparseArrayElementAllocate.c)
 *     RtlpCSparseBitmapPageCommit @ 0x14010FCE8 (RtlpCSparseBitmapPageCommit.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x14003F170 (KiLeaveGuardedRegionUnsafe.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall RtlCSparseBitmapLeaveLockingRegion(char *a1)
{
  unsigned __int8 v1; // bl
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx

  if ( !*(_BYTE *)(*((_QWORD *)a1 + 1) + 48LL) )
    return KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  v1 = *a1;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v1 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  result = v1;
  __writecr8(v1);
  return result;
}
