/*
 * XREFs of xInsertGlyphbitsRFONTOBJ @ 0x1C0081018
 * Callers:
 *     ?bInsertGlyphbits@RFONTOBJ@@QEAAHPEAU_GLYPHDATA@@K@Z @ 0x1C0080FC8 (-bInsertGlyphbits@RFONTOBJ@@QEAAHPEAU_GLYPHDATA@@K@Z.c)
 * Callees:
 *     ?QueryFontData@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z @ 0x1C0083BC8 (-QueryFontData@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z.c)
 *     ?pgbCheckGlyphCache@RFONTOBJ@@QEAAPEAX_K@Z @ 0x1C014874C (-pgbCheckGlyphCache@RFONTOBJ@@QEAAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ?QueryGlyphMetricsPlusBits@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAPEAU_GLYPHDATA@@PEAPEAU_GLYPHBITS@@@Z @ 0x1C0162AC4 (-QueryGlyphMetricsPlusBits@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAPEAU_GLYPHDATA@@PEAPEAU.c)
 *     ?bInsertGlyphbitsPath@RFONTOBJ@@QEAAHPEAU_GLYPHDATA@@K@Z @ 0x1C02B8290 (-bInsertGlyphbitsPath@RFONTOBJ@@QEAAHPEAU_GLYPHDATA@@K@Z.c)
 *     ?vFlushCache@RFONTOBJ@@QEAAXXZ @ 0x1C02B8514 (-vFlushCache@RFONTOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall xInsertGlyphbitsRFONTOBJ(RFONTOBJ *this, struct _GLYPHDATA *a2, unsigned int a3)
{
  __int64 v3; // rdi
  unsigned int v4; // r15d
  int v7; // eax
  unsigned int v8; // ebx
  unsigned __int64 v10; // r12
  unsigned __int64 v11; // rdx
  void *v12; // rax
  GLYPHDEF v13; // rbp
  unsigned int v14; // eax
  unsigned int v15; // eax
  struct _GLYPHBITS *v16; // [rsp+40h] [rbp-A8h] BYREF
  _QWORD v17[3]; // [rsp+48h] [rbp-A0h] BYREF
  struct _GLYPHDATA v18; // [rsp+60h] [rbp-88h] BYREF

  v3 = *(_QWORD *)this;
  v4 = a3;
  if ( (*(_DWORD *)(*(_QWORD *)this + 84LL) & 1) == 0 )
  {
    v7 = *(_DWORD *)(v3 + 88);
    v8 = 0;
    if ( v7 )
    {
      if ( v7 == 2 )
        return RFONTOBJ::bInsertGlyphbitsPath(this, a2, a3);
      v17[0] = *(_QWORD *)(v3 + 128);
      if ( *(struct PDEV **)(v17[0] + 88LL) == qword_1C031DE98 )
      {
        v16 = 0LL;
        v15 = *(_DWORD *)(v3 + 636);
        *(_DWORD *)(v3 + 644) = a3 & 1 | 4;
        if ( (unsigned int)PFFOBJ::QueryGlyphMetricsPlusBits(
                             (PFFOBJ *)v17,
                             *(struct DHPDEV__ **)(*(_QWORD *)this + 112LL),
                             *(struct _FONTOBJ **)this,
                             a2->hg,
                             v15,
                             0LL,
                             &v16) == -1 )
          return v8;
        a2->gdf.pgb = v16;
      }
      else
      {
        v10 = *(unsigned int *)(v3 + 632);
        if ( v10 > *(_QWORD *)(v3 + 592) - *(_QWORD *)(v3 + 584) )
        {
          LODWORD(v10) = PFFOBJ::QueryFontData(
                           (PFFOBJ *)v17,
                           *(struct DHPDEV__ **)(v3 + 112),
                           (struct _FONTOBJ *)v3,
                           1u,
                           a2->hg,
                           &v18,
                           0LL,
                           0);
          if ( (_DWORD)v10 == -1 )
            return v8;
        }
        v11 = (unsigned int)v10;
        while ( 1 )
        {
          v12 = RFONTOBJ::pgbCheckGlyphCache(this, v11);
          v13.pgb = (GLYPHBITS *)v12;
          if ( v12 )
            break;
          if ( !v4 )
            return v8;
          RFONTOBJ::vFlushCache(this);
          v11 = (unsigned int)v10;
          v4 = 0;
        }
        v14 = PFFOBJ::QueryFontData(
                (PFFOBJ *)v17,
                *(struct DHPDEV__ **)(*(_QWORD *)this + 112LL),
                *(struct _FONTOBJ **)this,
                1u,
                a2->hg,
                &v18,
                v12,
                v10);
        if ( v14 == -1 )
          return v8;
        a2->gdf = v13;
        *(_QWORD *)(v3 + 584) += v14;
      }
      return 1;
    }
  }
  return 0LL;
}
