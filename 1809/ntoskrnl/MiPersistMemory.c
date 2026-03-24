/*
 * XREFs of MiPersistMemory @ 0x1402B65A0
 * Callers:
 *     MiFlushFileOnlyMdl @ 0x1402B5E6C (MiFlushFileOnlyMdl.c)
 *     MiPersistPage @ 0x1402B65D0 (MiPersistPage.c)
 * Callees:
 *     KePersistMemory @ 0x1401C09A0 (KePersistMemory.c)
 *     KeInvalidateRangeAllCaches @ 0x1402953D0 (KeInvalidateRangeAllCaches.c)
 */

void __fastcall MiPersistMemory(void *a1, __int64 a2)
{
  if ( (KeFeatureBits & 0x1000000000LL) != 0 )
    KePersistMemory((__int64)a1, a2);
  else
    KeInvalidateRangeAllCaches(a1, a2);
}
