/*
 * XREFs of _TlgCreateWsz @ 0x1C0086014
 * Callers:
 *     NtUserEnumDisplayDevices @ 0x1C00157E0 (NtUserEnumDisplayDevices.c)
 *     W32CalloutDispatch @ 0x1C0025DE0 (W32CalloutDispatch.c)
 *     NtUserGetDC @ 0x1C00281A0 (NtUserGetDC.c)
 *     NtUserReleaseDC @ 0x1C0028430 (NtUserReleaseDC.c)
 *     EnterSharedCrit @ 0x1C0028600 (EnterSharedCrit.c)
 *     EnterCrit @ 0x1C00287D0 (EnterCrit.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C0028A40 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     ??0CritAcquire@Perf@InputTraceLogging@@QEAA@_N@Z @ 0x1C0028B38 (--0CritAcquire@Perf@InputTraceLogging@@QEAA@_N@Z.c)
 *     LeaveCrit @ 0x1C0028BF0 (LeaveCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0028C60 (UserSessionSwitchLeaveCrit.c)
 *     UserSessionSwitchEnterCrit @ 0x1C002BCB0 (UserSessionSwitchEnterCrit.c)
 *     ?SpeedHitTest@Mouse@InputTraceLogging@@SAX_KAEBUtagPOINT@@1AEBVCInputDest@@_N@Z @ 0x1C002FE14 (-SpeedHitTest@Mouse@InputTraceLogging@@SAX_KAEBUtagPOINT@@1AEBVCInputDest@@_N@Z.c)
 *     ?HitTestResult@DWM@InputTraceLogging@@SAX_KAEBU_InputHitTestResult@@AEBVCInputDest@@@Z @ 0x1C002FF64 (-HitTestResult@DWM@InputTraceLogging@@SAX_KAEBU_InputHitTestResult@@AEBVCInputDest@@@Z.c)
 *     ?HitTestRequest@DWM@InputTraceLogging@@SAX_KAEBU_InputHitTestRequest@@@Z @ 0x1C002FFE4 (-HitTestRequest@DWM@InputTraceLogging@@SAX_KAEBU_InputHitTestRequest@@@Z.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z @ 0x1C0030404 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z.c)
 *     ?CitpInteractionSummaryStopTracking@@YAXPEAU_CIT_INTERACTION_SUMMARY@@I@Z @ 0x1C003ACCC (-CitpInteractionSummaryStopTracking@@YAXPEAU_CIT_INTERACTION_SUMMARY@@I@Z.c)
 *     RIMOpenDev @ 0x1C0049C08 (RIMOpenDev.c)
 *     xxxUserChangeDisplaySettings @ 0x1C004B2B0 (xxxUserChangeDisplaySettings.c)
 *     rimOnPnpArrived @ 0x1C004D7FC (rimOnPnpArrived.c)
 *     RIMDeviceClassNotify @ 0x1C004EC60 (RIMDeviceClassNotify.c)
 *     ?RimDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@K@Z @ 0x1C0051990 (-RimDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@K@Z.c)
 *     NtUserEnumDisplaySettings @ 0x1C0080600 (NtUserEnumDisplaySettings.c)
 *     CoreMsgCreatePort @ 0x1C0083ED4 (CoreMsgCreatePort.c)
 *     ?OnDelete@ServerPortInfo@CoreMessagingK@@SAXPEAUObjectImpl@2@@Z @ 0x1C0084220 (-OnDelete@ServerPortInfo@CoreMessagingK@@SAXPEAUObjectImpl@2@@Z.c)
 *     ?RegisterAlpcPort@RegistrarClient@CoreMessagingK@@SAJPEBU_GUID@@PEBU_UNICODE_STRING@@@Z @ 0x1C00843A8 (-RegisterAlpcPort@RegistrarClient@CoreMessagingK@@SAJPEBU_GUID@@PEBU_UNICODE_STRING@@@Z.c)
 *     ?RegisterPort@RegistrarClient@CoreMessagingK@@SAJPEBGPEBU_GUID@@@Z @ 0x1C0084554 (-RegisterPort@RegistrarClient@CoreMessagingK@@SAJPEBGPEBU_GUID@@@Z.c)
 *     ?UnregisterObject@RegistrarClient@CoreMessagingK@@SAJPEBG@Z @ 0x1C0084680 (-UnregisterObject@RegistrarClient@CoreMessagingK@@SAJPEBG@Z.c)
 *     ?HandleClientDisconnect@ServerPorts@CoreMessagingK@@CAXPEAUServerPortInfo@2@PEAUClientPortInfo@2@@Z @ 0x1C0085180 (-HandleClientDisconnect@ServerPorts@CoreMessagingK@@CAXPEAUServerPortInfo@2@PEAUClientPortInfo@2.c)
 *     ?HandleConnectionRequest@ServerPorts@CoreMessagingK@@CAXPEAUServerPortInfo@2@PEAU_PORT_MESSAGE@@@Z @ 0x1C00852CC (-HandleConnectionRequest@ServerPorts@CoreMessagingK@@CAXPEAUServerPortInfo@2@PEAU_PORT_MESSAGE@@.c)
 *     NtUserWin32kSysCallFilterStub @ 0x1C0085EF0 (NtUserWin32kSysCallFilterStub.c)
 *     ChangeAcquireResourceType @ 0x1C00898D0 (ChangeAcquireResourceType.c)
 *     RIMStartDeviceSpecificRead @ 0x1C008DF48 (RIMStartDeviceSpecificRead.c)
 *     rimInputApc @ 0x1C008E340 (rimInputApc.c)
 *     ?DisplayPath@InputConfig@InputTraceLogging@@SAXAEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@@Z @ 0x1C0094EB0 (-DisplayPath@InputConfig@InputTraceLogging@@SAXAEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@@Z.c)
 *     RIMLogDeviceHealthTelemetry @ 0x1C00A4610 (RIMLogDeviceHealthTelemetry.c)
 *     ?LogUmpdCallbackStatus@XDCOBJ@@AEAAXPEAVUMPDOBJ@@@Z @ 0x1C00A9B60 (-LogUmpdCallbackStatus@XDCOBJ@@AEAAXPEAVUMPDOBJ@@@Z.c)
 *     EtwTraceInputProcessDelay @ 0x1C00E6850 (EtwTraceInputProcessDelay.c)
 *     EtwTraceMessageCheckDelay @ 0x1C00E7090 (EtwTraceMessageCheckDelay.c)
 *     ?Cleanup@ThreadLockedPerfRegion@InputTraceLogging@@AEAAXXZ @ 0x1C00EC6E0 (-Cleanup@ThreadLockedPerfRegion@InputTraceLogging@@AEAAXXZ.c)
 *     ?RimDeviceMonitorMapping@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z @ 0x1C010A950 (-RimDeviceMonitorMapping@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z.c)
 *     RIMCreatePointerDeviceInfo @ 0x1C0115410 (RIMCreatePointerDeviceInfo.c)
 *     RIMGetMaxCountFeatureDetails @ 0x1C011728C (RIMGetMaxCountFeatureDetails.c)
 *     RIMVirtCreatePointerDeviceInfo @ 0x1C0119644 (RIMVirtCreatePointerDeviceInfo.c)
 *     RIMDeliverConfigRequest @ 0x1C011A884 (RIMDeliverConfigRequest.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x1C0126BEC (rimProcessDeviceBufferAndStartRead.c)
 *     ?HandleResultFromUserMode@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@PEAXAEBVCInputDest@@@Z @ 0x1C013EABC (-HandleResultFromUserMode@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREV.c)
 *     ?SecondaryHitTest@Pointer@InputTraceLogging@@SAXAEBTPOINTERINFOUNION@@AEBVCInputDest@@AEBUtagPOINT@@@Z @ 0x1C0142CD4 (-SecondaryHitTest@Pointer@InputTraceLogging@@SAXAEBTPOINTERINFOUNION@@AEBVCInputDest@@AEBUtagPOI.c)
 *     ?SpeedHitTest@Pointer@InputTraceLogging@@SAXAEBTPOINTERINFOUNION@@AEBVCInputDest@@_N@Z @ 0x1C0145A10 (-SpeedHitTest@Pointer@InputTraceLogging@@SAXAEBTPOINTERINFOUNION@@AEBVCInputDest@@_N@Z.c)
 *     ?WaitForMITPnpUserModeCallbacksToComplete@InputExtensibilityCallout@@QEAAXXZ @ 0x1C01490D0 (-WaitForMITPnpUserModeCallbacksToComplete@InputExtensibilityCallout@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __stdcall TlgCreateWsz(PEVENT_DATA_DESCRIPTOR pDesc, LPCWSTR pwsz)
{
  __int64 v2; // rax

  LODWORD(v2) = 0;
  if ( pwsz )
  {
    v2 = -1LL;
    do
      ++v2;
    while ( pwsz[v2] );
  }
  pDesc->Reserved = 0;
  if ( !pwsz )
    pwsz = &word_1C01944BC;
  pDesc->Ptr = (ULONGLONG)pwsz;
  pDesc->Size = 2 * v2 + 2;
}
