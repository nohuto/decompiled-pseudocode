/*
 * XREFs of EngIsSemaphoreSharedByCurrentThread @ 0x1C008AFC0
 * Callers:
 *     <none>
 * Callees:
 *     GreIsSemaphoreSharedByCurrentThread @ 0x1C008AFE0 (GreIsSemaphoreSharedByCurrentThread.c)
 */

BOOL __stdcall EngIsSemaphoreSharedByCurrentThread(HSEMAPHORE hsem)
{
  return GreIsSemaphoreSharedByCurrentThread(hsem);
}
