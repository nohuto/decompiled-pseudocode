/*
 * XREFs of ?ProcessDisableMITConfigure@CDesktopRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DESKTOPRENDERTARGET_DISABLEMITCONFIGURE@@@Z @ 0x18007C19C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CDesktopRenderTarget::ProcessDisableMITConfigure(
        CDesktopRenderTarget *this,
        struct CResourceTable *a2,
        const struct MILCMD_DESKTOPRENDERTARGET_DISABLEMITCONFIGURE *a3)
{
  *(_BYTE *)(*((_QWORD *)this + 2) + 1261LL) |= *((_DWORD *)a3 + 2) != 0;
  return 0LL;
}
