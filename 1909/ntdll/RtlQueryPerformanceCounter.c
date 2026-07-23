/*
 * XREFs of RtlQueryPerformanceCounter @ 0x18000BBB0
 * Callers:
 *     EtwpInitLoggerContext @ 0x18000471C (EtwpInitLoggerContext.c)
 *     EtwpAddLogHeaderToLogFile @ 0x180004BA8 (EtwpAddLogHeaderToLogFile.c)
 *     RtlCapabilityCheck @ 0x18000B770 (RtlCapabilityCheck.c)
 *     RtlGetSystemTimePrecise @ 0x18000BAF0 (RtlGetSystemTimePrecise.c)
 *     EtwpReserveTraceBuffer @ 0x1800536EC (EtwpReserveTraceBuffer.c)
 *     RtlGetInterruptTimePrecise @ 0x1800E4050 (RtlGetInterruptTimePrecise.c)
 *     RtlGetMultiTimePrecise @ 0x1800E4100 (RtlGetMultiTimePrecise.c)
 *     PsspSampleCounters @ 0x180111100 (PsspSampleCounters.c)
 * Callees:
 *     NtQueryPerformanceCounter @ 0x18009D4B0 (NtQueryPerformanceCounter.c)
 */

LOGICAL __cdecl RtlQueryPerformanceCounter(PLARGE_INTEGER PerformanceCounter)
{
  unsigned __int64 v1; // rax
  __int64 v2; // rdx
  LARGE_INTEGER PerformanceCountera; // [rsp+40h] [rbp+18h] BYREF

  if ( (MEMORY[0x7FFE03C6] & 1) == 0 )
    goto LABEL_21;
  if ( (MEMORY[0x7FFE03C6] & 2) != 0 )
  {
    if ( RtlpHypervisorSharedUserVa && *(_DWORD *)RtlpHypervisorSharedUserVa )
    {
      if ( MEMORY[0x7FFE03C6] >= 0 )
      {
        if ( (MEMORY[0x7FFE03C6] & 0x20) != 0 )
        {
          _mm_lfence();
        }
        else if ( (MEMORY[0x7FFE03C6] & 0x10) != 0 )
        {
          _mm_mfence();
        }
        v1 = __rdtsc();
        LODWORD(v2) = HIDWORD(v1);
        v1 = (unsigned int)v1;
        v2 = (unsigned int)v2;
      }
      else
      {
        __asm { rdtscp }
      }
      PerformanceCounter->QuadPart = (unsigned __int64)(*(_QWORD *)(RtlpHypervisorSharedUserVa + 16)
                                                      + (((v1 | (v2 << 32))
                                                        * (unsigned __int128)*(unsigned __int64 *)(RtlpHypervisorSharedUserVa
                                                                                                 + 8)) >> 64)
                                                      + MEMORY[0x7FFE03B8]) >> MEMORY[0x7FFE03C7];
      return 1;
    }
LABEL_21:
    NtQueryPerformanceCounter(&PerformanceCountera, 0LL);
    *PerformanceCounter = PerformanceCountera;
    return 1;
  }
  if ( MEMORY[0x7FFE03C6] >= 0 )
  {
    if ( (MEMORY[0x7FFE03C6] & 0x20) != 0 )
    {
      _mm_lfence();
    }
    else if ( (MEMORY[0x7FFE03C6] & 0x10) != 0 )
    {
      _mm_mfence();
    }
    v1 = __rdtsc();
    LODWORD(v2) = HIDWORD(v1);
    v1 = (unsigned int)v1;
    v2 = (unsigned int)v2;
  }
  else
  {
    __asm { rdtscp }
  }
  PerformanceCounter->QuadPart = ((v1 | (v2 << 32)) + MEMORY[0x7FFE03B8]) >> MEMORY[0x7FFE03C7];
  return 1;
}
