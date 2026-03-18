/*
 * XREFs of EngDeleteSemaphore @ 0x1C00568A0
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteSemaphore @ 0x1C0056B40 (GreDeleteSemaphore.c)
 */

void __stdcall EngDeleteSemaphore(HSEMAPHORE hsem)
{
  GreDeleteSemaphore((PERESOURCE)hsem);
}
