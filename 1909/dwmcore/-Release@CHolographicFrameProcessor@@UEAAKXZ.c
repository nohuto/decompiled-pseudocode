/*
 * XREFs of ?Release@CHolographicFrameProcessor@@UEAAKXZ @ 0x1800ABF80
 * Callers:
 *     ?Release@CHolographicExclusivePresentData@@W7EAAKXZ @ 0x1800F0B30 (-Release@CHolographicExclusivePresentData@@W7EAAKXZ.c)
 *     ?Release@CHolographicFrameProcessor@@WCA@EAAKXZ @ 0x1800F1500 (-Release@CHolographicFrameProcessor@@WCA@EAAKXZ.c)
 *     ?Release@CHolographicFrameProcessor@@WCI@EAAKXZ @ 0x1800F1510 (-Release@CHolographicFrameProcessor@@WCI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

unsigned int __fastcall CHolographicFrameProcessor::Release(CHolographicFrameProcessor *this)
{
  return CGdiSpriteBitmap::Release((CHolographicFrameProcessor *)((char *)this + 8));
}
