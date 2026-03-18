/*
 * XREFs of MiMarkKernelPageTablePages @ 0x1405AC0EC
 * Callers:
 *     MmMarkHiberPhase @ 0x1405AC2F8 (MmMarkHiberPhase.c)
 * Callees:
 *     MiWalkPageTables @ 0x140049000 (MiWalkPageTables.c)
 *     MiGetAnyMultiplexedVm @ 0x1400CA970 (MiGetAnyMultiplexedVm.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

__int64 MiMarkKernelPageTablePages()
{
  char *AnyMultiplexedVm; // rax
  _QWORD v2[22]; // [rsp+20h] [rbp-C8h] BYREF

  memset(v2, 0, 0xA8uLL);
  LOWORD(v2[0]) = 2305;
  BYTE2(v2[0]) = BYTE2(v2[0]) & 0xE3 | 4;
  v2[18] = MiMarkKernelPageTablePte;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  v2[4] = -1LL;
  v2[2] = AnyMultiplexedVm;
  v2[3] = 0xFFFF800000000000uLL;
  BYTE6(v2[0]) = 17;
  return MiWalkPageTables((__int16 *)v2);
}
