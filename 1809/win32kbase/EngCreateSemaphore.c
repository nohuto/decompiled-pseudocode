/*
 * XREFs of EngCreateSemaphore @ 0x1C008B860
 * Callers:
 *     <none>
 * Callees:
 *     GreCreateSemaphoreInternal @ 0x1C002BF30 (GreCreateSemaphoreInternal.c)
 */

HSEMAPHORE EngCreateSemaphore(void)
{
  return (HSEMAPHORE)GreCreateSemaphoreInternal(1);
}
