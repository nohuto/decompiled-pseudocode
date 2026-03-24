/*
 * XREFs of IoAllocateGenericErrorLogEntry @ 0x140282ED8
 * Callers:
 *     IopLogBlockedDriverEvent @ 0x14081A3F8 (IopLogBlockedDriverEvent.c)
 *     PnpLogEvent @ 0x140827DEC (PnpLogEvent.c)
 *     MiLogFailedDriverLoad @ 0x14084E968 (MiLogFailedDriverLoad.c)
 *     MiBadMemoryLogger @ 0x14085B840 (MiBadMemoryLogger.c)
 * Callees:
 *     IopAllocateErrorLogEntry @ 0x14016CB8C (IopAllocateErrorLogEntry.c)
 */

_WORD *__fastcall IoAllocateGenericErrorLogEntry(char a1)
{
  return IopAllocateErrorLogEntry(0LL, 0LL, a1);
}
