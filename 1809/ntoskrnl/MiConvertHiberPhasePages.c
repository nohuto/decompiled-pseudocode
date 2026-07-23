/*
 * XREFs of MiConvertHiberPhasePages @ 0x14056EF80
 * Callers:
 *     PopInvokeSystemStateHandler @ 0x140569DB8 (PopInvokeSystemStateHandler.c)
 *     PopMarkComponentsBootPhase @ 0x14056C53C (PopMarkComponentsBootPhase.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x140028884 (MiGetAnyMultiplexedVm.c)
 *     MiWalkPageTables @ 0x14006E930 (MiWalkPageTables.c)
 *     KeFlushCurrentTbOnly @ 0x140173F00 (KeFlushCurrentTbOnly.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 */

__int64 __fastcall MiConvertHiberPhasePages(__int64 a1)
{
  char *AnyMultiplexedVm; // rax
  __int64 result; // rax
  _OWORD v4[11]; // [rsp+20h] [rbp-C8h] BYREF

  memset(v4, 0, sizeof(v4));
  LODWORD(v4[0]) = 2817;
  *((_QWORD *)&v4[9] + 1) = MiConvertHiberPhasePte;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(3);
  v4[2] = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffff800000000000);
  *((_QWORD *)&v4[1] + 1) = AnyMultiplexedVm;
  BYTE4(v4[0]) = 17;
  *((_QWORD *)&v4[10] + 1) = a1;
  result = MiWalkPageTables((int *)v4);
  if ( a1 )
    return KeFlushCurrentTbOnly(0LL);
  return result;
}
