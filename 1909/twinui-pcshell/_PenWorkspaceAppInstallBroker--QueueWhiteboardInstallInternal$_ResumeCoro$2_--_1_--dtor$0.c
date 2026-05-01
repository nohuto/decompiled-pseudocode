/*
 * XREFs of _PenWorkspaceAppInstallBroker::QueueWhiteboardInstallInternal$_ResumeCoro$2_::_1_::dtor$0 @ 0x1800A3AD8
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$IAsyncOperation@UAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@Foundation@Windows@winrt@@QEAA@XZ @ 0x18009BD44 (--1-$IAsyncOperation@UAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt.c)
 */

__int64 __fastcall PenWorkspaceAppInstallBroker::QueueWhiteboardInstallInternal__ResumeCoro_2_::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 1176) = *(_QWORD *)(a2 + 1248) + 16LL;
  return winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem>::~IAsyncOperation<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem>(*(_QWORD *)(a2 + 1176));
}
