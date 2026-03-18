/*
 * XREFs of EtwpInitializeCoverage @ 0x140742F9C
 * Callers:
 *     EtwpInitialize @ 0x1409D0620 (EtwpInitialize.c)
 * Callees:
 *     TraceLoggingRegisterEx @ 0x14071DC58 (TraceLoggingRegisterEx.c)
 */

TLG_STATUS EtwpInitializeCoverage()
{
  MEMORY[0xFFFFF7800000037C] = 1;
  EtwpCoverageLock = 0LL;
  return TraceLoggingRegisterEx(&stru_140400340, (TLG_PENABLECALLBACK)EtwpCoverageProvEnableCallback, 0LL);
}
