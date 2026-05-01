/*
 * XREFs of ?InstallState@?$consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallStatus@UIAppInstallStatus@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@impl@winrt@@QEBA?AW4AppInstallState@InstallControl@Preview@Store@ApplicationModel@Windows@3@XZ @ 0x1800A201C
 * Callers:
 *     _lambda_89fb5ab193d74e8b0300aa0759d904c8_::operator() @ 0x1800A19E0 (_lambda_89fb5ab193d74e8b0300aa0759d904c8_--operator().c)
 *     ?IsWhiteboardInstalling@PenWorkspaceAppInstallBroker@@UEAAJPEAH@Z @ 0x1800A2160 (-IsWhiteboardInstalling@PenWorkspaceAppInstallBroker@@UEAAJPEAH@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x1801ED540 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

__int64 __fastcall winrt::impl::consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallStatus<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallStatus>::InstallState(
        __int64 *a1)
{
  __int64 v1; // rcx
  int v2; // eax
  unsigned int v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = *a1;
  v4 = 0;
  v2 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v1 + 48LL))(v1, &v4);
  if ( v2 < 0 )
    winrt::throw_hresult((unsigned int)v2);
  return v4;
}
