/*
 * XREFs of ?_GetLaunchPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewPosition@@@Z @ 0x18005609C
 * Callers:
 *     ?_GetRestorePosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUViewSizePreferences@PositionerPropertySetHelpers@@PEAPEAUIApplicationViewPosition@@@Z @ 0x180055F30 (-_GetRestorePosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUViewSizePreferences@Posi.c)
 * Callees:
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18002D674 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0ThreadErrorContext@wil@@QEAA@XZ @ 0x1800568F0 (--0ThreadErrorContext@wil@@QEAA@XZ.c)
 *     ?_FixPosition@CDesktopPositioner@@AEAAJW4PositionScenario@@PEAUIApplicationViewPosition@@PEAPEAU3@@Z @ 0x18005692C (-_FixPosition@CDesktopPositioner@@AEAAJW4PositionScenario@@PEAUIApplicationViewPosition@@PEAPEAU.c)
 *     ??$MakeAndInitialize@VCCommonApplicationViewOcclusionPosition@@UIApplicationViewPosition@@W4ARRANGEMENT_BASED_VIEW_STATE@@AEAUtagRECT@@@Details@WRL@Microsoft@@YAJPEAPEAUIApplicationViewPosition@@$$QEAW4ARRANGEMENT_BASED_VIEW_STATE@@AEAUtagRECT@@@Z @ 0x180056A4C (--$MakeAndInitialize@VCCommonApplicationViewOcclusionPosition@@UIApplicationViewPosition@@W4ARRA.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_PeopleBar@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180056EFC (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_PeopleBar@@@wil@@CAX_NW4ReportingKin.c)
 *     ?RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z @ 0x180056F64 (-RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z.c)
 *     ?_ConvertScreenRectToWorkAreaRect@CDesktopPositioner@@AEAAJAEBUtagRECT@@PEAU2@@Z @ 0x180056F88 (-_ConvertScreenRectToWorkAreaRect@CDesktopPositioner@@AEAAJAEBUtagRECT@@PEAU2@@Z.c)
 *     ?_GetDefaultRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@W4DefaultSizeOptions@@PEAU2@@Z @ 0x180057028 (-_GetDefaultRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@W4DefaultSizeOptions@@PEAU2@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VCCommonApplicationViewPosition@@UIApplicationViewPosition@@AEAUtagRECT@@@Details@WRL@Microsoft@@YAJPEAPEAUIApplicationViewPosition@@AEAUtagRECT@@@Z @ 0x180122F48 (--$MakeAndInitialize@VCCommonApplicationViewPosition@@UIApplicationViewPosition@@AEAUtagRECT@@@D.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CDesktopPositioner::_GetLaunchPosition(
        CDesktopPositioner *this,
        struct IApplicationView *a2,
        struct IApplicationViewPosition **a3)
{
  struct wil::details::IFunctorHost *v4; // r8
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rbx
  BOOL v8; // edi
  unsigned int v9; // r14d
  __int64 v10; // rbx
  int DefaultRect; // eax
  CDesktopPositioner *v12; // rcx
  int fixed; // eax
  __int64 v15; // rdx
  void *v16; // rbx
  void *v17; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v18; // [rsp+28h] [rbp-D8h] BYREF
  void *v19; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v20; // [rsp+38h] [rbp-C8h] BYREF
  LPVOID pv; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v22; // [rsp+48h] [rbp-B8h]
  __int64 v23; // [rsp+50h] [rbp-B0h]
  int v24; // [rsp+58h] [rbp-A8h]
  struct IApplicationView *v25; // [rsp+60h] [rbp-A0h] BYREF
  void *v26; // [rsp+68h] [rbp-98h] BYREF
  struct IApplicationViewPosition **v27; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v28[2]; // [rsp+78h] [rbp-88h] BYREF
  void **v29; // [rsp+88h] [rbp-78h] BYREF
  __int64 v30; // [rsp+90h] [rbp-70h] BYREF
  int v31; // [rsp+9Ch] [rbp-64h]
  _QWORD *v32; // [rsp+A0h] [rbp-60h]
  int v33; // [rsp+A8h] [rbp-58h]
  _QWORD v34[3]; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v35[3]; // [rsp+C8h] [rbp-38h] BYREF
  __int16 v36; // [rsp+E0h] [rbp-20h]
  __int64 v37; // [rsp+E8h] [rbp-18h]
  struct tagRECT v38; // [rsp+F0h] [rbp-10h] BYREF
  struct tagRECT v39; // [rsp+100h] [rbp+0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+158h] [rbp+58h]

  v37 = -2LL;
  v25 = a2;
  v27 = a3;
  *a3 = 0LL;
  v34[0] = &v25;
  v34[1] = this;
  v34[2] = &v27;
  v35[0] = retaddr;
  v35[1] = "pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp";
  v35[2] = 0LL;
  v36 = 1733;
  wil::Feature<__WilFeatureTraits_Feature_PeopleBar>::ReportUsageToService();
  v28[0] = &off_1803CD520;
  v28[1] = v34;
  v29 = &wil::details::FeatureFunctorHost::`vftable';
  wil::ThreadErrorContext::ThreadErrorContext((wil::ThreadErrorContext *)&v30);
  v32 = v35;
  v33 = 6353283;
  wil::details::RunFunctor((wil::details *)v28, (struct wil::details::IFunctor *)&v29, v4);
  if ( v30 )
    *(_DWORD *)(v30 + 16) = v31;
  if ( *v27 )
    return 0LL;
  v17 = 0LL;
  pv = 0LL;
  v22 = -1LL;
  v23 = -1LL;
  v5 = (*(__int64 (__fastcall **)(struct IApplicationView *, LPVOID *))(*(_QWORD *)v25 + 136LL))(v25, &pv);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v19 = 0LL;
    v7 = *((_QWORD *)this + 31);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v19);
    if ( (*(int (__fastcall **)(__int64, LPVOID, void **))(*(_QWORD *)v7 + 24LL))(v7, pv, &v19) >= 0 )
    {
      v16 = v19;
      v26 = v19;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v26);
      v26 = v17;
      v17 = v16;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v26);
      v9 = 0;
      goto LABEL_15;
    }
    v8 = 0;
    v18 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
    v9 = 1;
    if ( (**(int (__fastcall ***)(struct IApplicationView *, GUID *, __int64 *))v25)(
           v25,
           &GUID_3e46ed27_6707_4c99_aff4_ad6824b65aa2,
           &v18) >= 0 )
    {
      v20 = 0LL;
      v10 = v18;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v20);
      if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v10 + 24LL))(v10, &v20) >= 0 )
        v8 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v20 + 328LL))(v20, 0LL) != 0;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v20);
    }
    DefaultRect = CDesktopPositioner::_GetDefaultRect(this, 0LL, v8, &v38);
    v6 = DefaultRect;
    if ( DefaultRect < 0 )
    {
      v15 = 1774LL;
    }
    else if ( *((_DWORD *)this + 100) )
    {
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
      DefaultRect = Microsoft::WRL::Details::MakeAndInitialize<CCommonApplicationViewPosition,IApplicationViewPosition,tagRECT &>(&v17);
      v6 = DefaultRect;
      if ( DefaultRect >= 0 )
        goto LABEL_14;
      v15 = 1778LL;
    }
    else
    {
      DefaultRect = CDesktopPositioner::_ConvertScreenRectToWorkAreaRect(v12, &v38, &v39);
      v6 = DefaultRect;
      if ( DefaultRect < 0 )
      {
        v15 = 1783LL;
      }
      else
      {
        v24 = 3;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
        DefaultRect = Microsoft::WRL::Details::MakeAndInitialize<CCommonApplicationViewOcclusionPosition,IApplicationViewPosition,enum ARRANGEMENT_BASED_VIEW_STATE,tagRECT &>(&v17);
        v6 = DefaultRect;
        if ( DefaultRect >= 0 )
        {
LABEL_14:
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
LABEL_15:
          fixed = CDesktopPositioner::_FixPosition(this, v9, v17, v27);
          v6 = fixed;
          if ( fixed >= 0 )
          {
            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v19);
            if ( pv )
            {
              CoTaskMemFree(pv);
              pv = 0LL;
            }
            v22 = 0LL;
            v23 = 0LL;
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
            return 0LL;
          }
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x707,
            (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
            (const char *)(unsigned int)fixed);
          goto LABEL_29;
        }
        v15 = 1784LL;
      }
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)(unsigned int)DefaultRect);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
LABEL_29:
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v19);
    goto LABEL_30;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x6D5,
    (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
    (const char *)(unsigned int)v5);
LABEL_30:
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&pv);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
  return v6;
}
