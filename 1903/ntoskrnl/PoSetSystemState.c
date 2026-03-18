/*
 * XREFs of PoSetSystemState @ 0x1402F7770
 * Callers:
 *     PoRegisterSystemState @ 0x1402F7690 (PoRegisterSystemState.c)
 * Callees:
 *     PopSetSystemState @ 0x1401812C4 (PopSetSystemState.c)
 *     PopReleasePolicyLock @ 0x140595780 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x1405958A8 (PopAcquirePolicyLock.c)
 */

void __stdcall PoSetSystemState(EXECUTION_STATE Flags)
{
  unsigned __int8 CurrentIrql; // bl
  __int64 v3; // rdx
  __int64 v4; // rcx

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql < 2u )
    PopAcquirePolicyLock(Flags);
  PopSetSystemState(Flags, 7u);
  if ( CurrentIrql < 2u )
    PopReleasePolicyLock(v4, v3);
}
