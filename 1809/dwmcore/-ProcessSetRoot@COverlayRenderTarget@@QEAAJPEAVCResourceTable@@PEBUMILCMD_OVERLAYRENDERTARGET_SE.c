/*
 * XREFs of ?ProcessSetRoot@COverlayRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_OVERLAYRENDERTARGET_SETROOT@@@Z @ 0x18014BBD8
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall COverlayRenderTarget::ProcessSetRoot(
        COverlayRenderTargetEngine **this,
        struct CResourceTable *a2,
        const struct MILCMD_OVERLAYRENDERTARGET_SETROOT *a3)
{
  return COverlayRenderTargetEngine::SetRoot(this[8], a2, a3);
}
