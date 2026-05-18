/*
 * XREFs of sub_1800F5C50 @ 0x1800F5C50
 * Callers:
 *     sub_1800F5C1C @ 0x1800F5C1C (sub_1800F5C1C.c)
 * Callees:
 *     sub_1800F5A8C @ 0x1800F5A8C (sub_1800F5A8C.c)
 */

_DWORD *__fastcall sub_1800F5C50(__int64 a1, unsigned __int16 a2, char a3)
{
  int v4; // edi
  _DWORD *result; // rax

  v4 = -(a3 != 0);
  result = (_DWORD *)sub_1800F5A8C(a1, a2, 0);
  if ( *result != v4 )
  {
    *result = v4;
    ++*(_DWORD *)(a1 + 80);
  }
  return result;
}
