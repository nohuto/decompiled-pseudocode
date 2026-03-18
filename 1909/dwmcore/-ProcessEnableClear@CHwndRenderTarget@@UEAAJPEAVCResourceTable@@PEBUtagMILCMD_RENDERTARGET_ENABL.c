/*
 * XREFs of ?ProcessEnableClear@CHwndRenderTarget@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_RENDERTARGET_ENABLECLEAR@@@Z @ 0x180194350
 * Callers:
 *     ?ProcessEnableClear@CDesktopRenderTarget@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_RENDERTARGET_ENABLECLEAR@@@Z @ 0x1800E75A0 (-ProcessEnableClear@CDesktopRenderTarget@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_RENDERTARGET_EN.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CHwndRenderTarget::ProcessEnableClear(
        CHwndRenderTarget *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_RENDERTARGET_ENABLECLEAR *a3)
{
  char v3; // al

  v3 = *((_BYTE *)a3 + 8) != 0;
  if ( *((_BYTE *)this + 160) != v3 )
  {
    *((_BYTE *)this + 160) = v3;
    *((_BYTE *)this + 161) = 1;
  }
  return 0LL;
}
