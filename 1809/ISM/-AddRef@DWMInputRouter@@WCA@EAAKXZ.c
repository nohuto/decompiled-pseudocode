/*
 * XREFs of ?AddRef@DWMInputRouter@@WCA@EAAKXZ @ 0x180009410
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall DWMInputRouter::AddRef(__int64 a1)
{
  return MPCInputRouter::AddRef((MPCInputRouter *)(a1 - 32));
}
