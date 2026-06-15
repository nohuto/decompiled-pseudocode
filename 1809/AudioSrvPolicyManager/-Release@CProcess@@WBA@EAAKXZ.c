/*
 * XREFs of ?Release@CProcess@@WBA@EAAKXZ @ 0x180010350
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CProcess::Release(__int64 a1)
{
  return CUnknown::Release((CUnknown *)(a1 - 16));
}
