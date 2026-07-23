/*
 * XREFs of PsIsWin32KFilterAuditEnabled @ 0x14012E910
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool PsIsWin32KFilterAuditEnabled()
{
  return (KeGetCurrentThread()->ApcState.Process[2].UserTime & 0x8000) != 0;
}
