/*
 * XREFs of IntersectRect @ 0x1C003D900
 * Callers:
 *     SpbCheckDce @ 0x1C000EE10 (SpbCheckDce.c)
 *     UT_GetParentDCClipBox @ 0x1C001F760 (UT_GetParentDCClipBox.c)
 *     xxxInternalInvalidate @ 0x1C0039F20 (xxxInternalInvalidate.c)
 *     ?InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z @ 0x1C003A0C8 (-InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z.c)
 *     NtUserRedrawWindow @ 0x1C003AE70 (NtUserRedrawWindow.c)
 *     ?InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z @ 0x1C003B3B8 (-InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z.c)
 *     ?SmartRectInRegion@@YAIPEAUHRGN__@@PEAUtagRECT@@@Z @ 0x1C003DD64 (-SmartRectInRegion@@YAIPEAUHRGN__@@PEAUtagRECT@@@Z.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C0041894 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     GetInheritedMonitor @ 0x1C0042D58 (GetInheritedMonitor.c)
 *     OffsetChildren @ 0x1C006F050 (OffsetChildren.c)
 *     xxxScrollWindowEx @ 0x1C0079188 (xxxScrollWindowEx.c)
 *     _MonitorFromRect @ 0x1C007A8E0 (_MonitorFromRect.c)
 *     xxxSystemParametersInfoWorker @ 0x1C00A8724 (xxxSystemParametersInfoWorker.c)
 *     ParkIcon @ 0x1C00B8DA8 (ParkIcon.c)
 *     FindOldMonitor @ 0x1C00CDC10 (FindOldMonitor.c)
 *     SubtractRect @ 0x1C010956C (SubtractRect.c)
 *     ?IsCandidateTransformOwner@@YAHPEAUtagWND@@0@Z @ 0x1C010E2B4 (-IsCandidateTransformOwner@@YAHPEAUtagWND@@0@Z.c)
 *     xxxGetUpdateRect @ 0x1C0118828 (xxxGetUpdateRect.c)
 *     xxxRedrawHungWindow @ 0x1C01354AC (xxxRedrawHungWindow.c)
 *     xxxSnapWindow @ 0x1C0155AF4 (xxxSnapWindow.c)
 *     CreateSpb @ 0x1C0157150 (CreateSpb.c)
 *     ?FixBogusSWP@@YAXPEAUtagWND@@PEAH1HHI@Z @ 0x1C01BF910 (-FixBogusSWP@@YAXPEAUtagWND@@PEAH1HHI@Z.c)
 *     ?PreventInterMonitorBlts@@YAXPEAUtagCVR@@@Z @ 0x1C01BFB44 (-PreventInterMonitorBlts@@YAXPEAUtagCVR@@@Z.c)
 *     ?IsNewMonitorRectMostOccupied@@YAHPEBUtagRECT@@00@Z @ 0x1C01D0E74 (-IsNewMonitorRectMostOccupied@@YAHPEBUtagRECT@@00@Z.c)
 *     xxxPrintWindow @ 0x1C01D43EC (xxxPrintWindow.c)
 *     ?MoveRect@@YAHPEAU_MOVESIZEDATA@@KW4_MOVERECT_STYLE@@@Z @ 0x1C01E5884 (-MoveRect@@YAHPEAU_MOVESIZEDATA@@KW4_MOVERECT_STYLE@@@Z.c)
 *     ?TransformShellProvidedRectangles@@YAXPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@PEAUtagRECT@@3PEAUtagWND@@33@Z @ 0x1C01E617C (-TransformShellProvidedRectangles@@YAXPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIR.c)
 *     ?xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z @ 0x1C01E79E4 (-xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z.c)
 *     ?xxxGetSizeRectFromShell@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@PEAUtagRECT@@@Z @ 0x1C01E8650 (-xxxGetSizeRectFromShell@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@P.c)
 *     xxxDrawDragRectEx @ 0x1C01EAC18 (xxxDrawDragRectEx.c)
 *     xxxInitializeMoveSizeData @ 0x1C01EB504 (xxxInitializeMoveSizeData.c)
 *     ?TTBetterTarget@@YAHPEAUtagWND@@IPEAUtagPNTRWINDOWHITTTESTARGS@@PEAUtagRECT@@K@Z @ 0x1C01ED688 (-TTBetterTarget@@YAHPEAUtagWND@@IPEAUtagPNTRWINDOWHITTTESTARGS@@PEAUtagRECT@@K@Z.c)
 *     ?_TTUpdateBestTarget@@YAXPEAUtagPNTRWINDOWHITTTESTARGS@@PEAUtagWND@@IPEBUtagPOINT@@PEAUtagRECT@@HU4@K@Z @ 0x1C01EDFCC (-_TTUpdateBestTarget@@YAXPEAUtagPNTRWINDOWHITTTESTARGS@@PEAUtagWND@@IPEBUtagPOINT@@PEAUtagRECT@@.c)
 *     ?xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@1PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagRECT@@KW4tagTARGETING_PROPERTY@@@Z @ 0x1C01EE9F4 (-xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@1PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHU.c)
 *     ?FBitsTouch@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagSPB@@K@Z @ 0x1C01F27B4 (-FBitsTouch@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagSPB@@K@Z.c)
 *     ?PixieHack@@YAXPEAUtagWND@@PEAUtagRECT@@@Z @ 0x1C0209C38 (-PixieHack@@YAXPEAUtagWND@@PEAUtagRECT@@@Z.c)
 *     xxxMNOpenHierarchy @ 0x1C020DA04 (xxxMNOpenHierarchy.c)
 *     NtUserSetWindowShowState @ 0x1C021DBC0 (NtUserSetWindowShowState.c)
 *     ?SaveScreen@@YA_KPEAUtagWND@@K_KHHHH@Z @ 0x1C0223AF8 (-SaveScreen@@YA_KPEAUtagWND@@K_KHHHH@Z.c)
 *     ?TryRect@@YAHIHHHHPEAUtagRECT@@PEAUtagPOINT@@PEAUtagMONITOR@@@Z @ 0x1C0233908 (-TryRect@@YAHIHHHHPEAUtagRECT@@PEAUtagPOINT@@PEAUtagMONITOR@@@Z.c)
 *     FindBestPos @ 0x1C02339F8 (FindBestPos.c)
 *     TouchTargetingClipContact @ 0x1C0242F5C (TouchTargetingClipContact.c)
 *     TouchTargetingCreateContact @ 0x1C0243080 (TouchTargetingCreateContact.c)
 *     TouchTargetingRankForRect @ 0x1C0243640 (TouchTargetingRankForRect.c)
 *     TouchTargetingRankForRectDeep @ 0x1C0243C00 (TouchTargetingRankForRectDeep.c)
 *     DxgkEngBltViaGDI @ 0x1C025A990 (DxgkEngBltViaGDI.c)
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
