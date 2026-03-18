/*
 * XREFs of xxxAddFontResourceW @ 0x1C004F254
 * Callers:
 *     xxxLW_LoadFonts @ 0x1C004EBF0 (xxxLW_LoadFonts.c)
 *     ?xxxbEnumerateRegistryFontsInternal@@YAHPEAXK@Z @ 0x1C004F0E0 (-xxxbEnumerateRegistryFontsInternal@@YAHPEAXK@Z.c)
 * Callees:
 *     xxxClientAddFontResourceW @ 0x1C004F294 (xxxClientAddFontResourceW.c)
 */

__int64 __fastcall xxxAddFontResourceW(PCWSTR SourceString, unsigned int a2, __int64 a3)
{
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  RtlInitUnicodeString(&DestinationString, SourceString);
  return xxxClientAddFontResourceW(&DestinationString, a2, a3);
}
