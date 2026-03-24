/*
 * XREFs of BgConvertResources @ 0x14095340C
 * Callers:
 *     BgkSetVirtualFrameBuffer @ 0x140191A40 (BgkSetVirtualFrameBuffer.c)
 * Callees:
 *     BgpGxConvertRectangle @ 0x140192C98 (BgpGxConvertRectangle.c)
 */

__int64 __fastcall BgConvertResources(unsigned int a1)
{
  return BgpGxConvertRectangle(&qword_140405B58, a1);
}
