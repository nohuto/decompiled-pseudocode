/*
 * XREFs of ?PostPendingMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@@Z @ 0x1C004E37C
 * Callers:
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C004B908 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 * Callees:
 *     ?PostMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@PEBU_InputDeviceHandle@@AEBUtagLOGICALPOINT@@W4PostMouseMoveOptions@@@Z @ 0x1C004DB80 (-PostMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@PEBU_InputDeviceHandle@@AEBUtagL.c)
 *     ?HasPendingMouseMove@QHelper@@YA_NAEBVCInputDest@@@Z @ 0x1C004E404 (-HasPendingMouseMove@QHelper@@YA_NAEBVCInputDest@@@Z.c)
 *     ?GetPendingMouseMovePoint@QHelper@@YA?AUtagLOGICALPOINT@@AEBVCInputDest@@@Z @ 0x1C004F38C (-GetPendingMouseMovePoint@QHelper@@YA-AUtagLOGICALPOINT@@AEBVCInputDest@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CMouseProcessor::PostPendingMouseMoveToInputDest(CMouseProcessor *this, const struct CInputDest *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 PendingMouseMovePoint; // rax
  __int64 v8; // xmm0_8
  const struct CInputDest *v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // [rsp+30h] [rbp-28h] BYREF
  int v14; // [rsp+38h] [rbp-20h]
  _BYTE v15[24]; // [rsp+40h] [rbp-18h] BYREF

  if ( QHelper::HasPendingMouseMove(a2, a2) )
  {
    if ( *((_DWORD *)this + 2) != 1 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v4, v6);
    PendingMouseMovePoint = QHelper::GetPendingMouseMovePoint(v15, a2);
    v8 = *(_QWORD *)PendingMouseMovePoint;
    LODWORD(PendingMouseMovePoint) = *(_DWORD *)(PendingMouseMovePoint + 8);
    v13 = v8;
    v14 = PendingMouseMovePoint;
    CMouseProcessor::PostMouseMoveToInputDest((__int64 *)this, (__int64)a2, 0LL, (unsigned __int16 *)&v13, 1);
    if ( QHelper::HasPendingMouseMove(a2, v9) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10, v12);
  }
}
