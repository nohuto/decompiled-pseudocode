/*
 * XREFs of PopAwayModePowerRequest @ 0x1408A2880
 * Callers:
 *     <none>
 * Callees:
 *     PopAcquireAwaymodeLock @ 0x140595FB8 (PopAcquireAwaymodeLock.c)
 *     PopReleaseAwaymodeLock @ 0x140595FF8 (PopReleaseAwaymodeLock.c)
 */

__int64 __fastcall PopAwayModePowerRequest(__int64 a1, __int64 a2, char a3)
{
  PopAcquireAwaymodeLock();
  byte_140443AD0 = a3 != 0;
  PopReleaseAwaymodeLock();
  return 0LL;
}
