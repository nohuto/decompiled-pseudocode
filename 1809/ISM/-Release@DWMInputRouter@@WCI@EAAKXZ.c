/*
 * XREFs of ?Release@DWMInputRouter@@WCI@EAAKXZ @ 0x180009460
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall DWMInputRouter::Release(__int64 a1)
{
  return MPCInputRouter::Release((MPCInputRouter *)(a1 - 40));
}
