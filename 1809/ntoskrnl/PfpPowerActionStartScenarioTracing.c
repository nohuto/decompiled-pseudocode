/*
 * XREFs of PfpPowerActionStartScenarioTracing @ 0x140567844
 * Callers:
 *     PfPowerActionNotify @ 0x140568F10 (PfPowerActionNotify.c)
 * Callees:
 *     PfLogEvent @ 0x1400D5478 (PfLogEvent.c)
 *     PfTAccessTracingCleanup @ 0x14056698C (PfTAccessTracingCleanup.c)
 *     PfTAccessTracingStart @ 0x140566FF4 (PfTAccessTracingStart.c)
 *     MmPerformMemoryListCommand @ 0x14056FA20 (MmPerformMemoryListCommand.c)
 */

__int64 __fastcall PfpPowerActionStartScenarioTracing(__int64 a1, __int64 a2)
{
  __int64 v4; // [rsp+20h] [rbp-18h] BYREF
  __int64 v5; // [rsp+28h] [rbp-10h]

  PfTAccessTracingCleanup((__int64)&PfTGlobals, a2, 4);
  MmPerformMemoryListCommand(1LL);
  PfTAccessTracingStart((__int64)&PfTGlobals, (__int64)&PfKernelGlobals, 4);
  v5 = 0LL;
  v4 = *(int *)(a1 + 48);
  LODWORD(v5) = 4 * (unsigned __int16)*(_DWORD *)(a1 + 52);
  return PfLogEvent(
           27,
           dword_14043D15C
         + (unsigned int)((((MEMORY[0xFFFFF78000000004] * (unsigned __int64)MEMORY[0xFFFFF78000000320]) >> 24)
                         + ((MEMORY[0xFFFFF78000000004] * HIDWORD(MEMORY[0xFFFFF78000000320])) << 8)) >> 10),
           &v4,
           0x10u);
}
