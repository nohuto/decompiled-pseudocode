/*
 * XREFs of _anonymous_namespace_::InMouseRawInputMode @ 0x1C0038E78
 * Callers:
 *     ?ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z @ 0x1C003056C (-ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z.c)
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C004B908 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 *     ?PostMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@PEBU_InputDeviceHandle@@AEBUtagLOGICALPOINT@@W4PostMouseMoveOptions@@@Z @ 0x1C004DB80 (-PostMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@PEBU_InputDeviceHandle@@AEBUtagL.c)
 *     ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x1C0190550 (-ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z.c)
 * Callees:
 *     _anonymous_namespace_::GetPtiFromInputDest @ 0x1C00380E8 (_anonymous_namespace_--GetPtiFromInputDest.c)
 *     IsSpatialDelegationEnabledForThread @ 0x1C0038F30 (IsSpatialDelegationEnabledForThread.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

char __fastcall anonymous_namespace_::InMouseRawInputMode(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // esi
  __int64 PtiFromInputDest; // rax
  char v5; // bl
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  bool v11; // zf

  v3 = a3;
  PtiFromInputDest = anonymous_namespace_::GetPtiFromInputDest(a1, a2, a3);
  v5 = 0;
  v6 = PtiFromInputDest;
  if ( PtiFromInputDest && !(unsigned __int8)IsSpatialDelegationEnabledForThread(PtiFromInputDest) )
  {
    if ( !v3 )
    {
      if ( !(unsigned int)HasHidTable(v6) )
        return v5;
      v11 = (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 416) + 824LL) + 100LL) & 0x100) == 0;
      goto LABEL_10;
    }
    if ( v3 == 1 )
    {
      if ( !(unsigned int)HasHidTable(v6) )
        return v5;
      v11 = (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 416) + 824LL) + 100LL) & 2) == 0;
LABEL_10:
      if ( !v11 )
        return 1;
      return v5;
    }
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7, v9);
  }
  return 0;
}
