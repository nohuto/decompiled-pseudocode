/*
 * XREFs of KeSetLastBranchRecordInUse @ 0x1408446D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall KeSetLastBranchRecordInUse(char a1)
{
  if ( a1 )
    _interlockedbittestandset(&KiCpuTracingFlags, 1u);
  else
    _interlockedbittestandreset(&KiCpuTracingFlags, 1u);
}
