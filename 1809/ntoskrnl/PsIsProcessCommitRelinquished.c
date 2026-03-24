/*
 * XREFs of PsIsProcessCommitRelinquished @ 0x1406CE2C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall PsIsProcessCommitRelinquished(__int64 a1)
{
  return BYTE1(*(_DWORD *)(a1 + 1740)) & 1;
}
