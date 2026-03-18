/*
 * XREFs of _anonymous_namespace_::InMouseRawInputMode @ 0x1C006F260
 * Callers:
 *     ?ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z @ 0x1C0030D18 (-ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z.c)
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C006EB98 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 *     ?PostMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@PEBU_InputDeviceHandle@@AEBUtagLOGICALPOINT@@W4PostMouseMoveOptions@@@Z @ 0x1C00705AC (-PostMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@PEBU_InputDeviceHandle@@AEBUtagL.c)
 *     ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x1C0158F10 (-ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z.c)
 * Callees:
 *     _anonymous_namespace_::GetPtiFromInputDest @ 0x1C002F0E8 (_anonymous_namespace_--GetPtiFromInputDest.c)
 *     IsSpatialDelegationEnabledForThread @ 0x1C006F320 (IsSpatialDelegationEnabledForThread.c)
 *     MicrosoftTelemetryAssertTriggeredMsgKM @ 0x1C0186064 (MicrosoftTelemetryAssertTriggeredMsgKM.c)
 */

char __fastcall anonymous_namespace_::InMouseRawInputMode(__int64 a1, int a2, int a3)
{
  __int64 PtiFromInputDest; // rax
  char v5; // bl
  __int64 v6; // rdi
  bool v8; // zf

  PtiFromInputDest = anonymous_namespace_::GetPtiFromInputDest(a1, a2);
  v5 = 0;
  v6 = PtiFromInputDest;
  if ( PtiFromInputDest && !(unsigned __int8)IsSpatialDelegationEnabledForThread(PtiFromInputDest) )
  {
    if ( !a3 )
    {
      if ( !(unsigned int)HasHidTable(v6) )
        return v5;
      v8 = (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 424) + 832LL) + 100LL) & 0x100) == 0;
      goto LABEL_10;
    }
    if ( a3 == 1 )
    {
      if ( !(unsigned int)HasHidTable(v6) )
        return v5;
      v8 = (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 424) + 832LL) + 100LL) & 2) == 0;
LABEL_10:
      if ( !v8 )
        return 1;
      return v5;
    }
    MicrosoftTelemetryAssertTriggeredMsgKM("Unknown MouseRawInputMode mode. Add handler here");
  }
  return 0;
}
