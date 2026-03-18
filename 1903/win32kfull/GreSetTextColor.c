/*
 * XREFs of GreSetTextColor @ 0x1C002D630
 * Callers:
 *     ?xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z @ 0x1C000B548 (-xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z.c)
 *     BltIcon @ 0x1C002D3A4 (BltIcon.c)
 *     xxxRealDefWindowProc @ 0x1C0060288 (xxxRealDefWindowProc.c)
 *     DrawPushButton @ 0x1C008D074 (DrawPushButton.c)
 *     ?DrawIt@@YAHPEAUHDC__@@PEAUtagRECT@@IG@Z @ 0x1C008DBBC (-DrawIt@@YAHPEAUHDC__@@PEAUtagRECT@@IG@Z.c)
 *     FinalUserInit @ 0x1C00E0598 (FinalUserInit.c)
 *     xxxDrawMenuItem @ 0x1C00F96F4 (xxxDrawMenuItem.c)
 *     ?DrawMenuMark@@YAHPEAUHDC__@@PEAUtagRECT@@II@Z @ 0x1C011BBE4 (-DrawMenuMark@@YAHPEAUHDC__@@PEAUtagRECT@@II@Z.c)
 *     ?DrawBox@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z @ 0x1C011BCFC (-DrawBox@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z.c)
 *     ?DrawGrip@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z @ 0x1C0130778 (-DrawGrip@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z.c)
 *     xxxDrawMenuBarUnderlines @ 0x1C01373E0 (xxxDrawMenuBarUnderlines.c)
 *     RecolorDeskPattern @ 0x1C01413C0 (RecolorDeskPattern.c)
 *     xxxDrawCaptionTemp @ 0x1C0157378 (xxxDrawCaptionTemp.c)
 *     ?DrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z @ 0x1C01F3A20 (-DrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z.c)
 *     ?PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z @ 0x1C02119D4 (-PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z.c)
 *     SfnINLPKDRAWSWITCHWND @ 0x1C0218320 (SfnINLPKDRAWSWITCHWND.c)
 *     ?xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z @ 0x1C023FFEC (-xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z.c)
 *     BltColor @ 0x1C0248E1C (BltColor.c)
 *     xxxDrawState @ 0x1C0248F64 (xxxDrawState.c)
 *     ?DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z @ 0x1C024963C (-DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z.c)
 * Callees:
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C0062380 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 */

__int64 __fastcall GreSetTextColor(HDC a1, int a2)
{
  unsigned int v3; // edi
  __int64 v4; // rax
  int v5; // ebx
  struct _DC_ATTR *UserAttr; // rax
  __int64 v7; // rbx
  DC *v9; // [rsp+20h] [rbp-10h] BYREF
  int v10; // [rsp+28h] [rbp-8h]
  unsigned int v11; // [rsp+2Ch] [rbp-4h]
  int v12; // [rsp+50h] [rbp+20h] BYREF

  v10 = 0;
  v11 = 0;
  v3 = -1;
  XDCOBJ::vLock((XDCOBJ *)&v9, a1);
  if ( v9 )
  {
    v4 = *((_QWORD *)v9 + 122);
    v3 = *(_DWORD *)(v4 + 188);
    *(_DWORD *)(v4 + 188) = a2;
    v5 = a2 & 0x13FFFFFF;
    if ( v5 != v3 )
    {
      *(_DWORD *)(*((_QWORD *)v9 + 122) + 184LL) = v5;
      *(_DWORD *)(*((_QWORD *)v9 + 122) + 152LL) |= 7u;
    }
    if ( v10 && (*((_DWORD *)v9 + 11) & 2) != 0 )
    {
      if ( !v11 )
      {
        UserAttr = XDCOBJ::GetUserAttr((XDCOBJ *)&v9);
        if ( UserAttr )
          DC::RestoreAttributes(v9, UserAttr);
      }
      *((_DWORD *)v9 + 11) &= ~2u;
      v10 = 0;
    }
    v12 = 0;
    v7 = *(_QWORD *)v9;
    HmgDecrementExclusiveReferenceCountEx(v9, v11, &v12);
    if ( v12 )
      bDeleteDCInternalEx(v7, 0LL);
  }
  return v3;
}
