/*
 * XREFs of MiAddLoaderHalIoMappings @ 0x1409F13B0
 * Callers:
 *     MiInitSystem @ 0x1409F0E88 (MiInitSystem.c)
 * Callees:
 *     MiWalkPageTables @ 0x140048F60 (MiWalkPageTables.c)
 *     MiLockWorkingSetShared @ 0x14005D630 (MiLockWorkingSetShared.c)
 *     MiGetAnyMultiplexedVm @ 0x14008D9C0 (MiGetAnyMultiplexedVm.c)
 *     MiUnlockWorkingSetShared @ 0x1400CCAA0 (MiUnlockWorkingSetShared.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

__int64 __fastcall MiAddLoaderHalIoMappings(__int64 a1, __int64 a2)
{
  char *AnyMultiplexedVm; // rdi
  _QWORD v6[22]; // [rsp+20h] [rbp-C8h] BYREF

  memset(v6, 0, 0xA8uLL);
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  v6[3] = a1;
  v6[4] = a2;
  LOWORD(v6[0]) = 2055;
  v6[2] = AnyMultiplexedVm;
  v6[18] = MiAddLoaderHalIoPte;
  BYTE6(v6[0]) = MiLockWorkingSetShared((__int64)AnyMultiplexedVm);
  MiWalkPageTables((__int16 *)v6);
  return MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, BYTE6(v6[0]));
}
