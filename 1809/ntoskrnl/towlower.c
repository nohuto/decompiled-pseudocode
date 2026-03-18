/*
 * XREFs of towlower @ 0x140197560
 * Callers:
 *     EtwpCovSampCheckForSegments @ 0x1408C4674 (EtwpCovSampCheckForSegments.c)
 *     ExpParseArcPathName @ 0x1408D1068 (ExpParseArcPathName.c)
 *     ExpTranslateBootEntryNameToId @ 0x1408D2650 (ExpTranslateBootEntryNameToId.c)
 *     ExpTranslateDriverEntryNameToId @ 0x1408D272C (ExpTranslateDriverEntryNameToId.c)
 *     ExpTranslateHexStringToGUID @ 0x1408D2BC4 (ExpTranslateHexStringToGUID.c)
 *     ExpTranslateHexStringToULONG @ 0x1408D2D4C (ExpTranslateHexStringToULONG.c)
 *     ExpTranslateHexStringToULONGLONG @ 0x1408D2DF0 (ExpTranslateHexStringToULONGLONG.c)
 * Callees:
 *     iswctype @ 0x1401983C8 (iswctype.c)
 */

wint_t __cdecl towlower(wint_t C)
{
  wint_t v1; // bx

  v1 = C;
  if ( iswctype(C, 1u) )
    v1 += 32;
  return v1;
}
