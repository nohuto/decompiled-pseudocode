/*
 * XREFs of ?Release@DWMInputRouter@@WDI@EAAKXZ @ 0x180009330
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall DWMInputRouter::Release(__int64 a1)
{
  return MPCInputRouter::Release((MPCInputRouter *)(a1 - 56));
}
