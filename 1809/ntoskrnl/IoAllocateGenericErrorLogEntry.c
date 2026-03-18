/*
 * XREFs of IoAllocateGenericErrorLogEntry @ 0x140282DD8
 * Callers:
 *     IopLogBlockedDriverEvent @ 0x14081A418 (IopLogBlockedDriverEvent.c)
 *     PnpLogEvent @ 0x140827E0C (PnpLogEvent.c)
 *     MiLogFailedDriverLoad @ 0x14084E988 (MiLogFailedDriverLoad.c)
 *     MiBadMemoryLogger @ 0x14085B860 (MiBadMemoryLogger.c)
 * Callees:
 *     IopAllocateErrorLogEntry @ 0x14016CB6C (IopAllocateErrorLogEntry.c)
 */

_WORD *__fastcall IoAllocateGenericErrorLogEntry(char a1)
{
  return IopAllocateErrorLogEntry(0LL, 0LL, a1);
}
