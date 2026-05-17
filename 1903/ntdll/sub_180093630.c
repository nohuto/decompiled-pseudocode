/*
 * XREFs of sub_180093630 @ 0x180093630
 * Callers:
 *     sub_180092D30 @ 0x180092D30 (sub_180092D30.c)
 * Callees:
 *     _errno @ 0x180084320 (_errno.c)
 *     sub_180093580 @ 0x180093580 (sub_180093580.c)
 */

void __fastcall sub_180093630(unsigned __int8 *a1, int a2, __int64 a3, _DWORD *a4)
{
  int v6; // ebx

  v6 = a2;
  if ( (*(_BYTE *)(a3 + 24) & 0x40) == 0 || *(_QWORD *)(a3 + 16) )
  {
    if ( a2 > 0 )
    {
      do
      {
        --v6;
        sub_180093580(*a1++, a3, a4);
        if ( *a4 == -1 )
        {
          if ( *errno() != 42 )
            return;
          sub_180093580(0x3Fu, a3, a4);
        }
      }
      while ( v6 > 0 );
    }
  }
  else
  {
    *a4 += a2;
  }
}
