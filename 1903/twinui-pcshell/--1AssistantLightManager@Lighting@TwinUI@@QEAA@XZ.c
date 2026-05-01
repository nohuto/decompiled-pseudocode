/*
 * XREFs of ??1AssistantLightManager@Lighting@TwinUI@@QEAA@XZ @ 0x1803FFE94
 * Callers:
 *     ??1CortanaDesktopExperienceView@@UEAA@XZ @ 0x1801CE80C (--1CortanaDesktopExperienceView@@UEAA@XZ.c)
 *     ?RuntimeClassInitialize@CortanaDesktopExperienceView@@QEAAJPEAUIServiceProvider@@PEAVICortanaExperienceManagerNotification@Cortana@TwinUI@@V?$unique_ptr@VICortanaWNFService@Cortana@TwinUI@@U?$default_delete@VICortanaWNFService@Cortana@TwinUI@@@wistd@@@wistd@@@Z @ 0x1801D0A94 (-RuntimeClassInitialize@CortanaDesktopExperienceView@@QEAAJPEAUIServiceProvider@@PE_ea_1801D0A94.c)
 *     ??1?$unique_ptr@VAssistantLightManager@Lighting@TwinUI@@U?$default_delete@VAssistantLightManager@Lighting@TwinUI@@@wistd@@@wistd@@QEAA@XZ @ 0x1803FF1C8 (--1-$unique_ptr@VAssistantLightManager@Lighting@TwinUI@@U-$default_delete@VAssistantLightManager.c)
 * Callees:
 *     ??0FeatureFunctorHost@details@wil@@QEAA@IAEBUDiagnosticsInfo@2@@Z @ 0x1800549D0 (--0FeatureFunctorHost@details@wil@@QEAA@IAEBUDiagnosticsInfo@2@@Z.c)
 *     ?RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z @ 0x180055138 (-RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180080B08 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@PEAUHWND__@@V?$shared_ptr@VWin32AppViewInfo@@@std@@U?$less@PEAUHWND__@@@3@V?$allocator@U?$pair@QEAUHWND__@@V?$shared_ptr@VWin32AppViewInfo@@@std@@@std@@@3@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@QEAUHWND__@@V?$shared_ptr@VWin32AppViewInfo@@@std@@@std@@PEAX@2@@Z @ 0x1800AE444 (-_Erase@-$_Tree@V-$_Tmap_traits@PEAUHWND__@@V-$shared_ptr@VWin32AppViewInfo@@@std@@U-$less@PEAUH.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x180100B4C (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x1801D3A24 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     ?handle_wait@wil@@YA_NPEAXK@Z @ 0x1801E3FB0 (-handle_wait@wil@@YA_NPEAXK@Z.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_LightingWhenLidClosed@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1803FF344 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_LightingWhenLidClosed@@@wil@@CAX_NW4.c)
 */

// Hidden C++ exception states: #wind=1
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
  char *v10; // rdi
  __int64 v11; // rbx
  _QWORD v12[2]; // [rsp+28h] [rbp-58h] BYREF
  struct DiagnosticsInfo v13; // [rsp+38h] [rbp-48h] BYREF
  const char *v14; // [rsp+40h] [rbp-40h]
  __int64 v15; // [rsp+48h] [rbp-38h]
  __int16 v16; // [rsp+50h] [rbp-30h]
  _BYTE v17[8]; // [rsp+58h] [rbp-28h] BYREF
  __int64 v18; // [rsp+60h] [rbp-20h]
  int v19; // [rsp+6Ch] [rbp-14h]
  struct DiagnosticsInfo retaddr; // [rsp+88h] [rbp+8h]
  TwinUI::Lighting::AssistantLightManager *v21; // [rsp+90h] [rbp+10h] BYREF

  wil::details::SetEvent(*((wil::details **)this + 8), a2);
  v5 = (wil *)*((_QWORD *)this + 7);
  if ( v5 )
    wil::handle_wait(v5, (void *)0xFFFFFFFFLL);
  v21 = this;
  v13 = retaddr;
  v14 = "pcshell\\twinui\\lighting\\lib\\assistantlightmanager.cpp";
  v15 = 0LL;
  v16 = 47;
  wil::Feature<__WilFeatureTraits_Feature_LightingWhenLidClosed>::ReportUsageToService((__int64)v5, v3, v4);
  v12[0] = off_180466658;
  v12[1] = &v21;
  wil::details::FeatureFunctorHost::FeatureFunctorHost((wil::details::FeatureFunctorHost *)v17, 16487091, &v13);
  wil::details::RunFunctor((wil::details *)v12, (struct wil::details::IFunctor *)v17, v6);
  if ( v18 )
    *(_DWORD *)(v18 + 16) = v19;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 9);
  v8 = (wil::details *)*((_QWORD *)this + 8);
  if ( v8 )
    wil::details::CloseHandle(v8, v7);
  v9 = (wil::details *)*((_QWORD *)this + 7);
  if ( v9 )
    wil::details::CloseHandle(v9, v7);
  v10 = (char *)this + 40;
  v11 = *((_QWORD *)this + 5);
  std::_Tree<std::_Tmap_traits<HWND__ *,std::shared_ptr<Win32AppViewInfo>,std::less<HWND__ *>,std::allocator<std::pair<HWND__ * const,std::shared_ptr<Win32AppViewInfo>>>,0>>::_Erase(
    (__int64)this + 40,
    *(_QWORD **)(v11 + 8));
  *(_QWORD *)(*(_QWORD *)v10 + 8LL) = v11;
  **(_QWORD **)v10 = v11;
  *(_QWORD *)(*(_QWORD *)v10 + 16LL) = v11;
  *((_QWORD *)this + 6) = 0LL;
  std::_Deallocate<16,0>(*((void **)this + 5), (const struct std::nothrow_t *)0x38);
  DeleteCriticalSection((LPCRITICAL_SECTION)this);
}
