/*
 * XREFs of _PenWorkspaceAppInstallBroker::QueueWhiteboardInstallInternal$_ResumeCoro$2_::_1_::dtor$3 @ 0x180096972
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$IAsyncOperation@UAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@Foundation@Windows@winrt@@QEAA@XZ @ 0x1800946D8 (--1-$IAsyncOperation@UAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt.c)
 */

__int64 __fastcall PenWorkspaceAppInstallBroker::QueueWhiteboardInstallInternal__ResumeCoro_2_::_1_::dtor_3(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 1200) = *(_QWORD *)(a2 + 1248) + 40LL;
  return winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem>::~IAsyncOperation<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem>(*(_QWORD **)(a2 + 1200));
}
