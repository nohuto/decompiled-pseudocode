/*
 * XREFs of ?IsValid@CHwTextureRenderTarget@@UEBA_NXZ @ 0x1800DADB0
 * Callers:
 *     ?FindMatchingBitmap@CRenderTargetBitmapCache@@AEAAJIIAEBUPixelFormatInfo@@_N1PEAPEAVCScratchRenderTargetBitmap@@@Z @ 0x1800DAC2C (-FindMatchingBitmap@CRenderTargetBitmapCache@@AEAAJIIAEBUPixelFormatInfo@@_N1PEAPEAVCScratchRend.c)
 *     ?IsValid@CHwTextureRenderTarget@@WNA@EBA_NXZ @ 0x1800F0F40 (-IsValid@CHwTextureRenderTarget@@WNA@EBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CHwTextureRenderTarget::IsValid(CHwTextureRenderTarget *this)
{
  __int64 v1; // rdx
  bool result; // al

  v1 = *((_QWORD *)this + 30);
  result = 0;
  if ( v1 )
    return *(_BYTE *)(v1 + 69) != 0;
  return result;
}
