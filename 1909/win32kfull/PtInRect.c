/*
 * XREFs of PtInRect @ 0x1C002D424
 * Callers:
 *     _MonitorFromPoint @ 0x1C00149A0 (_MonitorFromPoint.c)
 *     xxxSystemTimerProc @ 0x1C0015130 (xxxSystemTimerProc.c)
 *     ?DCEIsWindowHit@@YAHPEAUtagWND@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z @ 0x1C002D124 (-DCEIsWindowHit@@YAHPEAUtagWND@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z.c)
 *     EditionUpdateCursorOnMouseMove @ 0x1C002D210 (EditionUpdateCursorOnMouseMove.c)
 *     ?DCEChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@PEAU2@PEBU_SUBPIXELS@@@Z @ 0x1C002D310 (-DCEChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@PEAU2@PEBU_SUBPIXELS@@@Z.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00725D0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     ?UpdateGlobalCursorSize@CCursorSizes@@QEAAXPEBUtagPOINT@@_N@Z @ 0x1C008A19C (-UpdateGlobalCursorSize@CCursorSizes@@QEAAXPEBUtagPOINT@@_N@Z.c)
 *     DCELayerHitTest @ 0x1C008AD78 (DCELayerHitTest.c)
 *     GrePtInSprite @ 0x1C008AE24 (GrePtInSprite.c)
 *     PhysicalToLogicalDPIPointWithHitTest @ 0x1C00CBA28 (PhysicalToLogicalDPIPointWithHitTest.c)
 *     AddMagnificationOutputTransform @ 0x1C00F0D20 (AddMagnificationOutputTransform.c)
 *     xxxWindowHitTest2 @ 0x1C00F9960 (xxxWindowHitTest2.c)
 *     FindNCHit @ 0x1C0108614 (FindNCHit.c)
 *     ?ClassicIsWindowHit@@YAHPEAUtagWND@@UtagPOINT@@@Z @ 0x1C010C2DC (-ClassicIsWindowHit@@YAHPEAUtagWND@@UtagPOINT@@@Z.c)
 *     _ChildWindowFromPointEx @ 0x1C015BF0C (_ChildWindowFromPointEx.c)
 *     TransformForInputMagnification @ 0x1C01D2B50 (TransformForInputMagnification.c)
 *     ?ValidateInjectedTouchFrame@@YAHIPEAUtagPOINTER_TOUCH_INFO@@PEAUtagINJECTED_CONTACT@@PEAUtagRECT@@I@Z @ 0x1C01DE898 (-ValidateInjectedTouchFrame@@YAHIPEAUtagPOINTER_TOUCH_INFO@@PEAUtagINJECTED_CONTACT@@PEAUtagRECT.c)
 *     zzzActiveCursorTracking @ 0x1C01E4320 (zzzActiveCursorTracking.c)
 *     DCELogicalSpeedTopLevelHitTest @ 0x1C01E65F0 (DCELogicalSpeedTopLevelHitTest.c)
 *     GetDPITransformationMonitor @ 0x1C01E6CD0 (GetDPITransformationMonitor.c)
 *     ?_HitTestEdgyRegion@Edgy@@YA?AUtagHIT_TEST_RESULT@1@AEBUtagEDGY_DATA@@PEAXUtagPOINT@@W4tagPOINTER_DEVICE_TYPE@@H@Z @ 0x1C01F75D4 (-_HitTestEdgyRegion@Edgy@@YA-AUtagHIT_TEST_RESULT@1@AEBUtagEDGY_DATA@@PEAXUtagPOINT@@W4tagPOINTE.c)
 *     ?ComputeMoveOutcome@@YA?AW4_MOUSE_MOVE_OUTCOME@@UtagPOINT@@QEBU_MOVESIZEDATA@@PEAPEAUtagMONITOR@@PEAW4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C01F9ADC (-ComputeMoveOutcome@@YA-AW4_MOUSE_MOVE_OUTCOME@@UtagPOINT@@QEBU_MOVESIZEDATA@@PEAPEAUtagMONITOR@.c)
 *     ?xxxGetSizeRectFromShell@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@PEAUtagRECT@@@Z @ 0x1C01FDD0C (-xxxGetSizeRectFromShell@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@P.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C01FE0FC (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C01FFE5C (-xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     xxxInitializeMoveSizeData @ 0x1C0200FD8 (xxxInitializeMoveSizeData.c)
 *     EditionMagnificationMousePosition @ 0x1C02030B0 (EditionMagnificationMousePosition.c)
 *     ?BasicTargetingHitTest@@YAHPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@PEAGPEAU3@HPEAUtagRECT@@W4tagTARGETING_PROPERTY@@HKH@Z @ 0x1C020338C (-BasicTargetingHitTest@@YAHPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@PEAGPEAU3@HPEAUt.c)
 *     ?ClassicChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@@Z @ 0x1C02036F0 (-ClassicChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@@Z.c)
 *     ?xxxSendNCHitTest@@YAXPEAUtagWND@@UtagPOINT@@1PEAU2@PEAHPEAUtagPNTRWINDOWHITTTESTARGS@@@Z @ 0x1C020489C (-xxxSendNCHitTest@@YAXPEAUtagWND@@UtagPOINT@@1PEAU2@PEAHPEAUtagPNTRWINDOWHITTTESTARGS@@@Z.c)
 *     ?xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@1PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagRECT@@KW4tagTARGETING_PROPERTY@@@Z @ 0x1C0204AE0 (-xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@1PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHU.c)
 *     ?xxxWindowHitTestFromTargetingProperty@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHW4tagTARGETING_PROPERTY@@UtagRECT@@@Z @ 0x1C02052F0 (-xxxWindowHitTestFromTargetingProperty@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHI.c)
 *     TouchTargetChildTree @ 0x1C0205D88 (TouchTargetChildTree.c)
 *     xxxHandleMenuMessages @ 0x1C021FF24 (xxxHandleMenuMessages.c)
 *     MNItemHitTest @ 0x1C0222818 (MNItemHitTest.c)
 *     xxxMNFindWindowFromPoint @ 0x1C0223FC0 (xxxMNFindWindowFromPoint.c)
 *     xxxMenuWindowProc @ 0x1C0226F00 (xxxMenuWindowProc.c)
 *     ?PtInsideWindowFrameBounds@@YA_NAEBUtagPOINT@@PEBUtagWND@@@Z @ 0x1C023C41C (-PtInsideWindowFrameBounds@@YA_NAEBUtagPOINT@@PEBUtagWND@@@Z.c)
 *     xxxEndScroll @ 0x1C0241D7C (xxxEndScroll.c)
 *     xxxTrackBox @ 0x1C0242EE0 (xxxTrackBox.c)
 *     xxxTrackThumb @ 0x1C0243050 (xxxTrackThumb.c)
 *     xxxTrackCaptionButton @ 0x1C0243DB0 (xxxTrackCaptionButton.c)
 *     _RealChildWindowFromPoint @ 0x1C0244854 (_RealChildWindowFromPoint.c)
 *     ?xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z @ 0x1C0247108 (-xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z.c)
 *     xxxIsDragging @ 0x1C02479D8 (xxxIsDragging.c)
 *     xxxHelpLoop @ 0x1C0247C58 (xxxHelpLoop.c)
 *     FindBestPos @ 0x1C024BF34 (FindBestPos.c)
 *     TouchTargetingCreateContact @ 0x1C025B738 (TouchTargetingCreateContact.c)
 *     TouchTargetingRankForRectDeep @ 0x1C025C310 (TouchTargetingRankForRectDeep.c)
 *     ?EnumPwndDlgChildProc@@YAHPEAUtagWND@@_J@Z @ 0x1C025C720 (-EnumPwndDlgChildProc@@YAHPEAUtagWND@@_J@Z.c)
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
