/*
 * XREFs of SymCryptCpuFeaturesNeverPresent @ 0x14013A78C
 * Callers:
 *     SymCryptSaveYmmEnvWindowsKernelmodeWin8_1nLater @ 0x1401AF2C4 (SymCryptSaveYmmEnvWindowsKernelmodeWin8_1nLater.c)
 *     SymCryptSha256AppendBlocks @ 0x1401AF450 (SymCryptSha256AppendBlocks.c)
 *     SymCryptParallelSha256Process @ 0x1401B21D8 (SymCryptParallelSha256Process.c)
 * Callees:
 *     PsGetHostSilo @ 0x140091C70 (PsGetHostSilo.c)
 */

__int64 SymCryptCpuFeaturesNeverPresent()
{
  return PsGetHostSilo();
}
