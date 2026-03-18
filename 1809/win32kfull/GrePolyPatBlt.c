/*
 * XREFs of GrePolyPatBlt @ 0x1C007B620
 * Callers:
 *     _DrawIconEx @ 0x1C006D774 (_DrawIconEx.c)
 *     ?UT_InvertCaret@@YAXXZ @ 0x1C007AC3C (-UT_InvertCaret@@YAXXZ.c)
 *     DrawEdge @ 0x1C007AF44 (DrawEdge.c)
 *     FillRect @ 0x1C007B5C0 (FillRect.c)
 *     DrawFrameControl @ 0x1C007BB1C (DrawFrameControl.c)
 *     xxxDrawCaptionBar @ 0x1C00A7DE8 (xxxDrawCaptionBar.c)
 *     xxxDrawMenuItem @ 0x1C00AAA94 (xxxDrawMenuItem.c)
 *     ?MNDrawInsertionBar@@YAXPEAUHDC__@@PEAUtagITEM@@@Z @ 0x1C00AAC44 (-MNDrawInsertionBar@@YAXPEAUHDC__@@PEAUtagITEM@@@Z.c)
 *     ?DrawBox@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z @ 0x1C01106E0 (-DrawBox@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z.c)
 *     ?DrawGrip@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z @ 0x1C012585C (-DrawGrip@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z.c)
 *     DrawFrame @ 0x1C014FA18 (DrawFrame.c)
 *     DrawSize @ 0x1C02294A8 (DrawSize.c)
 *     xxxDrawState @ 0x1C0230354 (xxxDrawState.c)
 *     ?DrawOutline@@YAXPEAUHDC__@@HHHHHPEAUHBRUSH__@@@Z @ 0x1C0230CF4 (-DrawOutline@@YAXPEAUHDC__@@HHHHHPEAUHBRUSH__@@@Z.c)
 *     xxxMenuBarDraw @ 0x1C0232510 (xxxMenuBarDraw.c)
 *     ?DrawDiagonalLine@@YAKPEAUHDC__@@PEAUtagRECT@@HHI@Z @ 0x1C02414B4 (-DrawDiagonalLine@@YAKPEAUHDC__@@PEAUtagRECT@@HHI@Z.c)
 *     ClientFrame @ 0x1C02417C0 (ClientFrame.c)
 * Callees:
 *     ?GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z @ 0x1C005604C (-GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0056C48 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0056E10 (--1DCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GrePolyPatBlt(HDC a1, unsigned int a2, struct _POLYPATBLT *a3, int a4)
{
  unsigned int v7; // ebx
  _QWORD v9[6]; // [rsp+50h] [rbp-38h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v9, a1);
  v7 = 0;
  if ( v9[0] )
    v7 = GrePolyPatBltInternal(
           (struct XDCOBJ *)v9,
           a2,
           a3,
           a4,
           0,
           *(_DWORD *)(*(_QWORD *)(v9[0] + 976LL) + 184LL),
           *(_DWORD *)(*(_QWORD *)(v9[0] + 976LL) + 176LL),
           *(_DWORD *)(*(_QWORD *)(v9[0] + 976LL) + 188LL),
           *(_DWORD *)(*(_QWORD *)(v9[0] + 976LL) + 180LL));
  else
    EngSetLastError(6u);
  DCOBJ::~DCOBJ((DCOBJ *)v9);
  return v7;
}
