/*
 * XREFs of sub_14069174C @ 0x14069174C
 * Callers:
 *     WbAddWarbirdEncryptionSegment @ 0x140583C40 (WbAddWarbirdEncryptionSegment.c)
 *     WbGetWarbirdThread @ 0x14062502C (WbGetWarbirdThread.c)
 *     WbGetWarbirdProcess @ 0x140625584 (WbGetWarbirdProcess.c)
 *     WbAllocateUserMemory @ 0x140690B78 (WbAllocateUserMemory.c)
 *     WbAddHeapExecutedBlockToCache @ 0x14069156C (WbAddHeapExecutedBlockToCache.c)
 * Callees:
 *     sub_140625298 @ 0x140625298 (sub_140625298.c)
 *     sub_1406917AC @ 0x1406917AC (sub_1406917AC.c)
 */

__int64 __fastcall sub_14069174C(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5, int a6)
{
  if ( a6 == -1 )
    sub_140625298(a1, a4, a5, 0LL, &a6);
  return sub_1406917AC(a1, a2);
}
