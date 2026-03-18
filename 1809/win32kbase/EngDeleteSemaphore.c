/*
 * XREFs of EngDeleteSemaphore @ 0x1C008D6E0
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteSemaphore @ 0x1C002D330 (GreDeleteSemaphore.c)
 */

void __stdcall EngDeleteSemaphore(HSEMAPHORE hsem)
{
  GreDeleteSemaphore((PERESOURCE)hsem);
}
