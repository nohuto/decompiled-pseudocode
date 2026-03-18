/*
 * XREFs of ?ProcessRecreateDisplaySet@CDesktopRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_DESKTOPRENDERTARGET_RECREATEDISPLAYSET@@@Z @ 0x1801A8948
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009D840 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CDesktopRenderTarget::ProcessRecreateDisplaySet(
        CDesktopRenderTarget *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_DESKTOPRENDERTARGET_RECREATEDISPLAYSET *a3)
{
  if ( *((_DWORD *)this + 50) )
    *((_BYTE *)this + 376) = 1;
  return 0LL;
}
