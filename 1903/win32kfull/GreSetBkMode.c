/*
 * XREFs of GreSetBkMode @ 0x1C008CFF8
 * Callers:
 *     DrawFrameControl @ 0x1C008CAFC (DrawFrameControl.c)
 *     FinalUserInit @ 0x1C00E0598 (FinalUserInit.c)
 *     xxxMenuDraw @ 0x1C00F9420 (xxxMenuDraw.c)
 *     xxxDrawMenuItem @ 0x1C00F96F4 (xxxDrawMenuItem.c)
 *     xxxDrawCaptionTemp @ 0x1C0157378 (xxxDrawCaptionTemp.c)
 *     ?PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z @ 0x1C02119D4 (-PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z.c)
 *     ?xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z @ 0x1C023FFEC (-xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z.c)
 *     xxxDrawState @ 0x1C0248F64 (xxxDrawState.c)
 *     xxxMNInvertItem @ 0x1C024A9E4 (xxxMNInvertItem.c)
 * Callees:
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C006110C (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C0062380 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 */

__int64 __fastcall GreSetBkMode(HDC a1, int a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rax
  _QWORD v6[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = 0;
  v6[1] = 0LL;
  XDCOBJ::vLock((XDCOBJ *)v6, a1);
  if ( v6[0] )
  {
    v4 = *(_QWORD *)(v6[0] + 976LL);
    v3 = *(_DWORD *)(v4 + 224);
    *(_DWORD *)(v4 + 224) = a2;
    if ( (unsigned int)(a2 - 1) > 1 )
      LOBYTE(a2) = 1;
    *(_BYTE *)(*(_QWORD *)(v6[0] + 976LL) + 213LL) = a2;
    XDCOBJ::vUnlockFast((XDCOBJ *)v6);
  }
  return v3;
}
