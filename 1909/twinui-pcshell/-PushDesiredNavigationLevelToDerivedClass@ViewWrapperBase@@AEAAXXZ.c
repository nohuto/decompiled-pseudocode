/*
 * XREFs of ?PushDesiredNavigationLevelToDerivedClass@ViewWrapperBase@@AEAAXXZ @ 0x1802B83D8
 * Callers:
 *     ?HostNavigationLevelChanged@ViewWrapperBase@@UEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1802B79D0 (-HostNavigationLevelChanged@ViewWrapperBase@@UEAAXW4NavigationLevel@ViewManagerInterop@Shell@Int.c)
 *     ?Navigate@ViewWrapperBase@@UEAAJW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1802B7CE0 (-Navigate@ViewWrapperBase@@UEAAJW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z.c)
 *     ?SetNavigationLevelOverride@ViewWrapperBase@@UEAA_NW4NavigationLevelOverride@@@Z @ 0x1802B96E0 (-SetNavigationLevelOverride@ViewWrapperBase@@UEAA_NW4NavigationLevelOverride@@@Z.c)
 *     ?SetRegistration@ViewWrapperBase@@UEAAXPEAUViewEventRegistration@@W4ViewInitializationScenario@@@Z @ 0x1802B9810 (-SetRegistration@ViewWrapperBase@@UEAAXPEAUViewEventRegistration@@W4ViewInitializationScenario@@.c)
 *     ?put_VisibilityRevoked@ViewWrapperBase@@UEAAJE@Z @ 0x1802BC500 (-put_VisibilityRevoked@ViewWrapperBase@@UEAAJE@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?ViewDesiredNavigationLevelChanged@ViewEventDispatcher@@QEAAXIW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@0@Z @ 0x180291334 (-ViewDesiredNavigationLevelChanged@ViewEventDispatcher@@QEAAXIW4NavigationLevel@ViewManagerInter.c)
 *     ??$DesiredNavigationLevelChange@AEAIAEAW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@AEAW412345@@ViewManagerInteropTraceLogging@@SAXAEAIAEAW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@1@Z @ 0x1802B38BC (--$DesiredNavigationLevelChange@AEAIAEAW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windo.c)
 *     ?NotifyGlobalComponentsForWindowStateChange@ViewWrapperBase@@AEAAXPEAUHWND__@@W4WindowChange@1@@Z @ 0x1802B7E78 (-NotifyGlobalComponentsForWindowStateChange@ViewWrapperBase@@AEAAXPEAUHWND__@@W4WindowChange@1@@.c)
 *     ?_ReconcileSessionIdleTaskCompletion@ViewWrapperBase@@AEAAJXZ @ 0x1802BB094 (-_ReconcileSessionIdleTaskCompletion@ViewWrapperBase@@AEAAJXZ.c)
 */

void __fastcall ViewWrapperBase::PushDesiredNavigationLevelToDerivedClass(ViewWrapperBase *this)
{
  __int64 v1; // rdx
  int *v2; // r14
  int v4; // eax
  bool v5; // zf
  unsigned int v6; // ebx
  signed int v7; // esi
  signed int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  unsigned int v12; // [rsp+40h] [rbp+8h] BYREF
  int v13; // [rsp+48h] [rbp+10h] BYREF

  v1 = *((_QWORD *)this + 24);
  v2 = (int *)((char *)this + 288);
  v13 = *((_DWORD *)this + 72);
  if ( v1 )
  {
    v4 = (*(__int64 (__fastcall **)(_QWORD, __int64, int *))(**(_QWORD **)(*((_QWORD *)this + 21) + 504LL) + 264LL))(
           *(_QWORD *)(*((_QWORD *)this + 21) + 504LL),
           v1,
           &v13);
    if ( v4 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x99E,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewwrapperbase.cpp",
        (const char *)(unsigned int)v4);
  }
  v5 = (*((_BYTE *)this + 96) & 0x10) == 0;
  v6 = *v2;
  v12 = *v2;
  if ( v5 )
    goto LABEL_8;
  v7 = v6;
  if ( (*((_BYTE *)this + 96) & 0x20) == 0 && v6 )
  {
    v6 = 1;
    v12 = 1;
LABEL_8:
    v7 = v6;
  }
  v8 = *((_DWORD *)this + 74);
  if ( v7 >= v8 )
  {
    v6 = *((_DWORD *)this + 74);
    v12 = v6;
    v7 = v8;
  }
  ViewManagerInteropTraceLogging::DesiredNavigationLevelChange<unsigned int &,enum Windows::Internal::Shell::ViewManagerInterop::NavigationLevel &,enum Windows::Internal::Shell::ViewManagerInterop::NavigationLevel &>(
    (int *)this + 37,
    (int *)&v12,
    v2);
  if ( v7 != (*(unsigned int (__fastcall **)(ViewWrapperBase *))(*(_QWORD *)this + 120LL))(this) )
  {
    (*(void (__fastcall **)(ViewWrapperBase *, _QWORD))(*(_QWORD *)this + 144LL))(this, v6);
    v10 = *((_QWORD *)this + 34);
    if ( v10 )
      ViewWrapperBase::NotifyGlobalComponentsForWindowStateChange((__int64)this, v10, 2);
    ViewEventDispatcher::ViewDesiredNavigationLevelChanged(v9, v10, v13, v6);
    ViewWrapperBase::_ReconcileSessionIdleTaskCompletion(this);
  }
}
