/*
 * XREFs of ?RuntimeClassInitialize@CSnapAssistViewHost@@QEAAJPEAUIMultitaskingData@@PEAUIMultitaskingViewManagerInternal@@PEAUIMultitaskingViewVisibilityServiceInternal@@PEAUIImmersiveAppCrusher@@PEAUITabController@Tabs@ComposableShell@Internal@Windows@@PEAUITabViewManager@@@Z @ 0x1802EFACC
 * Callers:
 *     ??$MakeAndInitialize@VCSnapAssistViewHost@@V1@AEAPEAUIMultitaskingData@@AEAPEAUIMultitaskingViewManagerInternal@@AEAPEAUIMultitaskingViewVisibilityServiceInternal@@AEAPEAUIImmersiveAppCrusher@@AEAPEAUITabController@Tabs@ComposableShell@Internal@Windows@@AEAPEAUITabViewManager@@@Details@WRL@Microsoft@@YAJPEAPEAVCSnapAssistViewHost@@AEAPEAUIMultitaskingData@@AEAPEAUIMultitaskingViewManagerInternal@@AEAPEAUIMultitaskingViewVisibilityServiceInternal@@AEAPEAUIImmersiveAppCrusher@@AEAPEAUITabController@Tabs@ComposableShell@Internal@Windows@@AEAPEAUITabViewManager@@@Z @ 0x1802EF080 (--$MakeAndInitialize@VCSnapAssistViewHost@@V1@AEAPEAUIMultitaskingData@@AEAPEAUIMultitaskingView.c)
 * Callees:
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x18001C76C (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?InitApartmentId@CObjectWithThreadUseDetection@@QEAAJXZ @ 0x1800EF640 (-InitApartmentId@CObjectWithThreadUseDetection@@QEAAJXZ.c)
 *     ??4?$ComPtr@UIVirtualDesktopNotification@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopNotification@@@Z @ 0x180119A90 (--4-$ComPtr@UIVirtualDesktopNotification@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopNotific.c)
 *     ??4?$ComPtr@UISwitchItemFilteredCollection@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1802121B8 (--4-$ComPtr@UISwitchItemFilteredCollection@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??$MakeAndInitialize@V?$CWeakReference@VCSnapAssistViewHost@@@WeakReference@@V12@AEAPEAVCSnapAssistViewHost@@@Details@WRL@Microsoft@@YAJPEAPEAV?$CWeakReference@VCSnapAssistViewHost@@@WeakReference@@AEAPEAVCSnapAssistViewHost@@@Z @ 0x1802EEFEC (--$MakeAndInitialize@V-$CWeakReference@VCSnapAssistViewHost@@@WeakReference@@V12@AEAPEAVCSnapAss.c)
 *     ?SwitchItemFilteredCollection_CreateInstance@@YAJPEAUIObservableObjectArray@@AEBU_GUID@@PEAPEAX@Z @ 0x1802F5C60 (-SwitchItemFilteredCollection_CreateInstance@@YAJPEAUIObservableObjectArray@@AEBU_GUID@@PEAPEAX@.c)
 *     ?CSnapAssistViewController_CreateInstance@@YAJPEAUIWeakReference@WeakReference@@PEAUIMultitaskingViewManager@@PEAUIImmersiveAppCrusher@@PEAUITabController@Tabs@ComposableShell@Internal@Windows@@PEAUITabViewManager@@AEBU_GUID@@PEAPEAX@Z @ 0x1802FDFCC (-CSnapAssistViewController_CreateInstance@@YAJPEAUIWeakReference@WeakReference@@PEAUIMultitaskin.c)
 *     ?CreateHideWallpaperIconsObject@@YAJPEAPEAUIUnknown@@@Z @ 0x1803B1F24 (-CreateHideWallpaperIconsObject@@YAJPEAPEAUIUnknown@@@Z.c)
 */

__int64 __fastcall CSnapAssistViewHost::RuntimeClassInitialize(
        CSnapAssistViewHost *this,
        struct IMultitaskingData *a2,
        struct IMultitaskingViewManagerInternal *a3,
        struct IMultitaskingViewVisibilityServiceInternal *a4,
        struct IImmersiveAppCrusher *a5,
        struct Windows::Internal::ComposableShell::Tabs::ITabController *a6,
        struct ITabViewManager *a7)
{
  int inited; // ebx
  __int64 v11; // rdx
  __int64 *v12; // r12
  int v13; // eax
  int HideWallpaperIconsObject; // eax
  struct IObservableObjectArray **v15; // rax
  const struct _GUID *v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rbx
  __int64 v19; // r9
  __int64 v20; // rdx
  void *v21; // rdi
  __int64 v22; // rbx
  _QWORD *v23; // rax
  int v24; // eax
  int v25; // eax
  unsigned __int64 v26; // r9
  __int64 v27; // rdx
  void **v28; // rdi
  struct IWeakReference *v29; // rbx
  struct IMultitaskingViewManager *v30; // rsi
  const struct _GUID *v32; // [rsp+28h] [rbp-38h]
  void *v33; // [rsp+40h] [rbp-20h] BYREF
  struct IMultitaskingViewManager *v34; // [rsp+48h] [rbp-18h] BYREF
  __int64 v35; // [rsp+50h] [rbp-10h] BYREF
  CSnapAssistViewHost *v36; // [rsp+58h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+38h]
  int v38; // [rsp+A0h] [rbp+40h] BYREF
  struct IMultitaskingViewVisibilityServiceInternal *v39; // [rsp+B8h] [rbp+58h]

  v39 = a4;
  inited = CObjectWithThreadUseDetection::InitApartmentId((CSnapAssistViewHost *)((char *)this + 24));
  if ( inited >= 0 )
  {
    v12 = (__int64 *)((char *)this + 184);
    v36 = this;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 23);
    v13 = Microsoft::WRL::Details::MakeAndInitialize<WeakReference::CWeakReference<CSnapAssistViewHost>,WeakReference::CWeakReference<CSnapAssistViewHost>,CSnapAssistViewHost * &>(
            (_QWORD *)this + 23,
            &v36);
    inited = v13;
    if ( v13 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x31,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\CustomWeakReference.h",
        (const char *)(unsigned int)v13);
      v11 = 70LL;
      goto LABEL_3;
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 26);
    HideWallpaperIconsObject = CreateHideWallpaperIconsObject((struct IUnknown **)this + 26);
    if ( HideWallpaperIconsObject < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        73LL,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\snapassistviewhost.cpp",
        (const char *)(unsigned int)HideWallpaperIconsObject);
    v33 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v33);
    v15 = (struct IObservableObjectArray **)(*(__int64 (__fastcall **)(struct IMultitaskingData *, CSnapAssistViewHost **))(*(_QWORD *)a2 + 24LL))(
                                              a2,
                                              &v36);
    inited = SwitchItemFilteredCollection_CreateInstance(*v15, v16, &v33);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v36);
    if ( inited < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4D,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\snapassistviewhost.cpp",
        (const char *)(unsigned int)inited);
LABEL_29:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v33);
      return (unsigned int)inited;
    }
    v17 = *(_QWORD *)a2;
    v35 = 0LL;
    v18 = *(_QWORD *)(*(__int64 (__fastcall **)(struct IMultitaskingData *, CSnapAssistViewHost **))(v17 + 32))(
                       a2,
                       &v36);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v35);
    inited = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v18 + 48LL))(v18, &v35);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v36);
    if ( inited < 0 )
    {
      v19 = (unsigned int)inited;
      v20 = 79LL;
LABEL_21:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v20,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\snapassistviewhost.cpp",
        (const char *)v19);
LABEL_28:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v35);
      goto LABEL_29;
    }
    v21 = v33;
    v22 = v35;
    v23 = (_QWORD *)(*(__int64 (__fastcall **)(struct IMultitaskingData *, CSnapAssistViewHost **))(*(_QWORD *)a2 + 48LL))(
                      a2,
                      &v36);
    inited = (*(__int64 (__fastcall **)(void *, _QWORD, __int64))(*(_QWORD *)v21 + 88LL))(v21, *v23, v22);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v36);
    if ( inited < 0 )
    {
      v19 = (unsigned int)inited;
      v20 = 80LL;
      goto LABEL_21;
    }
    v24 = (*(__int64 (__fastcall **)(void *, int *))(*(_QWORD *)v33 + 24LL))(v33, &v38);
    inited = v24;
    if ( v24 < 0 )
    {
      v20 = 83LL;
LABEL_20:
      v19 = (unsigned int)v24;
      goto LABEL_21;
    }
    if ( !v38 )
    {
      inited = -2147024809;
      v20 = 86LL;
      v19 = 2147942487LL;
      goto LABEL_21;
    }
    Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 20, (__int64)a2);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 10);
    v24 = (**(__int64 (__fastcall ***)(struct IMultitaskingViewManagerInternal *, GUID *, char *))a3)(
            a3,
            &GUID_537b455d_1240_433b_82af_10929138b8be,
            (char *)this + 80);
    inited = v24;
    if ( v24 < 0 )
    {
      v20 = 89LL;
      goto LABEL_20;
    }
    Microsoft::WRL::ComPtr<ISwitchItemFilteredCollection>::operator=((__int64 *)this + 24, (__int64 *)&v33);
    Microsoft::WRL::ComPtr<IVirtualDesktopNotification>::operator=((__int64 *)this + 11, (__int64)v39);
    v34 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v34);
    v25 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, struct IMultitaskingViewManager **))this + 10))(
            *((_QWORD *)this + 10),
            &GUID_537b455d_1240_433b_82af_10929138b8be,
            &v34);
    inited = v25;
    if ( v25 >= 0 )
    {
      v28 = (void **)((char *)this + 176);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 22);
      v30 = v34;
      v36 = (CSnapAssistViewHost *)*v12;
      v29 = (struct IWeakReference *)v36;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v36);
      inited = CSnapAssistViewController_CreateInstance(v29, v30, a5, a6, a7, v32, v28);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v36);
      if ( inited >= 0 )
      {
LABEL_27:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v34);
        goto LABEL_28;
      }
      v26 = (unsigned int)inited;
      v27 = 96LL;
    }
    else
    {
      v26 = (unsigned int)v25;
      v27 = 94LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v27,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\snapassistviewhost.cpp",
      (const char *)v26);
    goto LABEL_27;
  }
  v11 = 67LL;
LABEL_3:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (__int64)"pcshell\\twinui\\multitaskingview\\lib\\snapassistviewhost.cpp",
    (const char *)(unsigned int)inited);
  return (unsigned int)inited;
}
