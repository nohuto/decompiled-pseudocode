/*
 * XREFs of towlower @ 0x1401A24A0
 * Callers:
 *     EtwpCovSampCheckForSegments @ 0x140901204 (EtwpCovSampCheckForSegments.c)
 *     ExpParseArcPathName @ 0x14090E2F8 (ExpParseArcPathName.c)
 *     ExpTranslateBootEntryNameToId @ 0x14090F904 (ExpTranslateBootEntryNameToId.c)
 *     ExpTranslateDriverEntryNameToId @ 0x14090F9E0 (ExpTranslateDriverEntryNameToId.c)
 *     ExpTranslateHexStringToGUID @ 0x14090FE84 (ExpTranslateHexStringToGUID.c)
 *     ExpTranslateHexStringToULONG @ 0x14091000C (ExpTranslateHexStringToULONG.c)
 *     ExpTranslateHexStringToULONGLONG @ 0x1409100B0 (ExpTranslateHexStringToULONGLONG.c)
 * Callees:
 *     iswctype @ 0x1401A3358 (iswctype.c)
 */

wint_t __cdecl towlower(wint_t C)
{
  wint_t v1; // bx

  v1 = C;
  if ( iswctype(C, 1u) )
    v1 += 32;
  return v1;
}
