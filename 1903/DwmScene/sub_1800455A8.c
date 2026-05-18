/*
 * XREFs of sub_1800455A8 @ 0x1800455A8
 * Callers:
 *     sub_180045810 @ 0x180045810 (sub_180045810.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800455A8(__int64 a1, __int128 *a2, int a3, int a4)
{
  __int128 v4; // xmm0
  __int64 result; // rax

  v4 = *a2;
  *(_DWORD *)(a1 + 16) = a3;
  result = a1;
  *(_DWORD *)(a1 + 20) = a4;
  *(_OWORD *)a1 = v4;
  return result;
}
