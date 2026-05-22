/*
 * XREFs of ?AddRef@DWMInputRouter@@WBA@EAAKXZ @ 0x1800092D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall DWMInputRouter::AddRef(__int64 a1)
{
  return MPCInputRouter::AddRef((MPCInputRouter *)(a1 - 16));
}
