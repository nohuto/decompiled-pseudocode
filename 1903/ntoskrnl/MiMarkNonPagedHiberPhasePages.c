/*
 * XREFs of MiMarkNonPagedHiberPhasePages @ 0x1405AC1B0
 * Callers:
 *     MmMarkHiberPhase @ 0x1405AC318 (MmMarkHiberPhase.c)
 *     MmMarkImageForHiberPhase @ 0x1405AC5AC (MmMarkImageForHiberPhase.c)
 * Callees:
 *     MiWalkPageTables @ 0x140048F60 (MiWalkPageTables.c)
 *     MiGetAnyMultiplexedVm @ 0x14008D9C0 (MiGetAnyMultiplexedVm.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

__int64 __fastcall MiMarkNonPagedHiberPhasePages(__int64 a1, __int64 a2, __int16 a3)
{
  _QWORD v7[22]; // [rsp+20h] [rbp-D8h] BYREF

  memset(v7, 0, 0xA8uLL);
  v7[18] = MiMarkNonPagedHiberPhasePte;
  LOWORD(v7[0]) = a3 | 0x901;
  v7[2] = MiGetAnyMultiplexedVm(3);
  BYTE6(v7[0]) = 17;
  v7[3] = a1;
  v7[4] = a2;
  return MiWalkPageTables((__int16 *)v7);
}
