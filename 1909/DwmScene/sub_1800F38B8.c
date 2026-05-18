/*
 * XREFs of sub_1800F38B8 @ 0x1800F38B8
 * Callers:
 *     sub_180093744 @ 0x180093744 (sub_180093744.c)
 *     sub_1800EA350 @ 0x1800EA350 (sub_1800EA350.c)
 *     sub_1800F352C @ 0x1800F352C (sub_1800F352C.c)
 * Callees:
 *     sub_1800F1E34 @ 0x1800F1E34 (sub_1800F1E34.c)
 */

__int64 __fastcall sub_1800F38B8(__int64 a1, unsigned __int16 a2, __int64 a3)
{
  __int64 result; // rax
  unsigned __int64 i; // r9

  result = sub_1800F1E34(a1, a2);
  for ( i = 0LL; i < 0x10; ++i )
    *(_DWORD *)(result + 4 * i) = *(_DWORD *)(a3 + 4 * i);
  return result;
}
