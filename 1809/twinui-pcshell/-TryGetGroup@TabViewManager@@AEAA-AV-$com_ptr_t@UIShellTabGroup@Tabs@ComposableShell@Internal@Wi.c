/*
 * XREFs of ?TryGetGroup@TabViewManager@@AEAA?AV?$com_ptr_t@UIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1801ED8FC
 * Callers:
 *     ?CloseView@TabViewManager@@AEAAJPEAUIApplicationView@@@Z @ 0x1801D8CF8 (-CloseView@TabViewManager@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?OnViewFocusChanged@TabViewManager@@AEAAJPEAUIApplicationView@@_N@Z @ 0x1801E28C8 (-OnViewFocusChanged@TabViewManager@@AEAAJPEAUIApplicationView@@_N@Z.c)
 *     ?OnViewLostFocus@TabViewManager@@AEAAJPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x1801E2A58 (-OnViewLostFocus@TabViewManager@@AEAAJPEAUIApplicationView@@PEAUIUnknown@@@Z.c)
 *     ?RemoveVirtualTab@TabViewManager@@UEAAJPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1801E3FE0 (-RemoveVirtualTab@TabViewManager@@UEAAJPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z.c)
 *     ?SelectViewInTabGroup@TabViewManager@@UEAAJPEAUIApplicationView@@AEBU_GUID@@@Z @ 0x1801E4DA0 (-SelectViewInTabGroup@TabViewManager@@UEAAJPEAUIApplicationView@@AEBU_GUID@@@Z.c)
 *     ?TryGetTabGroupForView@TabViewManager@@UEAAJPEAUIApplicationView@@AEBU_GUID@@PEAPEAX@Z @ 0x1801EDDA0 (-TryGetTabGroupForView@TabViewManager@@UEAAJPEAUIApplicationView@@AEBU_GUID@@PEAPEAX@Z.c)
 *     ?TryGetTabGroupForWindowId@TabViewManager@@UEAAJUWindowId@WindowManagement@ApplicationModel@Internal@Windows@@PEAPEAUIShellTabGroup@Tabs@ComposableShell@56@@Z @ 0x1801EDEA0 (-TryGetTabGroupForWindowId@TabViewManager@@UEAAJUWindowId@WindowManagement@ApplicationModel@Inte.c)
 *     ?TryRemoveViewFromTabGroup@TabViewManager@@UEAAJPEAUIApplicationView@@@Z @ 0x1801EE0F0 (-TryRemoveViewFromTabGroup@TabViewManager@@UEAAJPEAUIApplicationView@@@Z.c)
 *     ?ViewPosChanged@TabViewManager@@AEAAJPEAUIApplicationView@@AEBUtagRECT@@W4TRACKED_WINDOW_STATE@@@Z @ 0x1801EF59C (-ViewPosChanged@TabViewManager@@AEAAJPEAUIApplicationView@@AEBUtagRECT@@W4TRACKED_WINDOW_STATE@@.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall TabViewManager::TryGetGroup(__int64 a1, _QWORD *a2, __int64 a3)
{
  int v4; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *a2 = 0LL;
  if ( a3 )
  {
    *a2 = 0LL;
    v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a3 + 168LL))(a3);
    if ( v4 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        518LL,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
        (const char *)(unsigned int)v4);
      __debugbreak();
    }
  }
  return a2;
}
