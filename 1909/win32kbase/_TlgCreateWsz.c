/*
 * XREFs of _TlgCreateWsz @ 0x1C0096B24
 * Callers:
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z @ 0x1C0031DC0 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z.c)
 *     ?SpeedHitTest@Mouse@InputTraceLogging@@SAX_KAEBUtagPOINT@@1AEBVCInputDest@@K_N@Z @ 0x1C0033C34 (-SpeedHitTest@Mouse@InputTraceLogging@@SAX_KAEBUtagPOINT@@1AEBVCInputDest@@K_N@Z.c)
 *     ?HitTestRequest@DWM@InputTraceLogging@@SAX_KAEBU_InputHitTestRequest@@@Z @ 0x1C0033CC4 (-HitTestRequest@DWM@InputTraceLogging@@SAX_KAEBU_InputHitTestRequest@@@Z.c)
 *     ?HitTestResult@DWM@InputTraceLogging@@SAX_KAEBU_InputHitTestResult@@AEBVCInputDest@@@Z @ 0x1C0033D38 (-HitTestResult@DWM@InputTraceLogging@@SAX_KAEBU_InputHitTestResult@@AEBVCInputDest@@@Z.c)
 *     EtwTraceInputProcessDelay @ 0x1C0034AE0 (EtwTraceInputProcessDelay.c)
 *     EtwTraceMessageCheckDelay @ 0x1C0035310 (EtwTraceMessageCheckDelay.c)
 *     xxxUserChangeDisplaySettings @ 0x1C0046620 (xxxUserChangeDisplaySettings.c)
 *     RIMOpenDev @ 0x1C00531F0 (RIMOpenDev.c)
 *     rimOnPnpArrived @ 0x1C0055150 (rimOnPnpArrived.c)
 *     RIMDeviceClassNotify @ 0x1C0056C30 (RIMDeviceClassNotify.c)
 *     ?RimDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@K@Z @ 0x1C0058A7C (-RimDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@K@Z.c)
 *     RIMStartDeviceSpecificRead @ 0x1C0062114 (RIMStartDeviceSpecificRead.c)
 *     ldevLoadImage @ 0x1C006B620 (ldevLoadImage.c)
 *     ?CitpInteractionSummaryStopTracking@@YAXPEAU_CIT_INTERACTION_SUMMARY@@I@Z @ 0x1C0082F74 (-CitpInteractionSummaryStopTracking@@YAXPEAU_CIT_INTERACTION_SUMMARY@@I@Z.c)
 *     CoreMsgCreatePort @ 0x1C009B2A0 (CoreMsgCreatePort.c)
 *     ?RegisterPort@RegistrarClient@CoreMessagingK@@SAJPEBGPEBU_GUID@@@Z @ 0x1C009B4EC (-RegisterPort@RegistrarClient@CoreMessagingK@@SAJPEBGPEBU_GUID@@@Z.c)
 *     ?HandleConnectionRequest@ServerPorts@CoreMessagingK@@CAXPEAUServerPortInfo@2@PEAU_PORT_MESSAGE@@@Z @ 0x1C009B618 (-HandleConnectionRequest@ServerPorts@CoreMessagingK@@CAXPEAUServerPortInfo@2@PEAU_PORT_MESSAGE@@.c)
 *     ?RegisterAlpcPort@RegistrarClient@CoreMessagingK@@SAJPEBU_GUID@@PEBU_UNICODE_STRING@@@Z @ 0x1C009BD7C (-RegisterAlpcPort@RegistrarClient@CoreMessagingK@@SAJPEBU_GUID@@PEBU_UNICODE_STRING@@@Z.c)
 *     ?HandleClientDisconnect@ServerPorts@CoreMessagingK@@CAXPEAUServerPortInfo@2@PEAUClientPortInfo@2@@Z @ 0x1C00A0ADC (-HandleClientDisconnect@ServerPorts@CoreMessagingK@@CAXPEAUServerPortInfo@2@PEAUClientPortInfo@2.c)
 *     ?DisplayPath@InputConfig@InputTraceLogging@@SAXAEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@@Z @ 0x1C00A8074 (-DisplayPath@InputConfig@InputTraceLogging@@SAXAEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@@Z.c)
 *     RIMLogDeviceHealthTelemetry @ 0x1C00B0CA0 (RIMLogDeviceHealthTelemetry.c)
 *     ?OnDelete@ServerPortInfo@CoreMessagingK@@SAXPEAUObjectImpl@2@@Z @ 0x1C00B6BA0 (-OnDelete@ServerPortInfo@CoreMessagingK@@SAXPEAUObjectImpl@2@@Z.c)
 *     ?UnregisterObject@RegistrarClient@CoreMessagingK@@SAJPEBG@Z @ 0x1C00B6D7C (-UnregisterObject@RegistrarClient@CoreMessagingK@@SAJPEBG@Z.c)
 *     ?Cleanup@ThreadLockedPerfRegion@InputTraceLogging@@AEAAXXZ @ 0x1C011063C (-Cleanup@ThreadLockedPerfRegion@InputTraceLogging@@AEAAXXZ.c)
 *     NtUserWin32kSysCallFilterStub @ 0x1C011C220 (NtUserWin32kSysCallFilterStub.c)
 *     ?RimDeviceMonitorMapping@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z @ 0x1C0132674 (-RimDeviceMonitorMapping@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z.c)
 *     RIMCreatePointerDeviceInfo @ 0x1C013B548 (RIMCreatePointerDeviceInfo.c)
 *     RIMGetMaxCountFeatureDetails @ 0x1C013D458 (RIMGetMaxCountFeatureDetails.c)
 *     RIMVirtCreatePointerDeviceInfo @ 0x1C013F7E0 (RIMVirtCreatePointerDeviceInfo.c)
 *     RIMDeliverConfigRequest @ 0x1C0140ABC (RIMDeliverConfigRequest.c)
 *     rimInputApc @ 0x1C0150BC0 (rimInputApc.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x1C01513BC (rimProcessDeviceBufferAndStartRead.c)
 *     ?HandleResultFromUserMode@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@PEAXAEBVCInputDest@@@Z @ 0x1C016B3E0 (-HandleResultFromUserMode@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREV.c)
 *     ?SecondaryHitTest@Pointer@InputTraceLogging@@SAXAEBTPOINTERINFOUNION@@AEBVCInputDest@@AEBUtagPOINT@@@Z @ 0x1C016FA68 (-SecondaryHitTest@Pointer@InputTraceLogging@@SAXAEBTPOINTERINFOUNION@@AEBVCInputDest@@AEBUtagPOI.c)
 *     ?SpeedHitTest@Pointer@InputTraceLogging@@SAXAEBTPOINTERINFOUNION@@AEBVCInputDest@@K_N@Z @ 0x1C01727AC (-SpeedHitTest@Pointer@InputTraceLogging@@SAXAEBTPOINTERINFOUNION@@AEBVCInputDest@@K_N@Z.c)
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
    pwsz = &::pwsz;
  pDesc->Ptr = (ULONGLONG)pwsz;
  pDesc->Size = 2 * v2 + 2;
}
