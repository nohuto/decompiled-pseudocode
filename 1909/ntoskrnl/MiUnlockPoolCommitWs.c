/*
 * XREFs of MiUnlockPoolCommitWs @ 0x140023474
 * Callers:
 *     MiCommitPoolMemory @ 0x140022E20 (MiCommitPoolMemory.c)
 *     MiFillPoolCommitPageTable @ 0x140023640 (MiFillPoolCommitPageTable.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x1400AC920 (MiUnlockWorkingSetShared.c)
 *     MiUnlockPageTableInternal @ 0x1401000D0 (MiUnlockPageTableInternal.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiUnlockPoolCommitWs(__int64 a1)
{
  __int64 v1; // rdx
  unsigned __int8 v3; // bl
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx

  v1 = *(_QWORD *)(a1 + 96);
  if ( v1 )
  {
    MiUnlockPageTableInternal(*(_QWORD *)(a1 + 40));
    *(_QWORD *)(a1 + 96) = 0LL;
  }
  LOBYTE(v1) = 2;
  MiUnlockWorkingSetShared(*(_QWORD *)(a1 + 40), v1);
  v3 = *(_BYTE *)(a1 + 76);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v3 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  result = v3;
  __writecr8(v3);
  return result;
}
