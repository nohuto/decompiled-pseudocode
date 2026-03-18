/*
 * XREFs of SetUnavailableInputSource @ 0x1C00696C0
 * Callers:
 *     xxxCreateThreadInfo @ 0x1C002C1CC (xxxCreateThreadInfo.c)
 *     ?PostMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@PEBU_InputDeviceHandle@@AEBUtagLOGICALPOINT@@W4PostMouseMoveOptions@@@Z @ 0x1C00705AC (-PostMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@PEBU_InputDeviceHandle@@AEBUtagL.c)
 * Callees:
 *     <none>
 */

void __fastcall SetUnavailableInputSource(_DWORD *a1)
{
  if ( a1 )
  {
    *a1 = 0;
    a1[1] = 0;
  }
}
