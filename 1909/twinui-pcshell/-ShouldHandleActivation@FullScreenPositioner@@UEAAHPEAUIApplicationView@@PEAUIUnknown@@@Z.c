/*
 * XREFs of ?ShouldHandleActivation@FullScreenPositioner@@UEAAHPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x180023AE0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsFullScreenCompatQuirkedApp@FullScreenPositionerHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x180023840 (-IsFullScreenCompatQuirkedApp@FullScreenPositionerHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 *     ?GetCoreWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x1800239D8 (-GetCoreWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?GetDetailsForActivation@PositionerPropertySetHelpers@@YAJPEAUIApplicationView@@PEAUIUnknown@@PEAW4ActivationPropertyFlags@1@PEAUViewSizePreferences@1@@Z @ 0x180023E10 (-GetDetailsForActivation@PositionerPropertySetHelpers@@YAJPEAUIApplicationView@@PEAUIUnknown@@PE.c)
 *     ??$GetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValue@Foundation@3@EAAJPEAI@Z1@Z @ 0x180025C00 (--$GetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_RespectEdgeAllowFullScreenPolicy@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180090554 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_RespectEdgeAllowFullScreenPolicy@@@w.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall FullScreenPositioner::ShouldHandleActivation(
        FullScreenPositioner *this,
        __int64 (__fastcall ***a2)(ApplicationViewHelpers *, GUID *, __int64 *),
        struct IUnknown *a3)
{
  struct IApplicationView *v6; // rdx
  HWND CoreWindowForView; // rax
  PositionerPropertySetHelpers *v8; // rcx
  int DetailsForActivation; // eax
  struct IApplicationView *v10; // rdx
  unsigned int lpVtbl; // ebx
  __int64 v12; // rcx
  int v13; // eax
  HRESULT v14; // eax
  __int64 v15; // r8
  int v16; // eax
  bool v17; // di
  __int64 v18; // rcx
  _QWORD *v19; // rcx
  struct IUnknown v21; // [rsp+20h] [rbp-50h] BYREF
  __int64 v22; // [rsp+28h] [rbp-48h] BYREF
  _QWORD *v23; // [rsp+30h] [rbp-40h] BYREF
  _QWORD v24[2]; // [rsp+38h] [rbp-38h] BYREF
  HSTRING_HEADER pv; // [rsp+48h] [rbp-28h] BYREF
  HSTRING string; // [rsp+60h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]

  v24[1] = -2LL;
  v23 = 0LL;
  if ( (int)(**a2)((ApplicationViewHelpers *)a2, &GUID_3e46ed27_6707_4c99_aff4_ad6824b65aa2, (__int64 *)&v23) < 0 )
    goto LABEL_34;
  wil::Feature<__WilFeatureTraits_Feature_RespectEdgeAllowFullScreenPolicy>::ReportUsageToService();
  CoreWindowForView = (HWND)ApplicationViewHelpers::GetCoreWindowForView(a2, v6);
  if ( GetPropW(CoreWindowForView, L"Windows.ImmersiveShell.DisableFullScreenMode") )
    goto LABEL_34;
  DetailsForActivation = PositionerPropertySetHelpers::GetDetailsForActivation(
                           v8,
                           (struct IApplicationView *)a3,
                           &v21,
                           0LL,
                           (struct PositionerPropertySetHelpers::ViewSizePreferences *)v21.lpVtbl);
  if ( DetailsForActivation < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1A6,
      (unsigned int)"pcshell\\twinui\\fullscreen\\lib\\fullscreenpositioner.cpp",
      (const char *)(unsigned int)DetailsForActivation,
      (int)v21.lpVtbl);
  if ( ((__int64)v21.lpVtbl & 0x10) != 0 )
  {
LABEL_34:
    lpVtbl = 0;
    goto LABEL_31;
  }
  if ( FullScreenPositionerHelpers::IsFullScreenCompatQuirkedApp((FullScreenPositionerHelpers *)a2, v10) )
  {
    lpVtbl = 1;
  }
  else
  {
    lpVtbl = 0;
    pv.Reserved.Reserved1 = 0LL;
    *(_QWORD *)&pv.Reserved.Reserved2[8] = -1LL;
    *(_QWORD *)&pv.Reserved.Reserved2[16] = -1LL;
    if ( ((int (__fastcall *)(__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *), HSTRING_HEADER *))(*a2)[17])(
           a2,
           &pv) >= 0
      && (*(int (__fastcall **)(_QWORD, PVOID, struct IUnknown *))(**((_QWORD **)this + 19) + 24LL))(
           *((_QWORD *)this + 19),
           pv.Reserved.Reserved1,
           &v21) >= 0 )
    {
      LOBYTE(lpVtbl) = LODWORD(v21.lpVtbl) == 2;
    }
    if ( pv.Reserved.Reserved1 )
      CoTaskMemFree(pv.Reserved.Reserved1);
    if ( !lpVtbl )
    {
      v22 = 0LL;
      if ( ((int (__fastcall *)(__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *), __int64 *))(*a2)[33])(
             a2,
             &v22) >= 0 )
        LOBYTE(lpVtbl) = (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v22 + 24LL))(v22) == 3;
      v12 = v22;
      if ( v22 )
      {
        v22 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
      }
    }
  }
  if ( a3 && !lpVtbl )
  {
    v22 = 0LL;
    v13 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64 *))a3->lpVtbl->QueryInterface)(
            a3,
            &GUID_8a43ed9f_f4e6_4421_acf9_1dab2986820c,
            &v22);
    lpVtbl = v13;
    if ( v13 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1D0,
        (unsigned int)"pcshell\\twinui\\fullscreen\\lib\\fullscreenpositioner.cpp",
        (const char *)(unsigned int)v13,
        (int)v21.lpVtbl);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
      goto LABEL_31;
    }
    v24[0] = v22;
    if ( v22 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 8LL))(v22);
    string = 0LL;
    v14 = WindowsCreateStringReference(L"ViewModePreferences.PresenterMode", 0x21u, &pv, &string);
    if ( v14 < 0 )
    {
      RaiseException(v14, 1u, 0, 0LL);
    }
    else
    {
      v16 = Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<unsigned int>(v24, string, v15, &v21);
      v17 = v16 >= 0;
      string = 0LL;
      lpVtbl = 0;
      if ( v16 >= 0 )
        lpVtbl = (unsigned int)v21.lpVtbl;
      if ( v24[0] )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v24[0] + 16LL))(v24[0]);
      if ( !v17 )
        goto LABEL_28;
    }
    if ( lpVtbl == 2 )
    {
      lpVtbl = 1;
LABEL_29:
      v18 = v22;
      if ( v22 )
      {
        v22 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
      }
      goto LABEL_31;
    }
LABEL_28:
    lpVtbl = 0;
    goto LABEL_29;
  }
LABEL_31:
  v19 = v23;
  if ( v23 )
  {
    v23 = 0LL;
    (*(void (__fastcall **)(_QWORD *, _QWORD))(*v19 + 16LL))(v19, *v19);
  }
  return lpVtbl;
}
