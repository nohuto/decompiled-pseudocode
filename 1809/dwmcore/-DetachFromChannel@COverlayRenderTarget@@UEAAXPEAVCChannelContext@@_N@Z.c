/*
 * XREFs of ?DetachFromChannel@COverlayRenderTarget@@UEAAXPEAVCChannelContext@@_N@Z @ 0x180174F80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall COverlayRenderTarget::DetachFromChannel(COverlayRenderTarget *this, struct CChannelContext *a2)
{
  (*(void (__fastcall **)(_QWORD, struct CChannelContext *))(**((_QWORD **)this + 8) + 136LL))(
    *((_QWORD *)this + 8),
    a2);
}
