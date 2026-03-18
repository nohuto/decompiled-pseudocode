/*
 * XREFs of PopInitializeAdpm @ 0x1409DDD80
 * Callers:
 *     PoInitSystem @ 0x1409B2C10 (PoInitSystem.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x1400CC4D0 (ExInitializeResourceLite.c)
 *     memset @ 0x1401D1780 (memset.c)
 *     PopExtendConnectionState @ 0x140761D5C (PopExtendConnectionState.c)
 */

PVOID PopInitializeAdpm()
{
  ExInitializeResourceLite(&PopAdpmLock);
  memset(&PopConsoleContext, 0, 0x28uLL);
  PopConsoleContext = -1;
  PopMaximumConnectionSessions = 0;
  PopConnectionState = 0LL;
  dword_14040FDC0 = 3;
  return PopExtendConnectionState(0);
}
