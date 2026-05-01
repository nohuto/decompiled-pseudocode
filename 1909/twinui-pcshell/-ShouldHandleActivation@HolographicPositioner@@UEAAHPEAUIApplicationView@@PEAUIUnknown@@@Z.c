/*
 * XREFs of ?ShouldHandleActivation@HolographicPositioner@@UEAAHPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x1800254E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180018B50 (--1-$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetDetailsForActivation@PositionerPropertySetHelpers@@YAJPEAUIApplicationView@@PEAUIUnknown@@PEAW4ActivationPropertyFlags@1@PEAUViewSizePreferences@1@@Z @ 0x180023E10 (-GetDetailsForActivation@PositionerPropertySetHelpers@@YAJPEAUIApplicationView@@PEAUIUnknown@@PE.c)
 *     wil::init_once_nothrow__lambda_e21be6ce7c3ebc8b73b7211c05c7ecf4___ @ 0x180024530 (wil--init_once_nothrow__lambda_e21be6ce7c3ebc8b73b7211c05c7ecf4___.c)
 *     ?_IsViewContextHolographic@HolographicPositioner@@AEAA_NPEAUIApplicationView@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180024A0C (-_IsViewContextHolographic@HolographicPositioner@@AEAA_NPEAUIApplicationView@@PEAUIPropertySet@C.c)
 *     ?_IsViewWin32Slate@HolographicPositioner@@CA_NPEAUIApplicationView@@@Z @ 0x180053AD8 (-_IsViewWin32Slate@HolographicPositioner@@CA_NPEAUIApplicationView@@@Z.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_HolographicWin32Slates@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180053C14 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_HolographicWin32Slates@@@wil@@CAX_NW.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsViewManaged@HolographicPositioner@@UEAAJPEAUIApplicationView@@PEAH@Z @ 0x180080760 (-IsViewManaged@HolographicPositioner@@UEAAJPEAUIApplicationView@@PEAH@Z.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_HolographicUserExperiences@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180082370 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_HolographicUserExperiences@@@wil@@CA.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_EnableControlOfShowWindowBehavior@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18008F888 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_EnableControlOfShowWindowBehavior@@@.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_MixedRealityPortalInboxStoreApp@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1800A6650 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_MixedRealityPortalInboxStoreApp@@@wi.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??$LaunchInHolographic@W4HolographicLaunchReason@@I@HolographicPositionerTelemetry@@SAX$$QEAW4HolographicLaunchReason@@$$QEAI@Z @ 0x18021B6F4 (--$LaunchInHolographic@W4HolographicLaunchReason@@I@HolographicPositionerTelemetry@@SAX$$QEAW4Ho.c)
 *     ?_GetApplicationViewUniqueIdForTracing@HolographicPositioner@@CAIPEAUIApplicationView@@@Z @ 0x180223518 (-_GetApplicationViewUniqueIdForTracing@HolographicPositioner@@CAIPEAUIApplicationView@@@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall HolographicPositioner::ShouldHandleActivation(
        HolographicPositioner *this,
        struct IApplicationView *a2,
        struct IUnknown *a3)
{
  struct IApplicationView *v4; // rdi
  int (__fastcall *v6)(struct IApplicationView *, const wchar_t *, struct IUnknown *); // rbx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // r8
  int inited; // eax
  unsigned int v12; // ebx
  PositionerPropertySetHelpers *v13; // rcx
  int DetailsForActivation; // eax
  struct Windows::Foundation::Collections::IPropertySet *v15; // rcx
  int (__fastcall *v17)(struct IApplicationView *, GUID *, struct IUnknown *); // rbx
  __int64 v18; // [rsp+20h] [rbp-20h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v19[3]; // [rsp+28h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  struct IUnknown v21; // [rsp+78h] [rbp+38h] BYREF

  v19[1] = (struct Windows::Foundation::Collections::IPropertySet *)-2LL;
  v4 = a2;
  LOBYTE(a2) = 3;
  wil::Feature<__WilFeatureTraits_Feature_HolographicUserExperiences>::ReportUsageToService(this, a2);
  LODWORD(v21.lpVtbl) = 0;
  v6 = *(int (__fastcall **)(struct IApplicationView *, const wchar_t *, struct IUnknown *))(*(_QWORD *)v4 + 152LL);
  wil::Feature<__WilFeatureTraits_Feature_MixedRealityPortalInboxStoreApp>::ReportUsageToService();
  if ( v6(v4, L"Microsoft.MixedReality.Portal_8wekyb3d8bbwe!App", &v21) >= 0 && LODWORD(v21.lpVtbl) )
    return 0LL;
  wil::Feature<__WilFeatureTraits_Feature_EnableControlOfShowWindowBehavior>::ReportUsageToService();
  (**(void (__fastcall ***)(struct IApplicationView *, GUID *, __int64 *))v4)(
    v4,
    &GUID_f3527610_c76d_4316_ac8e_28651acf3df3,
    &v18);
  v8 = v18;
  if ( v18 )
  {
    LODWORD(v21.lpVtbl) = 6;
    if ( (*(int (__fastcall **)(struct IApplicationView *, struct IUnknown *))(*(_QWORD *)v4 + 400LL))(v4, &v21) >= 0
      && LODWORD(v21.lpVtbl) == 1 )
    {
      wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::~com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>(&v18);
      return 1LL;
    }
    v8 = v18;
  }
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  wil::Feature<__WilFeatureTraits_Feature_HolographicWin32Slates>::ReportUsageToService();
  inited = wil::init_once_nothrow__lambda_e21be6ce7c3ebc8b73b7211c05c7ecf4___(v9, 0LL, v10);
  if ( inited < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x36,
      (unsigned int)"internal\\onecoreuapshell\\inc\\Win32SlatesFeature.h",
      (const char *)(unsigned int)inited,
      v18);
  if ( !`IsHolographicWin32SlatesFeatureEnabled'::`2'::s_win32SlatesEnabled )
  {
    v21.lpVtbl = 0LL;
    v17 = **(int (__fastcall ***)(struct IApplicationView *, GUID *, struct IUnknown *))v4;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
    if ( v17(v4, &GUID_3e46ed27_6707_4c99_aff4_ad6824b65aa2, &v21) >= 0 )
    {
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
      goto LABEL_11;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
    return 0LL;
  }
LABEL_11:
  LOBYTE(v12) = 0;
  v19[0] = 0LL;
  if ( !a3
    || ((__int64 (__fastcall *)(struct IUnknown *, GUID *, struct Windows::Foundation::Collections::IPropertySet **))a3->lpVtbl->QueryInterface)(
         a3,
         &GUID_8a43ed9f_f4e6_4421_acf9_1dab2986820c,
         v19) < 0 )
  {
    if ( !HolographicPositioner::_IsViewWin32Slate(v4) )
      goto LABEL_18;
    LODWORD(v21.lpVtbl) = 0;
    if ( HolographicPositioner::IsViewManaged((HolographicPositioner *)((char *)this - 32), v4, (int *)&v21) < 0
      || !LODWORD(v21.lpVtbl) )
    {
      goto LABEL_18;
    }
    LODWORD(v21.lpVtbl) = HolographicPositioner::_GetApplicationViewUniqueIdForTracing(v4);
    LODWORD(v18) = 3;
    HolographicPositionerTelemetry::LaunchInHolographic<enum HolographicLaunchReason,unsigned int>(&v18, &v21);
    goto LABEL_41;
  }
  DetailsForActivation = PositionerPropertySetHelpers::GetDetailsForActivation(
                           v13,
                           (struct IApplicationView *)a3,
                           &v21,
                           0LL);
  if ( DetailsForActivation < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x2AB,
      (unsigned int)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
      (const char *)(unsigned int)DetailsForActivation,
      v18);
  if ( ((__int64)v21.lpVtbl & 0x10) != 0 )
  {
    v12 = 0;
    goto LABEL_19;
  }
  if ( ((__int64)v21.lpVtbl & 4) == 0 )
  {
    LOBYTE(v12) = HolographicPositioner::_IsViewContextHolographic(
                    (HolographicPositioner *)((char *)this - 168),
                    v4,
                    v19[0]);
    if ( (_BYTE)v12 && HolographicPositioner::_IsViewWin32Slate(v4) )
      *((_BYTE *)this + 128) = 1;
    goto LABEL_18;
  }
  LODWORD(v21.lpVtbl) = 0;
  if ( HolographicPositioner::IsViewManaged((HolographicPositioner *)((char *)this - 32), v4, (int *)&v21) >= 0
    && LODWORD(v21.lpVtbl) )
  {
LABEL_41:
    LOBYTE(v12) = 1;
    goto LABEL_18;
  }
  LOBYTE(v12) = 0;
LABEL_18:
  v12 = (unsigned __int8)v12;
LABEL_19:
  v15 = v19[0];
  if ( v19[0] )
  {
    v19[0] = 0LL;
    (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v15 + 16LL))(v15);
  }
  return v12;
}
