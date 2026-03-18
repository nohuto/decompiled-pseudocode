/*
 * XREFs of towlower @ 0x1401A1D80
 * Callers:
 *     EtwpCovSampCheckForSegments @ 0x1409018A4 (EtwpCovSampCheckForSegments.c)
 *     ExpParseArcPathName @ 0x14090E898 (ExpParseArcPathName.c)
 *     ExpTranslateBootEntryNameToId @ 0x14090FEA4 (ExpTranslateBootEntryNameToId.c)
 *     ExpTranslateDriverEntryNameToId @ 0x14090FF80 (ExpTranslateDriverEntryNameToId.c)
 *     ExpTranslateHexStringToGUID @ 0x140910424 (ExpTranslateHexStringToGUID.c)
 *     ExpTranslateHexStringToULONG @ 0x1409105AC (ExpTranslateHexStringToULONG.c)
 *     ExpTranslateHexStringToULONGLONG @ 0x140910650 (ExpTranslateHexStringToULONGLONG.c)
 * Callees:
 *     iswctype @ 0x1401A2C38 (iswctype.c)
 */

wint_t __cdecl towlower(wint_t C)
{
  wint_t v1; // bx

  v1 = C;
  if ( iswctype(C, 1u) )
    v1 += 32;
  return v1;
}
