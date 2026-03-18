/*
 * XREFs of PsGetWin32KFilterSet @ 0x140116AE0
 * Callers:
 *     NtQueryInformationProcess @ 0x1405D17E0 (NtQueryInformationProcess.c)
 * Callees:
 *     <none>
 */

__int64 PsGetWin32KFilterSet()
{
  return *(unsigned int *)&KeGetCurrentThread()->ApcState.Process[2].IdealNode[10];
}
