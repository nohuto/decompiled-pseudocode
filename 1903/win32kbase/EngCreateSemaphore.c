/*
 * XREFs of EngCreateSemaphore @ 0x1C00568C0
 * Callers:
 *     <none>
 * Callees:
 *     GreCreateSemaphoreInternal @ 0x1C0056C14 (GreCreateSemaphoreInternal.c)
 */

HSEMAPHORE EngCreateSemaphore(void)
{
  return (HSEMAPHORE)GreCreateSemaphoreInternal(1LL);
}
