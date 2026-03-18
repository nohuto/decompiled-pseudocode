/*
 * XREFs of GreSetBkColor @ 0x1C0013448
 * Callers:
 *     xxxDrawMenuItem @ 0x1C001065C (xxxDrawMenuItem.c)
 *     DrawPushButton @ 0x1C0010CEC (DrawPushButton.c)
 *     ?DrawBox@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z @ 0x1C0012940 (-DrawBox@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z.c)
 *     BltIcon @ 0x1C001316C (BltIcon.c)
 *     xxxRealDefWindowProc @ 0x1C00246A8 (xxxRealDefWindowProc.c)
 *     FinalUserInit @ 0x1C00B4064 (FinalUserInit.c)
 *     RecolorDeskPattern @ 0x1C0113100 (RecolorDeskPattern.c)
 *     ?xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z @ 0x1C012F608 (-xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z.c)
 *     xxxDrawCaptionTemp @ 0x1C0132880 (xxxDrawCaptionTemp.c)
 *     ?DrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z @ 0x1C01BB03C (-DrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z.c)
 *     SfnINLPKDRAWSWITCHWND @ 0x1C01DB820 (SfnINLPKDRAWSWITCHWND.c)
 *     ?xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z @ 0x1C01FF2E4 (-xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z.c)
 *     BltColor @ 0x1C020708C (BltColor.c)
 *     xxxDrawState @ 0x1C02071C8 (xxxDrawState.c)
 *     ?DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z @ 0x1C0207838 (-DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z.c)
 *     xxxPSMTextOut @ 0x1C0210A28 (xxxPSMTextOut.c)
 * Callees:
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C008FB20 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C008FC84 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall GreSetBkColor(HDC a1, int a2)
{
  unsigned int v3; // edi
  __int64 v4; // rdx
  __int64 v5; // rax
  int v6; // ebx
  __int64 v8; // [rsp+20h] [rbp-18h] BYREF
  int v9; // [rsp+28h] [rbp-10h]
  int v10; // [rsp+2Ch] [rbp-Ch]

  v9 = 0;
  v10 = 0;
  v3 = -1;
  XDCOBJ::vLock((XDCOBJ *)&v8, a1);
  v4 = v8;
  if ( v8 )
  {
    v5 = *(_QWORD *)(v8 + 80);
    v3 = *(_DWORD *)(v5 + 36);
    *(_DWORD *)(v5 + 36) = a2;
    v6 = a2 & 0x13FFFFFF;
    if ( v6 != v3 )
    {
      *(_DWORD *)(*(_QWORD *)(v4 + 80) + 32LL) = v6;
      *(_DWORD *)(*(_QWORD *)(v4 + 80) + 8LL) |= 0xBu;
    }
    XDCOBJ::vUnlockFast((XDCOBJ *)&v8);
  }
  return v3;
}
