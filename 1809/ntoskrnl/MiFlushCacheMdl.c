/*
 * XREFs of MiFlushCacheMdl @ 0x1402C404C
 * Callers:
 *     MiReferenceIoPages @ 0x1400E602C (MiReferenceIoPages.c)
 * Callees:
 *     KeInvalidateAllCaches @ 0x140177150 (KeInvalidateAllCaches.c)
 */

__int64 MiFlushCacheMdl()
{
  ++dword_14043B154;
  KeInvalidateAllCaches();
  return 1LL;
}
