/*
 * XREFs of ?_ShowViewAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0AEBUShowViewAsyncOptions@1@PEAUIPropertySet@Collections@Foundation@Windows@@PEAUIAsyncCallback@@PEAUIPresentationRequestedArgs@@@Z @ 0x180010FF0
 * Callers:
 *     _lambda_083b65f0a0bd48e59928c88ac5c6c8ab_::operator() @ 0x18000FA24 (_lambda_083b65f0a0bd48e59928c88ac5c6c8ab_--operator().c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)_::DelegateInvokeHelper_IAsyncCallback__lambda_4af9e279c0557e674118e7fededcb641___1_long_::Invoke @ 0x180131220 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_IAsyncCallback--_)(long)_-_ea_180131220.c)
 *     ?_ShowAsViewModeWorker@CAppViewManager@@AEAAJPEAUIViewEventArgsForShowAsViewMode@ViewManagerInterop@Shell@Internal@Windows@@PEAUIPresentationRequestedArgs@@@Z @ 0x180138674 (-_ShowAsViewModeWorker@CAppViewManager@@AEAAJPEAUIViewEventArgsForShowAsViewMode@ViewManagerInte.c)
 *     ?_SwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIAsyncCallback@@@Z @ 0x180139648 (-_SwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUIViewWrapp.c)
 * Callees:
 *     ?_IsMultiViewOperationAllowed@CAppViewManager@@AEAA_NPEAUIImmersiveApplicationInternal@@@Z @ 0x180010784 (-_IsMultiViewOperationAllowed@CAppViewManager@@AEAA_NPEAUIImmersiveApplicationInternal@@@Z.c)
 *     ??4?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800109AC (--4-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?SetTargetViewSizePreference@ViewSizePreferenceHelpers@@YAJAEAVPropertySetHelper@ShellHelpers@Internal@Windows@@W4APPLICATION_VIEW_SIZE_PREFERENCE@@@Z @ 0x180010B60 (-SetTargetViewSizePreference@ViewSizePreferenceHelpers@@YAJAEAVPropertySetHelper@ShellHelpers@In.c)
 *     ?SetAppActivationResponse@PositionerPropertySetHelpers@@YAJAEAVPropertySetHelper@ShellHelpers@Internal@Windows@@E@Z @ 0x180010BD4 (-SetAppActivationResponse@PositionerPropertySetHelpers@@YAJAEAVPropertySetHelper@ShellHelpers@In.c)
 *     ?_TrySwitchToApplication@CAppViewManager@@AEAAJPEAUIImmersiveApplicationInternal@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180010C58 (-_TrySwitchToApplication@CAppViewManager@@AEAAJPEAUIImmersiveApplicationInternal@@PEAUIPropertyS.c)
 *     ?_AddPresentedWindowCallbackTrigger@CAppViewManager@@AEAAJW4PresentedWindowWaitType@1@PEAUIImmersiveApplicationInternal@@PEAUHWND__@@PEAUIAsyncCallback@@PEAK@Z @ 0x180010D68 (-_AddPresentedWindowCallbackTrigger@CAppViewManager@@AEAAJW4PresentedWindowWaitType@1@PEAUIImmer.c)
 *     ??1CAutoApplicationCreationResourceGuarantee@@QEAA@XZ @ 0x180010F8C (--1CAutoApplicationCreationResourceGuarantee@@QEAA@XZ.c)
 *     ?_GetGlomForWindow@CAppViewManager@@AEAAJPEAUHWND__@@PEAPEAUIImmersiveApplicationInternal@@PEA_N@Z @ 0x180011458 (-_GetGlomForWindow@CAppViewManager@@AEAAJPEAUHWND__@@PEAPEAUIImmersiveApplicationInternal@@PEA_N.c)
 *     ??1?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180011558 (--1-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@w.c)
 *     ?StartActivity@ShowViewAsyncWorker@CAppViewManagerTelemetry@@QEAAXXZ @ 0x1800115DC (-StartActivity@ShowViewAsyncWorker@CAppViewManagerTelemetry@@QEAAXXZ.c)
 *     ??0?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180011774 (--0-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@w.c)
 *     ??0CAutoApplicationCreationResourceGuarantee@@QEAA@PEAUIIAMServiceProvider@@@Z @ 0x18001B4FC (--0CAutoApplicationCreationResourceGuarantee@@QEAA@PEAUIIAMServiceProvider@@@Z.c)
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18002B088 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ??$ActivateInstance@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18003AD54 (--$ActivateInstance@V-$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Fou.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18003B30C (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CAX_NW4ReportingKind.c)
 *     ??$GetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValue@Foundation@3@EAAJPEAI@Z1@Z @ 0x18003C6A0 (--$GetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800403C0 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180059BD0 (-Stop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006A5CC (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x180120C70 (WPP_SF_.c)
 *     WPP_SF_d @ 0x180120D8C (WPP_SF_d.c)
 *     ?SetSourceViewSizePreference@ViewSizePreferenceHelpers@@YAJAEAVPropertySetHelper@ShellHelpers@Internal@Windows@@PEAUHWND__@@W4APPLICATION_VIEW_SIZE_PREFERENCE@@@Z @ 0x180132548 (-SetSourceViewSizePreference@ViewSizePreferenceHelpers@@YAJAEAVPropertySetHelper@ShellHelpers@In.c)
 *     ?_s_QueueCallback@CAppViewManager@@CAXPEAUIImmersiveApplicationInternal@@PEAUIAsyncCallback@@J@Z @ 0x18013A240 (-_s_QueueCallback@CAppViewManager@@CAXPEAUIImmersiveApplicationInternal@@PEAUIAsyncCallback@@J@Z.c)
 *     WPP_SF_ll @ 0x18013A4F8 (WPP_SF_ll.c)
 *     WPP_SF_qqLLd @ 0x18013A5B0 (WPP_SF_qqLLd.c)
 */

// Hidden C++ exception states: #wind=12
__int64 __fastcall CAppViewManager::_ShowViewAsyncWorker(
        CAppViewManager *this,
        HWND a2,
        HWND a3,
        const struct CAppViewManager::ShowViewAsyncOptions *a4,
        struct Windows::Foundation::Collections::IPropertySet *a5,
        struct IAsyncCallback *a6,
        struct IPresentationRequestedArgs *a7)
{
  struct Windows::Foundation::Collections::IPropertySet *v10; // r14
  struct IIAMServiceProvider *v11; // rdi
  __int64 v12; // r12
  bool v13; // bl
  __int64 v14; // r8
  int v15; // eax
  int v16; // ecx
  bool v17; // zf
  char v18; // si
  char v19; // r12
  RTL_SRWLOCK *v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // r8
  int GlomForWindow; // edi
  bool v24; // r14
  CAppViewManager *v25; // rcx
  char v26; // si
  struct Windows::Foundation::Collections::IPropertySet *v27; // rax
  struct Windows::Internal::ShellHelpers::PropertySetHelper *v28; // rdx
  __int64 v29; // rcx
  int v30; // eax
  int v31; // esi
  RTL_SRWLOCK *v32; // rbx
  struct IAsyncCallback *v33; // r15
  unsigned __int8 v35; // al
  __int64 v36; // rdx
  __int64 v37; // r8
  __int64 v38; // rsi
  __int64 (__fastcall *v39)(__int64, HWND, struct IImmersiveApplicationInternal *, struct Windows::Foundation::Collections::IPropertySet *, struct IImmersiveApplicationInternal **); // rdi
  unsigned int v40; // eax
  unsigned int v41; // ebx
  bool v42; // [rsp+40h] [rbp-C0h] BYREF
  bool v43; // [rsp+41h] [rbp-BFh] BYREF
  char v44; // [rsp+42h] [rbp-BEh]
  struct Windows::Foundation::Collections::IPropertySet *v45; // [rsp+48h] [rbp-B8h] BYREF
  PSRWLOCK v46; // [rsp+50h] [rbp-B0h] BYREF
  struct IImmersiveApplicationInternal *v47; // [rsp+58h] [rbp-A8h] BYREF
  struct IImmersiveApplicationInternal *v48; // [rsp+60h] [rbp-A0h] BYREF
  int v49[2]; // [rsp+68h] [rbp-98h] BYREF
  struct IImmersiveApplicationInternal *v50; // [rsp+70h] [rbp-90h] BYREF
  struct IAsyncCallback *v51; // [rsp+78h] [rbp-88h]
  HWND v52; // [rsp+80h] [rbp-80h]
  struct IIAMServiceProvider *v53; // [rsp+88h] [rbp-78h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v54; // [rsp+90h] [rbp-70h]
  PSRWLOCK v55; // [rsp+98h] [rbp-68h]
  __int64 v56; // [rsp+A0h] [rbp-60h]
  __int64 v57; // [rsp+A8h] [rbp-58h]
  _BYTE v58[16]; // [rsp+B0h] [rbp-50h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v60; // [rsp+D8h] [rbp-28h]
  _QWORD v61[40]; // [rsp+E0h] [rbp-20h] BYREF

  v57 = -2LL;
  v52 = a2;
  v10 = this;
  v45 = this;
  v11 = a5;
  v54 = a5;
  v51 = a6;
  v55 = (PSRWLOCK)a7;
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)v61);
  v61[0] = &CAppViewManagerTelemetry::ShowViewAsyncWorker::`vftable';
  CAppViewManagerTelemetry::ShowViewAsyncWorker::StartActivity((CAppViewManagerTelemetry::ShowViewAsyncWorker *)v61);
  v12 = *((_QWORD *)a4 + 2);
  v56 = v12;
  v13 = 0;
  if ( a5 )
  {
    *(_QWORD *)v49 = a5;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v49);
    v11 = 0LL;
    v60 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"ClientRequestedNavigationType",
      0x1Eu,
      0x1Du);
    v15 = Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<unsigned int>(v49, v60, v14, &v46);
    v16 = (int)v46;
    if ( v15 < 0 )
      v16 = 0;
    v13 = v16 == 2;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v49);
  }
  if ( !v12 && !v13 || (v17 = a2 == a3, v18 = 1, !v17) )
    v18 = (char)v11;
  v53 = v11;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v53);
  (***((void (__fastcall ****)(_QWORD, GUID *, struct IIAMServiceProvider **))v10 + 15))(
    *((_QWORD *)v10 + 15),
    &GUID_5f75d642_3fd3_46f6_86d3_a4aee3c0ffee,
    &v53);
  CAutoApplicationCreationResourceGuarantee::CAutoApplicationCreationResourceGuarantee(
    (CAutoApplicationCreationResourceGuarantee *)v58,
    v53);
  v19 = 1;
  v49[0] = (int)v11;
  v50 = v11;
  v47 = v11;
  v48 = v11;
  v44 = (char)v11;
  v43 = (char)v11;
  v42 = (char)v11;
  v20 = CApplicationManagerUtility::g_pIAMGlobals;
  v46 = CApplicationManagerUtility::g_pIAMGlobals;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    WPP_SF_qqLLd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      v21,
      v22,
      v52,
      a3,
      *(_DWORD *)a4,
      *((_DWORD *)a4 + 1),
      *((_DWORD *)a4 + 2));
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v48);
  GlomForWindow = CAppViewManager::_GetGlomForWindow(v10, a3, &v48, &v42);
  if ( GlomForWindow >= 0 )
  {
    v24 = v42;
    if ( v18 && !v42 )
      a3 = (HWND)(*(__int64 (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)v48 + 384LL))(v48);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v50);
    GlomForWindow = CAppViewManager::_GetGlomForWindow(v45, v52, &v50, &v43);
    if ( GlomForWindow >= 0 )
    {
      if ( v24 || v18 )
      {
        if ( !CAppViewManager::_IsMultiViewOperationAllowed(v25, v50) )
        {
          v19 = 0;
          v49[0] = -2147024891;
          if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
            WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 12LL, &WPP_644466f823b93e4595a5a3e7b9e7deb6_Traceguids);
        }
      }
      else
      {
        v19 = 0;
        v49[0] = 1;
        if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          v35 = (*(__int64 (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)v48 + 416LL))(v48);
          WPP_SF_ll(*((_QWORD *)WPP_GLOBAL_Control + 2), v36, v37, 0LL, v35);
        }
      }
    }
    v10 = v45;
  }
  if ( GlomForWindow < 0 || !v19 )
    goto LABEL_21;
  if ( v43 )
  {
    Microsoft::WRL::ComPtr<IUnknown>::operator=((__int64 *)&v47, (__int64 *)&v50);
    if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 13LL, &WPP_644466f823b93e4595a5a3e7b9e7deb6_Traceguids);
  }
  else
  {
    v38 = *((_QWORD *)v10 + 15);
    v39 = *(__int64 (__fastcall **)(__int64, HWND, struct IImmersiveApplicationInternal *, struct Windows::Foundation::Collections::IPropertySet *, struct IImmersiveApplicationInternal **))(*(_QWORD *)v38 + 88LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v47);
    v40 = v39(v38, v52, v50, v54, &v47);
    GlomForWindow = v40;
    if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 14LL, &WPP_644466f823b93e4595a5a3e7b9e7deb6_Traceguids, v40);
    if ( GlomForWindow < 0 )
      goto LABEL_21;
    (*(void (__fastcall **)(struct IImmersiveApplicationInternal *, __int64))(*(_QWORD *)v47 + 368LL))(v47, 2LL);
    v44 = 1;
  }
  if ( !(*(unsigned __int8 (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)v48 + 416LL))(v48) )
  {
LABEL_21:
    v26 = 0;
    goto LABEL_22;
  }
  v26 = 1;
LABEL_22:
  if ( v20 )
    ReleaseSRWLockExclusive(v20);
  if ( GlomForWindow >= 0 && v19 )
  {
    v45 = v54;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v45);
    v27 = v45;
    if ( !v45 )
    {
      v60 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(
        &hstringHeader,
        L"Windows.Foundation.Collections.ValueSet",
        0x28u,
        0x27u);
      GlomForWindow = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>>(
                        v60,
                        &v45);
      v60 = 0LL;
      v27 = v45;
    }
    if ( GlomForWindow >= 0 )
    {
      v46 = (PSRWLOCK)v27;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v46);
      GlomForWindow = ViewSizePreferenceHelpers::SetTargetViewSizePreference((Windows::Internal::ShellHelpers::PropertySetHelper *)&v46);
      if ( GlomForWindow >= 0 )
      {
        if ( v56 )
        {
          LOBYTE(v28) = 1;
          v30 = PositionerPropertySetHelpers::SetAppActivationResponse((PositionerPropertySetHelpers *)&v46, v28);
        }
        else
        {
          v30 = ViewSizePreferenceHelpers::SetSourceViewSizePreference(&v46, a3, *((unsigned int *)a4 + 1));
        }
        GlomForWindow = v30;
      }
      LOBYTE(v28) = 3;
      wil::Feature<__WilFeatureTraits_Feature_TabShell>::ReportUsageToService(v29, v28);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v46);
      if ( GlomForWindow >= 0 )
      {
        if ( v26 )
          (*(void (__fastcall **)(PVOID))(*(_QWORD *)CApplicationManagerUtility::g_pIAMGlobals[21].Ptr + 24LL))(CApplicationManagerUtility::g_pIAMGlobals[21].Ptr);
        if ( v44 )
          GlomForWindow = (*(__int64 (__fastcall **)(_QWORD, struct IImmersiveApplicationInternal *, struct Windows::Foundation::Collections::IPropertySet *, PSRWLOCK, struct IImmersiveApplicationInternal *))(**((_QWORD **)v10 + 15) + 152LL))(
                            *((_QWORD *)v10 + 15),
                            v47,
                            v45,
                            v55,
                            v48);
        if ( GlomForWindow >= 0 )
          GlomForWindow = CAppViewManager::_TrySwitchToApplication((IUnknown **)v10, v47, v45);
      }
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v45);
  }
  v31 = 0;
  LODWORD(v46) = 0;
  v32 = CApplicationManagerUtility::g_pIAMGlobals;
  v55 = CApplicationManagerUtility::g_pIAMGlobals;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  if ( GlomForWindow < 0 )
  {
    if ( v47 && v50 && v50 != v47 )
      (*(void (__fastcall **)(_QWORD, struct IImmersiveApplicationInternal *, struct IImmersiveApplicationInternal *, _QWORD))(**((_QWORD **)v10 + 15) + 104LL))(
        *((_QWORD *)v10 + 15),
        v47,
        v50,
        0LL);
    if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        15LL,
        &WPP_644466f823b93e4595a5a3e7b9e7deb6_Traceguids,
        (unsigned int)GlomForWindow);
    goto LABEL_80;
  }
  if ( !v19 )
  {
LABEL_80:
    v33 = v51;
    goto LABEL_46;
  }
  v33 = v51;
  if ( v51 && (*(unsigned __int8 (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)v47 + 472LL))(v47) )
  {
    GlomForWindow = CAppViewManager::_AddPresentedWindowCallbackTrigger(
                      (__int64)v10,
                      1,
                      (__int64 (__fastcall ***)(_QWORD, GUID *, _DWORD *))v47,
                      (__int64)v52,
                      (__int64)v33,
                      &v46);
    v31 = (int)v46;
  }
LABEL_46:
  if ( v32 )
    ReleaseSRWLockExclusive(v32);
  if ( v33 && !v31 )
  {
    v41 = GlomForWindow;
    if ( GlomForWindow >= 0 )
      v41 = v49[0];
    CAppViewManager::_s_QueueCallback(v48, v33, v41);
    if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 16LL, &WPP_644466f823b93e4595a5a3e7b9e7deb6_Traceguids, v41);
  }
  if ( GlomForWindow >= 0 )
    GlomForWindow = v19 != 0;
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(
    v61,
    (unsigned int)GlomForWindow);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v48);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v47);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v50);
  CAutoApplicationCreationResourceGuarantee::~CAutoApplicationCreationResourceGuarantee((CAutoApplicationCreationResourceGuarantee *)v58);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v53);
  v61[0] = &CAppViewManagerTelemetry::ShowViewAsyncWorker::`vftable';
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(v61);
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(v61);
  return (unsigned int)GlomForWindow;
}
