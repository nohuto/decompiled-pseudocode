/*
 * XREFs of vInitMapper @ 0x1C0382250
 * Callers:
 *     <none>
 * Callees:
 *     InitializeDefaultFamilyFonts @ 0x1C03827C4 (InitializeDefaultFamilyFonts.c)
 *     InitializeFontSignatures @ 0x1C0382C04 (InitializeFontSignatures.c)
 */

__int64 vInitMapper()
{
  InitializeFontSignatures();
  return InitializeDefaultFamilyFonts();
}
