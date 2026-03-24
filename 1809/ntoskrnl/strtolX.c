/*
 * XREFs of strtolX @ 0x14019806C
 * Callers:
 *     atol @ 0x140194F70 (atol.c)
 * Callees:
 *     strtoxlX @ 0x140197E0C (strtoxlX.c)
 */

__int64 __fastcall strtolX(unsigned __int8 *a1, unsigned __int8 **a2, unsigned int a3, int a4)
{
  return strtoxlX((__int64)&_initiallocalestructinfo, a1, a2, a3, 0, a4);
}
