/*
 * XREFs of GreIsSemaphoreSharedByCurrentThread @ 0x1C008AFE0
 * Callers:
 *     EngIsSemaphoreSharedByCurrentThread @ 0x1C008AFC0 (EngIsSemaphoreSharedByCurrentThread.c)
 *     GreIsVisRgnLockedShared @ 0x1C0106D70 (GreIsVisRgnLockedShared.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall GreIsSemaphoreSharedByCurrentThread(struct _ERESOURCE *a1)
{
  return ExIsResourceAcquiredSharedLite(a1) != 0;
}
