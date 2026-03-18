/*
 * XREFs of xxxAddFontResourceW @ 0x1C00B4934
 * Callers:
 *     ?xxxbEnumerateRegistryFontsInternal@@YAHPEAXK@Z @ 0x1C00B4984 (-xxxbEnumerateRegistryFontsInternal@@YAHPEAXK@Z.c)
 *     xxxLW_LoadFonts @ 0x1C00E8A00 (xxxLW_LoadFonts.c)
 * Callees:
 *     xxxClientAddFontResourceW @ 0x1C00B4708 (xxxClientAddFontResourceW.c)
 */

__int64 __fastcall xxxAddFontResourceW(PCWSTR SourceString, int a2, __int64 a3)
{
  struct _UNICODE_STRING v6; // [rsp+20h] [rbp-18h] BYREF

  *(_QWORD *)&v6.Length = 0LL;
  v6.Buffer = 0LL;
  RtlInitUnicodeString(&v6, SourceString);
  return xxxClientAddFontResourceW((char **)&v6, a2, a3);
}
