/*
 * XREFs of ?RecoverTabGroupsFromWindowGroups@TabViewManager@@AEAAXXZ @ 0x1801E386C
 * Callers:
 *     ?SubscribeToServices@TabViewManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x1801EABE0 (-SubscribeToServices@TabViewManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18003CC14 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18007F638 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateFromValueSet@PropertySetHelper@ShellHelpers@Internal@Windows@@SAJAEAV1234@@Z @ 0x180109160 (-CreateFromValueSet@PropertySetHelper@ShellHelpers@Internal@Windows@@SAJAEAV1234@@Z.c)
 *     ??0?$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$02U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1801D3A58 (--0-$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$02U_TlgReflectorTag_Param0IsProviderType@@.c)
 *     ??1?$ActivityData@VTabShellTelemetryProvider@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$02U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1801D5178 (--1-$ActivityData@VTabShellTelemetryProvider@@U_TlgReflectorTag_Param0IsProviderTyp_ea_1801D5178.c)
 *     ?Destroy@?$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$02U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1801DA30C (-Destroy@-$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$02U_TlgReflectorTag_Param0IsProvider.c)
 *     ?StartActivity@TabViewManager_RecoverTabGroupsFromWindowGroups@TabViewManagerTraceLogging@@QEAAXXZ @ 0x1801E6154 (-StartActivity@TabViewManager_RecoverTabGroupsFromWindowGroups@TabViewManagerTraceLogging@@QEAAX.c)
 *     ?Stop@?$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1801E67D0 (-Stop@-$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderTyp.c)
 *     ?_Buyheadnode@?$_Tree_comp_alloc@V?$_Tmap_traits@PEAUHWND__@@V?$com_ptr_t@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@U?$less@PEAUHWND__@@@std@@V?$allocator@U?$pair@QEAUHWND__@@V?$com_ptr_t@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@QEAUHWND__@@V?$com_ptr_t@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@2@XZ @ 0x1801EFDD8 (-_Buyheadnode@-$_Tree_comp_alloc@V-$_Tmap_traits@PEAUHWND__@@V-$com_ptr_t@UISwitchItem@Multitask.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@KUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@@std@@@7@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@@std@@@std@@@std@@@2@0@Z @ 0x1801F115C (-erase@-$_Tree@V-$_Tmap_traits@KUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@U-$less@.c)
 *     ?reset@?$shared_object@V?$ActivityData@VTabShellTelemetryProvider@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$02U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x1801F1DC4 (-reset@-$shared_object@V-$ActivityData@VTabShellTelemetryProvider@@U_TlgReflectorTa_ea_1801F1DC4.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall TabViewManager::RecoverTabGroupsFromWindowGroups(TabViewManager *this)
{
  __int64 v2; // rcx
  int v3; // eax
  const char *v4; // r9
  __int64 v5; // [rsp+20h] [rbp-1A8h] BYREF
  __int128 v6; // [rsp+28h] [rbp-1A0h] BYREF
  LPARAM lParam[5]; // [rsp+38h] [rbp-190h] BYREF
  _BYTE v8[16]; // [rsp+60h] [rbp-168h] BYREF
  void **v9; // [rsp+70h] [rbp-158h] BYREF
  _BYTE v10[24]; // [rsp+78h] [rbp-150h] BYREF
  int v11; // [rsp+90h] [rbp-138h]
  _BYTE v12[248]; // [rsp+A8h] [rbp-120h] BYREF
  _BYTE v13[16]; // [rsp+1A0h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1C8h] [rbp+0h]

  lParam[4] = -2LL;
  wil::ActivityBase<TabShellTelemetryProvider,1,0,3,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TabShellTelemetryProvider,1,0,3,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)&v9);
  v9 = &TabViewManagerTraceLogging::TabViewManager_RecoverTabGroupsFromWindowGroups::`vftable';
  TabViewManagerTraceLogging::TabViewManager_RecoverTabGroupsFromWindowGroups::StartActivity((TabViewManagerTraceLogging::TabViewManager_RecoverTabGroupsFromWindowGroups *)&v9);
  v6 = 0LL;
  try
  {
    *(_QWORD *)&v6 = std::_Tree_comp_alloc<std::_Tmap_traits<HWND__ *,wil::com_ptr_t<Windows::Internal::ComposableShell::Multitasking::ISwitchItem,wil::err_exception_policy>,std::less<HWND__ *>,std::allocator<std::pair<HWND__ * const,wil::com_ptr_t<Windows::Internal::ComposableShell::Multitasking::ISwitchItem,wil::err_exception_policy>>>,0>>::_Buyheadnode(v2);
    v5 = 0LL;
    v3 = Windows::Internal::ShellHelpers::PropertySetHelper::CreateFromValueSet((struct Windows::Internal::ShellHelpers::PropertySetHelper *)&v5);
    if ( v3 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        3942LL,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
        (const char *)(unsigned int)v3);
    lParam[0] = (LPARAM)&v9;
    lParam[1] = (LPARAM)this;
    lParam[2] = (LPARAM)&v6;
    lParam[3] = (LPARAM)&v5;
    EnumWindows(
      (WNDENUMPROC)CCLambdaAdapter<int (*)(HWND__ *,__int64),2>::Adapt<_lambda_decbeb1e589528b2f481f07675c1dd35_>,
      (LPARAM)lParam);
    wil::ActivityBase<TabShellTelemetryProvider,1,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop(&v9);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v5);
    std::_Tree<std::_Tmap_traits<unsigned long,Windows::Internal::ComposableShell::Tabs::ShellTabGroupId,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,Windows::Internal::ComposableShell::Tabs::ShellTabGroupId>>,0>>::erase(
      &v6,
      v8,
      *(_QWORD *)v6);
    std::_Deallocate<16,0>((void *)v6, (const struct std::nothrow_t *)0x30);
    v9 = &TabViewManagerTraceLogging::TabViewManager_RecoverTabGroupsFromWindowGroups::`vftable';
    wil::ActivityBase<TabShellTelemetryProvider,1,0,3,_TlgReflectorTag_Param0IsProviderType>::Destroy((__int64)&v9);
    wil::details::shared_object<wil::ActivityBase<TabShellTelemetryProvider,1,0,3,_TlgReflectorTag_Param0IsProviderType>::ActivityData<TabShellTelemetryProvider,_TlgReflectorTag_Param0IsProviderType>>::reset(v13);
    wil::ActivityBase<TabShellTelemetryProvider,1,0,3,_TlgReflectorTag_Param0IsProviderType>::ActivityData<TabShellTelemetryProvider,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<TabShellTelemetryProvider,_TlgReflectorTag_Param0IsProviderType>((__int64)v12);
    if ( v11 )
      wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v10);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0xFA3,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
      v4);
  }
}
