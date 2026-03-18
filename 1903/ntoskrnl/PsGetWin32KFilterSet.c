/*
 * XREFs of PsGetWin32KFilterSet @ 0x140115470
 * Callers:
 *     NtQueryInformationProcess @ 0x1405D12E0 (NtQueryInformationProcess.c)
 * Callees:
 *     <none>
 */

__int64 PsGetWin32KFilterSet()
{
  return *(unsigned int *)&KeGetCurrentThread()->ApcState.Process[2].IdealNode[10];
}
