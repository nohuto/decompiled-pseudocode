/*
 * XREFs of ?ProcessSetRoot@COverlayRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_OVERLAYRENDERTARGET_SETROOT@@@Z @ 0x18019FF5C
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009BE60 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
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
