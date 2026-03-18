/*
 * XREFs of WdipSemCleanStart @ 0x1407434B4
 * Callers:
 *     WdipSemInitialize @ 0x140743460 (WdipSemInitialize.c)
 *     WdipSemUpdate @ 0x1408B0BDC (WdipSemUpdate.c)
 * Callees:
 *     WdipSemGetLoggerIds @ 0x14071791C (WdipSemGetLoggerIds.c)
 *     WdipSemCleanupGroupPolicy @ 0x140743520 (WdipSemCleanupGroupPolicy.c)
 *     WdipSemStartTimeoutCheck @ 0x140743540 (WdipSemStartTimeoutCheck.c)
 *     WdipSemLoadGroupPolicy @ 0x140743650 (WdipSemLoadGroupPolicy.c)
 *     WdipSemLoadConfigInfo @ 0x1407436A4 (WdipSemLoadConfigInfo.c)
 *     WdipSemEnableSemProvider @ 0x1407437AC (WdipSemEnableSemProvider.c)
 *     WdipSemLoadScenarioTable @ 0x140743DD8 (WdipSemLoadScenarioTable.c)
 *     WdipSemShutdown @ 0x1408B0E90 (WdipSemShutdown.c)
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
