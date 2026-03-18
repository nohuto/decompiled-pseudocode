/*
 * XREFs of SymCryptCpuFeaturesNeverPresent @ 0x14013C34C
 * Callers:
 *     SymCryptSaveYmmEnvWindowsKernelmodeWin8_1nLater @ 0x1401BA3F8 (SymCryptSaveYmmEnvWindowsKernelmodeWin8_1nLater.c)
 *     SymCryptSha256AppendBlocks @ 0x1401BA590 (SymCryptSha256AppendBlocks.c)
 *     SymCryptParallelSha256Process @ 0x1401BD3D4 (SymCryptParallelSha256Process.c)
 * Callees:
 *     PsGetHostSilo @ 0x140015A00 (PsGetHostSilo.c)
 */

__int64 SymCryptCpuFeaturesNeverPresent()
{
  return PsGetHostSilo();
}
