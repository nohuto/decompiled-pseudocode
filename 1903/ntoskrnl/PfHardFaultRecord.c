/*
 * XREFs of PfHardFaultRecord @ 0x14011C95C
 * Callers:
 *     MiIssueHardFault @ 0x140007100 (MiIssueHardFault.c)
 * Callees:
 *     EtwGetKernelTraceTimestampSilo @ 0x14011C9E0 (EtwGetKernelTraceTimestampSilo.c)
 */

__int64 __fastcall PfHardFaultRecord(__int64 a1, __int64 a2, int a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 result; // rax

  *(_QWORD *)(a1 + 32) = a2;
  *(_QWORD *)(a1 + 40) = a4;
  *(_QWORD *)(a1 + 48) = *(_QWORD *)(a5 + 24);
  *(_DWORD *)(a1 + 56) = *(_DWORD *)(a6 + 1616);
  *(_DWORD *)(a1 + 60) = a3;
  if ( (PerfGlobalGroupMask & 0x2000) != 0 )
  {
    EtwGetKernelTraceTimestampSilo(a1, 0x2000LL, *(_QWORD *)(*(_QWORD *)(a6 + 544) + 1776LL));
  }
  else
  {
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
  }
  result = (unsigned int)dword_140503A14;
  if ( (dword_140503A14 & 1) != 0 )
  {
    result = MEMORY[0xFFFFF78000000320];
    *(_QWORD *)(a1 + 64) = MEMORY[0xFFFFF78000000320];
  }
  else
  {
    *(_QWORD *)(a1 + 64) = 0LL;
  }
  return result;
}
