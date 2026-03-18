/*
 * XREFs of ?DestroyAllDPIMETRICSFonts@@YAXPEAUtagDPIMETRICS@@@Z @ 0x1C00B72E0
 * Callers:
 *     CleanupGDI @ 0x1C00B6D00 (CleanupGDI.c)
 * Callees:
 *     ?DestroyFont@@YAXPEAPEAUHFONT__@@@Z @ 0x1C00B7050 (-DestroyFont@@YAXPEAPEAUHFONT__@@@Z.c)
 */

void __fastcall DestroyAllDPIMETRICSFonts(HPALETTE *a1)
{
  DestroyFont(a1 + 4);
  DestroyFont(a1);
  DestroyFont(a1 + 6);
  DestroyFont(a1 + 7);
  DestroyFont(a1 + 8);
}
