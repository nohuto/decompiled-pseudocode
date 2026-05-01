/*
 * XREFs of ?_HandleViewEvent@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x18003FCD0
 * Callers:
 *     <none>
 * Callees:
 *     ?_HandleViewCreation@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIPropertySet@Collections@Foundation@6@@Z @ 0x18001198C (-_HandleViewCreation@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Interna.c)
 *     ?_HandleViewNavigationRequested@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIPropertySet@Collections@Foundation@6@PEAUIViewEventArgsForNavigationRequest@3456@@Z @ 0x18003FF70 (-_HandleViewNavigationRequested@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Sh.c)
 *     ?_HandleViewPropertyChanged@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewPropertyChangedArgs@3456@@Z @ 0x180042078 (-_HandleViewPropertyChanged@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180065FF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006EC20 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_CreatePresentationRequestedArgs@CApplicationManager@@AEAAJPEAUIViewEventArgs@ViewManagerInterop@Shell@Internal@Windows@@PEAPEAUIPresentationRequestedArgs@@@Z @ 0x18007B69C (-_CreatePresentationRequestedArgs@CApplicationManager@@AEAAJPEAUIViewEventArgs@ViewManagerIntero.c)
 *     ?_HandleSelectTargetViewForNavigationRequest@CApplicationManager@@AEAAX_KPEAUIPropertySet@Collections@Foundation@Windows@@PEAUIViewEventArgsForSelectTargetView@ViewManagerInterop@Shell@Internal@5@@Z @ 0x18007C93C (-_HandleSelectTargetViewForNavigationRequest@CApplicationManager@@AEAAX_KPEAUIPropertySet@Collec.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIImmersiveApplication@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@@Details@12@@Z @ 0x18012999C (--$As@UIImmersiveApplication@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@U.c)
 *     ??$_FindFirstApplication@VCImmersiveAppFinderByTaskWindow@@@CApplicationManager@@AEAAJAEBVCImmersiveAppFinderByTaskWindow@@PEAPEAUIImmersiveApplicationInternal@@PEA_K@Z @ 0x18012BD08 (--$_FindFirstApplication@VCImmersiveAppFinderByTaskWindow@@@CApplicationManager@@AEAAJAEBVCImmer.c)
 *     ??0CTaskWindowFinder@@QEAA@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18012CE48 (--0CTaskWindowFinder@@QEAA@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_ViewClosingAPIs_TryConsolidate_Desktop@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180135EFC (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_ViewClosingAPIs_TryConsolidate_Deskt.c)
 *     ?_HandleTaskWindowDestruction@CApplicationManager@@AEAAXAEBVCTaskWindowFinder@@@Z @ 0x18013CA0C (-_HandleTaskWindowDestruction@CApplicationManager@@AEAAXAEBVCTaskWindowFinder@@@Z.c)
 *     ?_HandleWindowingEnvironmentSettingsRequest@CApplicationManager@@AEAAJPEAUIWindowingEnvironmentSettingsArgs@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18013D578 (-_HandleWindowingEnvironmentSettingsRequest@CApplicationManager@@AEAAJPEAUIWindowingEnvironmentS.c)
 */

// Hidden C++ exception states: #wind=19
__int64 __fastcall CApplicationManager::_HandleViewEvent(
        CApplicationManager *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a2,
        int (__fastcall ***a3)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *, GUID *, struct Windows::Foundation::Collections::IPropertySet **))
{
  int (__fastcall *v6)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *, GUID *, struct Windows::Foundation::Collections::IPropertySet **); // rbx
  void *p_ppvOut; // rcx
  int (__fastcall *v9)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *, struct Windows::Foundation::Collections::IPropertySet **); // rbx
  int (__fastcall *v10)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *, void **); // rbx
  int (__fastcall *v11)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *, GUID *, struct Windows::Foundation::Collections::IPropertySet **); // rbx
  struct Windows::Foundation::Collections::IPropertySet *v12; // r8
  int (__fastcall *v13)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *, GUID *, struct Windows::Foundation::Collections::IPropertySet **); // rbx
  void *v14; // rcx
  const struct CTaskWindowFinder *v15; // rax
  int (__fastcall *v16)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *, GUID *, struct Windows::Foundation::Collections::IPropertySet **); // rbx
  CTaskWindowFinder *v17; // rbx
  HRESULT v18; // eax
  char v19; // bl
  int (__fastcall *v20)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *, GUID *, struct Windows::Foundation::Collections::IPropertySet **); // rbx
  int (__fastcall *v21)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *, GUID *, struct Windows::Foundation::Collections::IPropertySet **); // rbx
  int v22; // [rsp+28h] [rbp-39h]
  void *ppvOut; // [rsp+38h] [rbp-29h] BYREF
  struct IPresentationRequestedArgs *v24; // [rsp+40h] [rbp-21h] BYREF
  unsigned __int64 v25; // [rsp+48h] [rbp-19h] BYREF
  IUnknown *punk; // [rsp+50h] [rbp-11h] BYREF
  __int64 v27; // [rsp+58h] [rbp-9h] BYREF
  __int64 v28; // [rsp+60h] [rbp-1h] BYREF
  char v29; // [rsp+68h] [rbp+7h]
  int v30; // [rsp+70h] [rbp+Fh]
  _BYTE v31[8]; // [rsp+78h] [rbp+17h] BYREF
  _BYTE v32[16]; // [rsp+80h] [rbp+1Fh] BYREF
  __int64 v33; // [rsp+90h] [rbp+2Fh]
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+5Fh]
  int v35; // [rsp+D8h] [rbp+77h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v36; // [rsp+E0h] [rbp+7Fh] BYREF

  v33 = -2LL;
  LODWORD(v36) = 0;
  if ( ((int (__fastcall *)(int (__fastcall ***)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *, GUID *, struct Windows::Foundation::Collections::IPropertySet **), int *))(*a3)[6])(
         a3,
         &v35) < 0 )
    return 0LL;
  if ( v35 == 12 )
  {
    v24 = 0LL;
    CApplicationManager::_CreatePresentationRequestedArgs(
      this,
      (struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *)a3,
      &v24);
    v36 = 0LL;
    v13 = **a3;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v36);
    if ( v13(
           (struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *)a3,
           &GUID_ff24ec4d_0f9a_48f8_8083_39f5065b6a49,
           &v36) >= 0 )
      (*(void (__fastcall **)(_QWORD, struct Windows::Foundation::Collections::IPropertySet *, struct IPresentationRequestedArgs *))(**((_QWORD **)this + 75) + 112LL))(
        *((_QWORD *)this + 75),
        v36,
        v24);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v36);
    v14 = v24;
    if ( !v24 )
      return 0LL;
    v24 = 0LL;
LABEL_33:
    (*(void (__fastcall **)(void *))(*(_QWORD *)v14 + 16LL))(v14);
    return 0LL;
  }
  if ( v35 <= 12 )
  {
    if ( v35 )
    {
      switch ( v35 )
      {
        case 1:
          ppvOut = 0LL;
          v10 = (int (__fastcall *)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *, void **))(*a3)[7];
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&ppvOut);
          if ( v10((struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *)a3, &ppvOut) >= 0 )
          {
            v36 = 0LL;
            v11 = **a3;
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v36);
            if ( v11(
                   (struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *)a3,
                   &GUID_741390c6_ef1e_43ce_bfc2_6cfb131c012e,
                   &v36) >= 0
              && (*(int (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, unsigned __int64 *))(*(_QWORD *)a2 + 632LL))(
                   a2,
                   &v25) >= 0 )
            {
              CApplicationManager::_HandleSelectTargetViewForNavigationRequest(this, v25, v12, v36);
            }
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v36);
          }
          break;
        case 2:
          ppvOut = 0LL;
          if ( ((int (__fastcall *)(int (__fastcall ***)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *, GUID *, struct Windows::Foundation::Collections::IPropertySet **), void **))(*a3)[7])(
                 a3,
                 &ppvOut) >= 0 )
          {
            v36 = 0LL;
            if ( (**a3)(
                   (struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *)a3,
                   &GUID_a8d2a90c_a403_4593_95ff_012516ae9351,
                   &v36) >= 0 )
              CApplicationManager::_HandleViewNavigationRequested(
                this,
                a2,
                (struct Windows::Foundation::Collections::IPropertySet *)ppvOut,
                v36);
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v36);
          }
          break;
        case 4:
          AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
          v15 = CTaskWindowFinder::CTaskWindowFinder((CTaskWindowFinder *)v31, a2);
          CApplicationManager::_HandleTaskWindowDestruction(this, v15);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v32);
          ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
          break;
        case 5:
          v36 = 0LL;
          v6 = **a3;
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v36);
          if ( v6(
                 (struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *)a3,
                 &GUID_360030af_7930_47a7_a1dd_184464be39de,
                 &v36) >= 0 )
            CApplicationManager::_HandleViewPropertyChanged(this, a2, v36);
LABEL_55:
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v36);
          return 0LL;
        default:
          return 0LL;
      }
      p_ppvOut = &ppvOut;
    }
    else
    {
      v36 = 0LL;
      v9 = (int (__fastcall *)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *, struct Windows::Foundation::Collections::IPropertySet **))(*a3)[7];
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v36);
      if ( v9((struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *)a3, &v36) >= 0 )
        CApplicationManager::_HandleViewCreation(
          this,
          (void (__fastcall ***)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, GUID *, struct IImmersiveMonitor **))a2,
          (struct IUnknown *)v36);
      p_ppvOut = &v36;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(p_ppvOut);
    return 0LL;
  }
  switch ( v35 )
  {
    case 13:
      v36 = 0LL;
      v21 = **a3;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v36);
      if ( v21(
             (struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *)a3,
             &GUID_8a11574c_5d5f_48d7_bd8c_d7a801fca248,
             &v36) >= 0 )
        (*(void (__fastcall **)(_QWORD, struct Windows::Foundation::Collections::IPropertySet *))(**((_QWORD **)this + 75)
                                                                                                + 120LL))(
          *((_QWORD *)this + 75),
          v36);
      goto LABEL_55;
    case 14:
      ppvOut = 0LL;
      CApplicationManager::_CreatePresentationRequestedArgs(
        this,
        (struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *)a3,
        (struct IPresentationRequestedArgs **)&ppvOut);
      v36 = 0LL;
      v20 = **a3;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v36);
      if ( v20(
             (struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *)a3,
             &GUID_ffc41fc2_6037_4426_8bfb_7716e14343f7,
             &v36) >= 0 )
        (*(void (__fastcall **)(_QWORD, struct Windows::Foundation::Collections::IPropertySet *, void *))(**((_QWORD **)this + 75) + 128LL))(
          *((_QWORD *)this + 75),
          v36,
          ppvOut);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v36);
      v14 = ppvOut;
      if ( !ppvOut )
        return 0LL;
      ppvOut = 0LL;
      goto LABEL_33;
    case 35:
      wil::Feature<__WilFeatureTraits_Feature_ViewClosingAPIs_TryConsolidate_Desktop>::ReportUsageToService();
      AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
      v24 = 0LL;
      v17 = CTaskWindowFinder::CTaskWindowFinder((CTaskWindowFinder *)v31, a2);
      v27 = *(_QWORD *)v17;
      v28 = *((_QWORD *)v17 + 1);
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v28);
      v29 = *((_BYTE *)v17 + 16);
      v30 = 0;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v24);
      CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByTaskWindow>(this, &v27, &v24, 0LL);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v28);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v32);
      ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
      if ( v24 )
      {
        v25 = 0LL;
        Microsoft::WRL::ComPtr<IUnknown>::As<IImmersiveApplication>(&v24, &v25);
        ppvOut = 0LL;
        punk = 0LL;
        LODWORD(v36) = 2;
        (*(void (__fastcall **)(char *, GUID *, IUnknown **))(*((_QWORD *)this + 6) + 32LL))(
          (char *)this + 48,
          &GUID_00000000_0000_0000_c000_000000000046,
          &punk);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&ppvOut);
        v18 = IUnknown_QueryService(punk, &stru_18050E1D8, &GUID_103231ae_04cb_4e5e_b63d_e3ce47cd0f0a, &ppvOut);
        if ( v18 >= 0 )
        {
          v19 = 1;
        }
        else
        {
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x176E,
            (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
            (const char *)(unsigned int)v18,
            v22);
          v19 = 0;
        }
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&punk);
        if ( v19 )
          (*(void (__fastcall **)(void *, unsigned __int64, __int64))(*(_QWORD *)ppvOut + 32LL))(ppvOut, v25, 8LL);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&ppvOut);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v25);
      }
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v24);
      break;
    case 43:
      v36 = 0LL;
      v16 = **a3;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v36);
      if ( v16(
             (struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *)a3,
             &GUID_559064cb_9dc0_4491_9a6c_ace3cd4e51c8,
             &v36) >= 0 )
        CApplicationManager::_HandleWindowingEnvironmentSettingsRequest(this, v36);
      goto LABEL_55;
  }
  return 0LL;
}
