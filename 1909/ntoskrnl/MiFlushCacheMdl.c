/*
 * XREFs of MiFlushCacheMdl @ 0x1402DDE7C
 * Callers:
 *     MiReferenceIoPages @ 0x1400F6770 (MiReferenceIoPages.c)
 * Callees:
 *     KeInvalidateAllCaches @ 0x14013B4F0 (KeInvalidateAllCaches.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

__int64 MiFlushCacheMdl()
{
  _BYTE v1[184]; // [rsp+20h] [rbp-D8h] BYREF

  memset(v1, 0, sizeof(v1));
  ++dword_1404657BC;
  KeInvalidateAllCaches();
  return 1LL;
}
