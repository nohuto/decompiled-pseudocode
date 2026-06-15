/*
 * XREFs of _lambda_3a6a9ae2d1ede84324f1e385780d9b63_::operator() @ 0x180067B40
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::ApplicationModel::PackageCatalog_____ptr64_Windows::ApplicationModel::IPackageCatalog_____ptr64__Windows::Foundation::Internal::AggregateType_Windows::ApplicationModel::PackageInstallingEventArgs_____ptr64_Windows::ApplicationModel::IPackageInstallingEventArgs_____ptr64___::_)(Windows::ApplicationModel::IPackageCatalog_____ptr64_Windows::ApplicationModel::IPackageInstallingEventArgs_____ptr64)___ptr64_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::ApplicationModel::PackageCatalog_____ptr64_Windows::ApplicationModel::PackageInstallingEventArgs_____ptr64___lambda_3a6a9ae2d1ede84324f1e385780d9b63___1_Windows::ApplicationModel::IPackageCatalog_____ptr64_Windows::ApplicationModel::IPackageInstallingEventArgs_____ptr64_::Invoke @ 0x180068160 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_180068160.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003DCC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180014D44 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsUsefulPackage@AtmosCheck@@AEAA_NPEAUIPackage@ApplicationModel@Windows@@@Z @ 0x1800157B8 (-IsUsefulPackage@AtmosCheck@@AEAA_NPEAUIPackage@ApplicationModel@Windows@@@Z.c)
 *     ?PerformLicenseCheck@AtmosCheck@@QEAAJ_N@Z @ 0x180016490 (-PerformLicenseCheck@AtmosCheck@@QEAAJ_N@Z.c)
 *     ?Trace@AtmosCheck@@AEAAXPEBDJ@Z @ 0x1800549F8 (-Trace@AtmosCheck@@AEAAXPEBDJ@Z.c)
 *     ?RefreshSpatialAudioLicenseModelState@AtmosCheck@@AEAAJPEA_N@Z @ 0x180068220 (-RefreshSpatialAudioLicenseModelState@AtmosCheck@@AEAAJPEA_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_3a6a9ae2d1ede84324f1e385780d9b63_::operator()(AtmosCheck **a1, __int64 a2, __int64 a3)
{
  AtmosCheck *v5; // rcx
  int v6; // ebx
  AtmosCheck *v7; // rcx
  int refreshed; // eax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+20h]
  bool v11; // [rsp+60h] [rbp+28h] BYREF
  __int64 v12; // [rsp+68h] [rbp+30h] BYREF
  int v13; // [rsp+70h] [rbp+38h] BYREF
  struct Windows::ApplicationModel::IPackage *v14; // [rsp+78h] [rbp+40h] BYREF

  v12 = a2;
  v13 = 0;
  LOBYTE(v12) = 0;
  v6 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a3 + 72LL))(a3, &v12);
  if ( v6 >= 0 )
  {
    v6 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)a3 + 80LL))(a3, &v13);
    if ( v6 >= 0 && (_BYTE)v12 && !v13 )
    {
      v14 = 0LL;
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v14);
      if ( (*(int (__fastcall **)(__int64, struct Windows::ApplicationModel::IPackage **))(*(_QWORD *)a3 + 56LL))(
             a3,
             &v14) < 0
        || AtmosCheck::IsUsefulPackage(v7, v14) )
      {
        *((_DWORD *)*a1 + 38) = 2;
        v11 = 0;
        refreshed = AtmosCheck::RefreshSpatialAudioLicenseModelState(*a1, &v11);
        if ( refreshed < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x5FE,
            (__int64)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
            (const char *)(unsigned int)refreshed);
        if ( v11 || !*((_BYTE *)*a1 + 184) )
          v6 = AtmosCheck::PerformLicenseCheck(*a1, 1);
      }
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v14);
    }
  }
  AtmosCheck::Trace(v5, "AppInstall check result", v6);
  return (unsigned int)v6;
}
