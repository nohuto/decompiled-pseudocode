/*
 * XREFs of ?cGetGlyphData@RFONTOBJ@@QEAAKKPEAU_GLYPHPOS@@@Z @ 0x1C02A09F4
 * Callers:
 *     ?bExtraRectsToPath@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z @ 0x1C02B6230 (-bExtraRectsToPath@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z.c)
 * Callees:
 *     ?cGetGlyphDataCache@RFONTOBJ@@QEAAKKPEAU_GLYPHPOS@@@Z @ 0x1C0057150 (-cGetGlyphDataCache@RFONTOBJ@@QEAAKKPEAU_GLYPHPOS@@@Z.c)
 *     ?bInsertGlyphbitsLookaside@RFONTOBJ@@QEAAHPEAU_GLYPHPOS@@K@Z @ 0x1C02CDC8C (-bInsertGlyphbitsLookaside@RFONTOBJ@@QEAAHPEAU_GLYPHPOS@@K@Z.c)
 */

__int64 __fastcall RFONTOBJ::cGetGlyphData(RFONTOBJ *this, unsigned int a2, struct _GLYPHPOS *a3)
{
  unsigned int v3; // ebx

  if ( (*(_DWORD *)(*(_QWORD *)this + 84LL) & 1) == 0 )
    return RFONTOBJ::cGetGlyphDataCache(this, a2, a3);
  v3 = 0;
  if ( a2 )
    LOBYTE(v3) = (unsigned int)RFONTOBJ::bInsertGlyphbitsLookaside(this, a3, *(_DWORD *)(*(_QWORD *)this + 88LL)) != 0;
  return v3;
}
