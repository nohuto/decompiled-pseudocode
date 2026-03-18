/*
 * XREFs of GrePolyPatBlt @ 0x1C009F6B0
 * Callers:
 *     xxxDrawMenuItem @ 0x1C001065C (xxxDrawMenuItem.c)
 *     ?MNDrawInsertionBar@@YAXPEAUHDC__@@PEAUtagITEM@@@Z @ 0x1C001080C (-MNDrawInsertionBar@@YAXPEAUHDC__@@PEAUtagITEM@@@Z.c)
 *     DrawEdge @ 0x1C0010DBC (DrawEdge.c)
 *     DrawFrameControl @ 0x1C0011304 (DrawFrameControl.c)
 *     ?DrawBox@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z @ 0x1C0012940 (-DrawBox@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z.c)
 *     _DrawIconEx @ 0x1C0012DE0 (_DrawIconEx.c)
 *     ?UT_InvertCaret@@YAXXZ @ 0x1C0063E88 (-UT_InvertCaret@@YAXXZ.c)
 *     FillRect @ 0x1C009F914 (FillRect.c)
 *     xxxDrawCaptionBar @ 0x1C00C2CE4 (xxxDrawCaptionBar.c)
 *     ?DrawGrip@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z @ 0x1C01054B4 (-DrawGrip@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z.c)
 *     DrawFrame @ 0x1C0130CD8 (DrawFrame.c)
 *     DrawSize @ 0x1C0200A70 (DrawSize.c)
 *     xxxDrawState @ 0x1C02071C8 (xxxDrawState.c)
 *     ?DrawOutline@@YAXPEAUHDC__@@HHHHHPEAUHBRUSH__@@@Z @ 0x1C0207B14 (-DrawOutline@@YAXPEAUHDC__@@HHHHHPEAUHBRUSH__@@@Z.c)
 *     xxxMenuBarDraw @ 0x1C0209284 (xxxMenuBarDraw.c)
 *     ?DrawDiagonalLine@@YAKPEAUHDC__@@PEAUtagRECT@@HHI@Z @ 0x1C022B550 (-DrawDiagonalLine@@YAKPEAUHDC__@@PEAUtagRECT@@HHI@Z.c)
 *     ClientFrame @ 0x1C022B850 (ClientFrame.c)
 * Callees:
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C008FB20 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C008FC84 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z @ 0x1C009E3A0 (-GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z.c)
 */

__int64 __fastcall GrePolyPatBlt(HDC a1, int a2, struct _POLYPATBLT *a3, int a4)
{
  unsigned int v5; // ebx
  _QWORD v9[2]; // [rsp+50h] [rbp-18h] BYREF

  v5 = 0;
  v9[1] = 0LL;
  XDCOBJ::vLock((XDCOBJ *)v9, a1);
  if ( v9[0] )
  {
    v5 = GrePolyPatBltInternal(
           (struct XDCOBJ *)v9,
           a2,
           a3,
           a4,
           0,
           *(_DWORD *)(*(_QWORD *)(v9[0] + 80LL) + 40LL),
           *(_DWORD *)(*(_QWORD *)(v9[0] + 80LL) + 32LL),
           *(_DWORD *)(*(_QWORD *)(v9[0] + 80LL) + 44LL),
           *(_DWORD *)(*(_QWORD *)(v9[0] + 80LL) + 36LL));
    XDCOBJ::vUnlockFast((XDCOBJ *)v9);
  }
  else
  {
    EngSetLastError(6u);
  }
  return v5;
}
