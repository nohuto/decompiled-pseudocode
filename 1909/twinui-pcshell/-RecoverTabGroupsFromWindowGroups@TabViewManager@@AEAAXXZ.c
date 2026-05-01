/*
 * XREFs of ?RecoverTabGroupsFromWindowGroups@TabViewManager@@AEAAXXZ @ 0x180255E28
 * Callers:
 *     ?SubscribeToServices@TabViewManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x18025C730 (-SubscribeToServices@TabViewManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800319B4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800831C8 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E934 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateFromValueSet@PropertySetHelper@ShellHelpers@Internal@Windows@@SAJAEAV1234@@Z @ 0x18014E9F0 (-CreateFromValueSet@PropertySetHelper@ShellHelpers@Internal@Windows@@SAJAEAV1234@@Z.c)
 *     ?_Buyheadnode@?$_Tree_comp_alloc@V?$_Tmap_traits@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V12@U?$less@X@std@@V?$allocator@U?$pair@$$CBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V12@@std@@@4@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V12@@std@@PEAX@2@XZ @ 0x180234264 (-_Buyheadnode@-$_Tree_comp_alloc@V-$_Tmap_traits@V-$com_ptr_t@UIApplicationView@@Ue_ea_180234264.c)
 *     ??0?$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$02$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1802483A8 (--0-$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$02$0A@U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ??1?$ActivityData@VTabShellTelemetryProvider@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VTabShellTelemetryProvider@@$0A@$0A@$02$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180249748 (--1-$ActivityData@VTabShellTelemetryProvider@@U_TlgReflectorTag_Param0IsProviderTyp_ea_180249748.c)
 *     ?Destroy@?$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$02$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18024D9A4 (-Destroy@-$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$02$0A@U_TlgReflectorTag_Param0IsProv.c)
 *     ?StartActivity@TabViewManager_RecoverTabGroupsFromWindowGroups@TabViewManagerTraceLogging@@QEAAXXZ @ 0x180258300 (-StartActivity@TabViewManager_RecoverTabGroupsFromWindowGroups@TabViewManagerTraceLogging@@QEAAX.c)
 *     ?Stop@?$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180258718 (-Stop@-$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProvide.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@KUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@@std@@@7@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@@std@@@std@@@std@@@2@0@Z @ 0x180262034 (-erase@-$_Tree@V-$_Tmap_traits@KUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@U-$less@.c)
 *     ?reset@?$shared_object@V?$ActivityData@VTabShellTelemetryProvider@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$02$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x180262864 (-reset@-$shared_object@V-$ActivityData@VTabShellTelemetryProvider@@U_TlgReflectorTa_ea_180262864.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall TabViewManager::RecoverTabGroupsFromWindowGroups(TabViewManager *this)
{
  int v2; // eax
  const char *v3; // r9
  __int64 v4; // [rsp+20h] [rbp-1A8h] BYREF
  __int128 v5; // [rsp+28h] [rbp-1A0h] BYREF
  LPARAM lParam[5]; // [rsp+38h] [rbp-190h] BYREF
  _BYTE v7[16]; // [rsp+60h] [rbp-168h] BYREF
  void **v8; // [rsp+70h] [rbp-158h] BYREF
  _BYTE v9[24]; // [rsp+78h] [rbp-150h] BYREF
  int v10; // [rsp+90h] [rbp-138h]
  _BYTE v11[248]; // [rsp+A8h] [rbp-120h] BYREF
  _BYTE v12[16]; // [rsp+1A0h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1C8h] [rbp+0h]

  lParam[4] = -2LL;
  wil::ActivityBase<TabShellTelemetryProvider,1,0,3,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TabShellTelemetryProvider,1,0,3,0,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)&v8);
  v8 = &TabViewManagerTraceLogging::TabViewManager_RecoverTabGroupsFromWindowGroups::`vftable';
  TabViewManagerTraceLogging::TabViewManager_RecoverTabGroupsFromWindowGroups::StartActivity((TabViewManagerTraceLogging::TabViewManager_RecoverTabGroupsFromWindowGroups *)&v8);
  v5 = 0LL;
  try
  {
    *(_QWORD *)&v5 = std::_Tree_comp_alloc<std::_Tmap_traits<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>,wil::com_ptr_t<IApplicationView,wil::err_exception_policy>,std::less<void>,std::allocator<std::pair<wil::com_ptr_t<IApplicationView,wil::err_exception_policy> const,wil::com_ptr_t<IApplicationView,wil::err_exception_policy>>>,0>>::_Buyheadnode();
    v4 = 0LL;
    v2 = Windows::Internal::ShellHelpers::PropertySetHelper::CreateFromValueSet((struct Windows::Internal::ShellHelpers::PropertySetHelper *)&v4);
    if ( v2 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        3551LL,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
        (const char *)(unsigned int)v2);
    lParam[0] = (LPARAM)&v8;
    lParam[1] = (LPARAM)this;
    lParam[2] = (LPARAM)&v5;
    lParam[3] = (LPARAM)&v4;
    EnumWindows(
      (WNDENUMPROC)CCLambdaAdapter<int (*)(HWND__ *,__int64),2>::Adapt<_lambda_7776713b7958a1ab94e34a9b72bfa77e_>,
      (LPARAM)lParam);
    wil::ActivityBase<TabShellTelemetryProvider,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(&v8);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v4);
    std::_Tree<std::_Tmap_traits<unsigned long,Windows::Internal::ComposableShell::Tabs::ShellTabGroupId,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,Windows::Internal::ComposableShell::Tabs::ShellTabGroupId>>,0>>::erase(
      &v5,
      v7,
      *(_QWORD *)v5);
    std::_Deallocate<16,0>((void *)v5, (const struct std::nothrow_t *)0x30);
    v8 = &TabViewManagerTraceLogging::TabViewManager_RecoverTabGroupsFromWindowGroups::`vftable';
    wil::ActivityBase<TabShellTelemetryProvider,1,0,3,0,_TlgReflectorTag_Param0IsProviderType>::Destroy((__int64)&v8);
    wil::details::shared_object<wil::ActivityBase<TabShellTelemetryProvider,1,0,3,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<TabShellTelemetryProvider,_TlgReflectorTag_Param0IsProviderType>>::reset(v12);
    wil::ActivityBase<TabShellTelemetryProvider,0,0,3,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<TabShellTelemetryProvider,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<TabShellTelemetryProvider,_TlgReflectorTag_Param0IsProviderType>((__int64)v11);
    if ( v10 )
      wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v9);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0xE1C,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
      v3);
  }
}
