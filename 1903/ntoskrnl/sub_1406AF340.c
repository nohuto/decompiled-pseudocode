/*
 * XREFs of sub_1406AF340 @ 0x1406AF340
 * Callers:
 *     WbAddWarbirdEncryptionSegment @ 0x1405B342C (WbAddWarbirdEncryptionSegment.c)
 *     WbGetWarbirdThread @ 0x1405CA698 (WbGetWarbirdThread.c)
 *     WbGetWarbirdProcess @ 0x1405CAA80 (WbGetWarbirdProcess.c)
 *     WbAllocateUserMemory @ 0x1406AEBF8 (WbAllocateUserMemory.c)
 *     WbAddHeapExecutedBlockToCache @ 0x1406AF160 (WbAddHeapExecutedBlockToCache.c)
 * Callees:
 *     sub_1405CACF4 @ 0x1405CACF4 (sub_1405CACF4.c)
 *     WbAddLookupEntryEx @ 0x1406AF3A0 (WbAddLookupEntryEx.c)
 */

__int64 __fastcall sub_1406AF340(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5, int a6)
{
  if ( a6 == -1 )
    sub_1405CACF4(a1, a4, a5, 0LL, &a6);
  return WbAddLookupEntryEx(a1, a2);
}
