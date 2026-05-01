/*
 * XREFs of ??0AssistantLightManager@Lighting@TwinUI@@QEAA@XZ @ 0x1803FFC20
 * Callers:
 *     ??0AssistantLightWNFListener@Lighting@TwinUI@@QEAA@XZ @ 0x1803FF0C4 (--0AssistantLightWNFListener@Lighting@TwinUI@@QEAA@XZ.c)
 * Callees:
 *     ??0FeatureFunctorHost@details@wil@@QEAA@IAEBUDiagnosticsInfo@2@@Z @ 0x1800549D0 (--0FeatureFunctorHost@details@wil@@QEAA@IAEBUDiagnosticsInfo@2@@Z.c)
 *     ?RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z @ 0x180055138 (-RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x1801017C8 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180104D80 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil@@YAX0@ZU-$in.c)
 *     ?_Buyheadnode@?$_Tree_comp_alloc@V?$_Tmap_traits@UShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@V?$ComPtr@UIViewGroup@@@WRL@Microsoft@@U?$less@UShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@@std@@V?$allocator@U?$pair@$$CBUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@V?$ComPtr@UIViewGroup@@@WRL@Microsoft@@@std@@@std@@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@V?$ComPtr@UIViewGroup@@@WRL@Microsoft@@@std@@PEAX@2@XZ @ 0x1802D0B60 (-_Buyheadnode@-$_Tree_comp_alloc@V-$_Tmap_traits@UShellTabGroupId@Tabs@ComposableShell@Internal@.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_LightingWhenLidClosed@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1803FF344 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_LightingWhenLidClosed@@@wil@@CAX_NW4.c)
 */

// Hidden C++ exception states: #wind=6
TwinUI::Lighting::AssistantLightManager *__fastcall TwinUI::Lighting::AssistantLightManager::AssistantLightManager(
        TwinUI::Lighting::AssistantLightManager *this)
{
  __int64 v2; // rdx
  wil::details *v3; // rcx
  wil::details *Event; // rsi
  __int64 v5; // r8
  const char *v6; // r9
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  struct wil::details::IFunctorHost *v10; // r8
  _QWORD v12[2]; // [rsp+28h] [rbp-58h] BYREF
  struct DiagnosticsInfo v13; // [rsp+38h] [rbp-48h] BYREF
  const char *v14; // [rsp+40h] [rbp-40h]
  __int64 v15; // [rsp+48h] [rbp-38h]
  __int16 v16; // [rsp+50h] [rbp-30h]
  _BYTE v17[8]; // [rsp+58h] [rbp-28h] BYREF
  __int64 v18; // [rsp+60h] [rbp-20h]
  int v19; // [rsp+6Ch] [rbp-14h]
  struct DiagnosticsInfo retaddr; // [rsp+98h] [rbp+18h]
  TwinUI::Lighting::AssistantLightManager *v21; // [rsp+A8h] [rbp+28h] BYREF

  InitializeCriticalSectionEx((LPCRITICAL_SECTION)this, 0, 0);
  v21 = (TwinUI::Lighting::AssistantLightManager *)((char *)this + 40);
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 5) = std::_Tree_comp_alloc<std::_Tmap_traits<Windows::Internal::ComposableShell::Tabs::ShellTabGroupId,Microsoft::WRL::ComPtr<IViewGroup>,std::less<Windows::Internal::ComposableShell::Tabs::ShellTabGroupId>,std::allocator<std::pair<Windows::Internal::ComposableShell::Tabs::ShellTabGroupId const,Microsoft::WRL::ComPtr<IViewGroup>>>,0>>::_Buyheadnode();
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_DWORD *)this + 26) = 0;
  Event = (wil::details *)CreateEventExW(0LL, 0LL, 1u, 0x1F0003u);
  if ( Event )
  {
    GetLastError();
    wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
      (wil::details **)this + 8,
      Event);
  }
  else
  {
    wil::details::GetLastErrorFailHr(v3, v2, v5, v6);
  }
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  v21 = this;
  v13 = retaddr;
  v14 = "pcshell\\twinui\\lighting\\lib\\assistantlightmanager.cpp";
  v15 = 0LL;
  v16 = 33;
  wil::Feature<__WilFeatureTraits_Feature_LightingWhenLidClosed>::ReportUsageToService(v8, v7, v9);
  v12[0] = off_180466650;
  v12[1] = &v21;
  wil::details::FeatureFunctorHost::FeatureFunctorHost((wil::details::FeatureFunctorHost *)v17, 16487091, &v13);
  wil::details::RunFunctor((wil::details *)v12, (struct wil::details::IFunctor *)v17, v10);
  if ( v18 )
    *(_DWORD *)(v18 + 16) = v19;
  return this;
}
