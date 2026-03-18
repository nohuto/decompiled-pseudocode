/*
 * XREFs of ?ReadTexture@CHwTextureRenderTarget@@UEBAXXZ @ 0x180162340
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CHwTextureRenderTarget::ReadTexture(CHwTextureRenderTarget *this)
{
  DebugInspectTexture(*(struct ID3D11Texture2D **)(*((_QWORD *)this + 3) + 120LL), 0);
}
