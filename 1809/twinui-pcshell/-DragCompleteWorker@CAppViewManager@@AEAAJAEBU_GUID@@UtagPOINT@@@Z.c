/*
 * XREFs of ?DragCompleteWorker@CAppViewManager@@AEAAJAEBU_GUID@@UtagPOINT@@@Z @ 0x180109888
 * Callers:
 *     _lambda_a6a1a1620cd1726c3c4e0031d0123816_::operator() @ 0x18008ABD8 (_lambda_a6a1a1620cd1726c3c4e0031d0123816_--operator().c)
 *     ?DragComplete@CAppViewManager@@UEAAJAEBU_GUID@@UtagPOINT@@@Z @ 0x180109690 (-DragComplete@CAppViewManager@@UEAAJAEBU_GUID@@UtagPOINT@@@Z.c)
 * Callees:
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180022984 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CAX_NW4ReportingKind.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetViewForApplication@ApplicationViewHelpers@@YAJPEAUIUnknown@@PEAUIImmersiveApplication@@PEAPEAUIApplicationView@@@Z @ 0x1800658D8 (-GetViewForApplication@ApplicationViewHelpers@@YAJPEAUIUnknown@@PEAUIImmersiveApplication@@PEAPE.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$As@UIImmersiveApplication@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@@Details@12@@Z @ 0x180071B38 (--$As@UIImmersiveApplication@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@U.c)
 *     ??$As@UIImmersiveApplicationInternal@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@Details@12@@Z @ 0x180078A9C (--$As@UIImmersiveApplicationInternal@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ShellPositionerHelpers::PerformCallbackOnView__lambda_824e0001d4003052e3151e6c6489077e___ @ 0x18008A81C (ShellPositionerHelpers--PerformCallbackOnView__lambda_824e0001d4003052e3151e6c6489077e___.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??1?$ComPtr@U?$IVectorView@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@Collections@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1800DD450 (--1-$ComPtr@U-$IVectorView@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@Collectio.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800DF27C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??0?$ActivityBase@VTabShellTelemetryProvider@@$00$0EAAAAAAAAAAA@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1801071F8 (--0-$ActivityBase@VTabShellTelemetryProvider@@$00$0EAAAAAAAAAAA@$03U_TlgReflectorTag_Param0IsPro.c)
 *     ??1DragComplete@AppViewManagerTabTelemetry@@QEAA@XZ @ 0x180107D7C (--1DragComplete@AppViewManagerTabTelemetry@@QEAA@XZ.c)
 *     _lambda_3a58774b2403835eabbd2227e376bc7e_::operator() @ 0x1801080F8 (_lambda_3a58774b2403835eabbd2227e376bc7e_--operator().c)
 *     ?DragViewComplete@DragComplete@AppViewManagerTabTelemetry@@QEAAXPEAUIApplicationView@@@Z @ 0x18010A054 (-DragViewComplete@DragComplete@AppViewManagerTabTelemetry@@QEAAXPEAUIApplicationView@@@Z.c)
 *     ?StartActivity@DragComplete@AppViewManagerTabTelemetry@@QEAAXAEBU_GUID@@AEBUtagPOINT@@@Z @ 0x18010C67C (-StartActivity@DragComplete@AppViewManagerTabTelemetry@@QEAAXAEBU_GUID@@AEBUtagPOINT@@@Z.c)
 *     ?Stop@?$ActivityBase@VTabShellTelemetryProvider@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18010D4B4 (-Stop@-$ActivityBase@VTabShellTelemetryProvider@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0Is.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAppViewManager::DragCompleteWorker(
        CAppViewManager *this,
        const struct _GUID *a2,
        struct tagPOINT a3)
{
  RTL_SRWLOCK *v5; // rbx
  int v6; // eax
  __int64 v7; // rcx
  __int64 v8; // r8
  int v9; // edi
  __int64 v10; // rdi
  int v11; // eax
  __int64 v12; // rdx
  int v13; // eax
  int v14; // eax
  struct IApplicationView **v15; // r9
  int ViewForApplication; // eax
  unsigned __int64 v17; // r9
  __int64 v18; // rdx
  RTL_SRWLOCK *v20; // rbx
  const char *v21; // r9
  struct IApplicationView *v22; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v23; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v24; // [rsp+40h] [rbp-C0h] BYREF
  struct IUnknown *v25; // [rsp+48h] [rbp-B8h] BYREF
  int v26; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v27; // [rsp+58h] [rbp-A8h] BYREF
  __int64 *v28; // [rsp+68h] [rbp-98h]
  struct tagPOINT v29; // [rsp+70h] [rbp-90h] BYREF
  __int128 v30; // [rsp+78h] [rbp-88h] BYREF
  __int64 *v31; // [rsp+88h] [rbp-78h]
  char v32; // [rsp+90h] [rbp-70h]
  __int64 v33; // [rsp+98h] [rbp-68h]
  __int64 v34; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v35; // [rsp+A8h] [rbp-58h]
  _QWORD v36[40]; // [rsp+B0h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+228h] [rbp+128h]

  v33 = -2LL;
  v29 = a3;
  wil::ActivityBase<TabShellTelemetryProvider,1,70368744177664,4,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TabShellTelemetryProvider,1,70368744177664,4,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v36,
    (__int64)"DragComplete");
  v36[0] = &AppViewManagerTabTelemetry::DragComplete::`vftable';
  AppViewManagerTabTelemetry::DragComplete::StartActivity((AppViewManagerTabTelemetry::DragComplete *)v36, a2, &v29);
  v24 = 0LL;
  *(_QWORD *)&v27 = this;
  *((_QWORD *)&v27 + 1) = a2;
  v28 = &v24;
  v30 = v27;
  v31 = &v24;
  v32 = 1;
  v34 = 0LL;
  v35 = 0LL;
  v5 = CApplicationManagerUtility::g_pIAMGlobals;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v6 = (*(__int64 (__fastcall **)(_QWORD, const struct _GUID *, int *))(**((_QWORD **)this + 23) + 24LL))(
         *((_QWORD *)this + 23),
         a2,
         &v26);
  v9 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x501,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_7;
  }
  if ( v26 )
  {
    v23 = 0LL;
    v10 = *((_QWORD *)this + 23);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
    v11 = (*(__int64 (__fastcall **)(__int64, const struct _GUID *, __int64 *, __int64 *))(*(_QWORD *)v10 + 56LL))(
            v10,
            a2,
            &v34,
            &v23);
    v9 = v11;
    if ( v11 < 0 )
    {
      v12 = 1286LL;
LABEL_6:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v12,
        (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
        (const char *)(unsigned int)v11);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
LABEL_7:
      if ( v5 )
        ReleaseSRWLockExclusive(v5);
      goto LABEL_28;
    }
    if ( v23 )
    {
      v11 = Microsoft::WRL::ComPtr<IUnknown>::As<IImmersiveApplicationInternal>(&v23, &v24);
      v9 = v11;
      if ( v11 < 0 )
      {
        v12 = 1289LL;
        goto LABEL_6;
      }
    }
    v13 = (*(__int64 (__fastcall **)(_QWORD, const struct _GUID *, __int64))(**((_QWORD **)this + 23) + 40LL))(
            *((_QWORD *)this + 23),
            a2,
            1LL);
    if ( v13 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        1293LL,
        (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
        (const char *)(unsigned int)v13);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
  }
  if ( v5 )
    ReleaseSRWLockExclusive(v5);
  if ( v34 != *(_QWORD *)&GUID_NULL.Data1 || v35 != *(_QWORD *)GUID_NULL.Data4 )
  {
    wil::Feature<__WilFeatureTraits_Feature_TabShell>::ReportUsageToService(v7, 3u, v8);
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      1336LL,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
      v21);
    JUMPOUT(0x180109C82LL);
  }
  if ( !v24 )
    goto LABEL_33;
  v25 = 0LL;
  v14 = Microsoft::WRL::ComPtr<IUnknown>::As<IImmersiveApplication>(&v24, (__int64 *)&v25);
  v9 = v14;
  if ( v14 >= 0 )
  {
    v22 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v22);
    ViewForApplication = ApplicationViewHelpers::GetViewForApplication(
                           *((IUnknown **)this + 15),
                           v25,
                           (struct IImmersiveApplication *)&v22,
                           v15);
    v9 = ViewForApplication;
    if ( ViewForApplication < 0 )
    {
      v17 = (unsigned int)ViewForApplication;
      v18 = 1307LL;
LABEL_26:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v18,
        (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
        (const char *)v17);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v22);
      goto LABEL_27;
    }
    AppViewManagerTabTelemetry::DragComplete::DragViewComplete((AppViewManagerTabTelemetry::DragComplete *)v36, v22);
    *(_QWORD *)&v27 = v22;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v27);
    *((struct tagPOINT *)&v27 + 1) = v29;
    v9 = ShellPositionerHelpers::PerformCallbackOnView__lambda_824e0001d4003052e3151e6c6489077e___(
           *((IUnknown **)this + 15),
           (__int64)v22,
           &v27);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>::~ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>((__int64 *)&v27);
    if ( v9 < 0 )
    {
      v17 = (unsigned int)v9;
      v18 = 1324LL;
      goto LABEL_26;
    }
    v20 = CApplicationManagerUtility::g_pIAMGlobals;
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v24 + 552LL))(v24, 0LL);
    if ( v20 )
      ReleaseSRWLockExclusive(v20);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v22);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v25);
LABEL_33:
    wil::ActivityBase<TabShellTelemetryProvider,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v36);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v24);
    AppViewManagerTabTelemetry::DragComplete::~DragComplete((AppViewManagerTabTelemetry::DragComplete *)v36);
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x517,
    (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
    (const char *)(unsigned int)v14);
LABEL_27:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v25);
LABEL_28:
  v32 = 0;
  lambda_3a58774b2403835eabbd2227e376bc7e_::operator()((_QWORD **)&v30);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v24);
  AppViewManagerTabTelemetry::DragComplete::~DragComplete((AppViewManagerTabTelemetry::DragComplete *)v36);
  return (unsigned int)v9;
}
