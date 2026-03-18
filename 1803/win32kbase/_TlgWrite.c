/*
 * XREFs of _TlgWrite @ 0x1C00407C4
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C0036210 (xxxDestroyThreadInfo.c)
 *     RIMWatchDog @ 0x1C003B3D0 (RIMWatchDog.c)
 *     ?CitpSetForegroundProcess@@YAHPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagMONITOR@@PEAUtagSHELL_INPUT_USAGE_DATA_INFO@@@Z @ 0x1C003FDE0 (-CitpSetForegroundProcess@@YAHPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagM.c)
 *     ?CitpInteractionSummaryStopTracking@@YAXPEAU_CIT_INTERACTION_SUMMARY@@I@Z @ 0x1C0040CC4 (-CitpInteractionSummaryStopTracking@@YAXPEAU_CIT_INTERACTION_SUMMARY@@I@Z.c)
 *     xxxUserChangeDisplaySettings @ 0x1C004C7F0 (xxxUserChangeDisplaySettings.c)
 *     CoreMsgSend @ 0x1C0056AA8 (CoreMsgSend.c)
 *     ?Send@ServerPorts@CoreMessagingK@@SAJPEAXDPEBXI@Z @ 0x1C0056B58 (-Send@ServerPorts@CoreMessagingK@@SAJPEAXDPEBXI@Z.c)
 *     xxxSystemParametersInfo @ 0x1C005C030 (xxxSystemParametersInfo.c)
 *     EtwTraceInputProcessDelay @ 0x1C00706D0 (EtwTraceInputProcessDelay.c)
 *     EtwTraceMessageCheckDelay @ 0x1C0070E20 (EtwTraceMessageCheckDelay.c)
 *     ?LogCurrentProcessCHSFontFallback@@YAXPEAU_W32PROCESS@@@Z @ 0x1C0077C68 (-LogCurrentProcessCHSFontFallback@@YAXPEAU_W32PROCESS@@@Z.c)
 *     ?ArmPowerWatchdog@@YAXPEAXW4_POWER_WATCHDOG_TYPE@@@Z @ 0x1C00A2118 (-ArmPowerWatchdog@@YAXPEAXW4_POWER_WATCHDOG_TYPE@@@Z.c)
 *     ?DisarmPowerWatchdog@@YAXPEAXW4_POWER_WATCHDOG_TYPE@@@Z @ 0x1C00A23D8 (-DisarmPowerWatchdog@@YAXPEAXW4_POWER_WATCHDOG_TYPE@@@Z.c)
 *     ?ShouldEscapeProximity@@YAEXZ @ 0x1C00A2D04 (-ShouldEscapeProximity@@YAEXZ.c)
 *     PowerIsDimTimeOutManual @ 0x1C00A4754 (PowerIsDimTimeOutManual.c)
 *     ?xxxDisplayDiagBlackScreenDetected@@YAXIEE@Z @ 0x1C00A61B0 (-xxxDisplayDiagBlackScreenDetected@@YAXIEE@Z.c)
 *     RIMEnumerateDevicesForTelemetry @ 0x1C00E18F4 (RIMEnumerateDevicesForTelemetry.c)
 *     RIMLogDeviceHealthTelemetry @ 0x1C00E319C (RIMLogDeviceHealthTelemetry.c)
 *     RIMCreatePointerDeviceInfo @ 0x1C00EA954 (RIMCreatePointerDeviceInfo.c)
 *     RIMGetMaxCountFeatureDetails @ 0x1C00EC5C4 (RIMGetMaxCountFeatureDetails.c)
 *     RIMDeliverConfigRequest @ 0x1C00EF068 (RIMDeliverConfigRequest.c)
 *     RIMOpenDev @ 0x1C00F7DB0 (RIMOpenDev.c)
 *     RIMDeviceClassNotify @ 0x1C00FA2A0 (RIMDeviceClassNotify.c)
 *     rimOnPnpArrived @ 0x1C00FCE28 (rimOnPnpArrived.c)
 *     RIMStartDeviceSpecificRead @ 0x1C00FDADC (RIMStartDeviceSpecificRead.c)
 *     rimInputApc @ 0x1C00FE6E0 (rimInputApc.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x1C00FEE14 (rimProcessDeviceBufferAndStartRead.c)
 *     rimProcessPointerDeviceContact @ 0x1C0102F30 (rimProcessPointerDeviceContact.c)
 *     RIMUpdateMonitorQuirk @ 0x1C0107200 (RIMUpdateMonitorQuirk.c)
 *     ?_Report@PalmTelemetry@@AEAAXK@Z @ 0x1C0107D9C (-_Report@PalmTelemetry@@AEAAXK@Z.c)
 *     ?_UploadTelemetryData@DeadzonePalmTelemetry@@AEAAXH@Z @ 0x1C010816C (-_UploadTelemetryData@DeadzonePalmTelemetry@@AEAAXH@Z.c)
 *     RIMApplyPTPConfigRemedy @ 0x1C01087F4 (RIMApplyPTPConfigRemedy.c)
 *     ?OnInputSuppressedValueChanged@CBaseInput@@SAX_N@Z @ 0x1C012346C (-OnInputSuppressedValueChanged@CBaseInput@@SAX_N@Z.c)
 *     ?SetLastAction@Telemetry@CPTPProcessor@@SAXW4tagPTP_ACTION@@@Z @ 0x1C0126428 (-SetLastAction@Telemetry@CPTPProcessor@@SAXW4tagPTP_ACTION@@@Z.c)
 *     ?LogDeviceArrivedEvent@CHidInput@@AEAAXGIIKKHPEAU_UNICODE_STRING@@0@Z @ 0x1C0126F6C (-LogDeviceArrivedEvent@CHidInput@@AEAAXGIIKKHPEAU_UNICODE_STRING@@0@Z.c)
 *     ?LogDeviceRemovedEvent@CHidInput@@AEAAXGIIKKHPEAU_UNICODE_STRING@@0@Z @ 0x1C01270BC (-LogDeviceRemovedEvent@CHidInput@@AEAAXGIIKKHPEAU_UNICODE_STRING@@0@Z.c)
 *     ?UploadTelemetryData@DelayZoneTelemetry@@AEAAX_N@Z @ 0x1C0132E3C (-UploadTelemetryData@DelayZoneTelemetry@@AEAAX_N@Z.c)
 *     ?OnEngineOutput@PTPEngineTraceProducer@@UEAAXPEBUPTPEngineOutput@@@Z @ 0x1C013C880 (-OnEngineOutput@PTPEngineTraceProducer@@UEAAXPEBUPTPEngineOutput@@@Z.c)
 *     ?OnEvent@PTPEngineTraceProducer@@UEAAJPEAUPTPEngineEvent@@@Z @ 0x1C013CA40 (-OnEvent@PTPEngineTraceProducer@@UEAAJPEAUPTPEngineEvent@@@Z.c)
 *     ?OnInput@PTPEngineTraceProducer@@QEAAJPEAUPTPInput@@PEAUtagTPAAPSTATE@@@Z @ 0x1C013CB38 (-OnInput@PTPEngineTraceProducer@@QEAAJPEAUPTPInput@@PEAUtagTPAAPSTATE@@@Z.c)
 *     ?OnTelemetryOutput@PTPEngineTraceProducer@@UEAAXPEBUPTPTelemetryOutput@@@Z @ 0x1C013CD40 (-OnTelemetryOutput@PTPEngineTraceProducer@@UEAAXPEBUPTPTelemetryOutput@@@Z.c)
 *     ?TraceEnvironment@PTPEngineTraceProducer@@AEAAXPEBUPTPEnvironment@@@Z @ 0x1C013CEE4 (-TraceEnvironment@PTPEngineTraceProducer@@AEAAXPEBUPTPEnvironment@@@Z.c)
 *     ?CitpDPDataLog@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C01610DC (-CitpDPDataLog@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpLogFailureWorker@@YAXJPEBDI@Z @ 0x1C0162004 (-CitpLogFailureWorker@@YAXJPEBDI@Z.c)
 *     ?CitpPostUpdateUseInfoLog@@YAXPEAU_CIT_IMPACT_CONTEXT@@I@Z @ 0x1C0162E30 (-CitpPostUpdateUseInfoLog@@YAXPEAU_CIT_IMPACT_CONTEXT@@I@Z.c)
 *     ?TraceCreatePortStart@Log@CoreMessagingK@@SAXDPEBG@Z @ 0x1C0164FD8 (-TraceCreatePortStart@Log@CoreMessagingK@@SAXDPEBG@Z.c)
 *     ?TraceInitializeStart@Log@CoreMessagingK@@SAXXZ @ 0x1C016506C (-TraceInitializeStart@Log@CoreMessagingK@@SAXXZ.c)
 *     ?TraceInitializeStop@Log@CoreMessagingK@@SAXJ@Z @ 0x1C01650C8 (-TraceInitializeStop@Log@CoreMessagingK@@SAXJ@Z.c)
 *     ?TraceOpenConnectionStart@Log@CoreMessagingK@@SAXDPEBUtagMsgRoutingInfo@@@Z @ 0x1C0165140 (-TraceOpenConnectionStart@Log@CoreMessagingK@@SAXDPEBUtagMsgRoutingInfo@@@Z.c)
 *     ?TraceUninitializeStart@Log@CoreMessagingK@@SAXXZ @ 0x1C01651FC (-TraceUninitializeStart@Log@CoreMessagingK@@SAXXZ.c)
 *     ?TraceUninitializeStop@Log@CoreMessagingK@@SAXXZ @ 0x1C0165258 (-TraceUninitializeStop@Log@CoreMessagingK@@SAXXZ.c)
 *     CoreMsgCreatePort @ 0x1C01652B4 (CoreMsgCreatePort.c)
 *     CoreMsgObjectCallout @ 0x1C01653FC (CoreMsgObjectCallout.c)
 *     CoreMsgOpenConnection @ 0x1C016555C (CoreMsgOpenConnection.c)
 *     ?Connect@RegistrarClient@CoreMessagingK@@CAJXZ @ 0x1C016579C (-Connect@RegistrarClient@CoreMessagingK@@CAJXZ.c)
 *     ?TracePrepareConnection@Log@CoreMessagingK@@SAXPEBUtagMsgRoutingInfo@@JW4MsgError@@PEBU_GUID@@@Z @ 0x1C0165E88 (-TracePrepareConnection@Log@CoreMessagingK@@SAXPEBUtagMsgRoutingInfo@@JW4MsgError@@PEBU_GUID@@@Z.c)
 *     ?TraceRegisterAlpcPort@Log@CoreMessagingK@@SAXPEBU_GUID@@PEBGJ@Z @ 0x1C0165F64 (-TraceRegisterAlpcPort@Log@CoreMessagingK@@SAXPEBU_GUID@@PEBGJ@Z.c)
 *     ?TraceRegisterPort@Log@CoreMessagingK@@SAXPEBGPEBU_GUID@@J@Z @ 0x1C0166008 (-TraceRegisterPort@Log@CoreMessagingK@@SAXPEBGPEBU_GUID@@J@Z.c)
 *     ?TraceUnregisterAlpcPort@Log@CoreMessagingK@@SAXPEBU_GUID@@J@Z @ 0x1C01660B8 (-TraceUnregisterAlpcPort@Log@CoreMessagingK@@SAXPEBU_GUID@@J@Z.c)
 *     ?UnregisterObject@RegistrarClient@CoreMessagingK@@SAJPEBG@Z @ 0x1C01661F0 (-UnregisterObject@RegistrarClient@CoreMessagingK@@SAJPEBG@Z.c)
 *     ?TraceClientDisconnect@Log@CoreMessagingK@@SAXPEBUServerPortInfo@2@PEBUClientPortInfo@2@@Z @ 0x1C0166D70 (-TraceClientDisconnect@Log@CoreMessagingK@@SAXPEBUServerPortInfo@2@PEBUClientPortInfo@2@@Z.c)
 *     ?TraceConnectionRequest@Log@CoreMessagingK@@SAXPEBUServerPortInfo@2@EJII@Z @ 0x1C0166E28 (-TraceConnectionRequest@Log@CoreMessagingK@@SAXPEBUServerPortInfo@2@EJII@Z.c)
 *     ?TraceServerPortInfoDelete@Log@CoreMessagingK@@SAXPEBUServerPortInfo@2@@Z @ 0x1C0167574 (-TraceServerPortInfoDelete@Log@CoreMessagingK@@SAXPEBUServerPortInfo@2@@Z.c)
 *     ?TraceConnectionTargetInfoDelete@Log@CoreMessagingK@@SAXPEBUConnectionTargetInfo@2@@Z @ 0x1C0167648 (-TraceConnectionTargetInfoDelete@Log@CoreMessagingK@@SAXPEBUConnectionTargetInfo@2@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x1C01681AC (MicrosoftTelemetryAssertTriggeredWorker.c)
 *     LookUpTableFlushComplete @ 0x1C01D7D00 (LookUpTableFlushComplete.c)
 * Callees:
 *     <none>
 */

TLG_STATUS __stdcall TlgWrite(
        TraceLoggingHProvider hProvider,
        const void *pEventMetadata,
        LPCGUID pActivityId,
        LPCGUID pRelatedActivityId,
        UINT32 cData,
        EVENT_DATA_DESCRIPTOR *pData)
{
  ULONG v7; // ecx
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+30h] [rbp-18h] BYREF

  *(_DWORD *)&EventDescriptor.Id = ((_DWORD)pEventMetadata - (unsigned int)&TraceLoggingMetadata) | (*(unsigned __int8 *)pEventMetadata << 24);
  *(_DWORD *)&EventDescriptor.Level = *(unsigned __int16 *)((char *)pEventMetadata + 1);
  EventDescriptor.Keyword = *(_QWORD *)((char *)pEventMetadata + 3);
  pData->Ptr = *((_QWORD *)hProvider + 1);
  v7 = **((unsigned __int16 **)hProvider + 1);
  pData[1].Ptr = (ULONGLONG)pEventMetadata + 11;
  pData->Size = v7;
  pData->Reserved = 2;
  pData[1].Size = *(unsigned __int16 *)((char *)pEventMetadata + 11);
  pData[1].Reserved = 1;
  return EtwWriteTransfer(*((_QWORD *)hProvider + 4), &EventDescriptor, pActivityId, 0LL, cData, pData);
}
