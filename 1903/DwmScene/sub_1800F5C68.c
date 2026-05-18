/*
 * XREFs of sub_1800F5C68 @ 0x1800F5C68
 * Callers:
 *     sub_1800F5C34 @ 0x1800F5C34 (sub_1800F5C34.c)
 * Callees:
 *     sub_1800F597C @ 0x1800F597C (sub_1800F597C.c)
 */

_DWORD *__fastcall sub_1800F5C68(__int64 a1, unsigned __int16 a2, int a3)
{
  _DWORD *result; // rax

  result = (_DWORD *)sub_1800F597C(a1, a2, 1);
  if ( *result != a3 )
  {
    *result = a3;
    ++*(_DWORD *)(a1 + 80);
  }
  return result;
}
