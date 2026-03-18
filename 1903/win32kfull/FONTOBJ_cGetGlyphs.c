/*
 * XREFs of FONTOBJ_cGetGlyphs @ 0x1C028D9F0
 * Callers:
 *     NtGdiFONTOBJ_cGetGlyphs @ 0x1C02AD160 (NtGdiFONTOBJ_cGetGlyphs.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0052D74 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?bInsertGlyphbitsLookaside@RFONTOBJ@@QEAAHPEAU_GLYPHPOS@@K@Z @ 0x1C02CDC8C (-bInsertGlyphbitsLookaside@RFONTOBJ@@QEAAHPEAU_GLYPHPOS@@K@Z.c)
 */

ULONG __stdcall FONTOBJ_cGetGlyphs(FONTOBJ *pfo, ULONG iMode, ULONG cGlyph, HGLYPH *phg, PVOID *ppvGlyph)
{
  ULONG result; // eax
  HGLYPH v6; // eax
  ULONG v7; // ebx
  struct _GLYPHPOS v8; // [rsp+20h] [rbp-28h] BYREF
  FONTOBJ *v9; // [rsp+68h] [rbp+20h] BYREF

  result = 0;
  memset(&v8, 0, sizeof(v8));
  if ( phg )
  {
    v6 = *phg;
    v9 = pfo;
    v8.hg = v6;
    if ( (unsigned int)RFONTOBJ::bInsertGlyphbitsLookaside((RFONTOBJ *)&v9, &v8, iMode) )
    {
      v7 = 1;
      *ppvGlyph = v8.pgdf;
    }
    else
    {
      v7 = 0;
    }
    v9 = 0LL;
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v9);
    return v7;
  }
  return result;
}
