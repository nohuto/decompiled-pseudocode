/*
 * XREFs of SymCryptInit @ 0x14018D7B0
 * Callers:
 *     HvInitializeHashLibrary @ 0x140760A3C (HvInitializeHashLibrary.c)
 * Callees:
 *     SymCryptInitEnvWindowsKernelmodeWin8_1nLater @ 0x1401BAA4C (SymCryptInitEnvWindowsKernelmodeWin8_1nLater.c)
 */

__int64 SymCryptInit()
{
  return SymCryptInitEnvWindowsKernelmodeWin8_1nLater();
}
