/*
 * XREFs of towlower @ 0x1401976C0
 * Callers:
 *     EtwpCovSampCheckForSegments @ 0x1408C5914 (EtwpCovSampCheckForSegments.c)
 *     ExpParseArcPathName @ 0x1408D2308 (ExpParseArcPathName.c)
 *     ExpTranslateBootEntryNameToId @ 0x1408D38F0 (ExpTranslateBootEntryNameToId.c)
 *     ExpTranslateDriverEntryNameToId @ 0x1408D39CC (ExpTranslateDriverEntryNameToId.c)
 *     ExpTranslateHexStringToGUID @ 0x1408D3E64 (ExpTranslateHexStringToGUID.c)
 *     ExpTranslateHexStringToULONG @ 0x1408D3FEC (ExpTranslateHexStringToULONG.c)
 *     ExpTranslateHexStringToULONGLONG @ 0x1408D4090 (ExpTranslateHexStringToULONGLONG.c)
 * Callees:
 *     iswctype @ 0x140198528 (iswctype.c)
 */

wint_t __cdecl towlower(wint_t C)
{
  wint_t v1; // bx

  v1 = C;
  if ( iswctype(C, 1u) )
    v1 += 32;
  return v1;
}
