/*
 * XREFs of xInsertGlyphbitsRFONTOBJ @ 0x1C007FDB4
 * Callers:
 *     ?bInsertGlyphbits@RFONTOBJ@@QEAAHPEAU_GLYPHDATA@@K@Z @ 0x1C0084368 (-bInsertGlyphbits@RFONTOBJ@@QEAAHPEAU_GLYPHDATA@@K@Z.c)
 * Callees:
 *     ?ulCallAndConvertFontOutput@@YAKPEAVRFONT@@PEAU_FONTOBJ@@KPEAU_GLYPHDATA@@PEAXK@Z @ 0x1C0080754 (-ulCallAndConvertFontOutput@@YAKPEAVRFONT@@PEAU_FONTOBJ@@KPEAU_GLYPHDATA@@PEAXK@Z.c)
 *     ?pgbCheckGlyphCache@RFONTOBJ@@QEAAPEAX_K@Z @ 0x1C00843B8 (-pgbCheckGlyphCache@RFONTOBJ@@QEAAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     ?bInsertGlyphbitsPath@RFONTOBJ@@QEAAHPEAU_GLYPHDATA@@K@Z @ 0x1C02A612C (-bInsertGlyphbitsPath@RFONTOBJ@@QEAAHPEAU_GLYPHDATA@@K@Z.c)
 *     ?vFlushCache@RFONTOBJ@@QEAAXXZ @ 0x1C02A63E8 (-vFlushCache@RFONTOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall xInsertGlyphbitsRFONTOBJ(RFONTOBJ *this, struct _GLYPHDATA *a2, unsigned int a3)
{
  __int64 v3; // rbx
  unsigned int v4; // r15d
  int v7; // eax
  unsigned __int64 v8; // rbp
  void *v9; // rax
  GLYPHDEF v10; // rsi
  unsigned int v11; // eax
  __int64 v12; // rcx
  __int64 result; // rax
  struct _GLYPHDATA v14; // [rsp+30h] [rbp-78h] BYREF

  v3 = *(_QWORD *)this;
  v4 = a3;
  if ( (*(_DWORD *)(*(_QWORD *)this + 68LL) & 1) != 0 )
    return 0LL;
  v7 = *(_DWORD *)(v3 + 72);
  if ( !v7 )
    return 0LL;
  if ( v7 != 2 )
  {
    v8 = *(unsigned int *)(v3 + 624);
    if ( v8 < *(_QWORD *)(v3 + 584) - *(_QWORD *)(v3 + 576)
      || (LODWORD(v8) = ulCallAndConvertFontOutput((struct RFONT *)v3, (struct _FONTOBJ *)v3, a2->hg, &v14, 0LL, 0),
          (_DWORD)v8 != -1) )
    {
      while ( 1 )
      {
        v9 = RFONTOBJ::pgbCheckGlyphCache(this, (unsigned int)v8);
        v10.pgb = (GLYPHBITS *)v9;
        if ( v9 )
          break;
        if ( !v4 )
          return 0LL;
        RFONTOBJ::vFlushCache(this);
        v4 = 0;
      }
      v11 = ulCallAndConvertFontOutput(*(struct RFONT **)this, *(struct _FONTOBJ **)this, a2->hg, &v14, v9, v8);
      if ( v11 != -1 )
      {
        v12 = v11;
        result = 1LL;
        a2->gdf = v10;
        *(_QWORD *)(v3 + 576) += v12;
        return result;
      }
    }
    return 0LL;
  }
  return RFONTOBJ::bInsertGlyphbitsPath(this, a2, a3);
}
