/*
 * XREFs of DestroyWindowsTimers @ 0x1C0038094
 * Callers:
 *     xxxFreeWindow @ 0x1C00396A4 (xxxFreeWindow.c)
 *     ?xxxClientShutdown2@@YAJPEAUtagBWL@@I_K@Z @ 0x1C0102774 (-xxxClientShutdown2@@YAJPEAUtagBWL@@I_K@Z.c)
 * Callees:
 *     FreeTimer @ 0x1C007A780 (FreeTimer.c)
 */

struct _LIST_ENTRY *DestroyWindowsTimers()
{
  return gtmrListHead;
}
