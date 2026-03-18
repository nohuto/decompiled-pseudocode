/*
 * XREFs of BgpGetResolution @ 0x14013D4FC
 * Callers:
 *     LogFwReport @ 0x14098E514 (LogFwReport.c)
 *     GxpReadFrameBufferPixels @ 0x14098EA14 (GxpReadFrameBufferPixels.c)
 *     BgpTxtCreateRegion @ 0x140990088 (BgpTxtCreateRegion.c)
 *     BgpConsoleInitialize @ 0x1409917A0 (BgpConsoleInitialize.c)
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
