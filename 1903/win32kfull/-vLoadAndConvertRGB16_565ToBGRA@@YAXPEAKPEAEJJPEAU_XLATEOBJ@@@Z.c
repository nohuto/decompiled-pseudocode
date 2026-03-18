/*
 * XREFs of ?vLoadAndConvertRGB16_565ToBGRA@@YAXPEAKPEAEJJPEAU_XLATEOBJ@@@Z @ 0x1C02BE130
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vLoadAndConvertRGB16_565ToBGRA(unsigned int *a1, unsigned __int8 *a2, int a3, int a4)
{
  int v4; // ebx
  unsigned __int8 *v6; // r10
  unsigned int v7; // ecx
  __int64 v8; // rsi
  unsigned __int64 v9; // r11
  unsigned __int8 *v10; // rax
  unsigned __int64 v11; // r11
  int v12; // r8d
  int v13; // eax
  unsigned int v14; // edx
  int v15; // r9d

  v4 = a4;
  v6 = &a2[2 * a3];
  if ( ((unsigned __int8)v6 & 2) != 0 )
  {
    v7 = *(unsigned __int16 *)v6;
    v6 += 2;
    *a1++ = ((v7 & 0x600 | (v7 >> 1) & 0xE) >> 1) | (8
                                                   * (v7 & 0xE01F | (4 * (v7 & 0x7E0 | (8 * (v7 & 0xF800 | 0xFFFF0000))))));
    v4 = a4 - 1;
  }
  v8 = 0LL;
  v9 = 2 * (v4 & 0xFFFFFFFFFFFFFFFEuLL);
  v10 = &v6[v9];
  v11 = v9 >> 2;
  if ( v6 > v10 )
    v11 = 0LL;
  if ( v11 )
  {
    do
    {
      v12 = *(_DWORD *)v6;
      ++v8;
      v13 = *(_DWORD *)v6 & 0x7E0;
      v14 = *(_DWORD *)v6 & 0xF800 | 0xFFFF0000;
      v15 = *(_DWORD *)v6 >> 1;
      v6 += 4;
      *a1 = ((v12 & 0x600 | v15 & 0xEu) >> 1) | (8 * (v12 & 0xE01F | (4 * (v13 | (8 * v14)))));
      a1[1] = ((v12 & 0xF80000FF | ((v12 & 0x7E00000 | ((v12 & 0xE01F1FFF | ((v12 & 0x6000000 | v15 & 0xE0000u) >> 4)) >> 2)) >> 3)) >> 8) | 0xFF000000;
      a1 += 2;
    }
    while ( v8 != v11 );
  }
  if ( (v4 & 1) != 0 )
    *a1 = ((*(_WORD *)v6 & 0x600 | (*(unsigned __int16 *)v6 >> 1) & 0xEu) >> 1) | (8
                                                                                 * (*(_WORD *)v6 & 0xE01F | (4 * (*(_WORD *)v6 & 0x7E0 | (8 * (*(_WORD *)v6 & 0xF800 | 0xFFFF0000))))));
}
