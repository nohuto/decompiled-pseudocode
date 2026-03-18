/*
 * XREFs of ?GetD2DDepthBuffer@CHwTextureRenderTarget@@UEAAXPEAPEAUID2D1PrivateDepthBuffer@@@Z @ 0x18006D570
 * Callers:
 *     ?GetD2DDepthBuffer@CHwTextureRenderTarget@@WNA@EAAXPEAPEAUID2D1PrivateDepthBuffer@@@Z @ 0x1800F0E70 (-GetD2DDepthBuffer@CHwTextureRenderTarget@@WNA@EAAXPEAPEAUID2D1PrivateDepthBuffer@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CHwTextureRenderTarget::GetD2DDepthBuffer(
        CHwTextureRenderTarget *this,
        struct ID2D1PrivateDepthBuffer **a2)
{
  struct ID2D1PrivateDepthBuffer *v2; // rcx

  v2 = *(struct ID2D1PrivateDepthBuffer **)(*((_QWORD *)this + 25) + 224LL);
  *a2 = v2;
  if ( v2 )
    (*(void (__fastcall **)(struct ID2D1PrivateDepthBuffer *))(*(_QWORD *)v2 + 8LL))(v2);
}
