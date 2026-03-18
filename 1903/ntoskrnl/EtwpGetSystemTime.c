/*
 * XREFs of EtwpGetSystemTime @ 0x140082060
 * Callers:
 *     KeQuerySystemTimePrecise @ 0x140082040 (KeQuerySystemTimePrecise.c)
 *     KeSetTimer2 @ 0x1400BC1F0 (KeSetTimer2.c)
 *     KiExecuteAllDpcs @ 0x1400C2660 (KiExecuteAllDpcs.c)
 *     EtwGetKernelTraceTimestamp @ 0x14010A0C0 (EtwGetKernelTraceTimestamp.c)
 *     EtwGetKernelTraceTimestampSilo @ 0x14011C9E0 (EtwGetKernelTraceTimestampSilo.c)
 *     WmiGetClock @ 0x14032CAA0 (WmiGetClock.c)
 *     PspInitPhase2 @ 0x1409FE628 (PspInitPhase2.c)
 *     EtwpTraceSystemInitialization @ 0x140A15EB0 (EtwpTraceSystemInitialization.c)
 * Callees:
 *     <none>
 */

__int64 EtwpGetSystemTime()
{
  __int64 v0; // rbx
  __int64 v1; // r14
  LARGE_INTEGER v2; // rsi
  unsigned __int64 v3; // rbp
  char v4; // di
  LARGE_INTEGER PerformanceCounter; // rdx
  LONGLONG v6; // rdx

  while ( 1 )
  {
    v0 = MEMORY[0xFFFFF78000000340];
    if ( (MEMORY[0xFFFFF78000000340] & 1) == 0 )
    {
      v1 = MEMORY[0xFFFFF78000000014];
      v2.QuadPart = MEMORY[0xFFFFF78000000348];
      v3 = MEMORY[0xFFFFF78000000358];
      v4 = MEMORY[0xFFFFF78000000368];
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      if ( MEMORY[0xFFFFF78000000340] == v0 )
        break;
    }
    _mm_pause();
  }
  if ( PerformanceCounter.QuadPart <= (unsigned __int64)v2.QuadPart )
    return v1;
  v6 = PerformanceCounter.QuadPart - v2.QuadPart - 1;
  if ( v4 )
    v6 <<= v4;
  return v1 + (((unsigned __int64)v6 * (unsigned __int128)v3) >> 64);
}
