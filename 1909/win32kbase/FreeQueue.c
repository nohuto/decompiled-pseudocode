/*
 * XREFs of FreeQueue @ 0x1C009E49C
 * Callers:
 *     zzzDestroyQueue @ 0x1C0034320 (zzzDestroyQueue.c)
 *     UnlockQueue @ 0x1C00BA740 (UnlockQueue.c)
 * Callees:
 *     Win32FreeToPagedLookasideList @ 0x1C001A250 (Win32FreeToPagedLookasideList.c)
 */

__int64 __fastcall FreeQueue(__int64 a1)
{
  return Win32FreeToPagedLookasideList((__int64)QLookaside, a1);
}
