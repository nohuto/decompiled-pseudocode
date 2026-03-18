/*
 * XREFs of EtwpInitializeCoverage @ 0x14076FE10
 * Callers:
 *     EtwpInitialize @ 0x140A15AEC (EtwpInitialize.c)
 * Callees:
 *     TraceLoggingRegisterEx @ 0x140747E64 (TraceLoggingRegisterEx.c)
 */

TLG_STATUS EtwpInitializeCoverage()
{
  MEMORY[0xFFFFF7800000037C] = 1;
  EtwpCoverageLock = 0LL;
  return TraceLoggingRegisterEx(&stru_140426688, (TLG_PENABLECALLBACK)EtwpCoverageProvEnableCallback, 0LL);
}
