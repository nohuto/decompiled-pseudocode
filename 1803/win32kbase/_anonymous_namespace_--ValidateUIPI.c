/*
 * XREFs of _anonymous_namespace_::ValidateUIPI @ 0x1C006AB90
 * Callers:
 *     ?ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z @ 0x1C0037E1C (-ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z.c)
 *     ?HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtagPOINT@@I@Z @ 0x1C00383C8 (-HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtag.c)
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C0038520 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 *     CheckIntegrityAccessToCapture @ 0x1C012DC60 (CheckIntegrityAccessToCapture.c)
 *     ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x1C01354D0 (-ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z.c)
 *     ?UpdateForegroundForInput@CMouseProcessor@@AEAA_NPEAVCInputDest@@AEBVCButtonEvent@1@_J@Z @ 0x1C0135F94 (-UpdateForegroundForInput@CMouseProcessor@@AEAA_NPEAVCInputDest@@AEBVCButtonEvent@1@_J@Z.c)
 * Callees:
 *     CheckAccessForIntegrityLevelEx @ 0x1C001E8B0 (CheckAccessForIntegrityLevelEx.c)
 *     _anonymous_namespace_::GetPtiFromInputDest @ 0x1C0036194 (_anonymous_namespace_--GetPtiFromInputDest.c)
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     EtwTraceUIPIInputError @ 0x1C0059990 (EtwTraceUIPIInputError.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

char __fastcall anonymous_namespace_::ValidateUIPI(__int64 a1, _DWORD *a2, __int64 *a3)
{
  char v3; // di
  __int64 PtiFromInputDest; // rax
  __int64 v8; // rsi

  v3 = 0;
  if ( !*a2 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
  PtiFromInputDest = anonymous_namespace_::GetPtiFromInputDest((__int64)a2, 2LL);
  v8 = PtiFromInputDest;
  if ( !PtiFromInputDest )
    return 1;
  if ( CheckAccessForIntegrityLevelEx(a1, *(_QWORD *)(*(_QWORD *)(PtiFromInputDest + 416) + 872LL), 0) )
    return 1;
  EtwTraceUIPIInputError(
    gptiCurrent,
    (struct tagTHREADINFO *)v8,
    *(_QWORD *)(v8 + 424),
    *(_QWORD *)(*(_QWORD *)(v8 + 424) + 428LL),
    1);
  WPP_RECORDER_SF_(*a3, 3u, 0xAu, 0xAu, (__int64)&WPP_dfaecf715a78372e81b0b16700b1f5cf_Traceguids);
  return v3;
}
