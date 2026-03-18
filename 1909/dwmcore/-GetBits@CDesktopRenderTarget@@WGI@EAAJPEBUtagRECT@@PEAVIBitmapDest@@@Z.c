/*
 * XREFs of ?GetBits@CDesktopRenderTarget@@WGI@EAAJPEBUtagRECT@@PEAVIBitmapDest@@@Z @ 0x1800F0DE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDesktopRenderTarget::GetBits(
        __int64 a1,
        const struct tagRECT *a2,
        __int64 (__fastcall ***a3)(struct IBitmapDest *, GUID *, __int64 *))
{
  return CDesktopRenderTarget::GetBits((CDesktopRenderTarget *)(a1 - 104), a2, a3);
}
