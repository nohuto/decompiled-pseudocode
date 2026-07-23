/*
 * XREFs of IoAllocateGenericErrorLogEntry @ 0x1402830C8
 * Callers:
 *     IopLogBlockedDriverEvent @ 0x14081B5F8 (IopLogBlockedDriverEvent.c)
 *     PnpLogEvent @ 0x140828FEC (PnpLogEvent.c)
 *     MiLogFailedDriverLoad @ 0x14084FBC8 (MiLogFailedDriverLoad.c)
 *     MiBadMemoryLogger @ 0x14085CAA0 (MiBadMemoryLogger.c)
 * Callees:
 *     IopAllocateErrorLogEntry @ 0x14016CC8C (IopAllocateErrorLogEntry.c)
 */

_WORD *__fastcall IoAllocateGenericErrorLogEntry(char a1)
{
  return IopAllocateErrorLogEntry(0LL, 0LL, a1);
}
