/*
 * XREFs of ?CreateXamlExplorerHostWindowInBand@XamlExplorerHostShellComponent@@UEAAJPEAUIXamlExplorerHostWindowCreatedCallback@@UtagRECT@@KAEBU_GUID@@PEAPEAX@Z @ 0x1802D0310
 * Callers:
 *     ?CreateXamlExplorerHostWindow@XamlExplorerHostShellComponent@@UEAAJPEAUIXamlExplorerHostWindowCreatedCallback@@UtagRECT@@AEBU_GUID@@PEAPEAX@Z @ 0x1802D0270 (-CreateXamlExplorerHostWindow@XamlExplorerHostShellComponent@@UEAAJPEAUIXamlExplorerHostWindowCr.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E934 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??$XamlExplorerHostWindowAvailable@_KAEA_N@XamlExplorerHostWindowCache@XamlExplorerHostTelemetry@@QEAAX$$QEA_KAEA_N@Z @ 0x1802CF7D4 (--$XamlExplorerHostWindowAvailable@_KAEA_N@XamlExplorerHostWindowCache@XamlExplorerHostTelemetry.c)
 *     ??0?$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1802CF90C (--0-$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@.c)
 *     ??1XamlExplorerHostWindowCache@XamlExplorerHostTelemetry@@QEAA@XZ @ 0x1802CFD8C (--1XamlExplorerHostWindowCache@XamlExplorerHostTelemetry@@QEAA@XZ.c)
 *     ?GrabAvailableWindowForSize@XamlExplorerHostShellComponent@@AEAAJUtagRECT@@PEA_NAEBU_GUID@@PEAPEAX@Z @ 0x1802D0F3C (-GrabAvailableWindowForSize@XamlExplorerHostShellComponent@@AEAAJUtagRECT@@PEA_NAEBU_GUID@@PEAPE.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_TaskViewWarmLaunch@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1802D1B7C (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_TaskViewWarmLaunch@@@wil@@CAX_NW4Rep.c)
 *     ?StartActivity@XamlExplorerHostWindowCache@XamlExplorerHostTelemetry@@QEAAX_K@Z @ 0x1802D1EB0 (-StartActivity@XamlExplorerHostWindowCache@XamlExplorerHostTelemetry@@QEAAX_K@Z.c)
 *     ?Stop@?$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1802D1FA4 (-Stop@-$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType.c)
 *     ?CreateXamlExplorerHostWindowInBand@XamlExplorerHost@@QE$AAAXPEAUIXamlExplorerHostWindowCreatedCallback@@UtagRECT@@KPEAUIPrivilegedPresentationOperations@@PEAUIXamlExplorerHost@@AEBU_GUID@@PEAPEAX@Z @ 0x1802D4090 (-CreateXamlExplorerHostWindowInBand@XamlExplorerHost@@QE$AAAXPEAUIXamlExplorerHostWindowCreatedC.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall XamlExplorerHostShellComponent::CreateXamlExplorerHostWindowInBand(
        unsigned __int64 this,
        struct IXamlExplorerHostWindowCreatedCallback *a2,
        struct tagRECT *a3,
        unsigned int a4,
        const struct _GUID *a5,
        void **a6)
{
  RTL_SRWLOCK *v10; // rsi
  unsigned __int64 v11; // rdi
  const struct _GUID *v12; // r9
  __int64 (__fastcall ***v13)(void *, GUID *, __int64 *); // rbx
  int v14; // eax
  unsigned int v15; // ebx
  const char *v16; // r9
  __int64 result; // rax
  int v18; // eax
  unsigned __int8 v19[8]; // [rsp+40h] [rbp-1C8h] BYREF
  void *v20; // [rsp+48h] [rbp-1C0h] BYREF
  __int64 v21[2]; // [rsp+50h] [rbp-1B8h] BYREF
  struct tagRECT v22; // [rsp+60h] [rbp-1A8h] BYREF
  const struct _GUID *v23; // [rsp+70h] [rbp-198h]
  __int64 v24; // [rsp+78h] [rbp-190h]
  _QWORD v25[40]; // [rsp+80h] [rbp-188h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+208h] [rbp+0h]

  v24 = -2LL;
  v23 = a5;
  *a6 = 0LL;
  v10 = (RTL_SRWLOCK *)(this + 104);
  AcquireSRWLockShared((PSRWLOCK)(this + 104));
  v11 = (__int64)(*(_QWORD *)(this + 80) - *(_QWORD *)(this + 72)) >> 3;
  if ( v10 )
    ReleaseSRWLockShared(v10);
  wil::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v25,
    (__int64)"XamlExplorerHostWindowCache");
  v25[0] = &XamlExplorerHostTelemetry::XamlExplorerHostWindowCache::`vftable';
  try
  {
    XamlExplorerHostTelemetry::XamlExplorerHostWindowCache::StartActivity(
      (XamlExplorerHostTelemetry::XamlExplorerHostWindowCache *)v25,
      v11);
    v20 = 0LL;
    wil::Feature<__WilFeatureTraits_Feature_TaskViewWarmLaunch>::ReportUsageToService();
    v19[0] = 0;
    v22 = *a3;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v20);
    if ( (int)XamlExplorerHostShellComponent::GrabAvailableWindowForSize(
                (XamlExplorerHostShellComponent *)(this - 128),
                &v22,
                (bool *)v19,
                v12,
                &v20) < 0 )
    {
      v19[0] = 0;
      *(_QWORD *)&v22.left = 0LL;
      XamlExplorerHostTelemetry::XamlExplorerHostWindowCache::XamlExplorerHostWindowAvailable<unsigned __int64,bool &>(
        (__int64)v25,
        (__int64)&v22,
        v19);
      v22 = *a3;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v20);
      XamlExplorerHost::CreateXamlExplorerHostWindowInBand(
        *(_QWORD *)(this + 96),
        (_DWORD)a2,
        (unsigned int)&v22,
        a4,
        *(_QWORD *)(this + 112),
        this & -(__int64)(this != 128));
    }
    else
    {
      *(_QWORD *)&v22.left = v20;
      XamlExplorerHostTelemetry::XamlExplorerHostWindowCache::XamlExplorerHostWindowAvailable<unsigned __int64,bool &>(
        (__int64)v25,
        (__int64)&v22,
        v19);
      if ( !v19[0] )
        (*(void (__fastcall **)(void *, struct tagRECT *))(*(_QWORD *)v20 + 48LL))(v20, a3);
      v21[0] = 0LL;
      v13 = (__int64 (__fastcall ***)(void *, GUID *, __int64 *))v20;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v21);
      v14 = (**v13)(v13, &GUID_f8e82291_6438_4724_8220_b95054cbeac9, v21);
      v15 = v14;
      if ( v14 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xC2,
          (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhostshellcomponent.cpp",
          (const char *)(unsigned int)v14);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v21);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v20);
        XamlExplorerHostTelemetry::XamlExplorerHostWindowCache::~XamlExplorerHostWindowCache((XamlExplorerHostTelemetry::XamlExplorerHostWindowCache *)v25);
        return v15;
      }
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v21[0] + 88LL))(v21[0], a4);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v21[0] + 80LL))(v21[0]);
      (*(void (__fastcall **)(__int64, struct IXamlExplorerHostWindowCreatedCallback *))(*(_QWORD *)v21[0] + 64LL))(
        v21[0],
        a2);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v21);
    }
    v18 = (**(__int64 (__fastcall ***)(void *, const struct _GUID *, void **))v20)(v20, v23, a6);
    if ( v18 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        212LL,
        (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhostshellcomponent.cpp",
        (const char *)(unsigned int)v18);
    wil::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v25);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v20);
    XamlExplorerHostTelemetry::XamlExplorerHostWindowCache::~XamlExplorerHostWindowCache((XamlExplorerHostTelemetry::XamlExplorerHostWindowCache *)v25);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xD8,
                           (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhostshellcomponent.cpp",
                           v16);
  }
  return result;
}
