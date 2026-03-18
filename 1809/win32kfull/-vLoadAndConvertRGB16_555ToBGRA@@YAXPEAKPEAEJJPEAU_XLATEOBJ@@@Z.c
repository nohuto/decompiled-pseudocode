/*
 * XREFs of ?vLoadAndConvertRGB16_555ToBGRA@@YAXPEAKPEAEJJPEAU_XLATEOBJ@@@Z @ 0x1C02A7480
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vLoadAndConvertRGB16_555ToBGRA(unsigned int *a1, unsigned __int8 *a2, int a3, int a4)
{
  int v4; // r10d
  unsigned __int8 *v6; // r8
  unsigned int v7; // ecx
  __int64 v8; // rbx
  unsigned __int64 v9; // r9
  unsigned __int8 *v10; // rax
  unsigned __int64 v11; // r9
  unsigned int v12; // edx
  int v13; // eax
  unsigned int v14; // ecx

  v4 = a4;
  v6 = &a2[2 * a3];
  if ( ((unsigned __int8)v6 & 2) != 0 )
  {
    v7 = *(unsigned __int16 *)v6;
    v6 += 2;
    *a1++ = (v7 >> 2) & 7 | (2
                           * (v7 & 0x380 | (4
                                          * (v7 & 0x1F | (2
                                                        * (v7 & 0x7000 | (4
                                                                        * (v7 & 0x3E0 | (8 * (v7 & 0xFC00 | 0xFFFF8000))))))))));
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
      v13 = *(_DWORD *)v6 & 0x3E0;
      v14 = *(_DWORD *)v6 & 0x7C00 | 0xFFFF8000;
      v6 += 4;
      *a1 = (v12 >> 2) & 7 | (2 * (v12 & 0x380 | (4 * (v12 & 0x1F | (2 * (v12 & 0x7000 | (4 * (v13 | (8 * v14)))))))));
      a1[1] = ((v12 & 0xFC00007F | ((v12 & 0x3E00000 | ((v12 & 0x70000000 | ((v12 & 0x1F0000 | ((v12 & 0x3800000 | (v12 >> 3) & 0x38000) >> 2)) >> 1)) >> 2)) >> 3)) >> 7) | 0xFF000000;
      a1 += 2;
    }
    while ( v8 != v11 );
  }
  if ( (v4 & 1) != 0 )
    *a1 = (*(unsigned __int16 *)v6 >> 2) & 7 | (2
                                              * (*(_WORD *)v6 & 0x380 | (4
                                                                       * (*(_WORD *)v6 & 0x1F | (2
                                                                                               * (*(_WORD *)v6 & 0x7000 | (4 * (*(_WORD *)v6 & 0x3E0 | (8 * (*(_WORD *)v6 & 0xFC00 | 0xFFFF8000))))))))));
}
