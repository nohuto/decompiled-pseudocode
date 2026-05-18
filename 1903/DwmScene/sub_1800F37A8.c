/*
 * XREFs of sub_1800F37A8 @ 0x1800F37A8
 * Callers:
 *     sub_180093634 @ 0x180093634 (sub_180093634.c)
 *     sub_1800EA240 @ 0x1800EA240 (sub_1800EA240.c)
 *     sub_1800F341C @ 0x1800F341C (sub_1800F341C.c)
 * Callees:
 *     sub_1800F1D24 @ 0x1800F1D24 (sub_1800F1D24.c)
 */

__int64 __fastcall sub_1800F37A8(__int64 a1, unsigned __int16 a2, __int64 a3)
{
  __int64 result; // rax
  unsigned __int64 i; // r9

  result = sub_1800F1D24(a1, a2);
  for ( i = 0LL; i < 0x10; ++i )
    *(_DWORD *)(result + 4 * i) = *(_DWORD *)(a3 + 4 * i);
  return result;
}
