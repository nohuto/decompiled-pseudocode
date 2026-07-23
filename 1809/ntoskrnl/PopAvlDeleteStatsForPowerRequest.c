/*
 * XREFs of PopAvlDeleteStatsForPowerRequest @ 0x14058983C
 * Callers:
 *     PopStatsDeletePowerRequest @ 0x14058ABBC (PopStatsDeletePowerRequest.c)
 *     PopPublishAndPurgePowerRequestStats @ 0x14087C07C (PopPublishAndPurgePowerRequestStats.c)
 * Callees:
 *     PoUninitializeStopWatch @ 0x140001E10 (PoUninitializeStopWatch.c)
 *     RtlDeleteElementGenericTableAvl @ 0x140006CA0 (RtlDeleteElementGenericTableAvl.c)
 *     PopFreeUnicodeString @ 0x1405892E0 (PopFreeUnicodeString.c)
 *     PopGetStopWatchByRequestType @ 0x1405898A4 (PopGetStopWatchByRequestType.c)
 */

void __fastcall PopAvlDeleteStatsForPowerRequest(char *Buffer)
{
  unsigned int i; // ebx
  _QWORD *StopWatchByRequestType; // rax
  __int128 v4; // [rsp+20h] [rbp-18h] BYREF

  for ( i = 0; i < 4; ++i )
  {
    StopWatchByRequestType = (_QWORD *)PopGetStopWatchByRequestType(Buffer, i);
    if ( StopWatchByRequestType )
      PoUninitializeStopWatch(StopWatchByRequestType);
  }
  v4 = *(_OWORD *)(Buffer + 8);
  RtlDeleteElementGenericTableAvl(&PowerRequestStatsDatabase, Buffer);
  PopFreeUnicodeString((__int64)&v4);
}
