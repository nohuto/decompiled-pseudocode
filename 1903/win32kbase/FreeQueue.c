/*
 * XREFs of FreeQueue @ 0x1C009EF6C
 * Callers:
 *     zzzDestroyQueue @ 0x1C0035070 (zzzDestroyQueue.c)
 *     UnlockQueue @ 0x1C00BD7A0 (UnlockQueue.c)
 * Callees:
 *     Win32FreeToPagedLookasideList @ 0x1C0016C10 (Win32FreeToPagedLookasideList.c)
 */

__int64 __fastcall FreeQueue(__int64 a1)
{
  return Win32FreeToPagedLookasideList((__int64)QLookaside, a1);
}
