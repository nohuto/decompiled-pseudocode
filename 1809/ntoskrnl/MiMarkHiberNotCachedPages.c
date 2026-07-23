/*
 * XREFs of MiMarkHiberNotCachedPages @ 0x14057CFDC
 * Callers:
 *     MmMarkHiberPhase @ 0x14057D328 (MmMarkHiberPhase.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x140028884 (MiGetAnyMultiplexedVm.c)
 *     MiWalkPageTables @ 0x14006E930 (MiWalkPageTables.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 */

__int64 MiMarkHiberNotCachedPages()
{
  char *AnyMultiplexedVm; // rax
  _OWORD v2[11]; // [rsp+20h] [rbp-C8h] BYREF

  memset(v2, 0, sizeof(v2));
  LODWORD(v2[0]) = 2817;
  *((_QWORD *)&v2[9] + 1) = MiMarkHiberNotCachedPte;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(3);
  v2[2] = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffff800000000000);
  *((_QWORD *)&v2[1] + 1) = AnyMultiplexedVm;
  BYTE4(v2[0]) = 17;
  return MiWalkPageTables((int *)v2);
}
