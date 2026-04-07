/*
 * XREFs of ?EnsureUncompressedBitmap@CCompressedSourceBitmap@@IEAAJXZ @ 0x1800474C4
 * Callers:
 *     ?Lock@CCompressedSourceBitmap@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z @ 0x180047190 (-Lock@CCompressedSourceBitmap@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z.c)
 *     ?CopyPixels@CCompressedSourceBitmap@@UEAAJPEBUWICRect@@IIPEAE@Z @ 0x1800B88F0 (-CopyPixels@CCompressedSourceBitmap@@UEAAJPEBUWICRect@@IIPEAE@Z.c)
 * Callees:
 *     ?DecompressBitmap@CCompressedSourceBitmap@@IEAAJXZ @ 0x1800474F4 (-DecompressBitmap@CCompressedSourceBitmap@@IEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CCompressedSourceBitmap::EnsureUncompressedBitmap(CCompressedSourceBitmap *this)
{
  unsigned int v1; // ebx
  int v2; // eax
  void *v4; // [rsp+28h] [rbp-10h]

  v1 = 0;
  if ( !*((_QWORD *)this + 33) )
  {
    v2 = CCompressedSourceBitmap::DecompressBitmap(this);
    v1 = v2;
    if ( v2 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x12Cu, v4);
  }
  return v1;
}
