/*
 * XREFs of ?GetDpiAwarenessContext@CInputDest@@QEBAKXZ @ 0x1C0039370
 * Callers:
 *     ?ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z @ 0x1C00312BC (-ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z.c)
 *     ?SetMouseMovePoint@QHelper@@YAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@@Z @ 0x1C00392C0 (-SetMouseMovePoint@QHelper@@YAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@@Z.c)
 *     ?HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtagPOINT@@I@Z @ 0x1C00437E0 (-HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtag.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CInputDest::GetDpiAwarenessContext(CInputDest *this)
{
  __int64 result; // rax

  result = 18LL;
  if ( *((_DWORD *)this + 23) == 2 )
    return *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 10) + 40LL) + 288LL);
  return result;
}
