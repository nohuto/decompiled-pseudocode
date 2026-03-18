/*
 * XREFs of _anonymous_namespace_::ValidateUIPI @ 0x1C0089FDC
 * Callers:
 *     ?ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z @ 0x1C0030D18 (-ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z.c)
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C006EB98 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 *     ?UpdateForegroundForInput@CMouseProcessor@@AEAA_NPEAVCInputDest@@AEBVCButtonEvent@1@_J@Z @ 0x1C006F7E4 (-UpdateForegroundForInput@CMouseProcessor@@AEAA_NPEAVCInputDest@@AEBVCButtonEvent@1@_J@Z.c)
 *     ?HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtagPOINT@@I@Z @ 0x1C007003C (-HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtag.c)
 *     CheckIntegrityAccessToCapture @ 0x1C0150CB0 (CheckIntegrityAccessToCapture.c)
 *     ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x1C0158F10 (-ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z.c)
 * Callees:
 *     _anonymous_namespace_::GetPtiFromInputDest @ 0x1C002F0E8 (_anonymous_namespace_--GetPtiFromInputDest.c)
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     EtwTraceUIPIInputError @ 0x1C003B5A0 (EtwTraceUIPIInputError.c)
 *     CheckAccessForIntegrityLevelEx @ 0x1C0069D7C (CheckAccessForIntegrityLevelEx.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

char __fastcall anonymous_namespace_::ValidateUIPI(__int64 a1, _DWORD *a2, __int64 *a3)
{
  char v3; // di
  __int64 PtiFromInputDest; // rax
  __int64 v8; // rsi

  v3 = 0;
  if ( !*a2 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  PtiFromInputDest = anonymous_namespace_::GetPtiFromInputDest((__int64)a2, 2);
  v8 = PtiFromInputDest;
  if ( !PtiFromInputDest )
    return 1;
  if ( CheckAccessForIntegrityLevelEx(a1, *(_QWORD *)(*(_QWORD *)(PtiFromInputDest + 424) + 880LL), 0) )
    return 1;
  EtwTraceUIPIInputError(
    gptiCurrent,
    (struct tagTHREADINFO *)v8,
    *(_QWORD *)(v8 + 432),
    *(_QWORD *)(*(_QWORD *)(v8 + 432) + 428LL),
    1);
  WPP_RECORDER_SF_(*a3, 3u, 0xAu, 0xAu, (__int64)&WPP_c4e458f8521336340531e679a09eecc3_Traceguids);
  return v3;
}
