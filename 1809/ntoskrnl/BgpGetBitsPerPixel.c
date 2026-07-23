/*
 * XREFs of BgpGetBitsPerPixel @ 0x14016F2E0
 * Callers:
 *     BgpGxDrawRectangle @ 0x14016EF30 (BgpGxDrawRectangle.c)
 *     GxpWriteFrameBufferPixels @ 0x14016EFB8 (GxpWriteFrameBufferPixels.c)
 *     BgpTxtDisplayCharacter @ 0x14017A014 (BgpTxtDisplayCharacter.c)
 *     BgpGxProcessQrCodeBitmap @ 0x140192D54 (BgpGxProcessQrCodeBitmap.c)
 *     BgpClearScreen @ 0x140327904 (BgpClearScreen.c)
 *     BgpFwDisplayBugCheckScreen @ 0x140328CFC (BgpFwDisplayBugCheckScreen.c)
 *     LogFwReport @ 0x14094F514 (LogFwReport.c)
 *     AnFwConfigureProgressResources @ 0x14094F6DC (AnFwConfigureProgressResources.c)
 *     BgpGxReadRectangle @ 0x14094F98C (BgpGxReadRectangle.c)
 *     GxpReadFrameBufferPixels @ 0x14094F9FC (GxpReadFrameBufferPixels.c)
 *     AnFwDisplayFade @ 0x14094FBA8 (AnFwDisplayFade.c)
 *     AnFwpFadeAnimationTimer @ 0x140950440 (AnFwpFadeAnimationTimer.c)
 * Callees:
 *     <none>
 */

__int64 BgpGetBitsPerPixel()
{
  __int64 result; // rax

  if ( (_DWORD)xmmword_140406A70 == 4 )
    return 24LL;
  result = 1LL;
  if ( (_DWORD)xmmword_140406A70 == 5 )
    return 32LL;
  return result;
}
