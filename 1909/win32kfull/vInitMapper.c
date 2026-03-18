/*
 * XREFs of vInitMapper @ 0x1C0380DB0
 * Callers:
 *     <none>
 * Callees:
 *     InitializeDefaultFamilyFonts @ 0x1C038095C (InitializeDefaultFamilyFonts.c)
 *     InitializeFontSignatures @ 0x1C0380DCC (InitializeFontSignatures.c)
 */

int vInitMapper()
{
  InitializeFontSignatures();
  return InitializeDefaultFamilyFonts();
}
