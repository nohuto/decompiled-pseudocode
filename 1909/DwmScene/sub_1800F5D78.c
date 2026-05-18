/*
 * XREFs of sub_1800F5D78 @ 0x1800F5D78
 * Callers:
 *     sub_1800F5D44 @ 0x1800F5D44 (sub_1800F5D44.c)
 * Callees:
 *     sub_1800F5A8C @ 0x1800F5A8C (sub_1800F5A8C.c)
 */

_DWORD *__fastcall sub_1800F5D78(__int64 a1, unsigned __int16 a2, int a3)
{
  _DWORD *result; // rax

  result = (_DWORD *)sub_1800F5A8C(a1, a2, 1);
  if ( *result != a3 )
  {
    *result = a3;
    ++*(_DWORD *)(a1 + 80);
  }
  return result;
}
