/*
 * XREFs of towlower @ 0x140197580
 * Callers:
 *     EtwpCovSampCheckForSegments @ 0x1408C4654 (EtwpCovSampCheckForSegments.c)
 *     ExpParseArcPathName @ 0x1408D1048 (ExpParseArcPathName.c)
 *     ExpTranslateBootEntryNameToId @ 0x1408D2630 (ExpTranslateBootEntryNameToId.c)
 *     ExpTranslateDriverEntryNameToId @ 0x1408D270C (ExpTranslateDriverEntryNameToId.c)
 *     ExpTranslateHexStringToGUID @ 0x1408D2BA4 (ExpTranslateHexStringToGUID.c)
 *     ExpTranslateHexStringToULONG @ 0x1408D2D2C (ExpTranslateHexStringToULONG.c)
 *     ExpTranslateHexStringToULONGLONG @ 0x1408D2DD0 (ExpTranslateHexStringToULONGLONG.c)
 * Callees:
 *     iswctype @ 0x1401983E8 (iswctype.c)
 */

wint_t __cdecl towlower(wint_t C)
{
  wint_t v1; // bx

  v1 = C;
  if ( iswctype(C, 1u) )
    v1 += 32;
  return v1;
}
