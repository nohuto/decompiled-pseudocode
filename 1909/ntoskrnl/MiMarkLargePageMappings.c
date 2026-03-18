/*
 * XREFs of MiMarkLargePageMappings @ 0x1409F4394
 * Callers:
 *     MiMarkLargePageRanges @ 0x1409F41EC (MiMarkLargePageRanges.c)
 * Callees:
 *     MiWalkPageTables @ 0x140049000 (MiWalkPageTables.c)
 *     MiLockWorkingSetShared @ 0x14005D6D0 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x1400AC920 (MiUnlockWorkingSetShared.c)
 *     MiGetAnyMultiplexedVm @ 0x1400CA970 (MiGetAnyMultiplexedVm.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

__int64 MiMarkLargePageMappings()
{
  char *AnyMultiplexedVm; // rbx
  _QWORD v2[22]; // [rsp+20h] [rbp-C8h] BYREF

  memset(v2, 0, 0xA8uLL);
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(3);
  v2[4] = -1LL;
  v2[2] = AnyMultiplexedVm;
  BYTE2(v2[0]) = BYTE2(v2[0]) & 0xE3 | 4;
  LOWORD(v2[0]) = 2567;
  v2[3] = 0xFFFF800000000000uLL;
  v2[18] = MiMarkLargePagePte;
  BYTE6(v2[0]) = MiLockWorkingSetShared((__int64)AnyMultiplexedVm);
  MiWalkPageTables((__int16 *)v2);
  return MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, BYTE6(v2[0]));
}
