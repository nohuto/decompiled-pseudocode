/*
 * XREFs of ?DestroyAllDPIMETRICSFonts@@YAXPEAUtagDPIMETRICS@@@Z @ 0x1C009285C
 * Callers:
 *     CleanupGDI @ 0x1C00423AC (CleanupGDI.c)
 * Callees:
 *     ?DestroyFont@@YAXPEAPEAUHFONT__@@@Z @ 0x1C0042700 (-DestroyFont@@YAXPEAPEAUHFONT__@@@Z.c)
 */

void __fastcall DestroyAllDPIMETRICSFonts(HRGN *a1)
{
  DestroyFont(a1 + 4);
  DestroyFont(a1);
  DestroyFont(a1 + 6);
  DestroyFont(a1 + 7);
  DestroyFont(a1 + 8);
}
