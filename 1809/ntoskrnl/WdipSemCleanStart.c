/*
 * XREFs of WdipSemCleanStart @ 0x140744684
 * Callers:
 *     WdipSemInitialize @ 0x140744630 (WdipSemInitialize.c)
 *     WdipSemUpdate @ 0x1408B1E1C (WdipSemUpdate.c)
 * Callees:
 *     WdipSemGetLoggerIds @ 0x140718B9C (WdipSemGetLoggerIds.c)
 *     WdipSemCleanupGroupPolicy @ 0x1407446F0 (WdipSemCleanupGroupPolicy.c)
 *     WdipSemStartTimeoutCheck @ 0x140744710 (WdipSemStartTimeoutCheck.c)
 *     WdipSemLoadGroupPolicy @ 0x140744820 (WdipSemLoadGroupPolicy.c)
 *     WdipSemLoadConfigInfo @ 0x140744874 (WdipSemLoadConfigInfo.c)
 *     WdipSemEnableSemProvider @ 0x14074497C (WdipSemEnableSemProvider.c)
 *     WdipSemLoadScenarioTable @ 0x140744FA8 (WdipSemLoadScenarioTable.c)
 *     WdipSemShutdown @ 0x1408B20D0 (WdipSemShutdown.c)
 */

__int64 WdipSemCleanStart()
{
  int LoggerIds; // ebx

  LoggerIds = WdipSemGetLoggerIds();
  if ( LoggerIds >= 0 )
  {
    LoggerIds = WdipSemEnableSemProvider();
    if ( LoggerIds >= 0 )
    {
      LoggerIds = WdipSemLoadConfigInfo();
      if ( LoggerIds >= 0 )
      {
        LoggerIds = WdipSemLoadGroupPolicy();
        if ( LoggerIds >= 0 )
        {
          LoggerIds = WdipSemLoadScenarioTable();
          if ( LoggerIds >= 0 )
            LoggerIds = WdipSemStartTimeoutCheck();
        }
      }
    }
  }
  WdipSemCleanupGroupPolicy();
  if ( LoggerIds < 0 )
    WdipSemShutdown();
  else
    WdipSemEnabled = 1;
  return (unsigned int)LoggerIds;
}
