/*
 * XREFs of SymCryptInit @ 0x140180ED4
 * Callers:
 *     HvInitializeHashLibrary @ 0x14073173C (HvInitializeHashLibrary.c)
 * Callees:
 *     SymCryptInitEnvWindowsKernelmodeWin8_1nLater @ 0x1401AF348 (SymCryptInitEnvWindowsKernelmodeWin8_1nLater.c)
 */

__int64 SymCryptInit()
{
  return SymCryptInitEnvWindowsKernelmodeWin8_1nLater();
}
