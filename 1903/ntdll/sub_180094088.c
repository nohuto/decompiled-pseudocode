/*
 * XREFs of sub_180094088 @ 0x180094088
 * Callers:
 *     sub_1800936C0 @ 0x1800936C0 (sub_1800936C0.c)
 * Callees:
 *     _errno @ 0x180084320 (_errno.c)
 *     sub_180093FE0 @ 0x180093FE0 (sub_180093FE0.c)
 */

void __fastcall sub_180094088(unsigned __int16 *a1, int a2, __int64 a3, _DWORD *a4)
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
        sub_180093FE0(*a1++, a3, a4);
        if ( *a4 == -1 )
        {
          if ( *errno() != 42 )
            return;
          sub_180093FE0(63LL, a3, a4);
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
