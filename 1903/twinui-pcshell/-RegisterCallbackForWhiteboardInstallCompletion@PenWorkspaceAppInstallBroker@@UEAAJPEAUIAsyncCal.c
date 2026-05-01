/*
 * XREFs of ?RegisterCallbackForWhiteboardInstallCompletion@PenWorkspaceAppInstallBroker@@UEAAJPEAUIAsyncCallback@@@Z @ 0x180096AB0
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x18000E500 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 */

__int64 __fastcall PenWorkspaceAppInstallBroker::RegisterCallbackForWhiteboardInstallCompletion(
        PenWorkspaceAppInstallBroker *this,
        struct IAsyncCallback *a2)
{
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 5, (__int64)a2);
  return 0LL;
}
