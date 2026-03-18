/*
 * XREFs of MiPersistMemory @ 0x1402CC804
 * Callers:
 *     MiFlushFileOnlyMdl @ 0x1402CC0F8 (MiFlushFileOnlyMdl.c)
 *     MiPersistPage @ 0x1402CC834 (MiPersistPage.c)
 * Callees:
 *     KePersistMemory @ 0x1401C7A80 (KePersistMemory.c)
 *     KeInvalidateRangeAllCaches @ 0x1402ABD00 (KeInvalidateRangeAllCaches.c)
 */

void __fastcall MiPersistMemory(void *a1, __int64 a2)
{
  if ( (KeFeatureBits & 0x1000000000LL) != 0 )
    KePersistMemory((__int64)a1, a2);
  else
    KeInvalidateRangeAllCaches(a1, a2);
}
