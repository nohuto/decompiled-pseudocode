/*
 * XREFs of PfpLogScenarioEvent @ 0x14071BCD4
 * Callers:
 *     PfPowerActionNotify @ 0x140567F10 (PfPowerActionNotify.c)
 *     PfpProcessScenarioPhase @ 0x14071BBDC (PfpProcessScenarioPhase.c)
 * Callees:
 *     PfLogEvent @ 0x1400D53D8 (PfLogEvent.c)
 *     PfTSetTraceWorkerPriority @ 0x140175A7C (PfTSetTraceWorkerPriority.c)
 *     MmPerformMemoryListCommand @ 0x14056EA20 (MmPerformMemoryListCommand.c)
 *     PfGenerateTrace @ 0x14071BDE4 (PfGenerateTrace.c)
 */

__int64 __fastcall PfpLogScenarioEvent(int a1, char a2, char a3, unsigned __int16 a4, char a5)
{
  __int64 v5; // rbx
  signed int v9; // r14d
  __int64 result; // rax
  _QWORD v11[3]; // [rsp+20h] [rbp-18h] BYREF

  v5 = a1;
  MmPerformMemoryListCommand();
  v9 = PfTSetTraceWorkerPriority(0x10u);
  PfGenerateTrace(&Thread, 1LL);
  v11[0] = v5;
  v11[1] = a2 & 3 | (4 * (a4 | ((unsigned __int8)(a3 & 3) << 16)));
  result = PfLogEvent(
             27,
             dword_14043C09C
           + (unsigned int)((((MEMORY[0xFFFFF78000000004] * (unsigned __int64)MEMORY[0xFFFFF78000000320]) >> 24)
                           + ((MEMORY[0xFFFFF78000000004] * HIDWORD(MEMORY[0xFFFFF78000000320])) << 8)) >> 10),
             v11,
             0x10u);
  if ( (a5 & 1) != 0 )
    result = PfGenerateTrace(&Thread, 0LL);
  if ( v9 <= 31 )
    return PfTSetTraceWorkerPriority(v9);
  return result;
}
