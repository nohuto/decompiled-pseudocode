/*
 * XREFs of ?AddMouseKeysToWParam@CMouseProcessor@@AEBA_K_K@Z @ 0x1C004252C
 * Callers:
 *     ?ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z @ 0x1C00312BC (-ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z.c)
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C0041208 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 *     ?PostMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@PEBU_InputDeviceHandle@@AEBUtagLOGICALPOINT@@W4PostMouseMoveOptions@@@Z @ 0x1C0042244 (-PostMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@PEBU_InputDeviceHandle@@AEBUtagL.c)
 *     ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x1C0192750 (-ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CMouseProcessor::AddMouseKeysToWParam(CMouseProcessor *this, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 result; // rax

  if ( (_WORD)a2 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  v4 = a2 | 1;
  if ( (gafAsyncKeyState & 4) == 0 )
    v4 = a2;
  v5 = v4 | 2;
  if ( (gafAsyncKeyState & 0x10) == 0 )
    v5 = v4;
  v6 = v5 | 0x10;
  if ( (BYTE1(gafAsyncKeyState) & 1) == 0 )
    v6 = v5;
  v7 = v6 | 0x20;
  if ( (BYTE1(gafAsyncKeyState) & 4) == 0 )
    v7 = v6;
  result = v7 | 0x40;
  if ( (BYTE1(gafAsyncKeyState) & 0x10) == 0 )
    return v7;
  return result;
}
