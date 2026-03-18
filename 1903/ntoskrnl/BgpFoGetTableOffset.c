/*
 * XREFs of BgpFoGetTableOffset @ 0x140A41B68
 * Callers:
 *     FopInitializeFonts @ 0x140A405F4 (FopInitializeFonts.c)
 *     FopValidateFontNameTable @ 0x140A408F4 (FopValidateFontNameTable.c)
 * Callees:
 *     FopGetTableOffsetAndSize @ 0x140A40F60 (FopGetTableOffsetAndSize.c)
 */

__int64 __fastcall BgpFoGetTableOffset(__int64 a1, unsigned int a2, int a3, unsigned __int32 *a4)
{
  unsigned __int32 v5[6]; // [rsp+30h] [rbp-18h] BYREF

  return FopGetTableOffsetAndSize(a1, a2, a3, a4, v5);
}
