/*
 * XREFs of GreSetTextColor @ 0x1C0022D4C
 * Callers:
 *     ?DrawBox@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z @ 0x1C0022044 (-DrawBox@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z.c)
 *     ?DrawIt@@YAHPEAUHDC__@@PEAUtagRECT@@IG@Z @ 0x1C0022360 (-DrawIt@@YAHPEAUHDC__@@PEAUtagRECT@@IG@Z.c)
 *     BltIcon @ 0x1C0022AC0 (BltIcon.c)
 *     FinalUserInit @ 0x1C00801F4 (FinalUserInit.c)
 *     xxxRealDefWindowProc @ 0x1C00A9FB8 (xxxRealDefWindowProc.c)
 *     ?xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z @ 0x1C00EA6A4 (-xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z.c)
 *     ?DrawMenuMark@@YAHPEAUHDC__@@PEAUtagRECT@@II@Z @ 0x1C0100E08 (-DrawMenuMark@@YAHPEAUHDC__@@PEAUtagRECT@@II@Z.c)
 *     ?DrawGrip@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z @ 0x1C010B2C8 (-DrawGrip@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z.c)
 *     xxxDrawMenuBarUnderlines @ 0x1C0111460 (xxxDrawMenuBarUnderlines.c)
 *     RecolorDeskPattern @ 0x1C011BBA0 (RecolorDeskPattern.c)
 *     xxxDrawMenuItem @ 0x1C01297F4 (xxxDrawMenuItem.c)
 *     DrawPushButton @ 0x1C012B5C8 (DrawPushButton.c)
 *     xxxDrawCaptionTemp @ 0x1C0158138 (xxxDrawCaptionTemp.c)
 *     ?DrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z @ 0x1C01F38A0 (-DrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z.c)
 *     ?PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z @ 0x1C0211494 (-PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z.c)
 *     SfnINLPKDRAWSWITCHWND @ 0x1C0217DE0 (SfnINLPKDRAWSWITCHWND.c)
 *     ?xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z @ 0x1C023F9CC (-xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z.c)
 *     BltColor @ 0x1C02486DC (BltColor.c)
 *     xxxDrawState @ 0x1C0248824 (xxxDrawState.c)
 *     ?DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z @ 0x1C0248EFC (-DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z.c)
 * Callees:
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C00AB3B0 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
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
