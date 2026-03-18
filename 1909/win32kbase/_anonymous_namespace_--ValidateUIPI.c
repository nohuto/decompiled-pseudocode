/*
 * XREFs of _anonymous_namespace_::ValidateUIPI @ 0x1C00A06C0
 * Callers:
 *     ?ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z @ 0x1C003056C (-ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z.c)
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C004B908 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 *     ?UpdateForegroundForInput@CMouseProcessor@@AEAA_NPEAVCInputDest@@AEBVCButtonEvent@1@_J@Z @ 0x1C004E434 (-UpdateForegroundForInput@CMouseProcessor@@AEAA_NPEAVCInputDest@@AEBVCButtonEvent@1@_J@Z.c)
 *     ?HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtagPOINT@@I@Z @ 0x1C004EDF0 (-HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtag.c)
 *     CheckIntegrityAccessToCapture @ 0x1C0181CE0 (CheckIntegrityAccessToCapture.c)
 *     ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x1C0190550 (-ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z.c)
 * Callees:
 *     CheckAccessEx @ 0x1C002BDE4 (CheckAccessEx.c)
 *     WPP_RECORDER_SF_ @ 0x1C002D584 (WPP_RECORDER_SF_.c)
 *     _anonymous_namespace_::GetPtiFromInputDest @ 0x1C00380E8 (_anonymous_namespace_--GetPtiFromInputDest.c)
 *     EtwTraceUIPIInputError @ 0x1C005BB80 (EtwTraceUIPIInputError.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

char __fastcall anonymous_namespace_::ValidateUIPI(__int64 a1, _DWORD *a2, __int64 a3)
{
  __int64 PtiFromInputDest; // rax
  __int64 v5; // rbx
  bool v6; // di
  int v8; // edx
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF

  v9 = a1;
  if ( !*a2 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  PtiFromInputDest = anonymous_namespace_::GetPtiFromInputDest((__int64)a2, 2LL, a3);
  v5 = PtiFromInputDest;
  if ( !PtiFromInputDest )
    return 1;
  v6 = CheckAccessEx((int *)&v9, (int *)(*(_QWORD *)(PtiFromInputDest + 416) + 872LL), 0);
  if ( !v6 )
  {
    EtwTraceUIPIInputError(
      gptiCurrent,
      (struct tagTHREADINFO *)v5,
      *(_QWORD *)(v5 + 424),
      *(_QWORD *)(*(_QWORD *)(v5 + 424) + 436LL),
      1);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v8) = 3;
      WPP_RECORDER_SF_((_DWORD)gBaseLog, v8, 6, 10, (__int64)&WPP_b8c433785e023797b5d19953e3eae191_Traceguids);
    }
  }
  return v6;
}
