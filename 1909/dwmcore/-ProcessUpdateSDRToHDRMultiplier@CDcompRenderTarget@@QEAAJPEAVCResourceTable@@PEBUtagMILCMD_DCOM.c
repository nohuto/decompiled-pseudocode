/*
 * XREFs of ?ProcessUpdateSDRToHDRMultiplier@CDcompRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_DCOMPRENDERTARGET_UPDATESDRTOHDRMULTIPLIER@@@Z @ 0x1801A5BE8
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009BE60 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?SetSDRBoost@CHwndRenderTarget@@UEAAXM@Z @ 0x1801A81D0 (-SetSDRBoost@CHwndRenderTarget@@UEAAXM@Z.c)
 */

__int64 __fastcall CDcompRenderTarget::ProcessUpdateSDRToHDRMultiplier(
        CDcompRenderTarget *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_DCOMPRENDERTARGET_UPDATESDRTOHDRMULTIPLIER *a3)
{
  CHwndRenderTarget::SetSDRBoost((CHwndRenderTarget *)(*((_QWORD *)this + 7) + 64LL), *((float *)a3 + 2));
  return 0LL;
}
