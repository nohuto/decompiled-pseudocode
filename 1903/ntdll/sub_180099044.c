/*
 * XREFs of sub_180099044 @ 0x180099044
 * Callers:
 *     sub_180098540 @ 0x180098540 (sub_180098540.c)
 * Callees:
 *     sub_180098F94 @ 0x180098F94 (sub_180098F94.c)
 */

__int64 __fastcall sub_180099044(unsigned __int8 *a1, int a2, __int64 a3, _DWORD *a4)
{
  __int64 result; // rax
  int v7; // ebx

  result = *(unsigned int *)(a3 + 24);
  v7 = a2;
  if ( (result & 0x40) == 0 || *(_QWORD *)(a3 + 16) )
  {
    if ( a2 > 0 )
    {
      do
      {
        --v7;
        result = sub_180098F94(*a1++, a3, a4);
      }
      while ( *a4 != -1 && v7 > 0 );
    }
  }
  else
  {
    *a4 += a2;
  }
  return result;
}
