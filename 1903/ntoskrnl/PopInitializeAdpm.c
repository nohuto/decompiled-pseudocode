/*
 * XREFs of PopInitializeAdpm @ 0x140A21200
 * Callers:
 *     PoInitSystem @ 0x140A06340 (PoInitSystem.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x1400476D0 (ExInitializeResourceLite.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     PopExtendConnectionState @ 0x140788BAC (PopExtendConnectionState.c)
 */

PVOID PopInitializeAdpm()
{
  ExInitializeResourceLite(&PopAdpmLock);
  memset(&PopConsoleContext, 0, 0x28uLL);
  PopConsoleContext = -1;
  PopMaximumConnectionSessions = 0;
  PopConnectionState = 0LL;
  dword_140438820 = 3;
  return PopExtendConnectionState(0);
}
