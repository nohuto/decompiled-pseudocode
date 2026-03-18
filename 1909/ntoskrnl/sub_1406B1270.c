/*
 * XREFs of sub_1406B1270 @ 0x1406B1270
 * Callers:
 *     WbAddWarbirdEncryptionSegment @ 0x1405B3808 (WbAddWarbirdEncryptionSegment.c)
 *     WbGetWarbirdThread @ 0x1405CAB98 (WbGetWarbirdThread.c)
 *     WbGetWarbirdProcess @ 0x1405CAF80 (WbGetWarbirdProcess.c)
 *     WbAllocateUserMemory @ 0x1406B0B28 (WbAllocateUserMemory.c)
 *     WbAddHeapExecutedBlockToCache @ 0x1406B1090 (WbAddHeapExecutedBlockToCache.c)
 * Callees:
 *     sub_1405CB1F4 @ 0x1405CB1F4 (sub_1405CB1F4.c)
 *     WbAddLookupEntryEx @ 0x1406B12D0 (WbAddLookupEntryEx.c)
 */

__int64 __fastcall sub_1406B1270(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5, int a6)
{
  if ( a6 == -1 )
    sub_1405CB1F4(a1, a4, a5, 0LL, &a6);
  return WbAddLookupEntryEx(a1, a2);
}
