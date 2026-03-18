/*
 * XREFs of PsIsWin32KFilterAuditEnabled @ 0x14012FB40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool PsIsWin32KFilterAuditEnabled()
{
  return (*(_DWORD *)&KeGetCurrentThread()->ApcState.Process[2].Spare2[7] & 0x8000) != 0;
}
