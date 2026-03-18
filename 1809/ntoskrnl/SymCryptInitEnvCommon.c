/*
 * XREFs of SymCryptInitEnvCommon @ 0x1401B25BC
 * Callers:
 *     SymCryptInitEnvWindowsKernelmodeWin8_1nLater @ 0x1401AF1E8 (SymCryptInitEnvWindowsKernelmodeWin8_1nLater.c)
 * Callees:
 *     <none>
 */

__int64 SymCryptInitEnvCommon()
{
  __int64 result; // rax

  _InterlockedOr(&g_SymCryptFlags, 1u);
  result = (unsigned int)~g_SymCryptCpuFeaturesNotPresent;
  g_SymCryptCpuFeaturesPresentCheck = ~g_SymCryptCpuFeaturesNotPresent;
  return result;
}
