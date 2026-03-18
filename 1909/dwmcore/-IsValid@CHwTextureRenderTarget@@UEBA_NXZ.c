/*
 * XREFs of ?IsValid@CHwTextureRenderTarget@@UEBA_NXZ @ 0x18004A3D0
 * Callers:
 *     ?FindMatchingBitmap@CRenderTargetBitmapCache@@AEAAJIIAEBUPixelFormatInfo@@_N1PEAPEAVCScratchRenderTargetBitmap@@@Z @ 0x18004A260 (-FindMatchingBitmap@CRenderTargetBitmapCache@@AEAAJIIAEBUPixelFormatInfo@@_N1PEAPEAVCScratchRend.c)
 *     ?IsValid@CHwTextureRenderTarget@@WJA@EBA_NXZ @ 0x1800F0890 (-IsValid@CHwTextureRenderTarget@@WJA@EBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CHwTextureRenderTarget::IsValid(CHwTextureRenderTarget *this)
{
  __int64 v1; // rdx
  bool result; // al

  v1 = *((_QWORD *)this + 22);
  result = 0;
  if ( v1 )
    return *(_BYTE *)(v1 + 69) != 0;
  return result;
}
