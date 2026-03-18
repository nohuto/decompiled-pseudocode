/*
 * XREFs of ?DestroyFont@@YAXPEAPEAUHFONT__@@@Z @ 0x1C00B7050
 * Callers:
 *     CleanupGDI @ 0x1C00B6D00 (CleanupGDI.c)
 *     ?DestroyAllDPIMETRICSFonts@@YAXPEAUtagDPIMETRICS@@@Z @ 0x1C00B72E0 (-DestroyAllDPIMETRICSFonts@@YAXPEAUtagDPIMETRICS@@@Z.c)
 * Callees:
 *     GreDeleteObject @ 0x1C0016C60 (GreDeleteObject.c)
 */

void __fastcall DestroyFont(HPALETTE *a1)
{
  HPALETTE v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    GreDeleteObject(v2);
    *a1 = 0LL;
  }
}
