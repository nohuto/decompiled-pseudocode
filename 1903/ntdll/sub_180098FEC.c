/*
 * XREFs of sub_180098FEC @ 0x180098FEC
 * Callers:
 *     sub_180098540 @ 0x180098540 (sub_180098540.c)
 * Callees:
 *     sub_180098F94 @ 0x180098F94 (sub_180098F94.c)
 */

__int64 __fastcall sub_180098FEC(unsigned __int8 a1, int a2, __int64 a3, _DWORD *a4)
{
  int v6; // ebx
  __int64 result; // rax

  if ( a2 > 0 )
  {
    v6 = a2;
    do
    {
      --v6;
      result = sub_180098F94(a1, a3, a4);
    }
    while ( *a4 != -1 && v6 > 0 );
  }
  return result;
}
