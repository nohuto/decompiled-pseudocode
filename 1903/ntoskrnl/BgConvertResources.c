/*
 * XREFs of BgConvertResources @ 0x1409934CC
 * Callers:
 *     BgkSetVirtualFrameBuffer @ 0x14019BC70 (BgkSetVirtualFrameBuffer.c)
 * Callees:
 *     BgpGxConvertRectangle @ 0x14019D000 (BgpGxConvertRectangle.c)
 */

__int64 __fastcall BgConvertResources(unsigned int a1)
{
  return BgpGxConvertRectangle(&qword_14042C0B8, a1);
}
