/*
 * XREFs of WdipSemCleanStart @ 0x140743494
 * Callers:
 *     WdipSemInitialize @ 0x140743440 (WdipSemInitialize.c)
 *     WdipSemUpdate @ 0x1408B0BBC (WdipSemUpdate.c)
 * Callees:
 *     WdipSemGetLoggerIds @ 0x1407178FC (WdipSemGetLoggerIds.c)
 *     WdipSemCleanupGroupPolicy @ 0x140743500 (WdipSemCleanupGroupPolicy.c)
 *     WdipSemStartTimeoutCheck @ 0x140743520 (WdipSemStartTimeoutCheck.c)
 *     WdipSemLoadGroupPolicy @ 0x140743630 (WdipSemLoadGroupPolicy.c)
 *     WdipSemLoadConfigInfo @ 0x140743684 (WdipSemLoadConfigInfo.c)
 *     WdipSemEnableSemProvider @ 0x14074378C (WdipSemEnableSemProvider.c)
 *     WdipSemLoadScenarioTable @ 0x140743DB8 (WdipSemLoadScenarioTable.c)
 *     WdipSemShutdown @ 0x1408B0E70 (WdipSemShutdown.c)
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
