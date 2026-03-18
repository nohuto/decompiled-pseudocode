/*
 * XREFs of vInitMapper @ 0x1C036D200
 * Callers:
 *     <none>
 * Callees:
 *     InitializeDefaultFamilyFonts @ 0x1C036D780 (InitializeDefaultFamilyFonts.c)
 *     InitializeFontSignatures @ 0x1C036DBA8 (InitializeFontSignatures.c)
 */

__int64 vInitMapper()
{
  InitializeFontSignatures();
  return InitializeDefaultFamilyFonts();
}
