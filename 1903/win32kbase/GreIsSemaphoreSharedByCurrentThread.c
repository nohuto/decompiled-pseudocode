/*
 * XREFs of GreIsSemaphoreSharedByCurrentThread @ 0x1C009C900
 * Callers:
 *     EngIsSemaphoreSharedByCurrentThread @ 0x1C009C8E0 (EngIsSemaphoreSharedByCurrentThread.c)
 *     GreIsVisRgnLockedShared @ 0x1C01310B0 (GreIsVisRgnLockedShared.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall GreIsSemaphoreSharedByCurrentThread(struct _ERESOURCE *a1)
{
  return ExIsResourceAcquiredSharedLite(a1) != 0;
}
