/*
 * XREFs of PsGetWin32KFilterSet @ 0x1400EF460
 * Callers:
 *     NtQueryInformationProcess @ 0x14066ED30 (NtQueryInformationProcess.c)
 * Callees:
 *     <none>
 */

__int64 PsGetWin32KFilterSet()
{
  return KeGetCurrentThread()->ApcState.Process[2].ThreadSeed[18];
}
