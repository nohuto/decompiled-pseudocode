/*
 * XREFs of _lambda_89fb5ab193d74e8b0300aa0759d904c8_::operator() @ 0x1800A19E0
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem_winrt::Windows::Foundation::IInspectable___::type__lambda_89fb5ab193d74e8b0300aa0759d904c8___::Invoke @ 0x1800A2100 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows--ApplicationM.c)
 * Callees:
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x18001476C (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E934 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ @ 0x1800A190C (--1-$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ.c)
 *     ?GetCurrentStatus@?$consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallItem@UIAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@impl@winrt@@QEBA?AUAppInstallStatus@InstallControl@Preview@Store@ApplicationModel@Windows@3@XZ @ 0x1800A1CF8 (-GetCurrentStatus@-$consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallIte.c)
 *     ?InstallState@?$consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallStatus@UIAppInstallStatus@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@impl@winrt@@QEBA?AW4AppInstallState@InstallControl@Preview@Store@ApplicationModel@Windows@3@XZ @ 0x1800A201C (-InstallState@-$consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallStatus@.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_89fb5ab193d74e8b0300aa0759d904c8_::operator()(__int64 a1, __int64 a2)
{
  int v4; // eax
  __int64 CurrentStatus; // rcx
  int v6; // ebx
  __int64 v7; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF
  struct IInspectable *v11; // [rsp+50h] [rbp+18h] BYREF

  v11 = 0LL;
  v4 = Microsoft::WRL::WeakRef::As<IInspectable>((Microsoft::WRL::WeakRef *)(a1 + 8), &v11);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      66LL,
      (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\appinstallbroker.cpp",
      (const char *)(unsigned int)v4);
    __debugbreak();
  }
  if ( v11 )
  {
    CurrentStatus = winrt::impl::consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallItem<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem>::GetCurrentStatus(
                      a2,
                      &v10);
    v6 = winrt::impl::consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallStatus<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallStatus>::InstallState(CurrentStatus);
    winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(&v10);
    if ( v6 == 6 )
    {
      v7 = *(_QWORD *)(*(_QWORD *)a1 + 88LL);
      if ( v7 )
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v7 + 24LL))(v7, 0LL);
    }
  }
  return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v11);
}
