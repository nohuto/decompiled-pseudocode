/*
 * XREFs of IoAllocateGenericErrorLogEntry @ 0x1402980A8
 * Callers:
 *     IopLogBlockedDriverEvent @ 0x140853A34 (IopLogBlockedDriverEvent.c)
 *     PnpLogEvent @ 0x1408618D8 (PnpLogEvent.c)
 *     MiLogFailedDriverLoad @ 0x14088A278 (MiLogFailedDriverLoad.c)
 *     MiBadMemoryLogger @ 0x140897BF0 (MiBadMemoryLogger.c)
 * Callees:
 *     IopAllocateErrorLogEntry @ 0x14017778C (IopAllocateErrorLogEntry.c)
 */

_WORD *__fastcall IoAllocateGenericErrorLogEntry(char a1)
{
  return IopAllocateErrorLogEntry(0LL, 0LL, a1);
}
