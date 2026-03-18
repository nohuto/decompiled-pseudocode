/*
 * XREFs of strtolX @ 0x1401A2FDC
 * Callers:
 *     atol @ 0x14019FDE0 (atol.c)
 * Callees:
 *     strtoxlX @ 0x1401A2D7C (strtoxlX.c)
 */

__int64 __fastcall strtolX(unsigned __int8 *a1, unsigned __int8 **a2, unsigned int a3, int a4)
{
  return strtoxlX((__int64)&_initiallocalestructinfo, a1, a2, a3, 0, a4);
}
