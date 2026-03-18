/*
 * XREFs of PopInitializeAdpm @ 0x140A213E0
 * Callers:
 *     PoInitSystem @ 0x140A0685C (PoInitSystem.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x140047770 (ExInitializeResourceLite.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     PopExtendConnectionState @ 0x14078B00C (PopExtendConnectionState.c)
 */

PVOID PopInitializeAdpm()
{
  ExInitializeResourceLite(&PopAdpmLock);
  memset(&PopConsoleContext, 0, 0x28uLL);
  PopConsoleContext = -1;
  PopMaximumConnectionSessions = 0;
  PopConnectionState = 0LL;
  dword_1404387A0 = 3;
  return PopExtendConnectionState(0);
}
