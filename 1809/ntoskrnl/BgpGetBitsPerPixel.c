/*
 * XREFs of BgpGetBitsPerPixel @ 0x14016F1C0
 * Callers:
 *     BgpGxDrawRectangle @ 0x14016EE10 (BgpGxDrawRectangle.c)
 *     GxpWriteFrameBufferPixels @ 0x14016EE98 (GxpWriteFrameBufferPixels.c)
 *     BgpTxtDisplayCharacter @ 0x140179EF4 (BgpTxtDisplayCharacter.c)
 *     BgpGxProcessQrCodeBitmap @ 0x140192BF4 (BgpGxProcessQrCodeBitmap.c)
 *     BgpClearScreen @ 0x140327614 (BgpClearScreen.c)
 *     BgpFwDisplayBugCheckScreen @ 0x140328A0C (BgpFwDisplayBugCheckScreen.c)
 *     LogFwReport @ 0x14094E514 (LogFwReport.c)
 *     AnFwConfigureProgressResources @ 0x14094E6DC (AnFwConfigureProgressResources.c)
 *     BgpGxReadRectangle @ 0x14094E98C (BgpGxReadRectangle.c)
 *     GxpReadFrameBufferPixels @ 0x14094E9FC (GxpReadFrameBufferPixels.c)
 *     AnFwDisplayFade @ 0x14094EBA8 (AnFwDisplayFade.c)
 *     AnFwpFadeAnimationTimer @ 0x14094F440 (AnFwpFadeAnimationTimer.c)
 * Callees:
 *     <none>
 */

__int64 BgpGetBitsPerPixel()
{
  __int64 result; // rax

  if ( (_DWORD)xmmword_140405A70 == 4 )
    return 24LL;
  result = 1LL;
  if ( (_DWORD)xmmword_140405A70 == 5 )
    return 32LL;
  return result;
}
