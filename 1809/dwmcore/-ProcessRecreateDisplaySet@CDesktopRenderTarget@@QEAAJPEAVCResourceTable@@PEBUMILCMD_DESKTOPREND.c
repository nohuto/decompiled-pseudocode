/*
 * XREFs of ?ProcessRecreateDisplaySet@CDesktopRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DESKTOPRENDERTARGET_RECREATEDISPLAYSET@@@Z @ 0x18015A704
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CDesktopRenderTarget::ProcessRecreateDisplaySet(
        CDesktopRenderTarget *this,
        struct CResourceTable *a2,
        const struct MILCMD_DESKTOPRENDERTARGET_RECREATEDISPLAYSET *a3)
{
  if ( *((_DWORD *)this + 50) )
    *((_BYTE *)this + 328) = 1;
  return 0LL;
}
