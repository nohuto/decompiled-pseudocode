/*
 * XREFs of PoSetSystemState @ 0x1402DBE90
 * Callers:
 *     PoRegisterSystemState @ 0x1402DBDB0 (PoRegisterSystemState.c)
 * Callees:
 *     PopSetSystemState @ 0x1401778B4 (PopSetSystemState.c)
 *     PopReleasePolicyLock @ 0x140566370 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140566690 (PopAcquirePolicyLock.c)
 */

void __stdcall PoSetSystemState(EXECUTION_STATE Flags)
{
  unsigned __int8 CurrentIrql; // bl

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql < 2u )
    PopAcquirePolicyLock(Flags);
  PopSetSystemState(Flags, 7u);
  if ( CurrentIrql < 2u )
    PopReleasePolicyLock();
}
