/*
 * XREFs of MiMarkHiberNotCachedPages @ 0x1405ABFBC
 * Callers:
 *     MmMarkHiberPhase @ 0x1405AC318 (MmMarkHiberPhase.c)
 * Callees:
 *     MiWalkPageTables @ 0x140048F60 (MiWalkPageTables.c)
 *     MiGetAnyMultiplexedVm @ 0x14008D9C0 (MiGetAnyMultiplexedVm.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

__int64 MiMarkHiberNotCachedPages()
{
  char *AnyMultiplexedVm; // rax
  _QWORD v2[22]; // [rsp+20h] [rbp-C8h] BYREF

  memset(v2, 0, 0xA8uLL);
  LOWORD(v2[0]) = 2817;
  v2[18] = MiMarkHiberNotCachedPte;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(3);
  v2[4] = -1LL;
  v2[2] = AnyMultiplexedVm;
  v2[3] = 0xFFFF800000000000uLL;
  BYTE6(v2[0]) = 17;
  return MiWalkPageTables((__int16 *)v2);
}
