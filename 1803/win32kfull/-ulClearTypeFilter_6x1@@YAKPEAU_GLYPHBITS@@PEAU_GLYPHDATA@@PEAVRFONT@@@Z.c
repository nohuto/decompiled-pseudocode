/*
 * XREFs of ?ulClearTypeFilter_6x1@@YAKPEAU_GLYPHBITS@@PEAU_GLYPHDATA@@PEAVRFONT@@@Z @ 0x1C007F320
 * Callers:
 *     ?ulClearTypeFilter_6x5@@YAKPEAU_GLYPHBITS@@PEAU_GLYPHDATA@@PEAVRFONT@@@Z @ 0x1C007F6D4 (-ulClearTypeFilter_6x5@@YAKPEAU_GLYPHBITS@@PEAU_GLYPHDATA@@PEAVRFONT@@@Z.c)
 *     ?ulCallAndConvertFontOutput@@YAKPEAVRFONT@@PEAU_FONTOBJ@@KPEAU_GLYPHDATA@@PEAXK@Z @ 0x1C0080754 (-ulCallAndConvertFontOutput@@YAKPEAVRFONT@@PEAU_FONTOBJ@@KPEAU_GLYPHDATA@@PEAXK@Z.c)
 * Callees:
 *     ?SelectStorageTable@RFONTOBJ@@SAPEBEPEAVRFONT@@PEBE1@Z @ 0x1C007F598 (-SelectStorageTable@RFONTOBJ@@SAPEBEPEAVRFONT@@PEBE1@Z.c)
 */

__int64 __fastcall ulClearTypeFilter_6x1(struct _GLYPHBITS *a1, struct _GLYPHDATA *a2, struct RFONT *a3)
{
  __int64 cx; // rbx
  struct _GLYPHBITS *v4; // rbp
  LONG cy; // edi
  const unsigned __int8 *v6; // rax
  BYTE *aj; // r10
  int v8; // r14d
  BYTE *v9; // rdx
  const unsigned __int8 *v10; // r12
  LONG i; // r8d
  int v12; // ecx
  unsigned int v13; // eax
  int v14; // r13d
  int v15; // r14d
  unsigned int v16; // r9d
  __int64 v17; // rcx
  unsigned __int8 *v18; // rax
  BYTE *v19; // r15
  __int64 v20; // r8
  __int64 v21; // rcx
  BYTE *v22; // rbx
  unsigned __int8 *v23; // rsi
  unsigned __int8 v24; // di
  unsigned __int8 v25; // dl
  unsigned __int8 v26; // r11
  int v27; // r10d
  int v28; // ecx
  int v29; // r8d
  __int64 result; // rax
  __int64 v31; // [rsp+28h] [rbp-50h]
  int v32; // [rsp+30h] [rbp-48h]

  cx = (unsigned int)a1->sizlBitmap.cx;
  v4 = a1;
  cy = a1->sizlBitmap.cy;
  if ( __PAIR64__(cy, cx) != 0x100000001LL || a1->aj[0] )
  {
    v6 = RFONTOBJ::SelectStorageTable(a3, (const unsigned __int8 *)a2, (const unsigned __int8 *)a3);
    aj = v4->aj;
    v8 = 0;
    v9 = v4->aj;
    v10 = v6;
    for ( i = cy; i; --i )
    {
      v12 = v8 | 1;
      if ( (*v9 & 0x30) == 0 )
        v12 = v8;
      v8 = v12 | 2;
      if ( (v9[(unsigned int)(cx - 1)] & 3) == 0 )
        v8 = v12;
      if ( (v8 & 3) == 3 )
        break;
      v9 += cx;
    }
    v13 = cx + 1;
    v14 = v8 & 1;
    if ( (v8 & 1) == 0 )
      v13 = cx;
    v15 = v8 & 2;
    v16 = v13 + 1;
    if ( !v15 )
      v16 = v13;
    v17 = cy * v16;
    v18 = (unsigned __int8 *)&v4->sizlBitmap.cy + (unsigned int)(cx * cy) + 3;
    v32 = cy * v16;
    v19 = (BYTE *)&v4->sizlBitmap.cy + v17 + 3;
    if ( v19 > aj )
    {
      v20 = v16;
      v21 = cx;
      v31 = cx;
      do
      {
        v22 = v19;
        v23 = &v18[-v21];
        if ( v15 )
        {
          v22 = v19 - 1;
          *v19 = v10[81 * (*v18 & 3)];
        }
        v24 = *v18;
        v25 = 0;
        if ( v18 > v23 )
        {
          do
          {
            if ( v18 == v23 + 1 )
              v26 = 0;
            else
              v26 = *(v18 - 1);
            v27 = (v25 >> 4) & 3;
            v28 = v26 & 3;
            if ( (v26 & 3) != 0 || v24 || v27 )
            {
              v29 = (v24 & 3) + 3 * (((v24 >> 2) & 3) + 3 * (3 * v28 + ((v24 >> 4) & 3)));
              LOBYTE(v28) = v10[v27 + 2 * v29 + v29];
            }
            *v22 = v28;
            --v18;
            --v22;
            v25 = v24;
            v24 = v26;
          }
          while ( v18 > v23 );
          v20 = v16;
          aj = v4->aj;
        }
        if ( v14 )
          *v22 = v10[((unsigned __int64)v23[1] >> 4) & 3];
        v21 = v31;
        v19 -= v20;
        v18 = v23;
      }
      while ( v19 > aj );
      v4 = a1;
      LODWORD(v17) = v32;
    }
    v4->sizlBitmap.cx = v16;
    if ( v14 )
      --v4->ptlOrigin.x;
    return (((_DWORD)v17 + 3) & 0xFFFFFFFC) + 16;
  }
  else
  {
    result = 16LL;
    a1->sizlBitmap = 0LL;
  }
  return result;
}
