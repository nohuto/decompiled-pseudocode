/*
 * XREFs of ?StartAppInstallAsync@?$consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallManager@UIAppInstallManager@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@impl@winrt@@QEBA?AU?$IAsyncOperation@UAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@Foundation@Windows@3@AEBUhstring@param@3@0_N1@Z @ 0x180096C78
 * Callers:
 *     PenWorkspaceAppInstallBroker::QueueWhiteboardInstallInternal$_ResumeCoro$2 @ 0x180095770 (PenWorkspaceAppInstallBroker--QueueWhiteboardInstallInternal$_ResumeCoro$2.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x1801DE4E0 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall winrt::impl::consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallManager<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager>::StartAppInstallAsync(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3,
        _QWORD *a4)
{
  int v5; // eax
  char v7; // [rsp+20h] [rbp-38h]

  *a2 = 0LL;
  v7 = 0;
  v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, char, _QWORD *))(*(_QWORD *)*a1 + 152LL))(
         *a1,
         *a3,
         *a4,
         0LL,
         v7,
         a2);
  if ( v5 < 0 )
    winrt::throw_hresult((unsigned int)v5);
  return a2;
}
