/*
 * XREFs of BgConvertResources @ 0x14095440C
 * Callers:
 *     BgkSetVirtualFrameBuffer @ 0x140191B80 (BgkSetVirtualFrameBuffer.c)
 * Callees:
 *     BgpGxConvertRectangle @ 0x140192DD8 (BgpGxConvertRectangle.c)
 */

__int64 __fastcall BgConvertResources(unsigned int a1)
{
  return BgpGxConvertRectangle(&qword_140406B58, a1);
}
