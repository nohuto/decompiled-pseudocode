/*
 * XREFs of ?_HandleViewEvent@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x18002E9B0
 * Callers:
 *     <none>
 * Callees:
 *     ?_HandleViewPropertyChanged@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewPropertyChangedArgs@3456@@Z @ 0x18002E3E0 (-_HandleViewPropertyChanged@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@.c)
 *     ?_HandleViewNavigationRequested@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIPropertySet@Collections@Foundation@6@PEAUIViewEventArgsForNavigationRequest@3456@@Z @ 0x1800303A4 (-_HandleViewNavigationRequested@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Sh.c)
 *     ?_HandleViewCreation@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIPropertySet@Collections@Foundation@6@@Z @ 0x18004BF34 (-_HandleViewCreation@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Interna.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$As@UIImmersiveApplication@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@@Details@12@@Z @ 0x180071B38 (--$As@UIImmersiveApplication@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@U.c)
 *     ?_HandleSelectTargetViewForNavigationRequest@CApplicationManager@@AEAAX_KPEAUIPropertySet@Collections@Foundation@Windows@@PEAUIViewEventArgsForSelectTargetView@ViewManagerInterop@Shell@Internal@5@@Z @ 0x180078928 (-_HandleSelectTargetViewForNavigationRequest@CApplicationManager@@AEAAX_KPEAUIPropertySet@Collec.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??$_FindFirstApplication@VCImmersiveAppFinderByTaskWindow@@@CApplicationManager@@AEAAJAEBVCImmersiveAppFinderByTaskWindow@@PEAPEAUIImmersiveApplicationInternal@@PEA_K@Z @ 0x1800EA344 (--$_FindFirstApplication@VCImmersiveAppFinderByTaskWindow@@@CApplicationManager@@AEAAJAEBVCImmer.c)
 *     ??0CTaskWindowFinder@@QEAA@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1800EAE58 (--0CTaskWindowFinder@@QEAA@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_ViewClosingAPIs_TryConsolidate_Desktop@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1800F1D14 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_ViewClosingAPIs_TryConsolidate_Deskt.c)
 *     ?_HandleTaskWindowDestruction@CApplicationManager@@AEAAXAEBVCTaskWindowFinder@@@Z @ 0x1800F81A0 (-_HandleTaskWindowDestruction@CApplicationManager@@AEAAXAEBVCTaskWindowFinder@@@Z.c)
 *     ?_HandleWindowingEnvironmentSettingsRequest@CApplicationManager@@AEAAJPEAUIWindowingEnvironmentSettingsArgs@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1800F8770 (-_HandleWindowingEnvironmentSettingsRequest@CApplicationManager@@AEAAJPEAUIWindowingEnvironmentS.c)
 */

// Hidden C++ exception states: #wind=17
__int64 __fastcall CApplicationManager::_HandleViewEvent(
        CApplicationManager *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a2,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *a3)
{
  void *p_ppvOut; // rcx
  struct Windows::Foundation::Collections::IPropertySet *v8; // r8
  const struct CTaskWindowFinder *v9; // rax
  CTaskWindowFinder *v10; // rbx
  HRESULT v11; // eax
  char v12; // bl
  int v13; // [rsp+28h] [rbp-29h]
  void *ppvOut; // [rsp+38h] [rbp-19h] BYREF
  __int64 v15; // [rsp+40h] [rbp-11h] BYREF
  unsigned __int64 v16; // [rsp+48h] [rbp-9h] BYREF
  IUnknown *punk; // [rsp+50h] [rbp-1h] BYREF
  __int64 v18; // [rsp+58h] [rbp+7h] BYREF
  __int64 v19; // [rsp+60h] [rbp+Fh] BYREF
  char v20; // [rsp+68h] [rbp+17h]
  int v21; // [rsp+70h] [rbp+1Fh]
  _BYTE v22[8]; // [rsp+78h] [rbp+27h] BYREF
  _BYTE v23[16]; // [rsp+80h] [rbp+2Fh] BYREF
  __int64 v24; // [rsp+90h] [rbp+3Fh]
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+5Fh]
  int v26; // [rsp+C8h] [rbp+77h] BYREF
  struct Windows::Internal::Shell::ViewManagerInterop::IViewPropertyChangedArgs *v27; // [rsp+D0h] [rbp+7Fh] BYREF

  v24 = -2LL;
  LODWORD(v27) = 0;
  if ( (*(int (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *, int *))(*(_QWORD *)a3 + 48LL))(
         a3,
         &v26) < 0 )
    return 0LL;
  if ( v26 == 12 )
  {
    v27 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v27);
    if ( (**(int (__fastcall ***)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *, GUID *, struct Windows::Internal::Shell::ViewManagerInterop::IViewPropertyChangedArgs **))a3)(
           a3,
           &GUID_ff24ec4d_0f9a_48f8_8083_39f5065b6a49,
           &v27) >= 0 )
      (*(void (__fastcall **)(_QWORD, struct Windows::Internal::Shell::ViewManagerInterop::IViewPropertyChangedArgs *))(**((_QWORD **)this + 75) + 112LL))(
        *((_QWORD *)this + 75),
        v27);
    goto LABEL_52;
  }
  if ( v26 <= 12 )
  {
    if ( v26 )
    {
      switch ( v26 )
      {
        case 1:
          ppvOut = 0LL;
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&ppvOut);
          if ( (*(int (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *, void **))(*(_QWORD *)a3 + 56LL))(
                 a3,
                 &ppvOut) >= 0 )
          {
            v27 = 0LL;
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v27);
            if ( (**(int (__fastcall ***)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *, GUID *, struct Windows::Internal::Shell::ViewManagerInterop::IViewPropertyChangedArgs **))a3)(
                   a3,
                   &GUID_741390c6_ef1e_43ce_bfc2_6cfb131c012e,
                   &v27) >= 0
              && (*(int (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, unsigned __int64 *))(*(_QWORD *)a2 + 632LL))(
                   a2,
                   &v16) >= 0 )
            {
              CApplicationManager::_HandleSelectTargetViewForNavigationRequest(this, v16, v8, v27);
            }
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v27);
          }
          break;
        case 2:
          ppvOut = 0LL;
          if ( (*(int (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *, void **))(*(_QWORD *)a3 + 56LL))(
                 a3,
                 &ppvOut) >= 0 )
          {
            v27 = 0LL;
            if ( (**(int (__fastcall ***)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *, GUID *, struct Windows::Internal::Shell::ViewManagerInterop::IViewPropertyChangedArgs **))a3)(
                   a3,
                   &GUID_a8d2a90c_a403_4593_95ff_012516ae9351,
                   &v27) >= 0 )
              CApplicationManager::_HandleViewNavigationRequested(
                this,
                a2,
                (struct Windows::Foundation::Collections::IPropertySet *)ppvOut,
                v27);
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v27);
          }
          break;
        case 4:
          AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
          v9 = CTaskWindowFinder::CTaskWindowFinder((CTaskWindowFinder *)v22, a2);
          CApplicationManager::_HandleTaskWindowDestruction(this, v9);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v23);
          ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
          break;
        case 5:
          v27 = 0LL;
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v27);
          if ( (**(int (__fastcall ***)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *, GUID *, struct Windows::Internal::Shell::ViewManagerInterop::IViewPropertyChangedArgs **))a3)(
                 a3,
                 &GUID_360030af_7930_47a7_a1dd_184464be39de,
                 &v27) >= 0 )
            CApplicationManager::_HandleViewPropertyChanged(this, a2, v27);
LABEL_52:
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v27);
          return 0LL;
        default:
          return 0LL;
      }
      p_ppvOut = &ppvOut;
    }
    else
    {
      v27 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v27);
      if ( (*(int (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *, struct Windows::Internal::Shell::ViewManagerInterop::IViewPropertyChangedArgs **))(*(_QWORD *)a3 + 56LL))(
             a3,
             &v27) >= 0 )
        CApplicationManager::_HandleViewCreation(this, a2, v27);
      p_ppvOut = &v27;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(p_ppvOut);
    return 0LL;
  }
  switch ( v26 )
  {
    case 13:
      v27 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v27);
      if ( (**(int (__fastcall ***)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *, GUID *, struct Windows::Internal::Shell::ViewManagerInterop::IViewPropertyChangedArgs **))a3)(
             a3,
             &GUID_8a11574c_5d5f_48d7_bd8c_d7a801fca248,
             &v27) >= 0 )
        (*(void (__fastcall **)(_QWORD, struct Windows::Internal::Shell::ViewManagerInterop::IViewPropertyChangedArgs *))(**((_QWORD **)this + 75) + 120LL))(
          *((_QWORD *)this + 75),
          v27);
      goto LABEL_52;
    case 14:
      v27 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v27);
      if ( (**(int (__fastcall ***)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *, GUID *, struct Windows::Internal::Shell::ViewManagerInterop::IViewPropertyChangedArgs **))a3)(
             a3,
             &GUID_ffc41fc2_6037_4426_8bfb_7716e14343f7,
             &v27) >= 0 )
        (*(void (__fastcall **)(_QWORD, struct Windows::Internal::Shell::ViewManagerInterop::IViewPropertyChangedArgs *))(**((_QWORD **)this + 75) + 128LL))(
          *((_QWORD *)this + 75),
          v27);
      goto LABEL_52;
    case 35:
      wil::Feature<__WilFeatureTraits_Feature_ViewClosingAPIs_TryConsolidate_Desktop>::ReportUsageToService();
      AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
      v15 = 0LL;
      v10 = CTaskWindowFinder::CTaskWindowFinder((CTaskWindowFinder *)v22, a2);
      v18 = *(_QWORD *)v10;
      v19 = *((_QWORD *)v10 + 1);
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v19);
      v20 = *((_BYTE *)v10 + 16);
      v21 = 0;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v15);
      CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByTaskWindow>(this, &v18, &v15, 0LL);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v23);
      ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
      if ( v15 )
      {
        v16 = 0LL;
        Microsoft::WRL::ComPtr<IUnknown>::As<IImmersiveApplication>(&v15, &v16);
        ppvOut = 0LL;
        punk = 0LL;
        LODWORD(v27) = 2;
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&punk);
        (*(void (__fastcall **)(char *, GUID *, IUnknown **))(*((_QWORD *)this + 6) + 32LL))(
          (char *)this + 48,
          &GUID_00000000_0000_0000_c000_000000000046,
          &punk);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&ppvOut);
        v11 = IUnknown_QueryService(punk, &stru_180415FC8, &GUID_103231ae_04cb_4e5e_b63d_e3ce47cd0f0a, &ppvOut);
        if ( v11 >= 0 )
        {
          v12 = 1;
        }
        else
        {
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x16B9,
            (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
            (const char *)(unsigned int)v11,
            v13);
          v12 = 0;
        }
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&punk);
        if ( v12 )
          (*(void (__fastcall **)(void *, unsigned __int64, __int64))(*(_QWORD *)ppvOut + 32LL))(ppvOut, v16, 8LL);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&ppvOut);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
      }
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v15);
      break;
    case 43:
      v27 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v27);
      if ( (**(int (__fastcall ***)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *, GUID *, struct Windows::Internal::Shell::ViewManagerInterop::IViewPropertyChangedArgs **))a3)(
             a3,
             &GUID_559064cb_9dc0_4491_9a6c_ace3cd4e51c8,
             &v27) >= 0 )
        CApplicationManager::_HandleWindowingEnvironmentSettingsRequest(this, v27);
      goto LABEL_52;
  }
  return 0LL;
}
