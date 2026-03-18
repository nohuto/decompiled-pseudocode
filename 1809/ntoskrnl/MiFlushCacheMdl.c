/*
 * XREFs of MiFlushCacheMdl @ 0x1402C3D5C
 * Callers:
 *     MiReferenceIoPages @ 0x1400E5F8C (MiReferenceIoPages.c)
 * Callees:
 *     KeInvalidateAllCaches @ 0x140177030 (KeInvalidateAllCaches.c)
 */

__int64 MiFlushCacheMdl()
{
  ++dword_14043A094;
  KeInvalidateAllCaches();
  return 1LL;
}
