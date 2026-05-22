/*
 * XREFs of ?Release@DWMInputRouter@@WBA@EAAKXZ @ 0x180009270
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall DWMInputRouter::Release(__int64 a1)
{
  return MPCInputRouter::Release((MPCInputRouter *)(a1 - 16));
}
