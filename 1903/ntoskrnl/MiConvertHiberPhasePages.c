/*
 * XREFs of MiConvertHiberPhasePages @ 0x14059CF64
 * Callers:
 *     PopInvokeSystemStateHandler @ 0x140598740 (PopInvokeSystemStateHandler.c)
 *     PopMarkComponentsBootPhase @ 0x14059D990 (PopMarkComponentsBootPhase.c)
 * Callees:
 *     MiWalkPageTables @ 0x140048F60 (MiWalkPageTables.c)
 *     MiGetAnyMultiplexedVm @ 0x14008D9C0 (MiGetAnyMultiplexedVm.c)
 *     KeFlushCurrentTbOnly @ 0x14017A1B0 (KeFlushCurrentTbOnly.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

__int64 __fastcall MiConvertHiberPhasePages(__int64 a1)
{
  char *AnyMultiplexedVm; // rax
  __int64 result; // rax
  _QWORD v4[22]; // [rsp+20h] [rbp-C8h] BYREF

  memset(v4, 0, 0xA8uLL);
  LOWORD(v4[0]) = 2817;
  v4[18] = MiConvertHiberPhasePte;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(3);
  v4[4] = -1LL;
  v4[2] = AnyMultiplexedVm;
  v4[3] = 0xFFFF800000000000uLL;
  BYTE6(v4[0]) = 17;
  v4[20] = a1;
  result = MiWalkPageTables((__int16 *)v4);
  if ( a1 )
    return KeFlushCurrentTbOnly(0);
  return result;
}
