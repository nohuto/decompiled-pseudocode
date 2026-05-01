/*
 * XREFs of ?ShouldHandleActivation@HolographicPositioner@@UEAAHPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x180026940
 * Callers:
 *     <none>
 * Callees:
 *     ?GetDetailsForActivation@PositionerPropertySetHelpers@@YAJPEAUIApplicationView@@PEAUIUnknown@@PEAW4ActivationPropertyFlags@1@PEAUViewSizePreferences@1@@Z @ 0x180027110 (-GetDetailsForActivation@PositionerPropertySetHelpers@@YAJPEAUIApplicationView@@PEAUIUnknown@@PE.c)
 *     ?_IsViewContextHolographic@HolographicPositioner@@AEAA_NPEAUIApplicationView@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180027528 (-_IsViewContextHolographic@HolographicPositioner@@AEAA_NPEAUIApplicationView@@PEAUIPropertySet@C.c)
 *     ?IsViewManaged@HolographicPositioner@@UEAAJPEAUIApplicationView@@PEAH@Z @ 0x18007EAF0 (-IsViewManaged@HolographicPositioner@@UEAAJPEAUIApplicationView@@PEAH@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsageToService@details@wil@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18008901C (-ReportUsageToService@details@wil@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_HolographicUserExperiences@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18018E63C (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_HolographicUserExperiences@@.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_MixedRealityPortalInboxStoreApp@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1801B2ED0 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_MixedRealityPortalInboxStore.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall HolographicPositioner::ShouldHandleActivation(
        HolographicPositioner *this,
        struct IApplicationView *a2,
        struct IUnknown *a3)
{
  char v6; // al
  unsigned int v7; // ebx
  PositionerPropertySetHelpers *v8; // rcx
  int DetailsForActivation; // eax
  struct Windows::Foundation::Collections::IPropertySet *v10; // rcx
  __int64 v11; // rcx
  struct PositionerPropertySetHelpers::ViewSizePreferences *v13; // [rsp+20h] [rbp-40h]
  int v14; // [rsp+20h] [rbp-40h]
  int v15; // [rsp+30h] [rbp-30h] BYREF
  __int16 v16; // [rsp+34h] [rbp-2Ch]
  int v17; // [rsp+38h] [rbp-28h] BYREF
  __int16 v18; // [rsp+3Ch] [rbp-24h]
  struct Windows::Foundation::Collections::IPropertySet *v19; // [rsp+40h] [rbp-20h] BYREF
  _QWORD v20[3]; // [rsp+48h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  struct IUnknown v22; // [rsp+98h] [rbp+38h] BYREF

  v20[1] = -2LL;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_HolographicUserExperiences>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_HolographicUserExperiences>::GetCachedFeatureEnabledState();
  LODWORD(v22.lpVtbl) = 0;
  BYTE4(v22.lpVtbl) = 3;
  v15 = 0;
  v16 = WORD2(v22.lpVtbl);
  wil::details::ReportUsageToService(
    &`wil::Feature<__WilFeatureTraits_Feature_HolographicUserExperiences>::GetFeaturePropertyCache'::`2'::data,
    8933771LL,
    &v15,
    1LL,
    3);
  v20[0] = 0LL;
  if ( (**(int (__fastcall ***)(struct IApplicationView *, GUID *, _QWORD *))a2)(
         a2,
         &GUID_3e46ed27_6707_4c99_aff4_ad6824b65aa2,
         v20) < 0 )
    goto LABEL_27;
  LODWORD(v22.lpVtbl) = 0;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_MixedRealityPortalInboxStoreApp>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_MixedRealityPortalInboxStoreApp>::GetCachedFeatureEnabledState();
  v15 = 0;
  LOBYTE(v16) = 3;
  v17 = 0;
  v18 = v16;
  wil::details::ReportUsageToService(
    &`wil::Feature<__WilFeatureTraits_Feature_MixedRealityPortalInboxStoreApp>::GetFeaturePropertyCache'::`2'::data,
    14203866LL,
    &v17,
    1LL,
    3);
  if ( (*(int (__fastcall **)(struct IApplicationView *, const wchar_t *, struct IUnknown *))(*(_QWORD *)a2 + 152LL))(
         a2,
         L"Microsoft.MixedReality.Portal_8wekyb3d8bbwe!App",
         &v22) < 0
    || (v6 = 1, !LODWORD(v22.lpVtbl)) )
  {
    v6 = 0;
  }
  if ( v6 )
  {
LABEL_27:
    v7 = 0;
    goto LABEL_20;
  }
  LOBYTE(v7) = 0;
  v19 = 0LL;
  if ( !a3
    || ((__int64 (__fastcall *)(struct IUnknown *, GUID *, struct Windows::Foundation::Collections::IPropertySet **))a3->lpVtbl->QueryInterface)(
         a3,
         &GUID_8a43ed9f_f4e6_4421_acf9_1dab2986820c,
         &v19) < 0 )
  {
    goto LABEL_17;
  }
  DetailsForActivation = PositionerPropertySetHelpers::GetDetailsForActivation(
                           v8,
                           (struct IApplicationView *)a3,
                           &v22,
                           0LL,
                           v13);
  if ( DetailsForActivation < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x26D,
      (unsigned int)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
      (const char *)(unsigned int)DetailsForActivation,
      v14);
  if ( ((__int64)v22.lpVtbl & 0x10) == 0 )
  {
    if ( ((__int64)v22.lpVtbl & 4) != 0 )
    {
      LODWORD(v22.lpVtbl) = 0;
      LOBYTE(v7) = HolographicPositioner::IsViewManaged((HolographicPositioner *)((char *)this - 32), a2, (int *)&v22) >= 0
                && LODWORD(v22.lpVtbl);
    }
    else
    {
      LOBYTE(v7) = HolographicPositioner::_IsViewContextHolographic(
                     (HolographicPositioner *)((char *)this - 168),
                     a2,
                     v19);
    }
LABEL_17:
    v7 = (unsigned __int8)v7;
    goto LABEL_18;
  }
  v7 = 0;
LABEL_18:
  v10 = v19;
  if ( v19 )
  {
    v19 = 0LL;
    (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v10 + 16LL))(v10);
  }
LABEL_20:
  v11 = v20[0];
  if ( v20[0] )
  {
    v20[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  return v7;
}
