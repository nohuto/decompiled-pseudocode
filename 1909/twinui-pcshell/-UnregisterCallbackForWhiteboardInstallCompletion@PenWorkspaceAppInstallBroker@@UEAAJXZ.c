/*
 * XREFs of ?UnregisterCallbackForWhiteboardInstallCompletion@PenWorkspaceAppInstallBroker@@UEAAJXZ @ 0x1800A3F10
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall PenWorkspaceAppInstallBroker::UnregisterCallbackForWhiteboardInstallCompletion(
        PenWorkspaceAppInstallBroker *this)
{
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 5);
  return 0LL;
}
