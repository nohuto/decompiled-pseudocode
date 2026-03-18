/*
 * XREFs of RtlGetEnabledExtendedFeatures @ 0x140181FF0
 * Callers:
 *     SymCryptInitEnvWindowsKernelmodeWin8_1nLater @ 0x1401BAA4C (SymCryptInitEnvWindowsKernelmodeWin8_1nLater.c)
 *     sub_1409D1EB4 @ 0x1409D1EB4 (sub_1409D1EB4.c)
 * Callees:
 *     <none>
 */

ULONG64 __stdcall RtlGetEnabledExtendedFeatures(ULONG64 FeatureMask)
{
  return FeatureMask & (MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF78000000708]);
}
