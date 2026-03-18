/*
 * XREFs of BgpFoGetTableOffset @ 0x140A41938
 * Callers:
 *     FopInitializeFonts @ 0x140A403C4 (FopInitializeFonts.c)
 *     FopValidateFontNameTable @ 0x140A406C4 (FopValidateFontNameTable.c)
 * Callees:
 *     FopGetTableOffsetAndSize @ 0x140A40D30 (FopGetTableOffsetAndSize.c)
 */

__int64 __fastcall BgpFoGetTableOffset(__int64 a1, unsigned int a2, int a3, unsigned __int32 *a4)
{
  unsigned __int32 v5[6]; // [rsp+30h] [rbp-18h] BYREF

  return FopGetTableOffsetAndSize(a1, a2, a3, a4, v5);
}
