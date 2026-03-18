/*
 * XREFs of DestroyWindowsTimers @ 0x1C0097364
 * Callers:
 *     xxxFreeWindow @ 0x1C00988D4 (xxxFreeWindow.c)
 *     ?xxxClientShutdown2@@YAJPEAUtagBWL@@I_K@Z @ 0x1C0126F5C (-xxxClientShutdown2@@YAJPEAUtagBWL@@I_K@Z.c)
 * Callees:
 *     FreeTimer @ 0x1C00DAA90 (FreeTimer.c)
 */

struct _LIST_ENTRY *DestroyWindowsTimers()
{
  return gtmrListHead;
}
