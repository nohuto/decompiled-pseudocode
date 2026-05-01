/*
 * XREFs of ?RuntimeClassInitialize@CPPIAllUpViewHost@@QEAAJPEAUIMultitaskingData@@PEAUIMultitaskingViewManagerInternal@@PEAUIApplicationViewSwitcher@@PEAUIImmersiveAppCrusher@@PEAUIMultitaskingViewVisibilityServiceInternal@@PEAUITabletModeViewManager@@@Z @ 0x1802F0FAC
 * Callers:
 *     ??$MakeAndInitialize@VCPPIAllUpViewHost@@V1@AEAPEAUIMultitaskingData@@AEAPEAUIMultitaskingViewManagerInternal@@AEAPEAUIApplicationViewSwitcher@@AEAPEAUIImmersiveAppCrusher@@AEAPEAUIMultitaskingViewVisibilityServiceInternal@@AEAPEAUITabletModeViewManager@@@Details@WRL@Microsoft@@YAJPEAPEAVCPPIAllUpViewHost@@AEAPEAUIMultitaskingData@@AEAPEAUIMultitaskingViewManagerInternal@@AEAPEAUIApplicationViewSwitcher@@AEAPEAUIImmersiveAppCrusher@@AEAPEAUIMultitaskingViewVisibilityServiceInternal@@AEAPEAUITabletModeViewManager@@@Z @ 0x1802F0530 (--$MakeAndInitialize@VCPPIAllUpViewHost@@V1@AEAPEAUIMultitaskingData@@AEAPEAUIMultitaskingViewMa.c)
 * Callees:
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x18001C76C (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?InitApartmentId@CObjectWithThreadUseDetection@@QEAAJXZ @ 0x1800EF640 (-InitApartmentId@CObjectWithThreadUseDetection@@QEAAJXZ.c)
 *     ??4?$ComPtr@UIVirtualDesktopNotification@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopNotification@@@Z @ 0x180119A90 (--4-$ComPtr@UIVirtualDesktopNotification@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopNotific.c)
 *     ??$As@UIFrameInteractionEvents@@@?$ComPtr@UIMultitaskingViewController@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIFrameInteractionEvents@@@WRL@Microsoft@@@Details@12@@Z @ 0x1802ECED4 (--$As@UIFrameInteractionEvents@@@-$ComPtr@UIMultitaskingViewController@@@WRL@Microsoft@@QEBAJV-$.c)
 *     ??$As@UISwitchItemController@@@?$ComPtr@UIMultitaskingViewController@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UISwitchItemController@@@WRL@Microsoft@@@Details@12@@Z @ 0x1802ECF18 (--$As@UISwitchItemController@@@-$ComPtr@UIMultitaskingViewController@@@WRL@Microsoft@@QEBAJV-$Co.c)
 *     ??$MakeAndInitialize@V?$CWeakReference@VCPPIAllUpViewHost@@@WeakReference@@V12@AEAPEAVCPPIAllUpViewHost@@@Details@WRL@Microsoft@@YAJPEAPEAV?$CWeakReference@VCPPIAllUpViewHost@@@WeakReference@@AEAPEAVCPPIAllUpViewHost@@@Z @ 0x1802F049C (--$MakeAndInitialize@V-$CWeakReference@VCPPIAllUpViewHost@@@WeakReference@@V12@AEAPEAVCPPIAllUpV.c)
 *     ?CSwitchItemElementFactory_CreateInstance@@YAJAEBUSwitchItemElementFactoryCreateParams@@PEAUIApplicationViewIconLoader@@AEBU_GUID@@PEAPEAX@Z @ 0x1802F6CBC (-CSwitchItemElementFactory_CreateInstance@@YAJAEBUSwitchItemElementFactoryCreateParams@@PEAUIApp.c)
 *     ?GetConfigFromRegistry@MultitaskingViewConfigHelpers@@YAXW4ConfigView@1@PEAUMultitaskingViewConfig@@@Z @ 0x1802F8A28 (-GetConfigFromRegistry@MultitaskingViewConfigHelpers@@YAXW4ConfigView@1@PEAUMultitaskingViewConf.c)
 *     ?CMultitaskingViewFrame_CreateInstance@@YAJW4MultitaskingViewControlFlags@@AEBUMultitaskingViewConfig@@PEAUISwitchThumbnailDeviceManager@@PEAUIElementFactory@@PEAUISwitchItemController@@PEAUIVirtualDesktopElementFactory@@PEAUIFrameLevelAnimationCoordinator@@AEBU_GUID@@PEAPEAX@Z @ 0x1802FA7E4 (-CMultitaskingViewFrame_CreateInstance@@YAJW4MultitaskingViewControlFlags@@AEBUMultitaskingViewC.c)
 *     ?CPPIAllUpViewController_CreateInstance@@YAJPEAUIWeakReference@WeakReference@@PEAUIMultitaskingViewManagerInternal@@PEAUIApplicationViewSwitcher@@PEAUIImmersiveAppCrusher@@PEAUITabletModeViewManager@@AEBU_GUID@@PEAPEAX@Z @ 0x1802FF0E8 (-CPPIAllUpViewController_CreateInstance@@YAJPEAUIWeakReference@WeakReference@@PEAUIMultitaskingV.c)
 */

__int64 __fastcall CPPIAllUpViewHost::RuntimeClassInitialize(
        CPPIAllUpViewHost *this,
        struct IMultitaskingData *a2,
        struct IMultitaskingViewManagerInternal *a3,
        struct IApplicationViewSwitcher *a4,
        struct IImmersiveAppCrusher *a5,
        struct IMultitaskingViewVisibilityServiceInternal *a6,
        struct ITabletModeViewManager *a7)
{
  int inited; // ebx
  __int64 v11; // rdx
  int v12; // eax
  int v13; // eax
  int v14; // eax
  const struct _GUID *v15; // r8
  int v16; // eax
  unsigned __int64 v17; // r9
  __int64 v18; // rdx
  _QWORD *v19; // rsi
  struct IWeakReference *v20; // rbx
  int Instance; // eax
  __int64 v22; // rdx
  __int64 *v23; // rdi
  int v24; // eax
  __int64 v25; // rdx
  const struct _GUID *v27; // [rsp+28h] [rbp-D8h]
  CPPIAllUpViewHost *v28; // [rsp+50h] [rbp-B0h] BYREF
  void *v29; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v30; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v31; // [rsp+68h] [rbp-98h] BYREF
  int v32[2]; // [rsp+70h] [rbp-90h] BYREF
  struct IApplicationViewIconLoader *v33; // [rsp+78h] [rbp-88h] BYREF
  __int64 v34; // [rsp+80h] [rbp-80h] BYREF
  struct ITabletModeViewManager *v35; // [rsp+88h] [rbp-78h]
  struct IImmersiveAppCrusher *v36; // [rsp+90h] [rbp-70h]
  struct IApplicationViewSwitcher *v37; // [rsp+98h] [rbp-68h]
  _BYTE v38[120]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v39; // [rsp+118h] [rbp+18h]
  __int64 v40; // [rsp+120h] [rbp+20h]
  __int64 v41; // [rsp+180h] [rbp+80h]
  __int64 v42; // [rsp+228h] [rbp+128h]
  __int64 v43; // [rsp+2C8h] [rbp+1C8h]
  __int64 v44; // [rsp+340h] [rbp+240h]
  __int64 v45; // [rsp+408h] [rbp+308h]
  __int64 v46; // [rsp+4C0h] [rbp+3C0h]
  wil::details::in1diag3 *retaddr; // [rsp+598h] [rbp+498h]

  v36 = a5;
  v35 = a7;
  v37 = a4;
  inited = CObjectWithThreadUseDetection::InitApartmentId((CPPIAllUpViewHost *)((char *)this + 24));
  if ( inited >= 0 )
  {
    v28 = this;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 21);
    v12 = Microsoft::WRL::Details::MakeAndInitialize<WeakReference::CWeakReference<CPPIAllUpViewHost>,WeakReference::CWeakReference<CPPIAllUpViewHost>,CPPIAllUpViewHost * &>(
            (_QWORD *)this + 21,
            &v28);
    inited = v12;
    if ( v12 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x31,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\CustomWeakReference.h",
        (const char *)(unsigned int)v12);
      v11 = 68LL;
      goto LABEL_3;
    }
    (*(void (__fastcall **)(struct IMultitaskingData *, __int64 *))(*(_QWORD *)a2 + 24LL))(a2, &v34);
    Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 17, (__int64)a2);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 10);
    v13 = (**(__int64 (__fastcall ***)(struct IMultitaskingViewManagerInternal *, GUID *, char *))a3)(
            a3,
            &GUID_537b455d_1240_433b_82af_10929138b8be,
            (char *)this + 80);
    inited = v13;
    if ( v13 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4E,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\ppiallupviewhost.cpp",
        (const char *)(unsigned int)v13);
LABEL_31:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v34);
      return (unsigned int)inited;
    }
    Microsoft::WRL::ComPtr<IVirtualDesktopNotification>::operator=((__int64 *)this + 11, (__int64)a6);
    v30 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v30);
    v14 = (*(__int64 (__fastcall **)(struct IMultitaskingViewManagerInternal *, __int64 *))(*(_QWORD *)a3 + 24LL))(
            a3,
            &v30);
    inited = v14;
    if ( v14 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x53,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\ppiallupviewhost.cpp",
        (const char *)(unsigned int)v14);
LABEL_30:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v30);
      goto LABEL_31;
    }
    (*(void (__fastcall **)(_QWORD, struct IApplicationViewIconLoader **))(**((_QWORD **)this + 17) + 88LL))(
      *((_QWORD *)this + 17),
      &v33);
    v29 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v29);
    LODWORD(v28) = 2;
    v16 = CSwitchItemElementFactory_CreateInstance(
            (const struct SwitchItemElementFactoryCreateParams *)&v28,
            v33,
            v15,
            &v29);
    inited = v16;
    if ( v16 < 0 )
    {
      v17 = (unsigned int)v16;
      v18 = 90LL;
LABEL_14:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v18,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\ppiallupviewhost.cpp",
        (const char *)v17);
LABEL_29:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v29);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v33);
      goto LABEL_30;
    }
    v19 = (_QWORD *)((char *)this + 144);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 18);
    v28 = (CPPIAllUpViewHost *)*((_QWORD *)this + 21);
    v20 = (struct IWeakReference *)v28;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v28);
    inited = CPPIAllUpViewController_CreateInstance(v20, a3, v37, v36, v35, v27, (void **)this + 18);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v28);
    if ( inited < 0 )
    {
      v17 = (unsigned int)inited;
      v18 = 98LL;
      goto LABEL_14;
    }
    v39 = 0LL;
    v40 = 0LL;
    v41 = 0LL;
    v42 = 0LL;
    v43 = 0LL;
    v44 = 0LL;
    v45 = 0LL;
    v46 = 0LL;
    MultitaskingViewConfigHelpers::GetConfigFromRegistry(3LL, v38);
    *(_QWORD *)v32 = 0LL;
    Instance = Microsoft::WRL::ComPtr<IMultitaskingViewController>::As<ISwitchItemController>(
                 (_QWORD *)this + 18,
                 (__int64 *)v32);
    inited = Instance;
    if ( Instance < 0 )
    {
      v22 = 106LL;
LABEL_19:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v22,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\ppiallupviewhost.cpp",
        (const char *)(unsigned int)Instance);
LABEL_28:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v32);
      goto LABEL_29;
    }
    v23 = (__int64 *)((char *)this + 152);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v23);
    Instance = CMultitaskingViewFrame_CreateInstance(9LL, v38, v30, v29, *(_QWORD *)v32, 0LL, 0LL);
    inited = Instance;
    if ( Instance < 0 )
    {
      v22 = 115LL;
      goto LABEL_19;
    }
    v31 = 0LL;
    v24 = Microsoft::WRL::ComPtr<IMultitaskingViewController>::As<IFrameInteractionEvents>(v19, &v31);
    inited = v24;
    if ( v24 >= 0 )
    {
      v24 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)*v23 + 144LL))(*v23, v31);
      inited = v24;
      if ( v24 >= 0 )
      {
        v24 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)*v23 + 40LL))(*v23, v34);
        inited = v24;
        if ( v24 >= 0 )
        {
LABEL_27:
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v31);
          goto LABEL_28;
        }
        v25 = 120LL;
      }
      else
      {
        v25 = 119LL;
      }
    }
    else
    {
      v25 = 118LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v25,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\ppiallupviewhost.cpp",
      (const char *)(unsigned int)v24);
    goto LABEL_27;
  }
  v11 = 65LL;
LABEL_3:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (__int64)"pcshell\\twinui\\multitaskingview\\lib\\ppiallupviewhost.cpp",
    (const char *)(unsigned int)inited);
  return (unsigned int)inited;
}
