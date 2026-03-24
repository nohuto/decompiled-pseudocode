/*
 * XREFs of PopAwayModePowerRequest @ 0x140866340
 * Callers:
 *     <none>
 * Callees:
 *     PopAcquireAwaymodeLock @ 0x14056631C (PopAcquireAwaymodeLock.c)
 *     PopReleaseAwaymodeLock @ 0x14056635C (PopReleaseAwaymodeLock.c)
 */

__int64 __fastcall PopAwayModePowerRequest(__int64 a1, __int64 a2, char a3)
{
  PopAcquireAwaymodeLock();
  byte_1404180D0 = a3 != 0;
  PopReleaseAwaymodeLock();
  return 0LL;
}
