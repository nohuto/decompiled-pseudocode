/*
 * XREFs of _lambda_07ea8ee8549f00f16399909de546051c_::operator() @ 0x18006A0F0
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::ApplicationModel::PackageCatalog___Windows::ApplicationModel::IPackageCatalog____Windows::Foundation::Internal::AggregateType_Windows::ApplicationModel::PackageUninstallingEventArgs___Windows::ApplicationModel::IPackageUninstallingEventArgs_____::_)(Windows::ApplicationModel::IPackageCatalog___Windows::ApplicationModel::IPackageUninstallingEventArgs__)_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::ApplicationModel::PackageCatalog___Windows::ApplicationModel::PackageUninstallingEventArgs_____lambda_07ea8ee8549f00f16399909de546051c___1_Windows::ApplicationModel::IPackageCatalog___Windows::ApplicationModel::IPackageUninstallingEventArgs___::Invoke @ 0x18006AC70 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_18006AC70.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003A220 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180043864 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?PerformLicenseCheck@AtmosCheck@@QEAAJ_N@Z @ 0x180046754 (-PerformLicenseCheck@AtmosCheck@@QEAAJ_N@Z.c)
 *     ?IsLicenseEvaluationRequired@AtmosCheck@@AEAA_NXZ @ 0x180047734 (-IsLicenseEvaluationRequired@AtmosCheck@@AEAA_NXZ.c)
 *     ?RefreshSpatialAudioLicenseModelState@AtmosCheck@@AEAAJPEA_N@Z @ 0x18005014C (-RefreshSpatialAudioLicenseModelState@AtmosCheck@@AEAAJPEA_N@Z.c)
 *     ?Trace@AtmosCheck@@AEAAXPEBDJ@Z @ 0x180051388 (-Trace@AtmosCheck@@AEAAXPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 *     ?IsUsefulPackage@AtmosCheck@@AEAA_NPEAUIPackage@ApplicationModel@Windows@@@Z @ 0x18013F60C (-IsUsefulPackage@AtmosCheck@@AEAA_NPEAUIPackage@ApplicationModel@Windows@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_07ea8ee8549f00f16399909de546051c_::operator()(AtmosCheck **a1, __int64 a2, __int64 a3)
{
  AtmosCheck *v5; // rcx
  int v6; // ebx
  AtmosCheck *v7; // rcx
  int refreshed; // eax
  const GUID *v9; // r8
  const GUID *v10; // r9
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+20h]
  bool v13; // [rsp+60h] [rbp+28h] BYREF
  __int64 v14; // [rsp+68h] [rbp+30h] BYREF
  int v15; // [rsp+70h] [rbp+38h] BYREF
  struct Windows::ApplicationModel::IPackage *v16; // [rsp+78h] [rbp+40h] BYREF

  v14 = a2;
  v15 = 0;
  LOBYTE(v14) = 0;
  v6 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a3 + 72LL))(a3, &v14);
  if ( v6 >= 0 )
  {
    v6 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)a3 + 80LL))(a3, &v15);
    if ( v6 >= 0 && (_BYTE)v14 && !v15 )
    {
      v16 = 0LL;
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v16);
      if ( ((*(int (__fastcall **)(__int64, struct Windows::ApplicationModel::IPackage **))(*(_QWORD *)a3 + 56LL))(
              a3,
              &v16) < 0
         || AtmosCheck::IsUsefulPackage(v7, v16))
        && AtmosCheck::IsLicenseEvaluationRequired(*a1) )
      {
        *((_DWORD *)*a1 + 46) = 3;
        v13 = 0;
        refreshed = AtmosCheck::RefreshSpatialAudioLicenseModelState(*a1, &v13);
        if ( refreshed < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x695,
            (__int64)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
            (const char *)(unsigned int)refreshed);
        if ( v13 || !*((_BYTE *)*a1 + 216) )
          v6 = AtmosCheck::PerformLicenseCheck(*a1, 1, v9, v10);
      }
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v16);
    }
  }
  AtmosCheck::Trace(v5, "AppUninstall check result", v6);
  return (unsigned int)v6;
}
