/*
 * XREFs of ?ProcessSetIsCursorEnabled@CCaptureRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_CAPTURERENDERTARGET_SETISCURSORENABLED@@@Z @ 0x180158AC8
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCaptureRenderTarget::ProcessSetIsCursorEnabled(
        CCaptureRenderTarget *this,
        struct CResourceTable *a2,
        const struct MILCMD_CAPTURERENDERTARGET_SETISCURSORENABLED *a3)
{
  *((_BYTE *)this + 425) = *((_DWORD *)a3 + 2) != 0;
  return 0LL;
}
