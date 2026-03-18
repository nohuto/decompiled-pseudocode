/*
 * XREFs of GreIsSemaphoreSharedByCurrentThread @ 0x1C00D8EE0
 * Callers:
 *     EngIsSemaphoreSharedByCurrentThread @ 0x1C00D8A70 (EngIsSemaphoreSharedByCurrentThread.c)
 *     GreIsVisRgnLockedShared @ 0x1C00D8F30 (GreIsVisRgnLockedShared.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall GreIsSemaphoreSharedByCurrentThread(struct _ERESOURCE *a1)
{
  return ExIsResourceAcquiredSharedLite(a1) != 0;
}
