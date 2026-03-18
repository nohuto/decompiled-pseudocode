/*
 * XREFs of IoAllocateGenericErrorLogEntry @ 0x140298348
 * Callers:
 *     IopLogBlockedDriverEvent @ 0x140854334 (IopLogBlockedDriverEvent.c)
 *     PnpLogEvent @ 0x1408621D8 (PnpLogEvent.c)
 *     MiLogFailedDriverLoad @ 0x14088AA58 (MiLogFailedDriverLoad.c)
 *     MiBadMemoryLogger @ 0x1408983D0 (MiBadMemoryLogger.c)
 * Callees:
 *     IopAllocateErrorLogEntry @ 0x14017709C (IopAllocateErrorLogEntry.c)
 */

_WORD *__fastcall IoAllocateGenericErrorLogEntry(char a1)
{
  return IopAllocateErrorLogEntry(0LL, 0LL, a1);
}
