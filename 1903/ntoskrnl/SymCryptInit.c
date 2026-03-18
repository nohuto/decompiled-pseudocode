/*
 * XREFs of SymCryptInit @ 0x14018CF30
 * Callers:
 *     HvInitializeHashLibrary @ 0x14075C2BC (HvInitializeHashLibrary.c)
 * Callees:
 *     SymCryptInitEnvWindowsKernelmodeWin8_1nLater @ 0x1401BA32C (SymCryptInitEnvWindowsKernelmodeWin8_1nLater.c)
 */

__int64 SymCryptInit()
{
  return SymCryptInitEnvWindowsKernelmodeWin8_1nLater();
}
