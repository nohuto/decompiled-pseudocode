/*
 * XREFs of DestroyWindowsTimers @ 0x1C0035C74
 * Callers:
 *     xxxFreeWindow @ 0x1C0036A54 (xxxFreeWindow.c)
 *     ?xxxClientShutdown2@@YAJPEAUtagBWL@@I_K@Z @ 0x1C00FEF70 (-xxxClientShutdown2@@YAJPEAUtagBWL@@I_K@Z.c)
 * Callees:
 *     FreeTimer @ 0x1C00BA430 (FreeTimer.c)
 */

__int64 DestroyWindowsTimers()
{
  return gtmrListHead;
}
