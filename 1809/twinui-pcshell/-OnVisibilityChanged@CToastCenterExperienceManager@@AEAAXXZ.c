/*
 * XREFs of ?OnVisibilityChanged@CToastCenterExperienceManager@@AEAAXXZ @ 0x18015C080
 * Callers:
 *     ?OnViewHidden@CToastCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18015BD30 (-OnViewHidden@CToastCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewShown@CToastCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18015BE10 (-OnViewShown@CToastCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     ??0CVisibilityChangedEventArgs@@QEAA@XZ @ 0x18000E654 (--0CVisibilityChangedEventArgs@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIVisibilityChangedEventArgs@Experience@Shell@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$00@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIVisibilityChangedEventArgs@Experience@Shell@Internal@Windows@@VFtmBase@23@@123@AEBU_GUID@@PEAPEAX@Z @ 0x18006A380 (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIVisibilityChang.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIApplicationViewTabInsertionContext@ViewManagement@Internal@UI@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180072EE0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIApplicationViewT.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$MakeAllocator@VTaskFlowImmersiveShellBroker@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180089B50 (--1-$MakeAllocator@VTaskFlowImmersiveShellBroker@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     Microsoft::WRL::EventSource_Windows::Foundation::ITypedEventHandler_Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopDataSource_____ptr64_Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollectionChangedEventArgs_____ptr64__Microsoft::WRL::InvokeModeOptions_2___::DoInvoke__lambda_8241ab7c54b4c0e48d4fcc85deacecc3___ @ 0x18014FEBC (Microsoft--WRL--EventSource_Windows--Foundation--ITypedEventHandler_Windows--Intern_ea_18014FEBC.c)
 *     ?RaisePropertyChangedEvent@CToastCenterExperienceManager@@AEAAJPEBG_N@Z @ 0x18015C7EC (-RaisePropertyChangedEvent@CToastCenterExperienceManager@@AEAAJPEBG_N@Z.c)
 */

void __fastcall CToastCenterExperienceManager::OnVisibilityChanged(CToastCenterExperienceManager *this)
{
  int v2; // eax
  void *v3; // rax
  int v4; // ebx
  CVisibilityChangedEventArgs *v5; // rsi
  __int128 v6; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  __int64 v8; // [rsp+50h] [rbp+20h] BYREF
  void *v9; // [rsp+58h] [rbp+28h] BYREF
  __int64 v10; // [rsp+60h] [rbp+30h] BYREF

  v2 = CToastCenterExperienceManager::RaisePropertyChangedEvent(this, L"Ready", *((_DWORD *)this + 36) == 2);
  if ( v2 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      1350LL,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
      (const char *)(unsigned int)v2);
  v8 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v8);
  v8 = 0LL;
  v3 = operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
  v9 = v3;
  if ( v3 )
  {
    v5 = CVisibilityChangedEventArgs::CVisibilityChangedEventArgs((CVisibilityChangedEventArgs *)v3);
    v4 = Microsoft::WRL::Details::RuntimeClassBaseT<1>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs,Microsoft::WRL::FtmBase>>(
           (__int64)v5,
           &GUID_b27335b3_309e_40d6_8ed5_36dda0289f16,
           &v8);
    if ( v5 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::UI::Internal::ViewManagement::IApplicationViewTabInsertionContext,Microsoft::WRL::FtmBase>::Release((__int64)v5);
    if ( v4 >= 0 )
    {
      v10 = v8;
      v9 = this;
      *(_QWORD *)&v6 = &v9;
      *((_QWORD *)&v6 + 1) = &v10;
      Microsoft::WRL::EventSource_Windows::Foundation::ITypedEventHandler_Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopDataSource_____ptr64_Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollectionChangedEventArgs_____ptr64__Microsoft::WRL::InvokeModeOptions_2___::DoInvoke__lambda_8241ab7c54b4c0e48d4fcc85deacecc3___(
        (__int64)this + 696,
        &v6);
      goto LABEL_10;
    }
  }
  else
  {
    Microsoft::WRL::Details::MakeAllocator<TaskFlowImmersiveShellBroker>::~MakeAllocator<TaskFlowImmersiveShellBroker>(&v9);
    v4 = -2147024882;
  }
  wil::details::in1diag3::_Log_Hr(
    retaddr,
    1354LL,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
    (const char *)(unsigned int)v4);
LABEL_10:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v8);
}
