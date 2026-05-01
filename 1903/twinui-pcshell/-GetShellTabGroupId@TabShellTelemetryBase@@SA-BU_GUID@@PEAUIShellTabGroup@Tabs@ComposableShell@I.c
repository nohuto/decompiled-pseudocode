/*
 * XREFs of ?GetShellTabGroupId@TabShellTelemetryBase@@SA?BU_GUID@@PEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1802306AC
 * Callers:
 *     LoggingUtil::GetGroupIdFromTab @ 0x18022FD50 (LoggingUtil--GetGroupIdFromTab.c)
 *     ?InvokingAppManagedTabCloseRequestedHandlers@TabViewManagerCloseTabRequested@TabViewManagerMeasures@@QEAAXPEAUIApplicationView@@PEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@PEAUIShellTabGroup@5678@@Z @ 0x180231BCC (-InvokingAppManagedTabCloseRequestedHandlers@TabViewManagerCloseTabRequested@TabViewManagerMeasu.c)
 *     ?StartActivity@TabViewManagerAddVirtualTab@TabViewManagerMeasures@@QEAAXPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@I@Z @ 0x180237CDC (-StartActivity@TabViewManagerAddVirtualTab@TabViewManagerMeasures@@QEAAXPEAUIShellTab@Tabs@Compo.c)
 *     ?StartActivity@TabViewManager_ReplacementTabSelection@TabViewManagerTraceLogging@@QEAAXPEAUIApplicationView@@0PEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@I@Z @ 0x180238E3C (-StartActivity@TabViewManager_ReplacementTabSelection@TabViewManagerTraceLogging@@QEAAXPEAUIAppl.c)
 *     ?StartActivity@TabViewManager_UpdateFallbackTabForGroup@TabViewManagerTraceLogging@@QEAAXPEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@PEAUIShellTab@4567@@Z @ 0x180238FD8 (-StartActivity@TabViewManager_UpdateFallbackTabForGroup@TabViewManagerTraceLogging@@QEAAXPEAUISh.c)
 *     ?Stop@TabViewManagerAddVirtualTab@TabViewManagerMeasures@@QEAAXPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x180239384 (-Stop@TabViewManagerAddVirtualTab@TabViewManagerMeasures@@QEAAXPEAUIShellTab@Tabs@ComposableShel.c)
 *     ?Stop@TabViewManager_GetOrCreateTabForWindowId@TabViewManagerTraceLogging@@QEAAXPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@_N@Z @ 0x1802399EC (-Stop@TabViewManager_GetOrCreateTabForWindowId@TabViewManagerTraceLogging@@QEAAXPEAUIShellTab@Ta.c)
 *     ?Stop@TabViewManager_UpdateFallbackTabForGroup@TabViewManagerTraceLogging@@QEAAXPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x180239D20 (-Stop@TabViewManager_UpdateFallbackTabForGroup@TabViewManagerTraceLogging@@QEAAXPEAUIShellTab@Ta.c)
 *     ?TabViewManagerAddVirtualTabToView@TabViewManagerAddVirtualTab@TabViewManagerMeasures@@QEAAXPEAUIApplicationView@@PEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x18023DFCC (-TabViewManagerAddVirtualTabToView@TabViewManagerAddVirtualTab@TabViewManagerMeasures@@QEAAXPEAU.c)
 *     ?TabViewManagerCloseViewForTab_@TabViewManagerMeasures@@QEAAXPEAUIApplicationView@@PEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@PEAUIShellTab@4567@@Z @ 0x18023E10C (-TabViewManagerCloseViewForTab_@TabViewManagerMeasures@@QEAAXPEAUIApplicationView@@PEAUIShellTab.c)
 *     ?TabViewManagerClosingTab@TabViewManagerCloseTab@TabViewManagerMeasures@@QEAAXPEAUIApplicationView@@PEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@PEAUIShellTab@5678@I@Z @ 0x18023E25C (-TabViewManagerClosingTab@TabViewManagerCloseTab@TabViewManagerMeasures@@QEAAXPEAUIApplicationVi.c)
 *     ?TabViewManagerSelectTab@TabViewManagerSelectTabRequested@TabViewManagerMeasures@@QEAAXPEAUIApplicationView@@PEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@PEAUIShellTab@5678@@Z @ 0x18023E3D8 (-TabViewManagerSelectTab@TabViewManagerSelectTabRequested@TabViewManagerMeasures@@QEAAXPEAUIAppl.c)
 *     ?TabViewManagerTabAddedForView@TabViewManagerConnectTabToView@TabViewManagerMeasures@@QEAAXPEAUIApplicationView@@PEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@PEAUIShellTab@5678@_N@Z @ 0x18023E520 (-TabViewManagerTabAddedForView@TabViewManagerConnectTabToView@TabViewManagerMeasures@@QEAAXPEAUI.c)
 *     ?TabViewManager_AddTabAndViewToMaps_@TabViewManagerTraceLogging@@QEAAXPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@PEAUIApplicationView@@@Z @ 0x18023E69C (-TabViewManager_AddTabAndViewToMaps_@TabViewManagerTraceLogging@@QEAAXPEAUIShellTab@Tabs@Composa.c)
 *     ?TabViewManager_BoundingRectRequestedForTab_@TabViewManagerTraceLogging@@QEAAXPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@AEBUtagRECT@@@Z @ 0x18023E7AC (-TabViewManager_BoundingRectRequestedForTab_@TabViewManagerTraceLogging@@QEAAXPEAUIShellTab@Tabs.c)
 *     ?TabViewManager_OnTabViewOperationRequested_@TabViewManagerTraceLogging@@QEAAXPEAUIApplicationView@@PEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@I@Z @ 0x18023EA40 (-TabViewManager_OnTabViewOperationRequested_@TabViewManagerTraceLogging@@QEAAXPEAUIApplicationVi.c)
 *     ?TabViewManager_OnThumbnailRequested_@TabViewManagerTraceLogging@@QEAAXPEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@PEAUIShellTab@3456@@Z @ 0x18023EB98 (-TabViewManager_OnThumbnailRequested_@TabViewManagerTraceLogging@@QEAAXPEAUIShellTabGroup@Tabs@C.c)
 *     ?TabViewManager_RemoveTabAndViewFromMaps_@TabViewManagerTraceLogging@@QEAAXPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@PEAUIApplicationView@@@Z @ 0x18023ED34 (-TabViewManager_RemoveTabAndViewFromMaps_@TabViewManagerTraceLogging@@QEAAXPEAUIShellTab@Tabs@Co.c)
 *     ?TabViewManager_RemovingViewFromTabGroup_@TabViewManagerTraceLogging@@QEAAXPEAUIApplicationView@@PEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@I@Z @ 0x18023EE44 (-TabViewManager_RemovingViewFromTabGroup_@TabViewManagerTraceLogging@@QEAAXPEAUIApplicationView@.c)
 *     ?TabViewManager_ViewForTabNotFound_@TabViewManagerTraceLogging@@QEAAXPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x18023EFAC (-TabViewManager_ViewForTabNotFound_@TabViewManagerTraceLogging@@QEAAXPEAUIShellTab@Tabs@Composab.c)
 *     ?ZombieTab@TabViewManagerCloseTabRequested@TabViewManagerMeasures@@QEAAXPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x18024239C (-ZombieTab@TabViewManagerCloseTabRequested@TabViewManagerMeasures@@QEAAXPEAUIShellTab@Tabs@Compo.c)
 *     ?TabAppPolicySettings_IsViewInActivationGroup_@TabViewManagerTraceLogging@@QEAAXPEBGHHPEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@_N@Z @ 0x180245A0C (-TabAppPolicySettings_IsViewInActivationGroup_@TabViewManagerTraceLogging@@QEAAXPEBGHHPEAUIShell.c)
 *     ?HotKeyHandlerMessageReceived_@TabViewManagerMeasures@@QEAAXIPEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@PEAUIShellTab@3456@AEBU_GUID@@@Z @ 0x18025AA24 (-HotKeyHandlerMessageReceived_@TabViewManagerMeasures@@QEAAXIPEAUIShellTabGroup@Tabs@ComposableS.c)
 * Callees:
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

struct _GUID *__fastcall TabShellTelemetryBase::GetShellTabGroupId(
        struct _GUID *__return_ptr retstr,
        struct Windows::Internal::ComposableShell::Tabs::IShellTabGroup *a2)
{
  struct _GUID v4; // [rsp+20h] [rbp-28h] BYREF

  *retstr = GUID_NULL;
  if ( a2
    && !(*(unsigned int (__fastcall **)(struct Windows::Internal::ComposableShell::Tabs::IShellTabGroup *, struct _GUID *))(*(_QWORD *)a2 + 48LL))(
          a2,
          &v4) )
  {
    *retstr = v4;
  }
  return retstr;
}
