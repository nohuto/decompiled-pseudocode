/*
 * XREFs of IsPseudoPwnd @ 0x1C00BEBB4
 * Callers:
 *     xxxCreateWindowEx @ 0x1C00BFE30 (xxxCreateWindowEx.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsPseudoPwnd(__int64 a1)
{
  return (unsigned __int64)(a1 - 2) > 0xFFFFFFFFFFFFFFFBuLL;
}
