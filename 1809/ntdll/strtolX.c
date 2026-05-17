/*
 * XREFs of strtolX @ 0x1800953D0
 * Callers:
 *     atoi @ 0x180090800 (atoi.c)
 *     atol @ 0x180090830 (atol.c)
 * Callees:
 *     strtoxlX @ 0x180095170 (strtoxlX.c)
 */

__int64 __fastcall strtolX(unsigned __int8 *a1, unsigned __int8 **a2, unsigned int a3, int a4)
{
  return strtoxlX((__int64)&_initiallocalestructinfo, a1, a2, a3, 0, a4);
}
