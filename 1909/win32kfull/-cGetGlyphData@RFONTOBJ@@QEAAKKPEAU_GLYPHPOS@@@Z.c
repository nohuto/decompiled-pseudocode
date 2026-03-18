/*
 * XREFs of ?cGetGlyphData@RFONTOBJ@@QEAAKKPEAU_GLYPHPOS@@@Z @ 0x1C02A0444
 * Callers:
 *     ?bExtraRectsToPath@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z @ 0x1C02B5D80 (-bExtraRectsToPath@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z.c)
 * Callees:
 *     ?cGetGlyphDataCache@RFONTOBJ@@QEAAKKPEAU_GLYPHPOS@@@Z @ 0x1C00A09E0 (-cGetGlyphDataCache@RFONTOBJ@@QEAAKKPEAU_GLYPHPOS@@@Z.c)
 *     ?bInsertGlyphbitsLookaside@RFONTOBJ@@QEAAHPEAU_GLYPHPOS@@K@Z @ 0x1C02CD7DC (-bInsertGlyphbitsLookaside@RFONTOBJ@@QEAAHPEAU_GLYPHPOS@@K@Z.c)
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
