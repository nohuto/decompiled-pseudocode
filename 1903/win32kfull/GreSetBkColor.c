/*
 * XREFs of GreSetBkColor @ 0x1C002D740
 * Callers:
 *     ?xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z @ 0x1C000B548 (-xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z.c)
 *     BltIcon @ 0x1C002D3A4 (BltIcon.c)
 *     xxxRealDefWindowProc @ 0x1C0060288 (xxxRealDefWindowProc.c)
 *     DrawPushButton @ 0x1C008D074 (DrawPushButton.c)
 *     FinalUserInit @ 0x1C00E0598 (FinalUserInit.c)
 *     xxxDrawMenuItem @ 0x1C00F96F4 (xxxDrawMenuItem.c)
 *     ?DrawBox@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z @ 0x1C011BCFC (-DrawBox@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z.c)
 *     RecolorDeskPattern @ 0x1C01413C0 (RecolorDeskPattern.c)
 *     xxxDrawCaptionTemp @ 0x1C0157378 (xxxDrawCaptionTemp.c)
 *     ?DrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z @ 0x1C01F3A20 (-DrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z.c)
 *     SfnINLPKDRAWSWITCHWND @ 0x1C0218320 (SfnINLPKDRAWSWITCHWND.c)
 *     ?xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z @ 0x1C023FFEC (-xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z.c)
 *     BltColor @ 0x1C0248E1C (BltColor.c)
 *     xxxDrawState @ 0x1C0248F64 (xxxDrawState.c)
 *     ?DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z @ 0x1C024963C (-DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z.c)
 *     xxxPSMTextOut @ 0x1C0252D68 (xxxPSMTextOut.c)
 * Callees:
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C006110C (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C0062380 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 */

__int64 __fastcall GreSetBkColor(HDC a1, int a2)
{
  unsigned int v3; // edi
  __int64 v4; // rax
  int v5; // ebx
  __int64 v7; // [rsp+20h] [rbp-18h] BYREF
  int v8; // [rsp+28h] [rbp-10h]
  int v9; // [rsp+2Ch] [rbp-Ch]

  v8 = 0;
  v9 = 0;
  v3 = -1;
  XDCOBJ::vLock((XDCOBJ *)&v7, a1);
  if ( v7 )
  {
    v4 = *(_QWORD *)(v7 + 976);
    v3 = *(_DWORD *)(v4 + 180);
    *(_DWORD *)(v4 + 180) = a2;
    v5 = a2 & 0x13FFFFFF;
    if ( v5 != v3 )
    {
      *(_DWORD *)(*(_QWORD *)(v7 + 976) + 176LL) = v5;
      *(_DWORD *)(*(_QWORD *)(v7 + 976) + 152LL) |= 0xBu;
    }
    XDCOBJ::vUnlockFast((XDCOBJ *)&v7);
  }
  return v3;
}
