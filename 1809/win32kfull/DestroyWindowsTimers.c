/*
 * XREFs of DestroyWindowsTimers @ 0x1C001D37C
 * Callers:
 *     xxxFreeWindow @ 0x1C001E184 (xxxFreeWindow.c)
 *     ?xxxClientShutdown2@@YAJPEAUtagBWL@@I_K@Z @ 0x1C011E0E8 (-xxxClientShutdown2@@YAJPEAUtagBWL@@I_K@Z.c)
 * Callees:
 *     FreeTimer @ 0x1C00EB450 (FreeTimer.c)
 */

__int64 DestroyWindowsTimers()
{
  return gtmrListHead;
}
