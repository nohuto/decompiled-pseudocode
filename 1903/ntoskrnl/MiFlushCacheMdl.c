/*
 * XREFs of MiFlushCacheMdl @ 0x1402DE11C
 * Callers:
 *     MiReferenceIoPages @ 0x140118650 (MiReferenceIoPages.c)
 * Callees:
 *     KeInvalidateAllCaches @ 0x1400B7B70 (KeInvalidateAllCaches.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

__int64 MiFlushCacheMdl()
{
  _BYTE v1[184]; // [rsp+20h] [rbp-D8h] BYREF

  memset(v1, 0, sizeof(v1));
  ++dword_140465ABC;
  KeInvalidateAllCaches();
  return 1LL;
}
