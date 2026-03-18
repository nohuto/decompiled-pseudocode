/*
 * XREFs of PtInRect @ 0x1C006EFD8
 * Callers:
 *     ?ClassicChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@@Z @ 0x1C00084FC (-ClassicChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@@Z.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0034C00 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     ?DCEIsWindowHit@@YAHPEAUtagWND@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z @ 0x1C006ECA0 (-DCEIsWindowHit@@YAHPEAUtagWND@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z.c)
 *     EditionUpdateCursorOnMouseMove @ 0x1C006EDC0 (EditionUpdateCursorOnMouseMove.c)
 *     ?DCEChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@PEAU2@PEBU_SUBPIXELS@@@Z @ 0x1C006EEC0 (-DCEChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@PEAU2@PEBU_SUBPIXELS@@@Z.c)
 *     _MonitorFromPoint @ 0x1C007AE20 (_MonitorFromPoint.c)
 *     GrePtInSprite @ 0x1C00A28B0 (GrePtInSprite.c)
 *     DCELayerHitTest @ 0x1C00A2B0C (DCELayerHitTest.c)
 *     ?UpdateGlobalCursorSize@CCursorSizes@@QEAAXPEBUtagPOINT@@_N@Z @ 0x1C00A2CB8 (-UpdateGlobalCursorSize@CCursorSizes@@QEAAXPEBUtagPOINT@@_N@Z.c)
 *     xxxSystemTimerProc @ 0x1C00DE230 (xxxSystemTimerProc.c)
 *     xxxWindowHitTest2 @ 0x1C00DEEE8 (xxxWindowHitTest2.c)
 *     AddMagnificationOutputTransform @ 0x1C010CFA0 (AddMagnificationOutputTransform.c)
 *     ?ClassicIsWindowHit@@YAHPEAUtagWND@@UtagPOINT@@@Z @ 0x1C0116768 (-ClassicIsWindowHit@@YAHPEAUtagWND@@UtagPOINT@@@Z.c)
 *     PhysicalToLogicalDPIPointWithHitTest @ 0x1C011E6C8 (PhysicalToLogicalDPIPointWithHitTest.c)
 *     FindNCHit @ 0x1C0123470 (FindNCHit.c)
 *     _ChildWindowFromPointEx @ 0x1C014FF1C (_ChildWindowFromPointEx.c)
 *     xxxIsDragging @ 0x1C0157238 (xxxIsDragging.c)
 *     TransformForInputMagnification @ 0x1C01BEFF0 (TransformForInputMagnification.c)
 *     ?ValidateInjectedTouchFrame@@YAHIPEAUtagPOINTER_TOUCH_INFO@@PEAUtagINJECTED_CONTACT@@PEAUtagRECT@@I@Z @ 0x1C01CAFD8 (-ValidateInjectedTouchFrame@@YAHIPEAUtagPOINTER_TOUCH_INFO@@PEAUtagINJECTED_CONTACT@@PEAUtagRECT.c)
 *     zzzActiveCursorTracking @ 0x1C01CF81C (zzzActiveCursorTracking.c)
 *     DCELogicalSpeedTopLevelHitTest @ 0x1C01D1B50 (DCELogicalSpeedTopLevelHitTest.c)
 *     GetDPITransformationMonitor @ 0x1C01D2240 (GetDPITransformationMonitor.c)
 *     ?_HitTestEdgyRegion@Edgy@@YA?AUtagHIT_TEST_RESULT@1@AEBUtagEDGY_DATA@@PEAXUtagPOINT@@W4tagPOINTER_DEVICE_TYPE@@H@Z @ 0x1C01E159C (-_HitTestEdgyRegion@Edgy@@YA-AUtagHIT_TEST_RESULT@1@AEBUtagEDGY_DATA@@PEAXUtagPOINT@@W4tagPOINTE.c)
 *     ?ComputeMoveOutcome@@YA?AW4_MOUSE_MOVE_OUTCOME@@UtagPOINT@@QEBU_MOVESIZEDATA@@PEAPEAUtagMONITOR@@PEAW4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C01E44F0 (-ComputeMoveOutcome@@YA-AW4_MOUSE_MOVE_OUTCOME@@UtagPOINT@@QEBU_MOVESIZEDATA@@PEAPEAUtagMONITOR@.c)
 *     ?xxxGetSizeRectFromShell@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@PEAUtagRECT@@@Z @ 0x1C01E8650 (-xxxGetSizeRectFromShell@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@P.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C01E89F8 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C01EA5F8 (-xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     xxxInitializeMoveSizeData @ 0x1C01EB504 (xxxInitializeMoveSizeData.c)
 *     EditionMagnificationMousePosition @ 0x1C01ECAB0 (EditionMagnificationMousePosition.c)
 *     ?BasicTargetingHitTest@@YAHPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@PEAGPEAU3@HPEAUtagRECT@@W4tagTARGETING_PROPERTY@@HKH@Z @ 0x1C01ECD8C (-BasicTargetingHitTest@@YAHPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@PEAGPEAU3@HPEAUt.c)
 *     ?xxxClassicChildTreeSpeedHitTestWithDComp@@YAPEAUtagWND@@PEAU1@KW4DIT_HITTESTATTRIBUTES@@_KUtagPOINT@@3PEAHPEAIPEAUtagINPUTDEST@@@Z @ 0x1C01EE124 (-xxxClassicChildTreeSpeedHitTestWithDComp@@YAPEAUtagWND@@PEAU1@KW4DIT_HITTESTATTRIBUTES@@_KUtagP.c)
 *     ?xxxSendNCHitTest@@YAXPEAUtagWND@@UtagPOINT@@1PEAU2@PEAHPEAUtagPNTRWINDOWHITTTESTARGS@@@Z @ 0x1C01EE7B4 (-xxxSendNCHitTest@@YAXPEAUtagWND@@UtagPOINT@@1PEAU2@PEAHPEAUtagPNTRWINDOWHITTTESTARGS@@@Z.c)
 *     ?xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@1PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagRECT@@KW4tagTARGETING_PROPERTY@@@Z @ 0x1C01EE9F4 (-xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@1PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHU.c)
 *     ?xxxWindowHitTestFromTargetingProperty@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHW4tagTARGETING_PROPERTY@@UtagRECT@@@Z @ 0x1C01EF1DC (-xxxWindowHitTestFromTargetingProperty@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHI.c)
 *     TouchTargetChildTree @ 0x1C01EFC18 (TouchTargetChildTree.c)
 *     xxxHandleMenuMessages @ 0x1C0208A7C (xxxHandleMenuMessages.c)
 *     MNItemHitTest @ 0x1C020B230 (MNItemHitTest.c)
 *     xxxMNFindWindowFromPoint @ 0x1C020C99C (xxxMNFindWindowFromPoint.c)
 *     xxxMenuWindowProc @ 0x1C020F6B0 (xxxMenuWindowProc.c)
 *     ?PtInsideWindowFrameBounds@@YA_NAEBUtagPOINT@@PEBUtagWND@@@Z @ 0x1C02245B8 (-PtInsideWindowFrameBounds@@YA_NAEBUtagPOINT@@PEBUtagWND@@@Z.c)
 *     xxxEndScroll @ 0x1C02298D0 (xxxEndScroll.c)
 *     xxxTrackBox @ 0x1C022A9E0 (xxxTrackBox.c)
 *     xxxTrackThumb @ 0x1C022AB50 (xxxTrackThumb.c)
 *     xxxTrackCaptionButton @ 0x1C022B4B4 (xxxTrackCaptionButton.c)
 *     _RealChildWindowFromPoint @ 0x1C022C400 (_RealChildWindowFromPoint.c)
 *     ?xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z @ 0x1C022EFE0 (-xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z.c)
 *     xxxHelpLoop @ 0x1C022F7F8 (xxxHelpLoop.c)
 *     FindBestPos @ 0x1C02339F8 (FindBestPos.c)
 *     TouchTargetingCreateContact @ 0x1C0243080 (TouchTargetingCreateContact.c)
 *     TouchTargetingRankForRectDeep @ 0x1C0243C00 (TouchTargetingRankForRectDeep.c)
 *     ?EnumPwndDlgChildProc@@YAHPEAUtagWND@@_J@Z @ 0x1C0244000 (-EnumPwndDlgChildProc@@YAHPEAUtagWND@@_J@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall PtInRect(_DWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rdx
  _BOOL8 result; // rax

  result = 0;
  if ( (int)a2 >= *a1 && (int)a2 < a1[2] )
  {
    v2 = HIDWORD(a2);
    if ( (int)v2 >= a1[1] && (int)v2 < a1[3] )
      return 1;
  }
  return result;
}
