/*
 * XREFs of ?DragCompleteWorker@CAppViewManager@@AEAAJAEBU_GUID@@UtagPOINT@@@Z @ 0x18012FB78
 * Callers:
 *     _lambda_9c39f2de9248b3982b3805f9f5b1e7b6_::operator() @ 0x18012E530 (_lambda_9c39f2de9248b3982b3805f9f5b1e7b6_--operator().c)
 *     ?DragComplete@CAppViewManager@@UEAAJAEBU_GUID@@UtagPOINT@@@Z @ 0x18012F9E0 (-DragComplete@CAppViewManager@@UEAAJAEBU_GUID@@UtagPOINT@@@Z.c)
 * Callees:
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18003B30C (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CAX_NW4ReportingKind.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetViewForApplication@ApplicationViewHelpers@@YAJPEAUIUnknown@@PEAUIImmersiveApplication@@PEAPEAUIApplicationView@@@Z @ 0x180067C28 (-GetViewForApplication@ApplicationViewHelpers@@YAJPEAUIUnknown@@PEAUIImmersiveApplication@@PEAPE.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006A5CC (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$As@UIImmersiveApplicationInternal@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@Details@12@@Z @ 0x18007A3E8 (--$As@UIImmersiveApplicationInternal@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008BBC0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIImmersiveApplication@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@@Details@12@@Z @ 0x18010A874 (--$As@UIImmersiveApplication@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@U.c)
 *     ShellPositionerHelpers::PerformCallbackOnView__lambda_4e85860f665640dc245d482c7860310e___ @ 0x18012CA3C (ShellPositionerHelpers--PerformCallbackOnView__lambda_4e85860f665640dc245d482c7860310e___.c)
 *     ??0?$ActivityBase@VTabShellTelemetryProvider@@$00$0EAAAAAAAAAAA@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18012D1D0 (--0-$ActivityBase@VTabShellTelemetryProvider@@$00$0EAAAAAAAAAAA@$03$0A@U_TlgReflectorTag_Param0I.c)
 *     ??1DragComplete@AppViewManagerTabTelemetry@@QEAA@XZ @ 0x18012DD40 (--1DragComplete@AppViewManagerTabTelemetry@@QEAA@XZ.c)
 *     _lambda_3a58774b2403835eabbd2227e376bc7e_::operator() @ 0x18012E0BC (_lambda_3a58774b2403835eabbd2227e376bc7e_--operator().c)
 *     ?DragViewComplete@DragComplete@AppViewManagerTabTelemetry@@QEAAXPEAUIApplicationView@@@Z @ 0x180130354 (-DragViewComplete@DragComplete@AppViewManagerTabTelemetry@@QEAAXPEAUIApplicationView@@@Z.c)
 *     ?StartActivity@DragComplete@AppViewManagerTabTelemetry@@QEAAXAEBU_GUID@@AEBUtagPOINT@@@Z @ 0x180132F38 (-StartActivity@DragComplete@AppViewManagerTabTelemetry@@QEAAXAEBU_GUID@@AEBUtagPOINT@@@Z.c)
 *     ?Stop@?$ActivityBase@VTabShellTelemetryProvider@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180133E68 (-Stop@-$ActivityBase@VTabShellTelemetryProvider@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Para.c)
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
  int v8; // edi
  __int64 v9; // rsi
  __int64 (__fastcall *v10)(__int64, const struct _GUID *, __int64 *, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)); // rdi
  int v11; // eax
  __int64 v12; // rdx
  int v13; // eax
  __int64 v14; // rax
  int v15; // eax
  struct IApplicationView **v16; // r9
  int ViewForApplication; // eax
  unsigned __int64 v18; // r9
  __int64 v19; // rdx
  RTL_SRWLOCK *v21; // rbx
  const char *v22; // r9
  struct IApplicationView *v23; // [rsp+38h] [rbp-D0h] BYREF
  __int64 (__fastcall ***v24)(_QWORD, GUID *, __int64 *); // [rsp+40h] [rbp-C8h] BYREF
  __int64 (__fastcall ***v25)(_QWORD, GUID *, __int64 *); // [rsp+48h] [rbp-C0h] BYREF
  struct IUnknown *v26; // [rsp+50h] [rbp-B8h] BYREF
  int v27; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v28; // [rsp+60h] [rbp-A8h] BYREF
  __int64 (__fastcall ****v29)(_QWORD, GUID *, __int64 *); // [rsp+70h] [rbp-98h]
  struct tagPOINT v30; // [rsp+78h] [rbp-90h] BYREF
  __int64 v31; // [rsp+80h] [rbp-88h]
  __int128 v32; // [rsp+88h] [rbp-80h] BYREF
  __int64 (__fastcall ****v33)(_QWORD, GUID *, __int64 *); // [rsp+98h] [rbp-70h]
  char v34; // [rsp+A0h] [rbp-68h]
  __int64 v35; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v36; // [rsp+B0h] [rbp-58h]
  _QWORD v37[40]; // [rsp+B8h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+230h] [rbp+128h]

  v31 = -2LL;
  v30 = a3;
  wil::ActivityBase<TabShellTelemetryProvider,1,70368744177664,4,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TabShellTelemetryProvider,1,70368744177664,4,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v37,
    (__int64)"DragComplete");
  v37[0] = &AppViewManagerTabTelemetry::DragComplete::`vftable';
  AppViewManagerTabTelemetry::DragComplete::StartActivity((AppViewManagerTabTelemetry::DragComplete *)v37, a2, &v30);
  v25 = 0LL;
  *(_QWORD *)&v28 = this;
  *((_QWORD *)&v28 + 1) = a2;
  v29 = &v25;
  v32 = v28;
  v33 = &v25;
  v35 = 0LL;
  v36 = 0LL;
  v5 = CApplicationManagerUtility::g_pIAMGlobals;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v6 = (*(__int64 (__fastcall **)(_QWORD, const struct _GUID *, int *))(**((_QWORD **)this + 23) + 24LL))(
         *((_QWORD *)this + 23),
         a2,
         &v27);
  v8 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x508,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_7;
  }
  if ( v27 )
  {
    v24 = 0LL;
    v9 = *((_QWORD *)this + 23);
    v10 = *(__int64 (__fastcall **)(__int64, const struct _GUID *, __int64 *, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)v9 + 56LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v24);
    v11 = v10(v9, a2, &v35, &v24);
    v8 = v11;
    if ( v11 < 0 )
    {
      v12 = 1293LL;
LABEL_6:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v12,
        (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
        (const char *)(unsigned int)v11);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v24);
LABEL_7:
      if ( v5 )
        ReleaseSRWLockExclusive(v5);
      goto LABEL_29;
    }
    if ( v24 )
    {
      v11 = Microsoft::WRL::ComPtr<IUnknown>::As<IImmersiveApplicationInternal>(&v24, (__int64 *)&v25);
      v8 = v11;
      if ( v11 < 0 )
      {
        v12 = 1296LL;
        goto LABEL_6;
      }
    }
    v13 = (*(__int64 (__fastcall **)(_QWORD, const struct _GUID *, __int64, __int64))(**((_QWORD **)this + 23) + 40LL))(
            *((_QWORD *)this + 23),
            a2,
            1LL,
            1LL);
    if ( v13 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x514,
        (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
        (const char *)(unsigned int)v13);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v24);
  }
  if ( v5 )
    ReleaseSRWLockExclusive(v5);
  v14 = v35 - *(_QWORD *)&GUID_NULL.Data1;
  if ( v35 == *(_QWORD *)&GUID_NULL.Data1 )
    v14 = v36 - *(_QWORD *)GUID_NULL.Data4;
  if ( v14 )
  {
    wil::Feature<__WilFeatureTraits_Feature_TabShell>::ReportUsageToService(v7, 3u);
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      1343LL,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
      v22);
    JUMPOUT(0x18012FF7CLL);
  }
  if ( !v25 )
    goto LABEL_34;
  v26 = 0LL;
  v15 = Microsoft::WRL::ComPtr<IUnknown>::As<IImmersiveApplication>(&v25, (__int64 *)&v26);
  v8 = v15;
  if ( v15 >= 0 )
  {
    v23 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v23);
    ViewForApplication = ApplicationViewHelpers::GetViewForApplication(
                           *((IUnknown **)this + 15),
                           v26,
                           (struct IImmersiveApplication *)&v23,
                           v16);
    v8 = ViewForApplication;
    if ( ViewForApplication < 0 )
    {
      v18 = (unsigned int)ViewForApplication;
      v19 = 1314LL;
LABEL_27:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v19,
        (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
        (const char *)v18);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v23);
      goto LABEL_28;
    }
    AppViewManagerTabTelemetry::DragComplete::DragViewComplete((AppViewManagerTabTelemetry::DragComplete *)v37, v23);
    *(_QWORD *)&v28 = v23;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v28);
    *((struct tagPOINT *)&v28 + 1) = v30;
    v8 = ShellPositionerHelpers::PerformCallbackOnView__lambda_4e85860f665640dc245d482c7860310e___(
           *((IUnknown **)this + 15),
           (__int64)v23,
           (volatile signed __int32 *)&v28);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v28);
    if ( v8 < 0 )
    {
      v18 = (unsigned int)v8;
      v19 = 1331LL;
      goto LABEL_27;
    }
    v21 = CApplicationManagerUtility::g_pIAMGlobals;
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *), _QWORD))(*v25)[69])(v25, 0LL);
    if ( v21 )
      ReleaseSRWLockExclusive(v21);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v23);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v26);
LABEL_34:
    wil::ActivityBase<TabShellTelemetryProvider,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v37);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v25);
    AppViewManagerTabTelemetry::DragComplete::~DragComplete((AppViewManagerTabTelemetry::DragComplete *)v37);
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x51E,
    (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
    (const char *)(unsigned int)v15);
LABEL_28:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v26);
LABEL_29:
  v34 = 0;
  lambda_3a58774b2403835eabbd2227e376bc7e_::operator()((_QWORD **)&v32);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v25);
  AppViewManagerTabTelemetry::DragComplete::~DragComplete((AppViewManagerTabTelemetry::DragComplete *)v37);
  return (unsigned int)v8;
}
