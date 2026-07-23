/*
 * XREFs of SymCryptCpuFeaturesNeverPresent @ 0x14013A88C
 * Callers:
 *     SymCryptSaveYmmEnvWindowsKernelmodeWin8_1nLater @ 0x1401AF404 (SymCryptSaveYmmEnvWindowsKernelmodeWin8_1nLater.c)
 *     SymCryptSha256AppendBlocks @ 0x1401AF590 (SymCryptSha256AppendBlocks.c)
 *     SymCryptParallelSha256Process @ 0x1401B2318 (SymCryptParallelSha256Process.c)
 * Callees:
 *     PsGetHostSilo @ 0x140091BB0 (PsGetHostSilo.c)
 */

__int64 SymCryptCpuFeaturesNeverPresent()
{
  return PsGetHostSilo();
}
