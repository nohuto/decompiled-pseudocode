/*
 * XREFs of vInitMapper @ 0x1C037E0A0
 * Callers:
 *     <none>
 * Callees:
 *     InitializeDefaultFamilyFonts @ 0x1C037E5FC (InitializeDefaultFamilyFonts.c)
 *     InitializeFontSignatures @ 0x1C037EA0C (InitializeFontSignatures.c)
 */

__int64 vInitMapper()
{
  InitializeFontSignatures();
  return InitializeDefaultFamilyFonts();
}
