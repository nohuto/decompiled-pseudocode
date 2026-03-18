/*
 * XREFs of _anonymous_namespace_::InMouseRawInputMode @ 0x1C00781F0
 * Callers:
 *     ?PostMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@PEBU_InputDeviceHandle@@AEBUtagLOGICALPOINT@@W4PostMouseMoveOptions@@@Z @ 0x1C0037B44 (-PostMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@PEBU_InputDeviceHandle@@AEBUtagL.c)
 *     ?ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z @ 0x1C0037E1C (-ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z.c)
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C0038520 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 *     ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x1C01354D0 (-ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z.c)
 * Callees:
 *     _anonymous_namespace_::GetPtiFromInputDest @ 0x1C0036194 (_anonymous_namespace_--GetPtiFromInputDest.c)
 *     IsSpatialDelegationEnabledForThread @ 0x1C0064A50 (IsSpatialDelegationEnabledForThread.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

char __fastcall anonymous_namespace_::InMouseRawInputMode(__int64 a1, __int64 a2, int a3)
{
  InputDelegation *PtiFromInputDest; // rsi
  const struct tagTHREADINFO *v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rcx
  char v8; // bl
  bool v10; // zf

  PtiFromInputDest = (InputDelegation *)anonymous_namespace_::GetPtiFromInputDest(a1, a2);
  v8 = 0;
  if ( IsSpatialDelegationEnabledForThread(PtiFromInputDest, v5) )
    return 0;
  if ( a3 )
  {
    if ( a3 != 1 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6);
      return 0;
    }
    if ( (unsigned int)HasHidTable(PtiFromInputDest) )
    {
      v10 = (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)PtiFromInputDest + 52) + 824LL) + 100LL) & 2) == 0;
      goto LABEL_10;
    }
  }
  else if ( (unsigned int)HasHidTable(PtiFromInputDest) )
  {
    v10 = (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)PtiFromInputDest + 52) + 824LL) + 100LL) & 0x100) == 0;
LABEL_10:
    if ( !v10 )
      return 1;
  }
  return v8;
}
