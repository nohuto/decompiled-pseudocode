/*
 * XREFs of ?_ShowViewAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0AEBUShowViewAsyncOptions@1@PEAUIPropertySet@Collections@Foundation@Windows@@PEAUIAsyncCallback@@PEAUIPresentationRequestedArgs@@@Z @ 0x1800556C0
 * Callers:
 *     _lambda_083b65f0a0bd48e59928c88ac5c6c8ab_::operator() @ 0x18005492C (_lambda_083b65f0a0bd48e59928c88ac5c6c8ab_--operator().c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)_::DelegateInvokeHelper_IAsyncCallback__lambda_4af9e279c0557e674118e7fededcb641___1_long_::Invoke @ 0x180150780 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_IAsyncCallback--_)(long)_-_ea_180150780.c)
 *     ?_ShowAsViewModeWorker@CAppViewManager@@AEAAJPEAUIViewEventArgsForShowAsViewMode@ViewManagerInterop@Shell@Internal@Windows@@PEAUIPresentationRequestedArgs@@@Z @ 0x180157BF4 (-_ShowAsViewModeWorker@CAppViewManager@@AEAAJPEAUIViewEventArgsForShowAsViewMode@ViewManagerInte.c)
 *     ?_SwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIAsyncCallback@@@Z @ 0x180158BC8 (-_SwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUIViewWrapp.c)
 * Callees:
 *     ??0CAutoApplicationCreationResourceGuarantee@@QEAA@PEAUIIAMServiceProvider@@@Z @ 0x18000DB2C (--0CAutoApplicationCreationResourceGuarantee@@QEAA@PEAUIIAMServiceProvider@@@Z.c)
 *     ??4?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180014340 (--4-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?_AddPresentedWindowCallbackTrigger@CAppViewManager@@AEAAJW4PresentedWindowWaitType@1@PEAUIImmersiveApplicationInternal@@PEAUHWND__@@PEAUIAsyncCallback@@PEAK@Z @ 0x180017CD0 (-_AddPresentedWindowCallbackTrigger@CAppViewManager@@AEAAJW4PresentedWindowWaitType@1@PEAUIImmer.c)
 *     ??$ActivateInstance@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180023D64 (--$ActivateInstance@V-$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Fou.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1800247D0 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CAX_NW4ReportingKind.c)
 *     ??$GetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValue@Foundation@3@EAAJPEAI@Z1@Z @ 0x180025C00 (--$GetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180034628 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800436F0 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?_GetGlomForWindow@CAppViewManager@@AEAAJPEAUHWND__@@PEAPEAUIImmersiveApplicationInternal@@PEA_N@Z @ 0x180055B28 (-_GetGlomForWindow@CAppViewManager@@AEAAJPEAUHWND__@@PEAPEAUIImmersiveApplicationInternal@@PEA_N.c)
 *     ??1?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180055C28 (--1-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@w.c)
 *     ?StartActivity@ShowViewAsyncWorker@CAppViewManagerTelemetry@@QEAAXXZ @ 0x180055CAC (-StartActivity@ShowViewAsyncWorker@CAppViewManagerTelemetry@@QEAAXXZ.c)
 *     ??0?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180055E44 (--0-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsPro_ea_180055E44.c)
 *     ??1CAutoApplicationCreationResourceGuarantee@@QEAA@XZ @ 0x180055EEC (--1CAutoApplicationCreationResourceGuarantee@@QEAA@XZ.c)
 *     ?_TrySwitchToApplication@CAppViewManager@@AEAAJPEAUIImmersiveApplicationInternal@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180055F24 (-_TrySwitchToApplication@CAppViewManager@@AEAAJPEAUIImmersiveApplicationInternal@@PEAUIPropertyS.c)
 *     ?SetAppActivationResponse@PositionerPropertySetHelpers@@YAJAEAVPropertySetHelper@ShellHelpers@Internal@Windows@@E@Z @ 0x180056034 (-SetAppActivationResponse@PositionerPropertySetHelpers@@YAJAEAVPropertySetHelper@ShellHelpers@In.c)
 *     ?SetTargetViewSizePreference@ViewSizePreferenceHelpers@@YAJAEAVPropertySetHelper@ShellHelpers@Internal@Windows@@W4APPLICATION_VIEW_SIZE_PREFERENCE@@@Z @ 0x1800560B8 (-SetTargetViewSizePreference@ViewSizePreferenceHelpers@@YAJAEAVPropertySetHelper@ShellHelpers@In.c)
 *     ?_IsMultiViewOperationAllowed@CAppViewManager@@AEAA_NPEAUIImmersiveApplicationInternal@@@Z @ 0x180056470 (-_IsMultiViewOperationAllowed@CAppViewManager@@AEAA_NPEAUIImmersiveApplicationInternal@@@Z.c)
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180057C60 (-Stop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180065FF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006EC20 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x180140110 (WPP_SF_.c)
 *     WPP_SF_d @ 0x18014022C (WPP_SF_d.c)
 *     ?SetSourceViewSizePreference@ViewSizePreferenceHelpers@@YAJAEAVPropertySetHelper@ShellHelpers@Internal@Windows@@PEAUHWND__@@W4APPLICATION_VIEW_SIZE_PREFERENCE@@@Z @ 0x180151AC4 (-SetSourceViewSizePreference@ViewSizePreferenceHelpers@@YAJAEAVPropertySetHelper@ShellHelpers@In.c)
 *     ?_s_QueueCallback@CAppViewManager@@CAXPEAUIImmersiveApplicationInternal@@PEAUIAsyncCallback@@J@Z @ 0x1801597C0 (-_s_QueueCallback@CAppViewManager@@CAXPEAUIImmersiveApplicationInternal@@PEAUIAsyncCallback@@J@Z.c)
 *     WPP_SF_ll @ 0x180159A78 (WPP_SF_ll.c)
 *     WPP_SF_qqLLd @ 0x180159B30 (WPP_SF_qqLLd.c)
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
  CAppViewManager *v10; // r14
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
  CAppViewManager *v27; // rax
  struct Windows::Internal::ShellHelpers::PropertySetHelper *v28; // rdx
  __int64 v29; // rcx
  unsigned __int8 v30; // r8
  int v31; // eax
  int v32; // esi
  RTL_SRWLOCK *v33; // rbx
  struct IAsyncCallback *v34; // r15
  unsigned __int8 v36; // al
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // rsi
  __int64 (__fastcall *v40)(__int64, HWND, struct IImmersiveApplicationInternal *, CAppViewManager *, struct IImmersiveApplicationInternal **); // rdi
  unsigned int v41; // eax
  unsigned int v42; // ebx
  bool v43; // [rsp+40h] [rbp-C0h] BYREF
  bool v44; // [rsp+41h] [rbp-BFh] BYREF
  char v45; // [rsp+42h] [rbp-BEh]
  CAppViewManager *v46; // [rsp+48h] [rbp-B8h] BYREF
  PSRWLOCK v47; // [rsp+50h] [rbp-B0h] BYREF
  struct IImmersiveApplicationInternal *v48; // [rsp+58h] [rbp-A8h] BYREF
  struct IImmersiveApplicationInternal *v49; // [rsp+60h] [rbp-A0h] BYREF
  int v50[2]; // [rsp+68h] [rbp-98h] BYREF
  struct IImmersiveApplicationInternal *v51; // [rsp+70h] [rbp-90h] BYREF
  struct IAsyncCallback *v52; // [rsp+78h] [rbp-88h]
  HWND v53; // [rsp+80h] [rbp-80h]
  struct IIAMServiceProvider *v54; // [rsp+88h] [rbp-78h] BYREF
  CAppViewManager *v55; // [rsp+90h] [rbp-70h]
  PSRWLOCK v56; // [rsp+98h] [rbp-68h]
  __int64 v57; // [rsp+A0h] [rbp-60h]
  __int64 v58; // [rsp+A8h] [rbp-58h]
  _BYTE v59[16]; // [rsp+B0h] [rbp-50h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v61; // [rsp+D8h] [rbp-28h]
  _QWORD v62[40]; // [rsp+E0h] [rbp-20h] BYREF

  v58 = -2LL;
  v53 = a2;
  v10 = this;
  v46 = this;
  v11 = a5;
  v55 = a5;
  v52 = a6;
  v56 = (PSRWLOCK)a7;
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)v62);
  v62[0] = &CAppViewManagerTelemetry::ShowViewAsyncWorker::`vftable';
  CAppViewManagerTelemetry::ShowViewAsyncWorker::StartActivity((CAppViewManagerTelemetry::ShowViewAsyncWorker *)v62);
  v12 = *((_QWORD *)a4 + 2);
  v57 = v12;
  v13 = 0;
  if ( a5 )
  {
    *(_QWORD *)v50 = a5;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v50);
    v11 = 0LL;
    v61 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"ClientRequestedNavigationType",
      0x1Eu,
      0x1Du);
    v15 = Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<unsigned int>(
            (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))v50,
            v61,
            v14,
            &v47);
    v16 = (int)v47;
    if ( v15 < 0 )
      v16 = 0;
    v13 = v16 == 2;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v50);
  }
  if ( !v12 && !v13 || (v17 = a2 == a3, v18 = 1, !v17) )
    v18 = (char)v11;
  v54 = v11;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v54);
  (***((void (__fastcall ****)(_QWORD, GUID *, struct IIAMServiceProvider **))v10 + 15))(
    *((_QWORD *)v10 + 15),
    &GUID_5f75d642_3fd3_46f6_86d3_a4aee3c0ffee,
    &v54);
  CAutoApplicationCreationResourceGuarantee::CAutoApplicationCreationResourceGuarantee(
    (CAutoApplicationCreationResourceGuarantee *)v59,
    v54);
  v19 = 1;
  v50[0] = (int)v11;
  v51 = v11;
  v48 = v11;
  v49 = v11;
  v45 = (char)v11;
  v44 = (char)v11;
  v43 = (char)v11;
  v20 = CApplicationManagerUtility::g_pIAMGlobals;
  v47 = CApplicationManagerUtility::g_pIAMGlobals;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    WPP_SF_qqLLd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      v21,
      v22,
      v53,
      a3,
      *(_DWORD *)a4,
      *((_DWORD *)a4 + 1),
      *((_DWORD *)a4 + 2));
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v49);
  GlomForWindow = CAppViewManager::_GetGlomForWindow(v10, a3, &v49, &v43);
  if ( GlomForWindow >= 0 )
  {
    v24 = v43;
    if ( v18 && !v43 )
      a3 = (HWND)(*(__int64 (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)v49 + 384LL))(v49);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v51);
    GlomForWindow = CAppViewManager::_GetGlomForWindow(v46, v53, &v51, &v44);
    if ( GlomForWindow >= 0 )
    {
      if ( v24 || v18 )
      {
        if ( !CAppViewManager::_IsMultiViewOperationAllowed(v25, v51) )
        {
          v19 = 0;
          v50[0] = -2147024891;
          if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
            WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 12LL, &WPP_644466f823b93e4595a5a3e7b9e7deb6_Traceguids);
        }
      }
      else
      {
        v19 = 0;
        v50[0] = 1;
        if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          v36 = (*(__int64 (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)v49 + 416LL))(v49);
          WPP_SF_ll(*((_QWORD *)WPP_GLOBAL_Control + 2), v37, v38, 0LL, v36);
        }
      }
    }
    v10 = v46;
  }
  if ( GlomForWindow < 0 || !v19 )
    goto LABEL_21;
  if ( v44 )
  {
    Microsoft::WRL::ComPtr<IUnknown>::operator=((__int64 *)&v48, (__int64 *)&v51);
    if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 13LL, &WPP_644466f823b93e4595a5a3e7b9e7deb6_Traceguids);
  }
  else
  {
    v39 = *((_QWORD *)v10 + 15);
    v40 = *(__int64 (__fastcall **)(__int64, HWND, struct IImmersiveApplicationInternal *, CAppViewManager *, struct IImmersiveApplicationInternal **))(*(_QWORD *)v39 + 88LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v48);
    v41 = v40(v39, v53, v51, v55, &v48);
    GlomForWindow = v41;
    if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 14LL, &WPP_644466f823b93e4595a5a3e7b9e7deb6_Traceguids, v41);
    if ( GlomForWindow < 0 )
      goto LABEL_21;
    (*(void (__fastcall **)(struct IImmersiveApplicationInternal *, __int64))(*(_QWORD *)v48 + 368LL))(v48, 2LL);
    v45 = 1;
  }
  if ( !(*(unsigned __int8 (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)v49 + 416LL))(v49) )
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
    v46 = v55;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v46);
    v27 = v46;
    if ( !v46 )
    {
      v61 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(
        &hstringHeader,
        L"Windows.Foundation.Collections.ValueSet",
        0x28u,
        0x27u);
      GlomForWindow = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>>(
                        v61,
                        (__int64 *)&v46);
      v61 = 0LL;
      v27 = v46;
    }
    if ( GlomForWindow >= 0 )
    {
      v47 = (PSRWLOCK)v27;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v47);
      GlomForWindow = ViewSizePreferenceHelpers::SetTargetViewSizePreference(&v47, *(unsigned int *)a4);
      if ( GlomForWindow >= 0 )
      {
        if ( v57 )
        {
          LOBYTE(v28) = 1;
          v31 = PositionerPropertySetHelpers::SetAppActivationResponse((PositionerPropertySetHelpers *)&v47, v28, v30);
        }
        else
        {
          v31 = ViewSizePreferenceHelpers::SetSourceViewSizePreference(&v47, a3, *((unsigned int *)a4 + 1));
        }
        GlomForWindow = v31;
      }
      wil::Feature<__WilFeatureTraits_Feature_TabShell>::ReportUsageToService(v29, 3u);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v47);
      if ( GlomForWindow >= 0 )
      {
        if ( v26 )
          (*(void (__fastcall **)(PVOID))(*(_QWORD *)CApplicationManagerUtility::g_pIAMGlobals[21].Ptr + 24LL))(CApplicationManagerUtility::g_pIAMGlobals[21].Ptr);
        if ( v45 )
          GlomForWindow = (*(__int64 (__fastcall **)(_QWORD, struct IImmersiveApplicationInternal *, CAppViewManager *, PSRWLOCK, struct IImmersiveApplicationInternal *))(**((_QWORD **)v10 + 15) + 152LL))(
                            *((_QWORD *)v10 + 15),
                            v48,
                            v46,
                            v56,
                            v49);
        if ( GlomForWindow >= 0 )
          GlomForWindow = CAppViewManager::_TrySwitchToApplication(v10, v48, v46);
      }
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v46);
  }
  v32 = 0;
  LODWORD(v47) = 0;
  v33 = CApplicationManagerUtility::g_pIAMGlobals;
  v56 = CApplicationManagerUtility::g_pIAMGlobals;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  if ( GlomForWindow < 0 )
  {
    if ( v48 && v51 && v51 != v48 )
      (*(void (__fastcall **)(_QWORD, struct IImmersiveApplicationInternal *, struct IImmersiveApplicationInternal *, _QWORD))(**((_QWORD **)v10 + 15) + 104LL))(
        *((_QWORD *)v10 + 15),
        v48,
        v51,
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
    v34 = v52;
    goto LABEL_46;
  }
  v34 = v52;
  if ( v52 && (*(unsigned __int8 (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)v48 + 472LL))(v48) )
  {
    GlomForWindow = CAppViewManager::_AddPresentedWindowCallbackTrigger(
                      (__int64)v10,
                      1,
                      (__int64 (__fastcall ***)(_QWORD, GUID *, _DWORD *))v48,
                      (__int64)v53,
                      (__int64)v34,
                      &v47);
    v32 = (int)v47;
  }
LABEL_46:
  if ( v33 )
    ReleaseSRWLockExclusive(v33);
  if ( v34 && !v32 )
  {
    v42 = GlomForWindow;
    if ( GlomForWindow >= 0 )
      v42 = v50[0];
    CAppViewManager::_s_QueueCallback(v49, v34, v42);
    if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 16LL, &WPP_644466f823b93e4595a5a3e7b9e7deb6_Traceguids, v42);
  }
  if ( GlomForWindow >= 0 )
    GlomForWindow = v19 != 0;
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(
    v62,
    (unsigned int)GlomForWindow);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v49);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v48);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v51);
  CAutoApplicationCreationResourceGuarantee::~CAutoApplicationCreationResourceGuarantee((CAutoApplicationCreationResourceGuarantee *)v59);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v54);
  v62[0] = &CAppViewManagerTelemetry::ShowViewAsyncWorker::`vftable';
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(v62);
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(v62);
  return (unsigned int)GlomForWindow;
}
