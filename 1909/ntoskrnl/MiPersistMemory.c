/*
 * XREFs of MiPersistMemory @ 0x1402CC564
 * Callers:
 *     MiFlushFileOnlyMdl @ 0x1402CBE58 (MiFlushFileOnlyMdl.c)
 *     MiPersistPage @ 0x1402CC594 (MiPersistPage.c)
 * Callees:
 *     KePersistMemory @ 0x1401C8600 (KePersistMemory.c)
 *     KeInvalidateRangeAllCaches @ 0x1402ABA60 (KeInvalidateRangeAllCaches.c)
 */

void __fastcall MiPersistMemory(void *a1, __int64 a2)
{
  if ( (KeFeatureBits & 0x1000000000LL) != 0 )
    KePersistMemory((__int64)a1, a2);
  else
    KeInvalidateRangeAllCaches(a1, a2);
}
