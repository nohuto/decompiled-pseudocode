/*
 * XREFs of RtlCSparseBitmapLeaveLockingRegion @ 0x14000A75C
 * Callers:
 *     RtlpCSparseBitmapPageDecommit @ 0x140008938 (RtlpCSparseBitmapPageDecommit.c)
 *     RtlSparseArrayElementAllocate @ 0x14000A4E8 (RtlSparseArrayElementAllocate.c)
 *     RtlCSparseBitmapBitmaskWrite @ 0x14000A690 (RtlCSparseBitmapBitmaskWrite.c)
 *     RtlpCSparseBitmapPageCommit @ 0x14000A9E4 (RtlpCSparseBitmapPageCommit.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall RtlCSparseBitmapLeaveLockingRegion(char *a1)
{
  unsigned __int8 v1; // bl
  __int64 result; // rax

  if ( !*(_BYTE *)(*((_QWORD *)a1 + 1) + 56LL) )
    return KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
  v1 = *a1;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v1 < 2u )
  {
    _InterlockedAnd((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick();
  }
  result = v1;
  __writecr8(v1);
  return result;
}
