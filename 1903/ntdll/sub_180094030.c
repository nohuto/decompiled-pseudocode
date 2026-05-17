/*
 * XREFs of sub_180094030 @ 0x180094030
 * Callers:
 *     sub_1800936C0 @ 0x1800936C0 (sub_1800936C0.c)
 * Callees:
 *     sub_180093FE0 @ 0x180093FE0 (sub_180093FE0.c)
 */

void __fastcall sub_180094030(unsigned __int16 a1, int a2, __int64 a3, _DWORD *a4)
{
  int v6; // ebx

  if ( a2 > 0 )
  {
    v6 = a2;
    do
    {
      --v6;
      sub_180093FE0(a1, a3, a4);
    }
    while ( *a4 != -1 && v6 > 0 );
  }
}
