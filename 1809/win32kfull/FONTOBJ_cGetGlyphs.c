/*
 * XREFs of FONTOBJ_cGetGlyphs @ 0x1C0277960
 * Callers:
 *     NtGdiFONTOBJ_cGetGlyphs @ 0x1C0298150 (NtGdiFONTOBJ_cGetGlyphs.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C008471C (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?bInsertGlyphbitsLookaside@RFONTOBJ@@QEAAHPEAU_GLYPHPOS@@K@Z @ 0x1C02B80EC (-bInsertGlyphbitsLookaside@RFONTOBJ@@QEAAHPEAU_GLYPHPOS@@K@Z.c)
 */

ULONG __stdcall FONTOBJ_cGetGlyphs(FONTOBJ *pfo, ULONG iMode, ULONG cGlyph, HGLYPH *phg, PVOID *ppvGlyph)
{
  HGLYPH v5; // eax
  ULONG v6; // ebx
  FONTOBJ *v8; // [rsp+20h] [rbp-38h] BYREF
  int v9; // [rsp+28h] [rbp-30h]
  struct _GLYPHPOS v10; // [rsp+30h] [rbp-28h] BYREF

  if ( !phg )
    return 0;
  v5 = *phg;
  v9 = 0;
  v8 = pfo;
  v10.hg = v5;
  if ( (unsigned int)RFONTOBJ::bInsertGlyphbitsLookaside((RFONTOBJ *)&v8, &v10, iMode) )
  {
    v6 = 1;
    *ppvGlyph = v10.pgdf;
  }
  else
  {
    v6 = 0;
  }
  v8 = 0LL;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v8);
  return v6;
}
