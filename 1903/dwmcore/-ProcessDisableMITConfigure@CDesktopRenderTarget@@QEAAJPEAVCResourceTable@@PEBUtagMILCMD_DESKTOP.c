/*
 * XREFs of ?ProcessDisableMITConfigure@CDesktopRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_DESKTOPRENDERTARGET_DISABLEMITCONFIGURE@@@Z @ 0x1800E6B7C
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009D840 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CDesktopRenderTarget::ProcessDisableMITConfigure(
        CDesktopRenderTarget *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_DESKTOPRENDERTARGET_DISABLEMITCONFIGURE *a3)
{
  *(_BYTE *)(*((_QWORD *)this + 2) + 1278LL) |= *((_BYTE *)a3 + 8) != 0;
  return 0LL;
}
