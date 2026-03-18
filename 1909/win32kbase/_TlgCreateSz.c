/*
 * XREFs of _TlgCreateSz @ 0x1C010F8F0
 * Callers:
 *     ?ProcessMouseEvent@CMouseProcessor@@QEAAXXZ @ 0x1C00316B8 (-ProcessMouseEvent@CMouseProcessor@@QEAAXXZ.c)
 *     ?SpeedHitTest@Mouse@InputTraceLogging@@SAX_KAEBUtagPOINT@@1AEBVCInputDest@@K_N@Z @ 0x1C0033C34 (-SpeedHitTest@Mouse@InputTraceLogging@@SAX_KAEBUtagPOINT@@1AEBVCInputDest@@K_N@Z.c)
 *     ?HitTestRequest@DWM@InputTraceLogging@@SAX_KAEBU_InputHitTestRequest@@@Z @ 0x1C0033CC4 (-HitTestRequest@DWM@InputTraceLogging@@SAX_KAEBU_InputHitTestRequest@@@Z.c)
 *     ?HitTestResult@DWM@InputTraceLogging@@SAX_KAEBU_InputHitTestResult@@AEBVCInputDest@@@Z @ 0x1C0033D38 (-HitTestResult@DWM@InputTraceLogging@@SAX_KAEBU_InputHitTestResult@@AEBVCInputDest@@@Z.c)
 *     ?TraceCurrentConfig@InputConfig@@SAXXZ @ 0x1C005205C (-TraceCurrentConfig@InputConfig@@SAXXZ.c)
 *     ?BoundPoint@CCursorClip@@QEAA_NUtagPOINT@@W4BoundPointOptions@@W4InputTracing_MouseUpdatePositionReason@@PEAU2@@Z @ 0x1C0052AC0 (-BoundPoint@CCursorClip@@QEAA_NUtagPOINT@@W4BoundPointOptions@@W4InputTracing_MouseUpdatePositio.c)
 *     ?OnDispatcherObjectSignaled@CBaseInput@@AEAAJPEAX@Z @ 0x1C0054860 (-OnDispatcherObjectSignaled@CBaseInput@@AEAAJPEAX@Z.c)
 *     ?RimDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@K@Z @ 0x1C0058A7C (-RimDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@K@Z.c)
 *     RIMStartDeviceSpecificRead @ 0x1C0062114 (RIMStartDeviceSpecificRead.c)
 *     ?DropMove@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z @ 0x1C009DB3C (-DropMove@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z.c)
 *     ?InputApc@RIM@InputTraceLogging@@SAXPEBURIMDEV@@PEBU_IO_STATUS_BLOCK@@@Z @ 0x1C00A74E0 (-InputApc@RIM@InputTraceLogging@@SAXPEBURIMDEV@@PEBU_IO_STATUS_BLOCK@@@Z.c)
 *     ?DisplayPath@InputConfig@InputTraceLogging@@SAXAEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@@Z @ 0x1C00A8074 (-DisplayPath@InputConfig@InputTraceLogging@@SAXAEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@@Z.c)
 *     ?RawInputManagerObject@RIM@InputTraceLogging@@SAXPEBU0@@Z @ 0x1C00B0C50 (-RawInputManagerObject@RIM@InputTraceLogging@@SAXPEBU0@@Z.c)
 *     ?SessionInfo@Win32k@InputTraceLogging@@SAXXZ @ 0x1C010A60C (-SessionInfo@Win32k@InputTraceLogging@@SAXXZ.c)
 *     ?InjectInput@Mouse@InputTraceLogging@@SAXW4InjectionSource@12@_K@Z @ 0x1C0110990 (-InjectInput@Mouse@InputTraceLogging@@SAXW4InjectionSource@12@_K@Z.c)
 *     NtUserWin32kSysCallFilterStub @ 0x1C011C220 (NtUserWin32kSysCallFilterStub.c)
 *     ?RimDeviceMonitorMapping@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z @ 0x1C0132674 (-RimDeviceMonitorMapping@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z.c)
 *     ?RimDevicePointerData@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z @ 0x1C0132814 (-RimDevicePointerData@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z.c)
 *     ?DropInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4DropReason@12@@Z @ 0x1C0145674 (-DropInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4DropReason@12@@Z.c)
 *     ?InjectInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4InputTracing_RimInjectionSource@@@Z @ 0x1C0145948 (-InjectInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4InputTracing_RimInjectionSource@@@Z.c)
 *     ?CompleteFrame@RIM@InputTraceLogging@@SAXPEBURIMDEV@@PEBURIMCOMPLETEFRAME@@W4InputTracing_RimCompletionReason@@@Z @ 0x1C014BFA4 (-CompleteFrame@RIM@InputTraceLogging@@SAXPEBURIMDEV@@PEBURIMCOMPLETEFRAME@@W4InputTracing_RimCom.c)
 *     ?DropCompleteFrame@RIM@InputTraceLogging@@SAXPEBURIMDEV@@PEBURIMHOLDINGFRAME@@_NW4InputTracing_RimCompletionReason@@@Z @ 0x1C014C16C (-DropCompleteFrame@RIM@InputTraceLogging@@SAXPEBURIMDEV@@PEBURIMHOLDINGFRAME@@_NW4InputTracing_R.c)
 *     ?ProcessDeviceBuffer@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z @ 0x1C014FF88 (-ProcessDeviceBuffer@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z.c)
 *     ?ReadComplete@RIM@InputTraceLogging@@SAXPEBURawInputManagerObject@@PEBURIMDEV@@@Z @ 0x1C015018C (-ReadComplete@RIM@InputTraceLogging@@SAXPEBURawInputManagerObject@@PEBURIMDEV@@@Z.c)
 *     ?SkipReadComplete@RIM@InputTraceLogging@@SAXPEBURawInputManagerObject@@PEBURIMDEV@@@Z @ 0x1C0150468 (-SkipReadComplete@RIM@InputTraceLogging@@SAXPEBURawInputManagerObject@@PEBURIMDEV@@@Z.c)
 *     ?PopulateContact@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4tagHPD_TYPE@@GPEBUtagPOINTER_INFO@@W4ContactPopulationSource@12@@Z @ 0x1C0152594 (-PopulateContact@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4tagHPD_TYPE@@GPEBUtagPOINTER_INFO@@W4Co.c)
 *     ?_Report@PalmTelemetry@@AEAAXK@Z @ 0x1C015A204 (-_Report@PalmTelemetry@@AEAAXK@Z.c)
 *     ?_UploadTelemetryData@DeadzonePalmTelemetry@@AEAAXH@Z @ 0x1C015A5D0 (-_UploadTelemetryData@DeadzonePalmTelemetry@@AEAAXH@Z.c)
 *     ?CommitFramePointer@Pointer@InputTraceLogging@@SAXPEBURIMDEV@@PEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@@Z @ 0x1C0161030 (-CommitFramePointer@Pointer@InputTraceLogging@@SAXPEBURIMDEV@@PEBUCPointerInputFrame@@PEBUtagPOI.c)
 *     ?DropInput@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@W4DropReason@12@@Z @ 0x1C0164284 (-DropInput@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@W4DropR.c)
 *     ?GetPointerInfo@Pointer@InputTraceLogging@@SAXPEBUtagPOINTER_INFO@@@Z @ 0x1C0168FC0 (-GetPointerInfo@Pointer@InputTraceLogging@@SAXPEBUtagPOINTER_INFO@@@Z.c)
 *     ?GetPointerPenInfo@Pointer@InputTraceLogging@@SAXPEBUtagPOINTER_PEN_INFO@@@Z @ 0x1C01697F4 (-GetPointerPenInfo@Pointer@InputTraceLogging@@SAXPEBUtagPOINTER_PEN_INFO@@@Z.c)
 *     ?GetPointerTouchInfo@Pointer@InputTraceLogging@@SAXPEBUtagPOINTER_TOUCH_INFO@@@Z @ 0x1C016A1DC (-GetPointerTouchInfo@Pointer@InputTraceLogging@@SAXPEBUtagPOINTER_TOUCH_INFO@@@Z.c)
 *     ?HandleResultFromUserMode@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@PEAXAEBVCInputDest@@@Z @ 0x1C016B3E0 (-HandleResultFromUserMode@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREV.c)
 *     ?SecondaryHitTest@Pointer@InputTraceLogging@@SAXAEBTPOINTERINFOUNION@@AEBVCInputDest@@AEBUtagPOINT@@@Z @ 0x1C016FA68 (-SecondaryHitTest@Pointer@InputTraceLogging@@SAXAEBTPOINTERINFOUNION@@AEBVCInputDest@@AEBUtagPOI.c)
 *     ?SpeedHitTest@Pointer@InputTraceLogging@@SAXAEBTPOINTERINFOUNION@@AEBVCInputDest@@K_N@Z @ 0x1C01727AC (-SpeedHitTest@Pointer@InputTraceLogging@@SAXAEBTPOINTERINFOUNION@@AEBVCInputDest@@K_N@Z.c)
 *     ?DownlevelInput@PTP@InputTraceLogging@@SAXPEBUCPointerInputFrame@@AEBUtagPTP_DOWNLEVELED_INPUT@@_K@Z @ 0x1C0178310 (-DownlevelInput@PTP@InputTraceLogging@@SAXPEBUCPointerInputFrame@@AEBUtagPTP_DOWNLEVELED_INPUT@@.c)
 *     ?MouseOutput@PTP@InputTraceLogging@@SAXPEBUCPointerInputFrame@@_KPEBUPTPEngineOutput@@@Z @ 0x1C0178BDC (-MouseOutput@PTP@InputTraceLogging@@SAXPEBUCPointerInputFrame@@_KPEBUPTPEngineOutput@@@Z.c)
 *     ?DropInput@Keyboard@InputTraceLogging@@SAXW4DropReason@12@@Z @ 0x1C017ABD0 (-DropInput@Keyboard@InputTraceLogging@@SAXW4DropReason@12@@Z.c)
 *     ?AddInertiaInfo@Win32k@InputTraceLogging@@SAXAEBUINERTIA_INFO_INTERNAL@@@Z @ 0x1C017B7D4 (-AddInertiaInfo@Win32k@InputTraceLogging@@SAXAEBUINERTIA_INFO_INTERNAL@@@Z.c)
 *     ?RemoveInertiaInfo@Win32k@InputTraceLogging@@SAXAEBUINERTIA_INFO_INTERNAL@@@Z @ 0x1C017C00C (-RemoveInertiaInfo@Win32k@InputTraceLogging@@SAXAEBUINERTIA_INFO_INTERNAL@@@Z.c)
 *     SetContentOrientation @ 0x1C0182574 (SetContentOrientation.c)
 *     xxxKeyEventEx @ 0x1C0183FE0 (xxxKeyEventEx.c)
 *     ?UploadTelemetryData@DelayZoneTelemetry@@AEAAX_N@Z @ 0x1C018DA08 (-UploadTelemetryData@DelayZoneTelemetry@@AEAAX_N@Z.c)
 *     ?DropButton@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z @ 0x1C018E638 (-DropButton@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z.c)
 *     ?DropInput@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z @ 0x1C018E6F0 (-DropInput@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z.c)
 *     ?DropWheel@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z @ 0x1C018E8DC (-DropWheel@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z.c)
 *     ?HandleInterception@Mouse@InputTraceLogging@@SAX_KW4_MOUSE_INTERCEPTION_RESULT@@AEBU_MouseProcessorData@@@Z @ 0x1C018F708 (-HandleInterception@Mouse@InputTraceLogging@@SAX_KW4_MOUSE_INTERCEPTION_RESULT@@AEBU_MouseProces.c)
 *     ?SendToUserMode@Mouse@InputTraceLogging@@SAXPEBU_MIT_MOUSE_INPUT_MESSAGE@@W4INPUT_DESTINATION_ROUTING_MODE@@@Z @ 0x1C0190F10 (-SendToUserMode@Mouse@InputTraceLogging@@SAXPEBU_MIT_MOUSE_INPUT_MESSAGE@@W4INPUT_DESTINATION_RO.c)
 *     ?CitpLogFailureWorker@@YAXJPEBDI@Z @ 0x1C01C73F4 (-CitpLogFailureWorker@@YAXJPEBDI@Z.c)
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x1C01C8C10 (MicrosoftTelemetryAssertTriggeredWorker.c)
 * Callees:
 *     <none>
 */

void __stdcall TlgCreateSz(PEVENT_DATA_DESCRIPTOR pDesc, LPCSTR psz)
{
  __int64 v2; // rax

  LODWORD(v2) = 0;
  if ( psz )
  {
    v2 = -1LL;
    do
      ++v2;
    while ( psz[v2] );
  }
  if ( !psz )
    psz = (LPCSTR)&unk_1C01E9CF8;
  pDesc->Reserved = 0;
  pDesc->Ptr = (ULONGLONG)psz;
  pDesc->Size = v2 + 1;
}
