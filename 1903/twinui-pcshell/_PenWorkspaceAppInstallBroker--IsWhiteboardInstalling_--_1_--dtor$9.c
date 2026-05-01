/*
 * XREFs of _PenWorkspaceAppInstallBroker::IsWhiteboardInstalling_::_1_::dtor$9 @ 0x18009516B
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$IAsyncOperation@UAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@Foundation@Windows@winrt@@QEAA@XZ @ 0x1800946D8 (--1-$IAsyncOperation@UAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt.c)
 */

__int64 __fastcall PenWorkspaceAppInstallBroker::IsWhiteboardInstalling_::_1_::dtor_9(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 152) & 4;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 152) &= ~4u;
    return winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem>::~IAsyncOperation<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem>((_QWORD *)(a2 + 160));
  }
  return result;
}
