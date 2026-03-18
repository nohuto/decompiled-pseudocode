/*
 * XREFs of MiLockPoolCommitWs @ 0x1400234C4
 * Callers:
 *     MiCommitPoolMemory @ 0x140022E20 (MiCommitPoolMemory.c)
 *     MiFillPoolCommitPageTable @ 0x140023640 (MiFillPoolCommitPageTable.c)
 * Callees:
 *     MiLockWorkingSetShared @ 0x14005D6D0 (MiLockWorkingSetShared.c)
 */

__int64 __fastcall MiLockPoolCommitWs(__int64 a1)
{
  unsigned __int8 CurrentIrql; // dl
  __int64 v3; // rcx

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  v3 = *(_QWORD *)(a1 + 40);
  *(_BYTE *)(a1 + 76) = CurrentIrql;
  return MiLockWorkingSetShared(v3);
}
