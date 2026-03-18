/*
 * XREFs of PfpPowerActionStartScenarioTracing @ 0x140596614
 * Callers:
 *     PfPowerActionNotify @ 0x140596AF4 (PfPowerActionNotify.c)
 * Callees:
 *     PfLogEvent @ 0x1400956A8 (PfLogEvent.c)
 *     PfTAccessTracingCleanup @ 0x14059E204 (PfTAccessTracingCleanup.c)
 *     PfTAccessTracingStart @ 0x14059E354 (PfTAccessTracingStart.c)
 *     MmPerformMemoryListCommand @ 0x14059E438 (MmPerformMemoryListCommand.c)
 */

__int64 __fastcall PfpPowerActionStartScenarioTracing(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v5; // [rsp+20h] [rbp-18h] BYREF
  __int64 v6; // [rsp+28h] [rbp-10h]

  PfTAccessTracingCleanup(&PfTGlobals, a2, 4LL);
  MmPerformMemoryListCommand(1LL);
  PfTAccessTracingStart(&PfTGlobals, &PfKernelGlobals, 4LL);
  v3 = *(int *)(a1 + 48);
  v6 = 0LL;
  v5 = v3;
  LODWORD(v6) = 4 * (unsigned __int16)*(_DWORD *)(a1 + 52);
  return PfLogEvent(
           27,
           dword_140467B5C
         + (unsigned int)((((MEMORY[0xFFFFF78000000004] * (unsigned __int64)MEMORY[0xFFFFF78000000320]) >> 24)
                         + ((MEMORY[0xFFFFF78000000004] * HIDWORD(MEMORY[0xFFFFF78000000320])) << 8)) >> 10),
           &v5,
           0x10u);
}
