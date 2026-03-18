/*
 * XREFs of ?GetD2DDepthBuffer@CHwDisplayRenderTarget@@UEAAXPEAPEAUID2D1PrivateDepthBuffer@@@Z @ 0x1800C2740
 * Callers:
 *     ?GetD2DDepthBuffer@CHwDisplayRenderTarget@@WJA@EAAXPEAPEAUID2D1PrivateDepthBuffer@@@Z @ 0x1800EC830 (-GetD2DDepthBuffer@CHwDisplayRenderTarget@@WJA@EAAXPEAPEAUID2D1PrivateDepthBuffer@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CHwDisplayRenderTarget::GetD2DDepthBuffer(
        CHwDisplayRenderTarget *this,
        struct ID2D1PrivateDepthBuffer **a2)
{
  struct ID2D1PrivateDepthBuffer *v2; // rcx

  v2 = *(struct ID2D1PrivateDepthBuffer **)(*((_QWORD *)this + 17) + 224LL);
  *a2 = v2;
  if ( v2 )
    (*(void (__fastcall **)(struct ID2D1PrivateDepthBuffer *))(*(_QWORD *)v2 + 8LL))(v2);
}
