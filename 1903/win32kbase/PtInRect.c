/*
 * XREFs of PtInRect @ 0x1C0067544
 * Callers:
 *     ?TransformPointWithUniformSpaceMapping@@YAHPEAU_MDEV@@PEAH1H@Z @ 0x1C0064D30 (-TransformPointWithUniformSpaceMapping@@YAHPEAU_MDEV@@PEAH1H@Z.c)
 *     ?_ProcessInputSpace@CInputConfig@@AEAAXPEAUCInputSpace@@@Z @ 0x1C0066484 (-_ProcessInputSpace@CInputConfig@@AEAAXPEAUCInputSpace@@@Z.c)
 *     ?RegionFromPoint@InputConfig@@SA_NAEBVCLockedInputSpace@@UtagPOINT@@PEAVCLockedInputSpaceRegion@@@Z @ 0x1C0067270 (-RegionFromPoint@InputConfig@@SA_NAEBVCLockedInputSpace@@UtagPOINT@@PEAVCLockedInputSpaceRegion@.c)
 *     ?BoundPointToRegions@CCursorClip@@AEAAXUtagPOINT@@_N1PEAU2@@Z @ 0x1C0067464 (-BoundPointToRegions@CCursorClip@@AEAAXUtagPOINT@@_N1PEAU2@@Z.c)
 *     ?ApplyShellClip@CCursorClip@@AEAAXUtagPOINT@@PEAU2@@Z @ 0x1C006756C (-ApplyShellClip@CCursorClip@@AEAAXUtagPOINT@@PEAU2@@Z.c)
 *     ?IsInDeadzone@RIMDeadzone@@QEAAHPEAUtagHPD_CONTACT@@@Z @ 0x1C015AAFC (-IsInDeadzone@RIMDeadzone@@QEAAHPEAUtagHPD_CONTACT@@@Z.c)
 *     ?UpdateStateIndicator@CTouchProcessor@@QEAAXPEAUCInputPointerNode@@I_KUtagPOINT@@@Z @ 0x1C0176894 (-UpdateStateIndicator@CTouchProcessor@@QEAAXPEAUCInputPointerNode@@I_KUtagPOINT@@@Z.c)
 *     ?LockCursor@CCursorClip@@QEAAXUtagRECT@@@Z @ 0x1C01779E4 (-LockCursor@CCursorClip@@QEAAXUtagRECT@@@Z.c)
 *     ?ConvertDipsToScreenSpaceUnits@CPalmRejectZoneInfo@@AEAAJUtagPOINT@@J@Z @ 0x1C018264C (-ConvertDipsToScreenSpaceUnits@CPalmRejectZoneInfo@@AEAAJUtagPOINT@@J@Z.c)
 *     ?HitTestDelayZonePalmRejectionRegion@CPalmRejectZoneInfo@@QEAA_NUtagPOINT@@PEAUCDelayZonePanelTelemetryData@@@Z @ 0x1C0182928 (-HitTestDelayZonePalmRejectionRegion@CPalmRejectZoneInfo@@QEAA_NUtagPOINT@@PEAUCDelayZonePanelTe.c)
 *     ?HitTestRejectionRegion@DelayZonePalmRejection@@AEAA_NPEAXUtagPOINT@@1PEA_NPEAUCDelayZonePanelTelemetryData@@@Z @ 0x1C0182A30 (-HitTestRejectionRegion@DelayZonePalmRejection@@AEAA_NPEAXUtagPOINT@@1PEA_NPEAUCDelayZonePanelTe.c)
 *     ?HitTestInputPanelRegion@DelayZoneTelemetry@@AEAA_NUtagPOINT@@@Z @ 0x1C018F858 (-HitTestInputPanelRegion@DelayZoneTelemetry@@AEAA_NUtagPOINT@@@Z.c)
 *     ?CrossedTPDragThreshold@CPTPEngine@@AEAAHPEAUCContactState@@UtagPOINT@@H@Z @ 0x1C01944C8 (-CrossedTPDragThreshold@CPTPEngine@@AEAAHPEAUCContactState@@UtagPOINT@@H@Z.c)
 *     ?IsRCZClick@CPTPEngine@@AEAAHPEAUPTPInput@@PEAUCContactState@@PEAPEAUtagPOINT@@@Z @ 0x1C0196B80 (-IsRCZClick@CPTPEngine@@AEAAHPEAUPTPInput@@PEAUCContactState@@PEAPEAUtagPOINT@@@Z.c)
 *     ?RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1C0197AA8 (-RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 *     ?UpdateContactRestingState@CPTPEngine@@AEAAXPEAUPTPInput@@UtagPOINT@@_KPEAUCContactState@@@Z @ 0x1C01998B8 (-UpdateContactRestingState@CPTPEngine@@AEAAXPEAUPTPInput@@UtagPOINT@@_KPEAUCContactState@@@Z.c)
 *     ?UpdateTPStateIndicator@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUCContactState@@PEAUPTPEnginePointerNode@@PEAH@Z @ 0x1C0199DA8 (-UpdateTPStateIndicator@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUCContactState@@PEAUPTPEnginePointerNo.c)
 *     ?RemoveOverlap@@YAPEAUtagRECT@@PEAU1@00@Z @ 0x1C01A1B94 (-RemoveOverlap@@YAPEAUtagRECT@@PEAU1@00@Z.c)
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
