/*
 * XREFs of MiMarkLargePageMappings @ 0x1409BA05C
 * Callers:
 *     MiMarkLargePageRanges @ 0x1409B9EB4 (MiMarkLargePageRanges.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x140028884 (MiGetAnyMultiplexedVm.c)
 *     MiUnlockWorkingSetShared @ 0x140046970 (MiUnlockWorkingSetShared.c)
 *     MiWalkPageTables @ 0x14006E930 (MiWalkPageTables.c)
 *     MiLockWorkingSetShared @ 0x140076040 (MiLockWorkingSetShared.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 */

__int64 MiMarkLargePageMappings()
{
  char *AnyMultiplexedVm; // rbx
  _OWORD v2[11]; // [rsp+20h] [rbp-C8h] BYREF

  memset(v2, 0, sizeof(v2));
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(3);
  LODWORD(v2[0]) = 2567;
  *((_QWORD *)&v2[9] + 1) = MiMarkLargePagePte;
  v2[2] = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffff800000000000);
  BYTE10(v2[0]) = 1;
  *((_QWORD *)&v2[1] + 1) = AnyMultiplexedVm;
  BYTE4(v2[0]) = MiLockWorkingSetShared((__int64)AnyMultiplexedVm);
  MiWalkPageTables((int *)v2);
  return MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, BYTE4(v2[0]));
}
