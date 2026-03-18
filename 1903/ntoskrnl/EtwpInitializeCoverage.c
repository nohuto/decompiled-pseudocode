/*
 * XREFs of EtwpInitializeCoverage @ 0x14076CFBC
 * Callers:
 *     EtwpInitialize @ 0x140A1590C (EtwpInitialize.c)
 * Callees:
 *     TraceLoggingRegisterEx @ 0x140745F64 (TraceLoggingRegisterEx.c)
 */

TLG_STATUS EtwpInitializeCoverage()
{
  MEMORY[0xFFFFF7800000037C] = 1;
  EtwpCoverageLock = 0LL;
  return TraceLoggingRegisterEx(&stru_140426688, (TLG_PENABLECALLBACK)EtwpCoverageProvEnableCallback, 0LL);
}
