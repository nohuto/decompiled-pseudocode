/*
 * XREFs of ?ProcessUpdateSDRToHDRMultiplier@CDcompRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DCOMPRENDERTARGET_UPDATESDRTOHDRMULTIPLIER@@@Z @ 0x1801593E0
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?SetSDRBoost@CHwndRenderTarget@@UEAAXM@Z @ 0x18015B880 (-SetSDRBoost@CHwndRenderTarget@@UEAAXM@Z.c)
 */

__int64 __fastcall CDcompRenderTarget::ProcessUpdateSDRToHDRMultiplier(
        CDcompRenderTarget *this,
        struct CResourceTable *a2,
        const struct MILCMD_DCOMPRENDERTARGET_UPDATESDRTOHDRMULTIPLIER *a3)
{
  CHwndRenderTarget::SetSDRBoost((CHwndRenderTarget *)(*((_QWORD *)this + 7) + 64LL), *((float *)a3 + 2));
  return 0LL;
}
