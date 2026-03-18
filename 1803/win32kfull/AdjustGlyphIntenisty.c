/*
 * XREFs of AdjustGlyphIntenisty @ 0x1C0244BA8
 * Callers:
 *     ?ulCallAndConvertFontOutput@@YAKPEAVRFONT@@PEAU_FONTOBJ@@KPEAU_GLYPHDATA@@PEAXK@Z @ 0x1C0080754 (-ulCallAndConvertFontOutput@@YAKPEAVRFONT@@PEAU_FONTOBJ@@KPEAU_GLYPHDATA@@PEAXK@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     ?ScaleUpAlpha@@YAEEM@Z @ 0x1C0244638 (-ScaleUpAlpha@@YAEEM@Z.c)
 *     CalcActualGlyphIntensity @ 0x1C0244CE8 (CalcActualGlyphIntensity.c)
 */

void __fastcall AdjustGlyphIntenisty(__int64 a1, __int64 a2)
{
  unsigned int v3; // ebx
  float v5; // xmm0_4
  float v6; // xmm1_4
  __int64 v7; // rdi
  float *v8; // rax
  __int64 v9; // rcx
  float v10; // xmm1_4
  _BYTE *v11; // rsi
  __int64 v12; // r10
  unsigned __int64 v13; // r11
  float v14; // xmm1_4
  unsigned __int8 v15; // al
  int v16; // r9d
  int v17; // r8d
  unsigned __int8 v18[16]; // [rsp+20h] [rbp-78h]
  float v19[20]; // [rsp+30h] [rbp-68h] BYREF

  v3 = *(_DWORD *)(a1 + 8) * *(_DWORD *)(a1 + 12);
  v5 = CalcActualGlyphIntensity(a1, v3);
  if ( v5 > 0.0 )
  {
    v6 = *(float *)(a2 + 4);
    if ( v6 > v5 )
    {
      v7 = a2 - (_QWORD)v19;
      v8 = v19;
      v9 = 18LL;
      v10 = (float)(v6 - v5) / v5;
      do
      {
        *v8 = v10 * *(float *)((char *)v8 + v7 + 8);
        ++v8;
        --v9;
      }
      while ( v9 );
      if ( v3 )
      {
        v11 = (_BYTE *)(a1 + 16);
        v12 = v3;
        v13 = 0x1C0000000uLL;
        do
        {
          if ( *v11 )
          {
            *(_DWORD *)v18 = *(_DWORD *)(v13 + 4LL * (unsigned __int8)*v11 + 2972512);
            v14 = v19[v18[0] - 1 + v18[1] + v18[2]];
            ScaleUpAlpha(v18[0], v14);
            ScaleUpAlpha(v18[1], v14);
            v15 = ScaleUpAlpha(v18[2], v14);
            *v11 = *(_BYTE *)((unsigned int)v15 + 7 * (v17 + 7 * v16) + v13 + 3009824);
          }
          ++v11;
          --v12;
        }
        while ( v12 );
      }
    }
  }
}
