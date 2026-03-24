/*
 * XREFs of PsGetWin32KFilterSet @ 0x1400EF3E0
 * Callers:
 *     NtQueryInformationProcess @ 0x14066DB70 (NtQueryInformationProcess.c)
 * Callees:
 *     <none>
 */

__int64 PsGetWin32KFilterSet()
{
  return KeGetCurrentThread()->ApcState.Process[2].ThreadSeed[18];
}
