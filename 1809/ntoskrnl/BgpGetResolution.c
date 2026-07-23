/*
 * XREFs of BgpGetResolution @ 0x14013B9C0
 * Callers:
 *     LogFwReport @ 0x14094F514 (LogFwReport.c)
 *     GxpReadFrameBufferPixels @ 0x14094F9FC (GxpReadFrameBufferPixels.c)
 *     BgpTxtCreateRegion @ 0x14095103C (BgpTxtCreateRegion.c)
 *     BgpConsoleInitialize @ 0x140952730 (BgpConsoleInitialize.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall BgpGetResolution(_DWORD *a1)
{
  *a1 = DWORD2(BgInternal);
  a1[1] = DWORD1(BgInternal);
  a1[2] = HIDWORD(BgInternal);
  return a1;
}
