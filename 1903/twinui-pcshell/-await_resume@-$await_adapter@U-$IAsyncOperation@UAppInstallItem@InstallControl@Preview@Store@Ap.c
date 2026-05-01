/*
 * XREFs of ?await_resume@?$await_adapter@U?$IAsyncOperation@UAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@QEBA?AUAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@3@XZ @ 0x180096E54
 * Callers:
 *     PenWorkspaceAppInstallBroker::QueueWhiteboardInstallInternal$_ResumeCoro$2 @ 0x180095770 (PenWorkspaceAppInstallBroker--QueueWhiteboardInstallInternal$_ResumeCoro$2.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x1801DE4E0 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem>>::await_resume(
        _QWORD **a1,
        _QWORD *a2)
{
  _QWORD *v3; // rax
  int v4; // eax

  v3 = *a1;
  *a2 = 0LL;
  v4 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v3 + 64LL))(*v3);
  if ( v4 < 0 )
    winrt::throw_hresult((unsigned int)v4);
  return a2;
}
