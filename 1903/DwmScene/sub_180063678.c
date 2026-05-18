/*
 * XREFs of sub_180063678 @ 0x180063678
 * Callers:
 *     sub_180063CE0 @ 0x180063CE0 (sub_180063CE0.c)
 * Callees:
 *     sub_180064588 @ 0x180064588 (sub_180064588.c)
 */

__int64 __fastcall sub_180063678(__int64 a1, __int64 a2, _DWORD **a3)
{
  __int64 result; // rax

  result = sub_180064588(a1);
  *(_WORD *)(result + 24) = 0;
  *(_DWORD *)(result + 28) = **a3;
  *(_BYTE *)(result + 32) = 0;
  return result;
}
