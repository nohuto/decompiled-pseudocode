/*
 * XREFs of PopIsDataAccruedByPowerRequestStats @ 0x1405897D8
 * Callers:
 *     PopStatsDeletePowerRequest @ 0x14058ABBC (PopStatsDeletePowerRequest.c)
 * Callees:
 *     PoQueryStopWatch @ 0x140001DC4 (PoQueryStopWatch.c)
 *     PopGetStopWatchByRequestType @ 0x1405898A4 (PopGetStopWatchByRequestType.c)
 */

char __fastcall PopIsDataAccruedByPowerRequestStats(__int64 a1)
{
  char v1; // bl
  unsigned int v3; // edi
  _QWORD *StopWatchByRequestType; // rax
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v1 = 0;
  v3 = 0;
  while ( 1 )
  {
    StopWatchByRequestType = (_QWORD *)PopGetStopWatchByRequestType(a1, v3);
    if ( StopWatchByRequestType )
    {
      PoQueryStopWatch(StopWatchByRequestType, &v6, 0LL);
      if ( v6 )
        break;
    }
    if ( ++v3 >= 4 )
      return v1;
  }
  return 1;
}
