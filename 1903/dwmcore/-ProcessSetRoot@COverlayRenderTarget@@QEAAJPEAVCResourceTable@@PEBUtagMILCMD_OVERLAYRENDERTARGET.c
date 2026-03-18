/*
 * XREFs of ?ProcessSetRoot@COverlayRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_OVERLAYRENDERTARGET_SETROOT@@@Z @ 0x1801A181C
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009D840 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall COverlayRenderTarget::ProcessSetRoot(
        COverlayRenderTargetEngine **this,
        struct CResourceTable *a2,
        const struct tagMILCMD_OVERLAYRENDERTARGET_SETROOT *a3)
{
  return COverlayRenderTargetEngine::SetRoot(this[8], a2, a3);
}
