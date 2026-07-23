/*
 * XREFs of MiPersistMemory @ 0x1402B6790
 * Callers:
 *     MiFlushFileOnlyMdl @ 0x1402B605C (MiFlushFileOnlyMdl.c)
 *     MiPersistPage @ 0x1402B67C0 (MiPersistPage.c)
 * Callees:
 *     KePersistMemory @ 0x1401C0B00 (KePersistMemory.c)
 *     KeInvalidateRangeAllCaches @ 0x1402955C0 (KeInvalidateRangeAllCaches.c)
 */

void __fastcall MiPersistMemory(void *a1, __int64 a2)
{
  if ( (KeFeatureBits & 0x1000000000LL) != 0 )
    KePersistMemory((__int64)a1, a2);
  else
    KeInvalidateRangeAllCaches(a1, a2);
}
