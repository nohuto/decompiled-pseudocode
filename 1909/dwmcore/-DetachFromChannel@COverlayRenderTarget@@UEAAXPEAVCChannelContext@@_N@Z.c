/*
 * XREFs of ?DetachFromChannel@COverlayRenderTarget@@UEAAXPEAVCChannelContext@@_N@Z @ 0x18019E710
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall COverlayRenderTarget::DetachFromChannel(COverlayRenderTarget *this, struct CChannelContext *a2)
{
  (*(void (__fastcall **)(_QWORD, struct CChannelContext *))(**((_QWORD **)this + 8) + 168LL))(
    *((_QWORD *)this + 8),
    a2);
}
