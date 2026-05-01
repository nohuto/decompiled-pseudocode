/*
 * XREFs of ?_ContinueSwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@VSwitchAsyncWorker@CAppViewManagerTelemetry@@PEAUIAsyncCallback@@@Z @ 0x180136BA4
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)_::DelegateInvokeHelper_IAsyncCallback__lambda_4eb51ed923c3c5026d1aa1b932d3fcbb___1_long_::Invoke @ 0x180131290 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_IAsyncCallback--_)(long)_-_ea_180131290.c)
 *     ?_SwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIAsyncCallback@@@Z @ 0x180139648 (-_SwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUIViewWrapp.c)
 * Callees:
 *     ?_TrySwitchToApplication@CAppViewManager@@AEAAJPEAUIImmersiveApplicationInternal@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180010C58 (-_TrySwitchToApplication@CAppViewManager@@AEAAJPEAUIImmersiveApplicationInternal@@PEAUIPropertyS.c)
 *     ?_AddPresentedWindowCallbackTrigger@CAppViewManager@@AEAAJW4PresentedWindowWaitType@1@PEAUIImmersiveApplicationInternal@@PEAUHWND__@@PEAUIAsyncCallback@@PEAK@Z @ 0x180010D68 (-_AddPresentedWindowCallbackTrigger@CAppViewManager@@AEAAJW4PresentedWindowWaitType@1@PEAUIImmer.c)
 *     ??$ActivateInstance@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18003AD54 (--$ActivateInstance@V-$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Fou.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800403C0 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180059BD0 (-Stop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x180120C70 (WPP_SF_.c)
 *     ??1SwitchAsyncWorker@CAppViewManagerTelemetry@@QEAA@XZ @ 0x18012DE48 (--1SwitchAsyncWorker@CAppViewManagerTelemetry@@QEAA@XZ.c)
 *     ?PopulateSwitchAsyncPropertySet@@YAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180131F28 (-PopulateSwitchAsyncPropertySet@@YAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUIPropertySet@Col.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_AddSwitchAsyncContextToPositionerActivations@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180132244 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_AddSwitchAsyncContextToPositionerAct.c)
 *     ?TransferToCurrentThread@SwitchAsyncWorker@CAppViewManagerTelemetry@@QEAA?AV12@XZ @ 0x180136734 (-TransferToCurrentThread@SwitchAsyncWorker@CAppViewManagerTelemetry@@QEAA-AV12@XZ.c)
 *     ?_PrepareToSwitchHelper@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEBUTransferWindowOptions@@PEAPEAUIImmersiveApplicationInternal@@PEA_N4@Z @ 0x180138094 (-_PrepareToSwitchHelper@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEBUTransf.c)
 *     ?_s_QueueCallback@CAppViewManager@@CAXPEAUIImmersiveApplicationInternal@@PEAUIAsyncCallback@@J@Z @ 0x18013A240 (-_s_QueueCallback@CAppViewManager@@CAXPEAUIImmersiveApplicationInternal@@PEAUIAsyncCallback@@J@Z.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CAppViewManager::_ContinueSwitchAsyncWorker(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        CAppViewManagerTelemetry::SwitchAsyncWorker *a5,
        struct IAsyncCallback *a6)
{
  IUnknown **v8; // rsi
  int v9; // r14d
  int v10; // ebx
  RTL_SRWLOCK *v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  int v15; // r13d
  struct IImmersiveApplicationInternal *v16; // rbx
  __int64 (__fastcall *v17)(struct IImmersiveApplicationInternal *, __int64, GUID *, __int64 *); // rsi
  int v18; // eax
  int v19; // eax
  char v21; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v22[7]; // [rsp+41h] [rbp-BFh] BYREF
  struct IImmersiveApplicationInternal *v23; // [rsp+48h] [rbp-B8h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v24; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v25; // [rsp+58h] [rbp-A8h]
  __int64 v26; // [rsp+60h] [rbp-A0h] BYREF
  IUnknown **v27; // [rsp+68h] [rbp-98h]
  __int64 v28; // [rsp+70h] [rbp-90h]
  CAppViewManagerTelemetry::SwitchAsyncWorker *v29; // [rsp+78h] [rbp-88h]
  __int64 v30; // [rsp+80h] [rbp-80h]
  PSRWLOCK v31; // [rsp+88h] [rbp-78h]
  CAppViewManagerTelemetry::SwitchAsyncWorker *v32; // [rsp+90h] [rbp-70h]
  HSTRING_HEADER hstringHeader; // [rsp+98h] [rbp-68h] BYREF
  __int64 v34; // [rsp+B0h] [rbp-50h]
  _QWORD v35[40]; // [rsp+C0h] [rbp-40h] BYREF

  v30 = -2LL;
  v25 = a4;
  v28 = a2;
  v8 = (IUnknown **)a1;
  v27 = (IUnknown **)a1;
  v29 = a5;
  v32 = a5;
  CAppViewManagerTelemetry::SwitchAsyncWorker::TransferToCurrentThread((__int64)a5, v35);
  v9 = 0;
  v21 = 0;
  v22[0] = 0;
  v10 = 0;
  LODWORD(v24) = 0;
  v23 = 0LL;
  v11 = CApplicationManagerUtility::g_pIAMGlobals;
  v31 = CApplicationManagerUtility::g_pIAMGlobals;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  *(_OWORD *)&hstringHeader.Reserved.Reserved1 = (unsigned __int64)a3;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v23);
  v15 = CAppViewManager::_PrepareToSwitchHelper(v8, v28, a3, a4, &hstringHeader, &v23, &v21, v22);
  if ( v15 == 1 )
  {
    if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x11u, &WPP_644466f823b93e4595a5a3e7b9e7deb6_Traceguids);
    v9 = (*(__int64 (__fastcall **)(struct IImmersiveApplicationInternal *, __int64, __int64, bool))(*(_QWORD *)v23 + 112LL))(
           v23,
           a3,
           2LL,
           (v25 & 1) == 0);
    if ( v9 < 0 )
      goto LABEL_11;
    if ( a6 )
    {
      v26 = 0LL;
      v16 = v23;
      v17 = *(__int64 (__fastcall **)(struct IImmersiveApplicationInternal *, __int64, GUID *, __int64 *))(*(_QWORD *)v23 + 352LL);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v26);
      v18 = v17(v16, 3LL, &GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891, &v26);
      v8 = v27;
      if ( v18 >= 0 )
        v9 = CAppViewManager::_AddPresentedWindowCallbackTrigger(
               (__int64)v27,
               2,
               (__int64 (__fastcall ***)(_QWORD, GUID *, _DWORD *))v23,
               a3,
               (__int64)a6,
               &v24);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v26);
      v10 = (int)v24;
    }
    if ( v9 < 0 )
LABEL_11:
      (*(void (__fastcall **)(struct IImmersiveApplicationInternal *, __int64, _QWORD))(*(_QWORD *)v23 + 224LL))(
        v23,
        a3,
        0LL);
  }
  if ( v11 )
    ReleaseSRWLockExclusive(v11);
  if ( v15 < 0 )
  {
    v9 = v15;
  }
  else if ( v21 )
  {
    v24 = 0LL;
    wil::Feature<__WilFeatureTraits_Feature_AddSwitchAsyncContextToPositionerActivations>::ReportUsageToService(
      v13,
      v12,
      v14);
    v34 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"Windows.Foundation.Collections.ValueSet",
      0x28u,
      0x27u);
    v19 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>>(
            v34,
            (__int64 *)&v24);
    v34 = 0LL;
    if ( v19 >= 0 )
      PopulateSwitchAsyncPropertySet(v28, a3, v25, (__int64)v24);
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)CApplicationManagerUtility::g_pIAMGlobals[21].Ptr + 24LL))(CApplicationManagerUtility::g_pIAMGlobals[21].Ptr);
    CAppViewManager::_TrySwitchToApplication(v8, v23, v24);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v24);
  }
  if ( a6 && !v10 )
    CAppViewManager::_s_QueueCallback(v23, a6, v9);
  if ( v9 >= 0 )
    v9 = v22[0] != 0;
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v35, v9);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v23);
  CAppViewManagerTelemetry::SwitchAsyncWorker::~SwitchAsyncWorker((CAppViewManagerTelemetry::SwitchAsyncWorker *)v35);
  CAppViewManagerTelemetry::SwitchAsyncWorker::~SwitchAsyncWorker(v29);
  return (unsigned int)v9;
}
