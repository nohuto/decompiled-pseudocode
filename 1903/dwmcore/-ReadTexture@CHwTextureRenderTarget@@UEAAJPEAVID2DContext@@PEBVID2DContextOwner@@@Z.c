/*
 * XREFs of ?ReadTexture@CHwTextureRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@@Z @ 0x180163A20
 * Callers:
 *     ?ReadTexture@CHwTextureRenderTarget@@WJA@EAAJPEAVID2DContext@@PEBVID2DContextOwner@@@Z @ 0x1800ECC40 (-ReadTexture@CHwTextureRenderTarget@@WJA@EAAJPEAVID2DContext@@PEBVID2DContextOwner@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CHwTextureRenderTarget::ReadTexture(
        CHwTextureRenderTarget *this,
        struct ID2DContext *a2,
        const struct ID2DContextOwner *a3)
{
  return CHwSurfaceRenderTarget::ReadTexture(this, a2, a3);
}
