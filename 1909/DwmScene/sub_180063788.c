/*
 * XREFs of sub_180063788 @ 0x180063788
 * Callers:
 *     sub_180063DF0 @ 0x180063DF0 (sub_180063DF0.c)
 * Callees:
 *     sub_180064698 @ 0x180064698 (sub_180064698.c)
 */

__int64 __fastcall sub_180063788(__int64 a1, __int64 a2, _DWORD **a3)
{
  __int64 result; // rax

  result = sub_180064698(a1);
  *(_WORD *)(result + 24) = 0;
  *(_DWORD *)(result + 28) = **a3;
  *(_BYTE *)(result + 32) = 0;
  return result;
}
