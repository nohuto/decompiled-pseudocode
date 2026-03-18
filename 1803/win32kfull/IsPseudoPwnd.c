/*
 * XREFs of IsPseudoPwnd @ 0x1C0030F98
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0030FEC (xxxCreateWindowEx.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsPseudoPwnd(__int64 a1)
{
  return (unsigned __int64)(a1 - 2) > 0xFFFFFFFFFFFFFFFBuLL;
}
