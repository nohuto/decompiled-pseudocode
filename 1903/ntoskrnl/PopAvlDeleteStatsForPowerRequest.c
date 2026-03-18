/*
 * XREFs of PopAvlDeleteStatsForPowerRequest @ 0x14069E29C
 * Callers:
 *     PopStatsDeletePowerRequest @ 0x14069FDF8 (PopStatsDeletePowerRequest.c)
 *     PopPublishAndPurgePowerRequestStats @ 0x1408B73F4 (PopPublishAndPurgePowerRequestStats.c)
 * Callees:
 *     RtlDeleteElementGenericTableAvl @ 0x140001CA0 (RtlDeleteElementGenericTableAvl.c)
 *     PoUninitializeStopWatch @ 0x1400EB468 (PoUninitializeStopWatch.c)
 *     PopFreeUnicodeString @ 0x14069DCF4 (PopFreeUnicodeString.c)
 *     PopGetStopWatchByRequestType @ 0x14069E304 (PopGetStopWatchByRequestType.c)
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
