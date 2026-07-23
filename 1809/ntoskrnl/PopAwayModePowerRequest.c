/*
 * XREFs of PopAwayModePowerRequest @ 0x1408675A0
 * Callers:
 *     <none>
 * Callees:
 *     PopAcquireAwaymodeLock @ 0x14056731C (PopAcquireAwaymodeLock.c)
 *     PopReleaseAwaymodeLock @ 0x14056735C (PopReleaseAwaymodeLock.c)
 */

__int64 __fastcall PopAwayModePowerRequest(__int64 a1, __int64 a2, char a3)
{
  PopAcquireAwaymodeLock();
  byte_140419190 = a3 != 0;
  PopReleaseAwaymodeLock();
  return 0LL;
}
