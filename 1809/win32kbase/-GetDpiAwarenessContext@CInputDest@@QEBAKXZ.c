/*
 * XREFs of ?GetDpiAwarenessContext@CInputDest@@QEBAKXZ @ 0x1C0031C68
 * Callers:
 *     ?SetMouseMovePoint@QHelper@@YAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@@Z @ 0x1C002F248 (-SetMouseMovePoint@QHelper@@YAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@@Z.c)
 *     ?ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z @ 0x1C0030D18 (-ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z.c)
 *     ?HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtagPOINT@@I@Z @ 0x1C007003C (-HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtag.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CInputDest::GetDpiAwarenessContext(CInputDest *this)
{
  __int64 result; // rax

  result = 18LL;
  if ( *((_DWORD *)this + 21) == 2 )
    return *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 9) + 40LL) + 288LL);
  return result;
}
