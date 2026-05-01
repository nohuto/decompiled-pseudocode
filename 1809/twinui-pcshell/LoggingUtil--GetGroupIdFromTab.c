/*
 * XREFs of LoggingUtil::GetGroupIdFromTab @ 0x1801DC804
 * Callers:
 *     ?Stop@TabViewManagerAddVirtualTab@TabViewManagerMeasures@@QEAAXPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1801E69F4 (-Stop@TabViewManagerAddVirtualTab@TabViewManagerMeasures@@QEAAXPEAUIShellTab@Tabs@ComposableShel.c)
 *     ?TabViewManagerAddVirtualTabToView@TabViewManagerAddVirtualTab@TabViewManagerMeasures@@QEAAXPEAUIApplicationView@@PEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1801EBCD4 (-TabViewManagerAddVirtualTabToView@TabViewManagerAddVirtualTab@TabViewManagerMeasures@@QEAAXPEAU.c)
 *     ?TabViewManager_OnTabViewOperationRequested_@TabViewManagerTraceLogging@@QEAAXPEAUIApplicationView@@PEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@I@Z @ 0x1801EC7B8 (-TabViewManager_OnTabViewOperationRequested_@TabViewManagerTraceLogging@@QEAAXPEAUIApplicationVi.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?GetShellTabGroupId@TabShellTelemetryBase@@SA?BU_GUID@@PEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1801DD0F0 (-GetShellTabGroupId@TabShellTelemetryBase@@SA-BU_GUID@@PEAUIShellTabGroup@Tabs@ComposableShell@I.c)
 */

GUID *__fastcall LoggingUtil::GetGroupIdFromTab(GUID *a1, __int64 a2)
{
  GUID v3; // xmm0
  GUID *result; // rax
  struct _GUID v5; // [rsp+20h] [rbp-18h] BYREF
  struct Windows::Internal::ComposableShell::Tabs::IShellTabGroup *v6; // [rsp+40h] [rbp+8h] BYREF

  if ( a2
    && (*(int (__fastcall **)(__int64, struct Windows::Internal::ComposableShell::Tabs::IShellTabGroup **))(*(_QWORD *)a2 + 168LL))(
         a2,
         &v6) >= 0 )
  {
    v3 = *TabShellTelemetryBase::GetShellTabGroupId(&v5, v6);
  }
  else
  {
    v3 = GUID_NULL;
  }
  result = a1;
  *a1 = v3;
  return result;
}
