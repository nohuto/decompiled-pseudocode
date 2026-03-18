/*
 * XREFs of EngDeleteSemaphore @ 0x1C000DDA0
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteSemaphore @ 0x1C00109E0 (GreDeleteSemaphore.c)
 */

void __stdcall EngDeleteSemaphore(HSEMAPHORE hsem)
{
  GreDeleteSemaphore((PERESOURCE)hsem);
}
