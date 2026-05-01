/*
 * XREFs of ?_GetLaunchPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewPosition@@@Z @ 0x180054B60
 * Callers:
 *     ?_GetRestorePosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUViewSizePreferences@PositionerPropertySetHelpers@@PEAPEAUIApplicationViewPosition@@@Z @ 0x180054EE4 (-_GetRestorePosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUViewSizePreferences@Posi.c)
 * Callees:
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18002B9E0 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_PeopleBar@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18003A168 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_PeopleBar@@@wil@@CAX_NW4ReportingKin.c)
 *     ??$MakeAndInitialize@VCCommonApplicationViewOcclusionPosition@@UIApplicationViewPosition@@W4ARRANGEMENT_BASED_VIEW_STATE@@AEAUtagRECT@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@UIApplicationViewPosition@@@WRL@Microsoft@@@012@$$QEAW4ARRANGEMENT_BASED_VIEW_STATE@@AEAUtagRECT@@@Z @ 0x180053808 (--$MakeAndInitialize@VCCommonApplicationViewOcclusionPosition@@UIApplicationViewPosition@@W4ARRA.c)
 *     ??0FeatureFunctorHost@details@wil@@QEAA@IAEBUDiagnosticsInfo@2@@Z @ 0x1800549D0 (--0FeatureFunctorHost@details@wil@@QEAA@IAEBUDiagnosticsInfo@2@@Z.c)
 *     ?RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z @ 0x180055138 (-RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z.c)
 *     ?_FixPosition@CDesktopPositioner@@AEAAJW4PositionScenario@@PEAUIApplicationViewPosition@@PEAPEAU3@@Z @ 0x18005515C (-_FixPosition@CDesktopPositioner@@AEAAJW4PositionScenario@@PEAUIApplicationViewPosition@@PEAPEAU.c)
 *     ?_ConvertScreenRectToWorkAreaRect@CDesktopPositioner@@AEAAJAEBUtagRECT@@PEAU2@@Z @ 0x180055874 (-_ConvertScreenRectToWorkAreaRect@CDesktopPositioner@@AEAAJAEBUtagRECT@@PEAU2@@Z.c)
 *     ?_GetDefaultRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@W4DefaultSizeOptions@@PEAU2@@Z @ 0x180056A44 (-_GetDefaultRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@W4DefaultSizeOptions@@PEAU2@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VCCommonApplicationViewPosition@@UIApplicationViewPosition@@AEAUtagRECT@@@Details@WRL@Microsoft@@YAJPEAPEAUIApplicationViewPosition@@AEAUtagRECT@@@Z @ 0x18014C674 (--$MakeAndInitialize@VCCommonApplicationViewPosition@@UIApplicationViewPosition@@AEAUtagRECT@@@D.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CDesktopPositioner::_GetLaunchPosition(
        CDesktopPositioner *this,
        struct IApplicationView *a2,
        struct IApplicationViewPosition **a3)
{
  struct wil::details::IFunctorHost *v4; // r8
  int (__fastcall **v5)(struct IApplicationView *, GUID *, __int64 *); // rax
  int v6; // eax
  unsigned int v7; // ebx
  int (__fastcall **v8)(struct IApplicationView *, GUID *, __int64 *); // rax
  int v9; // eax
  __int64 v10; // rdi
  int (__fastcall *v11)(__int64, LPVOID, LPVOID, void **); // rbx
  void *v12; // rbx
  unsigned int v13; // r15d
  int fixed; // eax
  BOOL v16; // esi
  int (__fastcall *v17)(struct IApplicationView *, GUID *, __int64 *); // rbx
  __int64 v18; // rbx
  int (__fastcall *v19)(__int64, __int64 *); // rdi
  int DefaultRect; // eax
  CDesktopPositioner *v21; // rcx
  __int64 v22; // rdx
  int v23; // [rsp+28h] [rbp-E0h]
  void *v24; // [rsp+38h] [rbp-D0h] BYREF
  struct IApplicationView *v25; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v26; // [rsp+48h] [rbp-C0h] BYREF
  void *v27; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v28; // [rsp+58h] [rbp-B0h] BYREF
  LPVOID v29; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v30; // [rsp+68h] [rbp-A0h]
  __int64 v31; // [rsp+70h] [rbp-98h]
  LPVOID pv; // [rsp+78h] [rbp-90h] BYREF
  __int64 v33; // [rsp+80h] [rbp-88h]
  __int64 v34; // [rsp+88h] [rbp-80h]
  int v35; // [rsp+90h] [rbp-78h] BYREF
  struct IApplicationViewPosition **v36; // [rsp+98h] [rbp-70h] BYREF
  void *v37; // [rsp+A0h] [rbp-68h] BYREF
  _QWORD v38[2]; // [rsp+A8h] [rbp-60h] BYREF
  _QWORD v39[3]; // [rsp+B8h] [rbp-50h] BYREF
  struct DiagnosticsInfo v40; // [rsp+D0h] [rbp-38h] BYREF
  const char *v41; // [rsp+D8h] [rbp-30h]
  __int64 v42; // [rsp+E0h] [rbp-28h]
  __int16 v43; // [rsp+E8h] [rbp-20h]
  __int64 v44; // [rsp+F0h] [rbp-18h]
  _BYTE v45[8]; // [rsp+F8h] [rbp-10h] BYREF
  __int64 v46; // [rsp+100h] [rbp-8h]
  int v47; // [rsp+10Ch] [rbp+4h]
  struct tagRECT v48; // [rsp+120h] [rbp+18h] BYREF
  struct tagRECT v49; // [rsp+130h] [rbp+28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+180h] [rbp+78h]

  v44 = -2LL;
  v25 = a2;
  v36 = a3;
  *a3 = 0LL;
  v39[0] = &v25;
  v39[1] = this;
  v39[2] = &v36;
  v40 = (struct DiagnosticsInfo)retaddr;
  v41 = "pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp";
  v42 = 0LL;
  v43 = 1717;
  wil::Feature<__WilFeatureTraits_Feature_PeopleBar>::ReportUsageToService();
  v38[0] = &off_180431BE8;
  v38[1] = v39;
  wil::details::FeatureFunctorHost::FeatureFunctorHost((wil::details::FeatureFunctorHost *)v45, 6353283, &v40);
  wil::details::RunFunctor((wil::details *)v38, (struct wil::details::IFunctor *)v45, v4);
  if ( v46 )
    *(_DWORD *)(v46 + 16) = v47;
  if ( *v36 )
    return 0LL;
  v24 = 0LL;
  pv = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  v5 = *(int (__fastcall ***)(struct IApplicationView *, GUID *, __int64 *))v25;
  v33 = -1LL;
  v34 = -1LL;
  v6 = ((__int64 (__fastcall *)(struct IApplicationView *, LPVOID *))v5[17])(v25, &pv);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v29 = 0LL;
    v30 = 0LL;
    v31 = 0LL;
    v8 = *(int (__fastcall ***)(struct IApplicationView *, GUID *, __int64 *))v25;
    v30 = -1LL;
    v31 = -1LL;
    v9 = ((__int64 (__fastcall *)(struct IApplicationView *, LPVOID *))v8[61])(v25, &v29);
    v7 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x6C8,
        (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)v9,
        v23);
LABEL_36:
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v29);
      goto LABEL_37;
    }
    v27 = 0LL;
    v10 = *((_QWORD *)this + 31);
    v11 = *(int (__fastcall **)(__int64, LPVOID, LPVOID, void **))(*(_QWORD *)v10 + 24LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v27);
    if ( v11(v10, pv, v29, &v27) >= 0 )
    {
      v12 = v27;
      if ( v27 )
        (*(void (__fastcall **)(void *))(*(_QWORD *)v27 + 8LL))(v27);
      v37 = v24;
      v24 = v12;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v37);
      v13 = 0;
      goto LABEL_10;
    }
    v16 = 0;
    v26 = 0LL;
    v17 = **(int (__fastcall ***)(struct IApplicationView *, GUID *, __int64 *))v25;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v26);
    v13 = 1;
    if ( v17(v25, &GUID_3e46ed27_6707_4c99_aff4_ad6824b65aa2, &v26) >= 0 )
    {
      v28 = 0LL;
      v18 = v26;
      v19 = *(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v26 + 24LL);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v28);
      if ( v19(v18, &v28) >= 0 )
        v16 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v28 + 328LL))(v28, 0LL) != 0;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v28);
    }
    DefaultRect = CDesktopPositioner::_GetDefaultRect(this, 0LL, v16, &v48);
    v7 = DefaultRect;
    if ( DefaultRect < 0 )
    {
      v22 = 1761LL;
    }
    else if ( *((_DWORD *)this + 100) )
    {
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
      DefaultRect = Microsoft::WRL::Details::MakeAndInitialize<CCommonApplicationViewPosition,IApplicationViewPosition,tagRECT &>(&v24);
      v7 = DefaultRect;
      if ( DefaultRect >= 0 )
        goto LABEL_25;
      v22 = 1765LL;
    }
    else
    {
      DefaultRect = CDesktopPositioner::_ConvertScreenRectToWorkAreaRect(v21, &v48, &v49);
      v7 = DefaultRect;
      if ( DefaultRect < 0 )
      {
        v22 = 1770LL;
      }
      else
      {
        v35 = 3;
        DefaultRect = Microsoft::WRL::Details::MakeAndInitialize<CCommonApplicationViewOcclusionPosition,IApplicationViewPosition,enum ARRANGEMENT_BASED_VIEW_STATE,tagRECT &>(
                        (__int64)&v24,
                        (__int64)&v35,
                        (__int64)&v49);
        v7 = DefaultRect;
        if ( DefaultRect >= 0 )
        {
LABEL_25:
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v26);
LABEL_10:
          fixed = CDesktopPositioner::_FixPosition(this, v13, v24, v36);
          v7 = fixed;
          if ( fixed >= 0 )
          {
            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v27);
            if ( v29 )
            {
              CoTaskMemFree(v29);
              v29 = 0LL;
            }
            v30 = 0LL;
            v31 = 0LL;
            if ( pv )
            {
              CoTaskMemFree(pv);
              pv = 0LL;
            }
            v33 = 0LL;
            v34 = 0LL;
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
            return 0LL;
          }
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x6FA,
            (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
            (const char *)(unsigned int)fixed,
            v23);
          goto LABEL_35;
        }
        v22 = 1771LL;
      }
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v22,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)(unsigned int)DefaultRect,
      v23);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v26);
LABEL_35:
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v27);
    goto LABEL_36;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x6C5,
    (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
    (const char *)(unsigned int)v6,
    v23);
LABEL_37:
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&pv);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
  return v7;
}
