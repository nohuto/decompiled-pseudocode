/*
 * XREFs of ??1AssistantLightManager@Lighting@TwinUI@@QEAA@XZ @ 0x18039A5F4
 * Callers:
 *     ??1CortanaDesktopExperienceView@@UEAA@XZ @ 0x180187E38 (--1CortanaDesktopExperienceView@@UEAA@XZ.c)
 *     ??4?$unique_ptr@VAssistantLightWNFListener@Lighting@TwinUI@@U?$default_delete@VAssistantLightWNFListener@Lighting@TwinUI@@@wistd@@@wistd@@QEAAAEAV01@$$QEAV01@@Z @ 0x180187FFC (--4-$unique_ptr@VAssistantLightWNFListener@Lighting@TwinUI@@U-$default_delete@VAssistantLightWNF.c)
 *     ?RuntimeClassInitialize@CortanaDesktopExperienceView@@QEAAJPEAUIServiceProvider@@PEAVICortanaExperienceManagerNotification@Cortana@TwinUI@@V?$unique_ptr@VICortanaWNFService@Cortana@TwinUI@@U?$default_delete@VICortanaWNFService@Cortana@TwinUI@@@wistd@@@wistd@@@Z @ 0x18018A2BC (-RuntimeClassInitialize@CortanaDesktopExperienceView@@QEAAJPEAUIServiceProvider@@PE_ea_18018A2BC.c)
 *     ??1?$unique_ptr@VAssistantLightManager@Lighting@TwinUI@@U?$default_delete@VAssistantLightManager@Lighting@TwinUI@@@wistd@@@wistd@@QEAA@XZ @ 0x1803997F4 (--1-$unique_ptr@VAssistantLightManager@Lighting@TwinUI@@U-$default_delete@VAssistantLightManager.c)
 * Callees:
 *     ?RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z @ 0x180056F64 (-RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18007F638 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??0FeatureFunctorHost@details@wil@@QEAA@IAEBUDiagnosticsInfo@2@@Z @ 0x18008C9F4 (--0FeatureFunctorHost@details@wil@@QEAA@IAEBUDiagnosticsInfo@2@@Z.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x1800DEBE0 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x18018D074 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     ?handle_wait@wil@@YA_NPEAXK@Z @ 0x18019D010 (-handle_wait@wil@@YA_NPEAXK@Z.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_LightingWhenLidClosed@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180399964 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_LightingWhenLidClosed@@@wil@@CAX_NW4.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@PEAUHSTRING__@@V?$shared_ptr@VIAssistantLight@Lighting@TwinUI@@@std@@U?$less@PEAUHSTRING__@@@3@V?$allocator@U?$pair@QEAUHSTRING__@@V?$shared_ptr@VIAssistantLight@Lighting@TwinUI@@@std@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHSTRING__@@V?$shared_ptr@VIAssistantLight@Lighting@TwinUI@@@std@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHSTRING__@@V?$shared_ptr@VIAssistantLight@Lighting@TwinUI@@@std@@@std@@@std@@@std@@@2@0@Z @ 0x18039BA2C (-erase@-$_Tree@V-$_Tmap_traits@PEAUHSTRING__@@V-$shared_ptr@VIAssistantLight@Lighting@TwinUI@@@s.c)
 */

void __fastcall TwinUI::Lighting::AssistantLightManager::~AssistantLightManager(
        TwinUI::Lighting::AssistantLightManager *this,
        void *a2)
{
  __int64 v3; // rdx
  __int64 v4; // r8
  wil *v5; // rcx
  struct wil::details::IFunctorHost *v6; // r8
  void *v7; // rdx
  wil::details *v8; // rcx
  wil::details *v9; // rcx
  _QWORD v10[2]; // [rsp+28h] [rbp-58h] BYREF
  struct DiagnosticsInfo v11; // [rsp+38h] [rbp-48h] BYREF
  const char *v12; // [rsp+40h] [rbp-40h]
  __int64 v13; // [rsp+48h] [rbp-38h]
  __int16 v14; // [rsp+50h] [rbp-30h]
  _BYTE v15[8]; // [rsp+58h] [rbp-28h] BYREF
  __int64 v16; // [rsp+60h] [rbp-20h]
  int v17; // [rsp+6Ch] [rbp-14h]
  struct DiagnosticsInfo retaddr; // [rsp+88h] [rbp+8h]
  TwinUI::Lighting::AssistantLightManager *v19; // [rsp+90h] [rbp+10h] BYREF
  char v20; // [rsp+98h] [rbp+18h] BYREF

  wil::details::SetEvent(*((wil::details **)this + 8), a2);
  v5 = (wil *)*((_QWORD *)this + 7);
  if ( v5 )
    wil::handle_wait(v5, (void *)0xFFFFFFFFLL);
  v19 = this;
  v11 = retaddr;
  v12 = "pcshell\\twinui\\lighting\\lib\\assistantlightmanager.cpp";
  v13 = 0LL;
  v14 = 47;
  wil::Feature<__WilFeatureTraits_Feature_LightingWhenLidClosed>::ReportUsageToService((__int64)v5, v3, v4);
  v10[0] = off_1803CCE00;
  v10[1] = &v19;
  wil::details::FeatureFunctorHost::FeatureFunctorHost((wil::details::FeatureFunctorHost *)v15, 16487091, &v11);
  wil::details::RunFunctor((wil::details *)v10, (struct wil::details::IFunctor *)v15, v6);
  if ( v16 )
    *(_DWORD *)(v16 + 16) = v17;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 9);
  v8 = (wil::details *)*((_QWORD *)this + 8);
  if ( v8 )
    wil::details::CloseHandle(v8, v7);
  v9 = (wil::details *)*((_QWORD *)this + 7);
  if ( v9 )
    wil::details::CloseHandle(v9, v7);
  std::_Tree<std::_Tmap_traits<HSTRING__ *,std::shared_ptr<TwinUI::Lighting::IAssistantLight>,std::less<HSTRING__ *>,std::allocator<std::pair<HSTRING__ * const,std::shared_ptr<TwinUI::Lighting::IAssistantLight>>>,0>>::erase(
    (char *)this + 40,
    &v20,
    **((_QWORD **)this + 5));
  std::_Deallocate<16,0>(*((void **)this + 5), (const struct std::nothrow_t *)0x38);
  DeleteCriticalSection((LPCRITICAL_SECTION)this);
}
