/*
 * XREFs of GreSetBkMode @ 0x1C012B54C
 * Callers:
 *     FinalUserInit @ 0x1C00801F4 (FinalUserInit.c)
 *     xxxMenuDraw @ 0x1C01294A0 (xxxMenuDraw.c)
 *     xxxDrawMenuItem @ 0x1C01297F4 (xxxDrawMenuItem.c)
 *     DrawFrameControl @ 0x1C012B23C (DrawFrameControl.c)
 *     xxxDrawCaptionTemp @ 0x1C0158138 (xxxDrawCaptionTemp.c)
 *     ?PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z @ 0x1C0211494 (-PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z.c)
 *     ?xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z @ 0x1C023F9CC (-xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z.c)
 *     xxxDrawState @ 0x1C0248824 (xxxDrawState.c)
 *     xxxMNInvertItem @ 0x1C024A2A4 (xxxMNInvertItem.c)
 * Callees:
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C00AB3B0 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00AD68C (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
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
