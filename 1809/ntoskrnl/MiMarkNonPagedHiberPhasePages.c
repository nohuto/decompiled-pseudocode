/*
 * XREFs of MiMarkNonPagedHiberPhasePages @ 0x14057D1BC
 * Callers:
 *     MmMarkHiberPhase @ 0x14057D328 (MmMarkHiberPhase.c)
 *     MmMarkImageForHiberPhase @ 0x14057D5C8 (MmMarkImageForHiberPhase.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x140028884 (MiGetAnyMultiplexedVm.c)
 *     MiWalkPageTables @ 0x14006E930 (MiWalkPageTables.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 */

__int64 __fastcall MiMarkNonPagedHiberPhasePages(__int64 a1, __int64 a2, int a3)
{
  _QWORD v7[22]; // [rsp+20h] [rbp-D8h] BYREF

  memset(v7, 0, sizeof(v7));
  v7[19] = MiMarkNonPagedHiberPhasePte;
  LODWORD(v7[0]) = a3 | 0x901;
  v7[3] = MiGetAnyMultiplexedVm(3);
  BYTE4(v7[0]) = 17;
  v7[4] = a1;
  v7[5] = a2;
  return MiWalkPageTables((int *)v7);
}
