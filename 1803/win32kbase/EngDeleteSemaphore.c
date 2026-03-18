/*
 * XREFs of EngDeleteSemaphore @ 0x1C006D150
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteSemaphore @ 0x1C00348B0 (GreDeleteSemaphore.c)
 */

void __stdcall EngDeleteSemaphore(HSEMAPHORE hsem)
{
  GreDeleteSemaphore((PERESOURCE)hsem);
}
