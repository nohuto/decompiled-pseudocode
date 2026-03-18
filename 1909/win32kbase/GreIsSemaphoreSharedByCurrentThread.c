/*
 * XREFs of GreIsSemaphoreSharedByCurrentThread @ 0x1C009C040
 * Callers:
 *     EngIsSemaphoreSharedByCurrentThread @ 0x1C009C020 (EngIsSemaphoreSharedByCurrentThread.c)
 *     GreIsVisRgnLockedShared @ 0x1C012E900 (GreIsVisRgnLockedShared.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall GreIsSemaphoreSharedByCurrentThread(struct _ERESOURCE *a1)
{
  return ExIsResourceAcquiredSharedLite(a1) != 0;
}
