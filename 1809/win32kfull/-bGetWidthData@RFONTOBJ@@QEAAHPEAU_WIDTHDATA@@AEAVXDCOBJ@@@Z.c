/*
 * XREFs of ?bGetWidthData@RFONTOBJ@@QEAAHPEAU_WIDTHDATA@@AEAVXDCOBJ@@@Z @ 0x1C00848F4
 * Callers:
 *     NtGdiGetWidthTable @ 0x1C00827A0 (NtGdiGetWidthTable.c)
 * Callees:
 *     ?bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C0083C88 (-bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 *     ?lOverhang@RFONTOBJ@@QEAAJXZ @ 0x1C0085324 (-lOverhang@RFONTOBJ@@QEAAJXZ.c)
 *     ?pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ @ 0x1C00C51A0 (-pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ.c)
 */

__int64 __fastcall RFONTOBJ::bGetWidthData(RFONTOBJ *this, struct _WIDTHDATA *a2, struct XDCOBJ *a3)
{
  unsigned int v3; // ebx
  __int64 v7; // rsi
  int v8; // r9d
  __int64 v9; // rax
  int v10; // r12d
  int v11; // r13d
  __int64 v12; // r8
  char v13; // dl
  BOOL v14; // eax
  __int16 fxD; // cx
  _BYTE *v16; // rdx
  __int64 v18; // rbp
  int v19; // r15d
  struct _GLYPHDATA *v20; // rax
  struct _GLYPHPOS v21; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int16 v22; // [rsp+90h] [rbp+8h] BYREF
  int v23; // [rsp+A8h] [rbp+20h]

  v3 = 0;
  LODWORD(v7) = 0;
  v8 = *(_DWORD *)(*(_QWORD *)this + 468LL);
  v9 = *(_QWORD *)(*(_QWORD *)this + 120LL);
  v10 = 16 * *(_DWORD *)(*(_QWORD *)this + 356LL);
  v11 = 16 * *(_DWORD *)(*(_QWORD *)this + 312LL);
  v23 = v8;
  v12 = *(_QWORD *)(v9 + 32);
  v13 = *(_BYTE *)(v12 + 44);
  v14 = v13 == (char)0x80 || v13 == -127 || v13 == -120 || *(_BYTE *)(v12 + 44) == 0x86;
  fxD = 0;
  if ( v14 )
  {
    if ( (*(_DWORD *)(v12 + 48) & 0x10000000) != 0 )
    {
      v22 = 12288;
      while ( (unsigned int)RFONTOBJ::bGetGlyphMetrics(this, (struct RFONTOBJ *)1, &v21, &v22, a3, 0LL)
           && v21.hg != *(_DWORD *)(*(_QWORD *)this + 460LL) )
      {
        v7 = (unsigned int)(v7 + 1);
        v22 = word_1C02DE400[v7];
        if ( !v22 )
        {
          LODWORD(v18) = 0;
          v19 = WORD2(v21.pgdf[1].ppo);
          v22 = 12450;
          while ( (unsigned int)RFONTOBJ::bGetGlyphMetrics(this, (struct RFONTOBJ *)1, &v21, &v22, 0LL, 0LL) )
          {
            LODWORD(v7) = WORD2(v21.pgdf[1].ppo);
            if ( (int)v7 <= v19 )
              LODWORD(v7) = v19;
            v18 = (unsigned int)(v18 + 1);
            v19 = v7;
            v22 = word_1C02DE3F0[v18];
            if ( !v22 )
            {
              v20 = RFONTOBJ::pgdDefault(this);
              v8 = v23;
              fxD = v20->fxD;
              goto LABEL_6;
            }
          }
          return v3;
        }
      }
    }
  }
  else
  {
LABEL_6:
    if ( ((v10 | v11 | v8 | (unsigned int)v7) & 0xFFFF0000) == 0 )
    {
      *((_WORD *)a2 + 7) = fxD;
      *((_WORD *)a2 + 1) = v10;
      *((_WORD *)a2 + 2) = v11;
      *((_WORD *)a2 + 3) = v8;
      *((_WORD *)a2 + 6) = v7;
      v3 = 1;
      *(_WORD *)a2 = 16 * RFONTOBJ::lOverhang(this);
      v16 = *(_BYTE **)(*(_QWORD *)(*(_QWORD *)this + 120LL) + 32LL);
      *((_BYTE *)a2 + 8) = v16[108];
      *((_BYTE *)a2 + 9) = v16[109];
      *((_BYTE *)a2 + 11) = v16[110];
      *((_BYTE *)a2 + 10) = v16[111];
    }
  }
  return v3;
}
