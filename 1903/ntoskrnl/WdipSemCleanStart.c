/*
 * XREFs of WdipSemCleanStart @ 0x14076B3F4
 * Callers:
 *     WdipSemInitialize @ 0x14076B3A0 (WdipSemInitialize.c)
 *     WdipSemUpdate @ 0x1408EE05C (WdipSemUpdate.c)
 * Callees:
 *     WdipSemGetLoggerIds @ 0x1407166C0 (WdipSemGetLoggerIds.c)
 *     WdipSemCleanupGroupPolicy @ 0x14076B460 (WdipSemCleanupGroupPolicy.c)
 *     WdipSemStartTimeoutCheck @ 0x14076B480 (WdipSemStartTimeoutCheck.c)
 *     WdipSemLoadGroupPolicy @ 0x14076B588 (WdipSemLoadGroupPolicy.c)
 *     WdipSemLoadConfigInfo @ 0x14076B5DC (WdipSemLoadConfigInfo.c)
 *     WdipSemEnableSemProvider @ 0x14076B6CC (WdipSemEnableSemProvider.c)
 *     WdipSemLoadScenarioTable @ 0x14076BD10 (WdipSemLoadScenarioTable.c)
 *     WdipSemShutdown @ 0x1408EE310 (WdipSemShutdown.c)
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
