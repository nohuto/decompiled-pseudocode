/*
 * XREFs of ?PostPendingMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@@Z @ 0x1C006F730
 * Callers:
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C006EB98 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 * Callees:
 *     ?HasPendingMouseMove@QHelper@@YA_NAEBVCInputDest@@@Z @ 0x1C006F7B4 (-HasPendingMouseMove@QHelper@@YA_NAEBVCInputDest@@@Z.c)
 *     ?PostMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@PEBU_InputDeviceHandle@@AEBUtagLOGICALPOINT@@W4PostMouseMoveOptions@@@Z @ 0x1C00705AC (-PostMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@PEBU_InputDeviceHandle@@AEBUtagL.c)
 *     ?GetPendingMouseMovePoint@QHelper@@YA?AUtagLOGICALPOINT@@AEBVCInputDest@@@Z @ 0x1C00706FC (-GetPendingMouseMovePoint@QHelper@@YA-AUtagLOGICALPOINT@@AEBVCInputDest@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredMsgKM @ 0x1C0186064 (MicrosoftTelemetryAssertTriggeredMsgKM.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CMouseProcessor::PostPendingMouseMoveToInputDest(CMouseProcessor *this, const struct CInputDest *a2)
{
  __int64 PendingMouseMovePoint; // rax
  __int64 v5; // xmm0_8
  const struct CInputDest *v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // [rsp+30h] [rbp-28h] BYREF
  int v11; // [rsp+38h] [rbp-20h]
  _BYTE v12[24]; // [rsp+40h] [rbp-18h] BYREF

  if ( QHelper::HasPendingMouseMove(a2, a2) )
  {
    if ( *((_DWORD *)this + 4) != 1 )
      MicrosoftTelemetryAssertTriggeredMsgKM("This should be desktop only");
    PendingMouseMovePoint = QHelper::GetPendingMouseMovePoint(v12, a2);
    v5 = *(_QWORD *)PendingMouseMovePoint;
    LODWORD(PendingMouseMovePoint) = *(_DWORD *)(PendingMouseMovePoint + 8);
    v10 = v5;
    v11 = PendingMouseMovePoint;
    CMouseProcessor::PostMouseMoveToInputDest(this, a2, 0LL, &v10, 1);
    if ( QHelper::HasPendingMouseMove(a2, v6) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7, v9);
  }
}
