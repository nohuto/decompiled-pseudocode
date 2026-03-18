/*
 * XREFs of ??0CFixPred@Prediction@@QEAA@XZ @ 0x1C0142F30
 * Callers:
 *     ?FindLinkedGlyphDataPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@GKKPEAHHH@Z @ 0x1C00FA5E4 (-FindLinkedGlyphDataPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@GKKPEAHHH@Z.c)
 *     NtGdiGetFontFileInfo @ 0x1C010C020 (NtGdiGetFontFileInfo.c)
 *     NtGdiGetFontFileData @ 0x1C02B3F50 (NtGdiGetFontFileData.c)
 *     ?bExtraRectsToPath@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z @ 0x1C02B5D80 (-bExtraRectsToPath@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z.c)
 * Callees:
 *     <none>
 */

Prediction::CFixPred *__fastcall Prediction::CFixPred::CFixPred(Prediction::CFixPred *this)
{
  *(_QWORD *)this = 0LL;
  return this;
}
