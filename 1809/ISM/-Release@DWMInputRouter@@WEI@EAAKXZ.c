/*
 * XREFs of ?Release@DWMInputRouter@@WEI@EAAKXZ @ 0x180009480
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall DWMInputRouter::Release(__int64 a1)
{
  return MPCInputRouter::Release((MPCInputRouter *)(a1 - 72));
}
