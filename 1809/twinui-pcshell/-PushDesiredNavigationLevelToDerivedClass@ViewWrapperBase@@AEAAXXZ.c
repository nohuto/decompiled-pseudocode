/*
 * XREFs of ?PushDesiredNavigationLevelToDerivedClass@ViewWrapperBase@@AEAAXXZ @ 0x180242DDC
 * Callers:
 *     ?HostNavigationLevelChanged@ViewWrapperBase@@UEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180242430 (-HostNavigationLevelChanged@ViewWrapperBase@@UEAAXW4NavigationLevel@ViewManagerInterop@Shell@Int.c)
 *     ?Navigate@ViewWrapperBase@@UEAAJW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180242740 (-Navigate@ViewWrapperBase@@UEAAJW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z.c)
 *     ?SetNavigationLevelOverride@ViewWrapperBase@@UEAA_NW4NavigationLevelOverride@@@Z @ 0x180244130 (-SetNavigationLevelOverride@ViewWrapperBase@@UEAA_NW4NavigationLevelOverride@@@Z.c)
 *     ?SetRegistration@ViewWrapperBase@@UEAAXPEAUViewEventRegistration@@W4ViewInitializationScenario@@@Z @ 0x180244260 (-SetRegistration@ViewWrapperBase@@UEAAXPEAUViewEventRegistration@@W4ViewInitializationScenario@@.c)
 *     ?put_VisibilityRevoked@ViewWrapperBase@@UEAAJE@Z @ 0x180246E60 (-put_VisibilityRevoked@ViewWrapperBase@@UEAAJE@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?ViewDesiredNavigationLevelChanged@ViewEventDispatcher@@QEAAXIW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@0@Z @ 0x18021C3D8 (-ViewDesiredNavigationLevelChanged@ViewEventDispatcher@@QEAAXIW4NavigationLevel@ViewManagerInter.c)
 *     ??$DesiredNavigationLevelChange@AEAIAEAW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@AEAW412345@@ViewManagerInteropTraceLogging@@SAXAEAIAEAW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@1@Z @ 0x18023E1E8 (--$DesiredNavigationLevelChange@AEAIAEAW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windo.c)
 *     ?NotifyGlobalComponentsForWindowStateChange@ViewWrapperBase@@AEAAXPEAUHWND__@@W4WindowChange@1@@Z @ 0x1802428D8 (-NotifyGlobalComponentsForWindowStateChange@ViewWrapperBase@@AEAAXPEAUHWND__@@W4WindowChange@1@@.c)
 *     ?_ReconcileSessionIdleTaskCompletion@ViewWrapperBase@@AEAAJXZ @ 0x1802459F4 (-_ReconcileSessionIdleTaskCompletion@ViewWrapperBase@@AEAAJXZ.c)
 */

void __fastcall ViewWrapperBase::PushDesiredNavigationLevelToDerivedClass(ViewWrapperBase *this)
{
  __int64 v1; // rdx
  int *v2; // r14
  int v4; // eax
  bool v5; // zf
  unsigned int v6; // ebx
  int v7; // esi
  int v8; // eax
  __int64 v9; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  unsigned int v11; // [rsp+40h] [rbp+8h] BYREF
  int v12; // [rsp+48h] [rbp+10h] BYREF

  v1 = *((_QWORD *)this + 24);
  v2 = (int *)((char *)this + 288);
  v12 = *((_DWORD *)this + 72);
  if ( v1 )
  {
    v4 = (*(__int64 (__fastcall **)(_QWORD, __int64, int *))(**(_QWORD **)(*((_QWORD *)this + 21) + 520LL) + 264LL))(
           *(_QWORD *)(*((_QWORD *)this + 21) + 520LL),
           v1,
           &v12);
    if ( v4 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        2456LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewwrapperbase.cpp",
        (const char *)(unsigned int)v4);
  }
  v5 = (*((_BYTE *)this + 96) & 0x10) == 0;
  v6 = *v2;
  v7 = *v2;
  v11 = *v2;
  if ( !v5 && (*((_BYTE *)this + 96) & 0x20) == 0 && v6 )
  {
    v6 = 1;
    v11 = 1;
    v7 = 1;
  }
  v8 = *((_DWORD *)this + 74);
  if ( v7 >= v8 )
  {
    v6 = *((_DWORD *)this + 74);
    v11 = v6;
    v7 = v8;
  }
  ViewManagerInteropTraceLogging::DesiredNavigationLevelChange<unsigned int &,enum Windows::Internal::Shell::ViewManagerInterop::NavigationLevel &,enum Windows::Internal::Shell::ViewManagerInterop::NavigationLevel &>(
    (int *)this + 37,
    (int *)&v11,
    v2);
  if ( v7 != (*(unsigned int (__fastcall **)(ViewWrapperBase *))(*(_QWORD *)this + 120LL))(this) )
  {
    (*(void (__fastcall **)(ViewWrapperBase *, _QWORD))(*(_QWORD *)this + 144LL))(this, v6);
    v9 = *((_QWORD *)this + 34);
    if ( v9 )
      ViewWrapperBase::NotifyGlobalComponentsForWindowStateChange((__int64)this, v9, 2);
    ViewEventDispatcher::ViewDesiredNavigationLevelChanged(
      *((ViewEventDispatcher **)this + 21),
      *((unsigned int *)this + 37),
      v12,
      v6);
    ViewWrapperBase::_ReconcileSessionIdleTaskCompletion(this);
  }
}
