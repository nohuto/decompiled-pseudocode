/*
 * XREFs of ?_Log_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18018E480
 * Callers:
 *     ?BeginStartTelemetryTimeout@XamlLauncherState@@AEAAXXZ @ 0x180045D2C (-BeginStartTelemetryTimeout@XamlLauncherState@@AEAAXXZ.c)
 *     ?BeginCortanaReadinessCutoff@XamlLauncherState@@AEAAXXZ @ 0x18005ED34 (-BeginCortanaReadinessCutoff@XamlLauncherState@@AEAAXXZ.c)
 *     ?BeginShowFlyoutActivityTimeout@MeetNowExperienceManager@@AEAAXXZ @ 0x1800976E8 (-BeginShowFlyoutActivityTimeout@MeetNowExperienceManager@@AEAAXXZ.c)
 *     ?PositionView@FullScreenPositioner@@AEAAXPEAUIApplicationView@@W4PositionViewShowOperation@1@_N@Z @ 0x18018CE00 (-PositionView@FullScreenPositioner@@AEAAXPEAUIApplicationView@@W4PositionViewShowOperation@1@_N@.c)
 *     ?BeginJumpViewTelemetryTimeout@CJumpViewExperienceManager@@AEAAXXZ @ 0x1801BA54C (-BeginJumpViewTelemetryTimeout@CJumpViewExperienceManager@@AEAAXXZ.c)
 *     ?BeginCortanaTelemetryTimeout@XamlLauncherState@@AEAAXXZ @ 0x180319F34 (-BeginCortanaTelemetryTimeout@XamlLauncherState@@AEAAXXZ.c)
 *     ?_RepositionAppViewsOnWorkAreaChange@SurfaceHubPositioner@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x1803B98C8 (-_RepositionAppViewsOnWorkAreaChange@SurfaceHubPositioner@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 *     ?_SetDefaultLayout@SurfaceHubPositioner@@AEAAJPEAUIApplicationView@@_N@Z @ 0x1803B9B6C (-_SetDefaultLayout@SurfaceHubPositioner@@AEAAJPEAUIApplicationView@@_N@Z.c)
 * Callees:
 *     ?ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z @ 0x180075640 (-ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z.c)
 */

void __fastcall wil::details::in1diag3::_Log_NullAlloc(
        wil::details::in1diag3 *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  wil::details::ReportFailure_Hr((__int64)this, a2, a3, 0LL, 0LL, retaddr);
}
