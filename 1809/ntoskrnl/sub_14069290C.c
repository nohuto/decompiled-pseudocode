/*
 * XREFs of sub_14069290C @ 0x14069290C
 * Callers:
 *     WbAddWarbirdEncryptionSegment @ 0x140584C40 (WbAddWarbirdEncryptionSegment.c)
 *     WbGetWarbirdThread @ 0x14062604C (WbGetWarbirdThread.c)
 *     WbGetWarbirdProcess @ 0x1406265A4 (WbGetWarbirdProcess.c)
 *     WbAllocateUserMemory @ 0x140691D38 (WbAllocateUserMemory.c)
 *     WbAddHeapExecutedBlockToCache @ 0x14069272C (WbAddHeapExecutedBlockToCache.c)
 * Callees:
 *     sub_1406262B8 @ 0x1406262B8 (sub_1406262B8.c)
 *     sub_14069296C @ 0x14069296C (sub_14069296C.c)
 */

__int64 __fastcall sub_14069290C(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5, int a6)
{
  if ( a6 == -1 )
    sub_1406262B8(a1, a4, a5, 0LL, &a6);
  return sub_14069296C(a1, a2);
}
