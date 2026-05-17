/*
 * XREFs of RtlQueryPerformanceCounter @ 0x180048890
 * Callers:
 *     RtlCapabilityCheck @ 0x180048270 (RtlCapabilityCheck.c)
 *     RtlGetSystemTimePrecise @ 0x1800487D0 (RtlGetSystemTimePrecise.c)
 *     EtwpReserveTraceBuffer @ 0x18004E604 (EtwpReserveTraceBuffer.c)
 *     EtwpAddLogHeaderToLogFile @ 0x1800514D0 (EtwpAddLogHeaderToLogFile.c)
 *     EtwpInitLoggerContext @ 0x180051D88 (EtwpInitLoggerContext.c)
 *     RtlGetInterruptTimePrecise @ 0x1800E6E10 (RtlGetInterruptTimePrecise.c)
 *     RtlGetMultiTimePrecise @ 0x1800E6EC0 (RtlGetMultiTimePrecise.c)
 *     PsspSampleCounters @ 0x1801121EC (PsspSampleCounters.c)
 * Callees:
 *     NtQueryPerformanceCounter @ 0x1800A0900 (NtQueryPerformanceCounter.c)
 */

__int64 __fastcall RtlQueryPerformanceCounter(unsigned __int64 *a1, __int64 a2)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // rax
  unsigned __int64 v7; // [rsp+40h] [rbp+18h] BYREF

  if ( (MEMORY[0x7FFE03C6] & 1) == 0 )
    goto LABEL_10;
  if ( (MEMORY[0x7FFE03C6] & 2) == 0 )
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
      v2 = __rdtsc();
      LODWORD(a2) = HIDWORD(v2);
      v2 = (unsigned int)v2;
      a2 = (unsigned int)a2;
    }
    else
    {
      __asm { rdtscp }
    }
    v4 = v2 | (a2 << 32);
    goto LABEL_8;
  }
  if ( !RtlpHypervisorSharedUserVa || !*(_DWORD *)RtlpHypervisorSharedUserVa )
  {
LABEL_10:
    NtQueryPerformanceCounter(&v7, 0LL);
    v5 = v7;
    goto LABEL_9;
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
    v2 = __rdtsc();
    LODWORD(a2) = HIDWORD(v2);
    v2 = (unsigned int)v2;
    a2 = (unsigned int)a2;
  }
  else
  {
    __asm { rdtscp }
  }
  v4 = *(_QWORD *)(RtlpHypervisorSharedUserVa + 16)
     + (((v2 | (a2 << 32)) * (unsigned __int128)*(unsigned __int64 *)(RtlpHypervisorSharedUserVa + 8)) >> 64);
LABEL_8:
  v5 = (v4 + MEMORY[0x7FFE03B8]) >> MEMORY[0x7FFE03C7];
LABEL_9:
  *a1 = v5;
  return 1LL;
}
