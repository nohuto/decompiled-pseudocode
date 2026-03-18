/*
 * XREFs of BgpGetBitsPerPixel @ 0x140178A38
 * Callers:
 *     BgpGxDrawRectangle @ 0x140178640 (BgpGxDrawRectangle.c)
 *     GxpWriteFrameBufferPixels @ 0x1401786D0 (GxpWriteFrameBufferPixels.c)
 *     BgpTxtDisplayCharacter @ 0x140182CE8 (BgpTxtDisplayCharacter.c)
 *     BgpGxProcessQrCodeBitmap @ 0x14019CF7C (BgpGxProcessQrCodeBitmap.c)
 *     BgpClearScreen @ 0x140348F70 (BgpClearScreen.c)
 *     BgpFwDisplayBugCheckScreen @ 0x14034A390 (BgpFwDisplayBugCheckScreen.c)
 *     LogFwReport @ 0x14098E514 (LogFwReport.c)
 *     AnFwConfigureProgressResources @ 0x14098E6E4 (AnFwConfigureProgressResources.c)
 *     BgpGxReadRectangle @ 0x14098E9A4 (BgpGxReadRectangle.c)
 *     GxpReadFrameBufferPixels @ 0x14098EA14 (GxpReadFrameBufferPixels.c)
 *     AnFwDisplayFade @ 0x14098EBD8 (AnFwDisplayFade.c)
 *     AnFwpFadeAnimationTimer @ 0x14098F480 (AnFwpFadeAnimationTimer.c)
 * Callees:
 *     <none>
 */

__int64 BgpGetBitsPerPixel()
{
  __int64 result; // rax

  if ( (_DWORD)xmmword_14042BFD0 == 4 )
    return 24LL;
  result = 1LL;
  if ( (_DWORD)xmmword_14042BFD0 == 5 )
    return 32LL;
  return result;
}
