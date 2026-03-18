/*
 * XREFs of pjRawBitmap @ 0x1C02266E8
 * Callers:
 *     BmfdQueryFontData @ 0x1C0224E6C (BmfdQueryFontData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall pjRawBitmap(unsigned int a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  unsigned __int16 *v5; // rcx
  int v6; // r11d
  int v7; // edx
  unsigned int v8; // edx
  unsigned int v9; // eax

  if ( a1 > *(unsigned __int8 *)(a2 + 5) - (unsigned int)*(unsigned __int8 *)(a2 + 4) )
    a1 = *(unsigned __int8 *)(a2 + 6);
  v5 = (unsigned __int16 *)(*(_QWORD *)a3 + *(int *)(a2 + 16) + 2LL * a1 * ((*(_WORD *)a2 != 512) + 2));
  v6 = *v5;
  *a4 = v6;
  if ( *v5 )
  {
    if ( *(_WORD *)a2 == 512 )
      v7 = *((unsigned __int8 *)v5 + 3);
    else
      v7 = *((unsigned __int8 *)v5 + 3) | (v5[2] << 8);
    v8 = *((unsigned __int8 *)v5 + 2) | (v7 << 8);
    v9 = v8 + ((unsigned int)(v6 + 7) >> 3) * *(unsigned __int16 *)(a2 + 8);
    if ( v8 <= v9 && v9 <= *(_DWORD *)(a3 + 12) )
      return *(_QWORD *)a3 + v8;
    *a4 = 0;
  }
  return 0LL;
}
