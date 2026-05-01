/*
 * XREFs of ?ShouldHandleActivation@FullScreenPositioner@@UEAAHPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x180026BE0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCoreWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x180026DC4 (-GetCoreWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?IsFullScreenCompatQuirkedApp@FullScreenPositionerHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x180026ECC (-IsFullScreenCompatQuirkedApp@FullScreenPositionerHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 *     ?GetDetailsForActivation@PositionerPropertySetHelpers@@YAJPEAUIApplicationView@@PEAUIUnknown@@PEAW4ActivationPropertyFlags@1@PEAUViewSizePreferences@1@@Z @ 0x180027110 (-GetDetailsForActivation@PositionerPropertySetHelpers@@YAJPEAUIApplicationView@@PEAUIUnknown@@PE.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsageToService@details@wil@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18008901C (-ReportUsageToService@details@wil@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_RespectEdgeAllowFullScreenPolicy@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1801439FC (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_RespectEdgeAllowFullScreenPo.c)
 */

// Hidden C++ exception states: #wind=3
_BOOL8 __fastcall FullScreenPositioner::ShouldHandleActivation(
        FullScreenPositioner *this,
        struct IApplicationView *a2,
        struct IUnknown *a3)
{
  BOOL v6; // ebx
  struct IApplicationView *v7; // rdx
  HWND CoreWindowForView; // rax
  PositionerPropertySetHelpers *v9; // rcx
  int DetailsForActivation; // eax
  struct IApplicationView *v11; // rdx
  struct IUnknownVtbl *lpVtbl; // rcx
  __int64 v13; // rcx
  struct PositionerPropertySetHelpers::ViewSizePreferences *v15; // [rsp+20h] [rbp-40h]
  int v16; // [rsp+20h] [rbp-40h]
  _QWORD v17[2]; // [rsp+30h] [rbp-30h] BYREF
  LPVOID pv[4]; // [rsp+40h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  struct IUnknown v20; // [rsp+98h] [rbp+38h] BYREF
  int v21; // [rsp+A8h] [rbp+48h] BYREF
  __int16 v22; // [rsp+ACh] [rbp+4Ch]

  v17[1] = -2LL;
  v17[0] = 0LL;
  if ( (**(int (__fastcall ***)(struct IApplicationView *, GUID *, _QWORD *))a2)(
         a2,
         &GUID_3e46ed27_6707_4c99_aff4_ad6824b65aa2,
         v17) < 0 )
    goto LABEL_22;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_RespectEdgeAllowFullScreenPolicy>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_RespectEdgeAllowFullScreenPolicy>::GetCachedFeatureEnabledState();
  LODWORD(v20.lpVtbl) = 0;
  BYTE4(v20.lpVtbl) = 3;
  v21 = 0;
  v22 = WORD2(v20.lpVtbl);
  v6 = 1;
  wil::details::ReportUsageToService(
    &`wil::Feature<__WilFeatureTraits_Feature_RespectEdgeAllowFullScreenPolicy>::GetFeaturePropertyCache'::`2'::data,
    15865888LL,
    &v21,
    1LL,
    3);
  CoreWindowForView = ApplicationViewHelpers::GetCoreWindowForView(a2, v7);
  if ( GetPropW(CoreWindowForView, L"Windows.ImmersiveShell.DisableFullScreenMode") )
    goto LABEL_22;
  DetailsForActivation = PositionerPropertySetHelpers::GetDetailsForActivation(
                           v9,
                           (struct IApplicationView *)a3,
                           &v20,
                           0LL,
                           v15);
  if ( DetailsForActivation < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x19A,
      (unsigned int)"pcshell\\twinui\\fullscreen\\lib\\fullscreenpositioner.cpp",
      (const char *)(unsigned int)DetailsForActivation,
      v16);
  if ( ((__int64)v20.lpVtbl & 0x10) != 0 )
  {
LABEL_22:
    v6 = 0;
  }
  else if ( !FullScreenPositionerHelpers::IsFullScreenCompatQuirkedApp(a2, v11) )
  {
    v6 = 0;
    pv[0] = 0LL;
    pv[1] = (LPVOID)-1LL;
    pv[2] = (LPVOID)-1LL;
    if ( (*(int (__fastcall **)(struct IApplicationView *, LPVOID *))(*(_QWORD *)a2 + 136LL))(a2, pv) >= 0
      && (*(int (__fastcall **)(_QWORD, LPVOID, struct IUnknown *))(**((_QWORD **)this + 19) + 24LL))(
           *((_QWORD *)this + 19),
           pv[0],
           &v20) >= 0 )
    {
      LOBYTE(v6) = LODWORD(v20.lpVtbl) == 2;
    }
    if ( pv[0] )
      CoTaskMemFree(pv[0]);
    if ( !v6 )
    {
      v20.lpVtbl = 0LL;
      if ( (*(int (__fastcall **)(struct IApplicationView *, struct IUnknown *))(*(_QWORD *)a2 + 264LL))(a2, &v20) >= 0 )
        v6 = (*((__int64 (__fastcall **)(struct IUnknownVtbl *))v20.lpVtbl->QueryInterface + 3))(v20.lpVtbl) == 3;
      lpVtbl = v20.lpVtbl;
      if ( v20.lpVtbl )
      {
        v20.lpVtbl = 0LL;
        (*((void (__fastcall **)(struct IUnknownVtbl *))lpVtbl->QueryInterface + 2))(lpVtbl);
      }
    }
  }
  v13 = v17[0];
  if ( v17[0] )
  {
    v17[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  return v6;
}
