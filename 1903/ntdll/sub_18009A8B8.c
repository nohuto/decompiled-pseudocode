/*
 * XREFs of sub_18009A8B8 @ 0x18009A8B8
 * Callers:
 *     sub_180099F5C @ 0x180099F5C (sub_180099F5C.c)
 * Callees:
 *     sub_18009A868 @ 0x18009A868 (sub_18009A868.c)
 */

_WORD *__fastcall sub_18009A8B8(__int16 *a1, int a2, __int64 a3, _DWORD *a4)
{
  _WORD *result; // rax
  _DWORD *v5; // r11
  int v8; // r10d

  result = (_WORD *)*(unsigned int *)(a3 + 24);
  v5 = a4;
  if ( ((unsigned __int8)result & 0x40) == 0 || *(_QWORD *)(a3 + 16) )
  {
    if ( a2 > 0 )
    {
      do
        result = sub_18009A868(*a1++, a3, v5);
      while ( *v5 != -1 && v8 > 0 );
    }
  }
  else
  {
    *a4 += a2;
  }
  return result;
}
