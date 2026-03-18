/*
 * XREFs of ?IsCHSBaseFont@@YAHPEBGI@Z @ 0x1C01658A8
 * Callers:
 *     ?bAddEntry@PFFMEMOBJ@@QEAAHKPEAU_FD_GLYPHSET@@_KPEAU_IFIMETRICS@@1PEAU_UNIVERSAL_FONT_ID@@PEAU_EUDCLOAD@@@Z @ 0x1C0047334 (-bAddEntry@PFFMEMOBJ@@QEAAHKPEAU_FD_GLYPHSET@@_KPEAU_IFIMETRICS@@1PEAU_UNIVERSAL_FONT_ID@@PEAU_E.c)
 * Callees:
 *     SearchInCHSBaseFontFileNameSuffixes @ 0x1C016594C (SearchInCHSBaseFontFileNameSuffixes.c)
 */

_BOOL8 __fastcall IsCHSBaseFont(const unsigned __int16 *a1, int a2)
{
  __int64 v2; // rax
  __int64 v3; // r8
  __int64 v4; // rax
  const UNICODE_STRING *v5; // rbx
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  if ( !gcwcFontsDirectory )
    return 0LL;
  v2 = gcwcFontsDirectory - 1;
  v3 = (unsigned int)v2;
  if ( a2 - (int)v2 < 8 )
    return 0LL;
  v4 = *(_QWORD *)&a1[v2];
  if ( v4 == gMSYHFontFileNamePrefix )
  {
    v5 = &gMSYHFontFileNameSuffixes;
  }
  else
  {
    if ( v4 != gSimsunFontFileNamePrefix )
      return 0LL;
    v5 = (const UNICODE_STRING *)&gSimSunFontFileNameSuffixes;
  }
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  RtlInitUnicodeString(&DestinationString, &a1[v3 + 4]);
  return (int)SearchInCHSBaseFontFileNameSuffixes(&DestinationString, v5) >= 0;
}
