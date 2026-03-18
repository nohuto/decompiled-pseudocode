/*
 * XREFs of IntersectRect @ 0x1C0068714
 * Callers:
 *     ?IsCandidateTransformOwner@@YAHPEAUtagWND@@0@Z @ 0x1C0013DAC (-IsCandidateTransformOwner@@YAHPEAUtagWND@@0@Z.c)
 *     _MonitorFromRect @ 0x1C00147D0 (_MonitorFromRect.c)
 *     ParkIcon @ 0x1C0014E34 (ParkIcon.c)
 *     OffsetChildren @ 0x1C002C01C (OffsetChildren.c)
 *     xxxScrollWindowEx @ 0x1C002E8F4 (xxxScrollWindowEx.c)
 *     UT_GetParentDCClipBox @ 0x1C003AD08 (UT_GetParentDCClipBox.c)
 *     xxxSystemParametersInfoWorker @ 0x1C005BCF4 (xxxSystemParametersInfoWorker.c)
 *     xxxInternalInvalidate @ 0x1C0065240 (xxxInternalInvalidate.c)
 *     ?InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z @ 0x1C0065430 (-InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z.c)
 *     ?SmartRectInRegion@@YAIPEAUHRGN__@@PEAUtagRECT@@@Z @ 0x1C0067AE8 (-SmartRectInRegion@@YAIPEAUHRGN__@@PEAUtagRECT@@@Z.c)
 *     ?InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z @ 0x1C0067CB0 (-InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C006AB94 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     GetInheritedMonitor @ 0x1C006BA24 (GetInheritedMonitor.c)
 *     SpbCheckDce @ 0x1C00CFC80 (SpbCheckDce.c)
 *     SubtractRect @ 0x1C00ECF64 (SubtractRect.c)
 *     FindOldMonitor @ 0x1C012EA18 (FindOldMonitor.c)
 *     xxxGetUpdateRect @ 0x1C012ECD8 (xxxGetUpdateRect.c)
 *     xxxSnapWindow @ 0x1C015DA3C (xxxSnapWindow.c)
 *     CreateSpb @ 0x1C015E86C (CreateSpb.c)
 *     xxxRedrawHungWindow @ 0x1C015EBC8 (xxxRedrawHungWindow.c)
 *     ?FixBogusSWP@@YAXPEAUtagWND@@PEAH1HHI@Z @ 0x1C01D34AC (-FixBogusSWP@@YAXPEAUtagWND@@PEAH1HHI@Z.c)
 *     ?PreventInterMonitorBlts@@YAXPEAUtagCVR@@@Z @ 0x1C01D36D8 (-PreventInterMonitorBlts@@YAXPEAUtagCVR@@@Z.c)
 *     ?IsNewMonitorRectMostOccupied@@YAHPEBUtagRECT@@00@Z @ 0x1C01E5864 (-IsNewMonitorRectMostOccupied@@YAHPEBUtagRECT@@00@Z.c)
 *     xxxPrintWindow @ 0x1C01E97EC (xxxPrintWindow.c)
 *     ?MoveRect@@YAHPEAU_MOVESIZEDATA@@KW4_MOVERECT_STYLE@@@Z @ 0x1C01FAEB0 (-MoveRect@@YAHPEAU_MOVESIZEDATA@@KW4_MOVERECT_STYLE@@@Z.c)
 *     ?TransformShellProvidedRectangles@@YAXPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@PEAUtagRECT@@3PEAUtagWND@@33@Z @ 0x1C01FB7A4 (-TransformShellProvidedRectangles@@YAXPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIR.c)
 *     ?xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z @ 0x1C01FD0D8 (-xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z.c)
 *     ?xxxGetSizeRectFromShell@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@PEAUtagRECT@@@Z @ 0x1C01FDD0C (-xxxGetSizeRectFromShell@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@P.c)
 *     xxxDrawDragRectEx @ 0x1C02006D0 (xxxDrawDragRectEx.c)
 *     xxxInitializeMoveSizeData @ 0x1C0200FD8 (xxxInitializeMoveSizeData.c)
 *     ?TTBetterTarget@@YAHPEAUtagWND@@IPEAUtagPNTRWINDOWHITTTESTARGS@@PEAUtagRECT@@K@Z @ 0x1C0203AC0 (-TTBetterTarget@@YAHPEAUtagWND@@IPEAUtagPNTRWINDOWHITTTESTARGS@@PEAUtagRECT@@K@Z.c)
 *     ?_TTUpdateBestTarget@@YAXPEAUtagPNTRWINDOWHITTTESTARGS@@PEAUtagWND@@IPEBUtagPOINT@@PEAUtagRECT@@HU4@K@Z @ 0x1C0204340 (-_TTUpdateBestTarget@@YAXPEAUtagPNTRWINDOWHITTTESTARGS@@PEAUtagWND@@IPEBUtagPOINT@@PEAUtagRECT@@.c)
 *     ?xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@1PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagRECT@@KW4tagTARGETING_PROPERTY@@@Z @ 0x1C0204AE0 (-xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@1PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHU.c)
 *     ?FBitsTouch@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagSPB@@K@Z @ 0x1C02087B4 (-FBitsTouch@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagSPB@@K@Z.c)
 *     ?PixieHack@@YAXPEAUtagWND@@PEAUtagRECT@@@Z @ 0x1C0221188 (-PixieHack@@YAXPEAUtagWND@@PEAUtagRECT@@@Z.c)
 *     xxxMNOpenHierarchy @ 0x1C02250D0 (xxxMNOpenHierarchy.c)
 *     NtUserSetWindowShowState @ 0x1C02357E0 (NtUserSetWindowShowState.c)
 *     ?SaveScreen@@YA_KPEAUtagWND@@K_KHHHH@Z @ 0x1C023B9B8 (-SaveScreen@@YA_KPEAUtagWND@@K_KHHHH@Z.c)
 *     ?TryRect@@YAHIHHHHPEAUtagRECT@@PEAUtagPOINT@@PEAUtagMONITOR@@@Z @ 0x1C024BE44 (-TryRect@@YAHIHHHHPEAUtagRECT@@PEAUtagPOINT@@PEAUtagMONITOR@@@Z.c)
 *     FindBestPos @ 0x1C024BF34 (FindBestPos.c)
 *     TouchTargetingClipContact @ 0x1C025B60C (TouchTargetingClipContact.c)
 *     TouchTargetingCreateContact @ 0x1C025B738 (TouchTargetingCreateContact.c)
 *     TouchTargetingRankForRect @ 0x1C025BCF8 (TouchTargetingRankForRect.c)
 *     TouchTargetingRankForRectDeep @ 0x1C025C310 (TouchTargetingRankForRectDeep.c)
 *     DxgkEngBltViaGDI @ 0x1C0273B20 (DxgkEngBltViaGDI.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IntersectRect(_DWORD *a1, int *a2, int *a3)
{
  int v4; // r10d
  int v6; // r9d
  int v7; // edx
  int v8; // ecx
  __int64 result; // rax

  v4 = *a2;
  if ( *a2 <= *a3 )
    v4 = *a3;
  *a1 = v4;
  v6 = a2[2];
  if ( v6 >= a3[2] )
    v6 = a3[2];
  a1[2] = v6;
  if ( v4 < v6 )
  {
    v7 = a2[1];
    if ( v7 <= a3[1] )
      v7 = a3[1];
    a1[1] = v7;
    v8 = a2[3];
    if ( v8 >= a3[3] )
      v8 = a3[3];
    a1[3] = v8;
    if ( v7 < v8 )
      return 1LL;
  }
  result = 0LL;
  *(_QWORD *)a1 = 0LL;
  *((_QWORD *)a1 + 1) = 0LL;
  return result;
}
