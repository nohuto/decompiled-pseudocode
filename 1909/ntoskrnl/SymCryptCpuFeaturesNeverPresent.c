/*
 * XREFs of SymCryptCpuFeaturesNeverPresent @ 0x14013C96C
 * Callers:
 *     SymCryptSaveYmmEnvWindowsKernelmodeWin8_1nLater @ 0x1401BAB18 (SymCryptSaveYmmEnvWindowsKernelmodeWin8_1nLater.c)
 *     SymCryptSha256AppendBlocks @ 0x1401BACB0 (SymCryptSha256AppendBlocks.c)
 *     SymCryptParallelSha256Process @ 0x1401BDAF4 (SymCryptParallelSha256Process.c)
 * Callees:
 *     PsGetHostSilo @ 0x140015DF0 (PsGetHostSilo.c)
 */

__int64 SymCryptCpuFeaturesNeverPresent()
{
  return PsGetHostSilo();
}
