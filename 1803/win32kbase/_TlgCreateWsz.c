/*
 * XREFs of _TlgCreateWsz @ 0x1C004E080
 * Callers:
 *     ?CitpInteractionSummaryStopTracking@@YAXPEAU_CIT_INTERACTION_SUMMARY@@I@Z @ 0x1C0040CC4 (-CitpInteractionSummaryStopTracking@@YAXPEAU_CIT_INTERACTION_SUMMARY@@I@Z.c)
 *     xxxUserChangeDisplaySettings @ 0x1C004C7F0 (xxxUserChangeDisplaySettings.c)
 *     EtwTraceInputProcessDelay @ 0x1C00706D0 (EtwTraceInputProcessDelay.c)
 *     EtwTraceMessageCheckDelay @ 0x1C0070E20 (EtwTraceMessageCheckDelay.c)
 *     NtUserWin32kSysCallFilterStub @ 0x1C00BB4A0 (NtUserWin32kSysCallFilterStub.c)
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
 *     ?TraceCreatePortStart@Log@CoreMessagingK@@SAXDPEBG@Z @ 0x1C0164FD8 (-TraceCreatePortStart@Log@CoreMessagingK@@SAXDPEBG@Z.c)
 *     ?TraceRegisterAlpcPort@Log@CoreMessagingK@@SAXPEBU_GUID@@PEBGJ@Z @ 0x1C0165F64 (-TraceRegisterAlpcPort@Log@CoreMessagingK@@SAXPEBU_GUID@@PEBGJ@Z.c)
 *     ?TraceRegisterPort@Log@CoreMessagingK@@SAXPEBGPEBU_GUID@@J@Z @ 0x1C0166008 (-TraceRegisterPort@Log@CoreMessagingK@@SAXPEBGPEBU_GUID@@J@Z.c)
 *     ?UnregisterObject@RegistrarClient@CoreMessagingK@@SAJPEBG@Z @ 0x1C01661F0 (-UnregisterObject@RegistrarClient@CoreMessagingK@@SAJPEBG@Z.c)
 *     ?TraceClientDisconnect@Log@CoreMessagingK@@SAXPEBUServerPortInfo@2@PEBUClientPortInfo@2@@Z @ 0x1C0166D70 (-TraceClientDisconnect@Log@CoreMessagingK@@SAXPEBUServerPortInfo@2@PEBUClientPortInfo@2@@Z.c)
 *     ?TraceConnectionRequest@Log@CoreMessagingK@@SAXPEBUServerPortInfo@2@EJII@Z @ 0x1C0166E28 (-TraceConnectionRequest@Log@CoreMessagingK@@SAXPEBUServerPortInfo@2@EJII@Z.c)
 *     ?TraceServerPortInfoDelete@Log@CoreMessagingK@@SAXPEBUServerPortInfo@2@@Z @ 0x1C0167574 (-TraceServerPortInfoDelete@Log@CoreMessagingK@@SAXPEBUServerPortInfo@2@@Z.c)
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
