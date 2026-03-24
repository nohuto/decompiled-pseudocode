/*
 * XREFs of SymCryptRestoreYmm @ 0x14018EDBC
 * Callers:
 *     SymCryptParallelSha256Process @ 0x1401B21D8 (SymCryptParallelSha256Process.c)
 * Callees:
 *     SymCryptRestoreYmmEnvWindowsKernelmodeWin8_1nLater @ 0x1401AF2B0 (SymCryptRestoreYmmEnvWindowsKernelmodeWin8_1nLater.c)
 */

__int64 SymCryptRestoreYmm()
{
  return SymCryptRestoreYmmEnvWindowsKernelmodeWin8_1nLater();
}
