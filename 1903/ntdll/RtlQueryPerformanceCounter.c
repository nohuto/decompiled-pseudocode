/*
 * XREFs of RtlQueryPerformanceCounter @ 0x18000BBB0
 * Callers:
 *     sub_18000471C @ 0x18000471C (sub_18000471C.c)
 *     sub_180004BA8 @ 0x180004BA8 (sub_180004BA8.c)
 *     RtlCapabilityCheck @ 0x18000B770 (RtlCapabilityCheck.c)
 *     RtlGetSystemTimePrecise @ 0x18000BAF0 (RtlGetSystemTimePrecise.c)
 *     sub_18005364C @ 0x18005364C (sub_18005364C.c)
 *     RtlGetInterruptTimePrecise @ 0x1800E3F60 (RtlGetInterruptTimePrecise.c)
 *     RtlGetMultiTimePrecise @ 0x1800E4010 (RtlGetMultiTimePrecise.c)
 *     sub_180110FD0 @ 0x180110FD0 (sub_180110FD0.c)
 * Callees:
 *     ZwQueryPerformanceCounter @ 0x18009CD00 (ZwQueryPerformanceCounter.c)
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
    if ( qword_180163EC8 && *(_DWORD *)qword_180163EC8 )
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
      PerformanceCounter->QuadPart = (unsigned __int64)(*(_QWORD *)(qword_180163EC8 + 16)
                                                      + (((v1 | (v2 << 32))
                                                        * (unsigned __int128)*(unsigned __int64 *)(qword_180163EC8 + 8)) >> 64)
                                                      + MEMORY[0x7FFE03B8]) >> MEMORY[0x7FFE03C7];
      return 1;
    }
LABEL_21:
    ZwQueryPerformanceCounter(&PerformanceCountera, 0LL);
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
