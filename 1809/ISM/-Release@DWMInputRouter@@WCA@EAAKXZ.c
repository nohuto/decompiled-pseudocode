/*
 * XREFs of ?Release@DWMInputRouter@@WCA@EAAKXZ @ 0x1800093D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall DWMInputRouter::Release(__int64 a1)
{
  return MPCInputRouter::Release((MPCInputRouter *)(a1 - 32));
}
