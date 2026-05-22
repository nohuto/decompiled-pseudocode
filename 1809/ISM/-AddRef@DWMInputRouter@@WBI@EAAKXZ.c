/*
 * XREFs of ?AddRef@DWMInputRouter@@WBI@EAAKXZ @ 0x180009380
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall DWMInputRouter::AddRef(__int64 a1)
{
  return MPCInputRouter::AddRef((MPCInputRouter *)(a1 - 24));
}
