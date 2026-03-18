/*
 * XREFs of ?IsCHSBaseFont@@YAHPEBGIPEAJ@Z @ 0x1C013CE18
 * Callers:
 *     ?bAddEntry@PFFMEMOBJ@@QEAAHKPEAU_FD_GLYPHSET@@_KPEAU_IFIMETRICS@@1PEAU_UNIVERSAL_FONT_ID@@PEAU_EUDCLOAD@@@Z @ 0x1C00C6898 (-bAddEntry@PFFMEMOBJ@@QEAAHKPEAU_FD_GLYPHSET@@_KPEAU_IFIMETRICS@@1PEAU_UNIVERSAL_FONT_ID@@PEAU_E.c)
 * Callees:
 *     SearchInCHSBaseFontFileNameSuffixes @ 0x1C013CED0 (SearchInCHSBaseFontFileNameSuffixes.c)
 */

__int64 __fastcall IsCHSBaseFont(const unsigned __int16 *a1, int a2, int *a3)
{
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  const UNICODE_STRING *v8; // rdi
  int v9; // ebx
  int v10; // eax
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  if ( !gcwcFontsDirectory )
    return 0LL;
  v5 = gcwcFontsDirectory - 1;
  v6 = (unsigned int)v5;
  if ( a2 - (int)v5 < 8 )
    return 0LL;
  v7 = *(_QWORD *)&a1[v5];
  if ( v7 == gMSYHFontFileNamePrefix )
  {
    v8 = &gMSYHFontFileNameSuffixes;
    v9 = 0;
  }
  else
  {
    if ( v7 != gSimsunFontFileNamePrefix )
      return 0LL;
    v8 = (const UNICODE_STRING *)&gSimSunFontFileNameSuffixes;
    v9 = 3;
  }
  RtlInitUnicodeString(&DestinationString, &a1[v6 + 4]);
  v10 = SearchInCHSBaseFontFileNameSuffixes(&DestinationString, v8);
  if ( v10 >= 0 )
  {
    *a3 = v9 + v10;
    return 1LL;
  }
  return 0LL;
}
