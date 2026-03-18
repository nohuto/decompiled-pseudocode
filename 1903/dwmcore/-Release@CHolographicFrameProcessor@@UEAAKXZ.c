/*
 * XREFs of ?Release@CHolographicFrameProcessor@@UEAAKXZ @ 0x1800C01B0
 * Callers:
 *     ?Release@CHolographicExclusivePresentData@@W7EAAKXZ @ 0x1800ECE70 (-Release@CHolographicExclusivePresentData@@W7EAAKXZ.c)
 *     ?Release@CHolographicFrameProcessor@@WCA@EAAKXZ @ 0x1800ED840 (-Release@CHolographicFrameProcessor@@WCA@EAAKXZ.c)
 *     ?Release@CHolographicFrameProcessor@@WCI@EAAKXZ @ 0x1800ED850 (-Release@CHolographicFrameProcessor@@WCI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CHolographicFrameProcessor::Release(CHolographicFrameProcessor *this)
{
  return CGdiSpriteBitmap::Release((CHolographicFrameProcessor *)((char *)this + 8));
}
