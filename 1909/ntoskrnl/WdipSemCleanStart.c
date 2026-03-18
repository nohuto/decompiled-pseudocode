/*
 * XREFs of WdipSemCleanStart @ 0x14076E248
 * Callers:
 *     WdipSemInitialize @ 0x14076E1F4 (WdipSemInitialize.c)
 *     WdipSemUpdate @ 0x1408ED96C (WdipSemUpdate.c)
 * Callees:
 *     WdipSemGetLoggerIds @ 0x1407184B0 (WdipSemGetLoggerIds.c)
 *     WdipSemCleanupGroupPolicy @ 0x14076E2B4 (WdipSemCleanupGroupPolicy.c)
 *     WdipSemStartTimeoutCheck @ 0x14076E2D4 (WdipSemStartTimeoutCheck.c)
 *     WdipSemLoadGroupPolicy @ 0x14076E3DC (WdipSemLoadGroupPolicy.c)
 *     WdipSemLoadConfigInfo @ 0x14076E430 (WdipSemLoadConfigInfo.c)
 *     WdipSemEnableSemProvider @ 0x14076E520 (WdipSemEnableSemProvider.c)
 *     WdipSemLoadScenarioTable @ 0x14076EB64 (WdipSemLoadScenarioTable.c)
 *     WdipSemShutdown @ 0x1408EDC20 (WdipSemShutdown.c)
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
