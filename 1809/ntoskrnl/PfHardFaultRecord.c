/*
 * XREFs of PfHardFaultRecord @ 0x140019E98
 * Callers:
 *     MiIssueHardFault @ 0x14001BCD0 (MiIssueHardFault.c)
 * Callees:
 *     EtwGetKernelTraceTimestampSilo @ 0x140019DBC (EtwGetKernelTraceTimestampSilo.c)
 */

__int64 __fastcall PfHardFaultRecord(
        LARGE_INTEGER *a1,
        LARGE_INTEGER a2,
        LONG a3,
        LARGE_INTEGER a4,
        LARGE_INTEGER *a5,
        __int64 a6)
{
  __int64 result; // rax

  a1[4] = a2;
  a1[5] = a4;
  a1[6] = a5[3];
  a1[7].LowPart = *(_DWORD *)(a6 + 1600);
  a1[7].HighPart = a3;
  if ( (PerfGlobalGroupMask & 0x2000) != 0 )
  {
    EtwGetKernelTraceTimestampSilo(a1, 0x2000u, *(_QWORD *)(*(_QWORD *)(a6 + 544) + 1728LL));
  }
  else
  {
    a1->QuadPart = 0LL;
    a1[1].QuadPart = 0LL;
  }
  result = (unsigned int)dword_1404D8614;
  if ( (dword_1404D8614 & 1) != 0 )
  {
    result = MEMORY[0xFFFFF78000000320];
    a1[8].QuadPart = MEMORY[0xFFFFF78000000320];
  }
  else
  {
    a1[8].QuadPart = 0LL;
  }
  return result;
}
