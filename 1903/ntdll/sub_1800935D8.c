/*
 * XREFs of sub_1800935D8 @ 0x1800935D8
 * Callers:
 *     sub_180092D30 @ 0x180092D30 (sub_180092D30.c)
 * Callees:
 *     sub_180093580 @ 0x180093580 (sub_180093580.c)
 */

void __fastcall sub_1800935D8(unsigned __int8 a1, int a2, __int64 a3, _DWORD *a4)
{
  int v6; // ebx

  if ( a2 > 0 )
  {
    v6 = a2;
    do
    {
      --v6;
      sub_180093580(a1, a3, a4);
    }
    while ( *a4 != -1 && v6 > 0 );
  }
}
