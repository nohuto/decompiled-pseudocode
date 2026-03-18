/*
 * XREFs of ?GetUserWindow@CInputDest@@QEBAPEAUtagWND@@XZ @ 0x1C0087958
 * Callers:
 *     ?UpdateForegroundForInput@CMouseProcessor@@AEAA_NPEAVCInputDest@@AEBVCButtonEvent@1@_J@Z @ 0x1C006F7E4 (-UpdateForegroundForInput@CMouseProcessor@@AEAA_NPEAVCInputDest@@AEBVCButtonEvent@1@_J@Z.c)
 *     ?PostMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@PEBU_InputDeviceHandle@@AEBUtagLOGICALPOINT@@W4PostMouseMoveOptions@@@Z @ 0x1C00705AC (-PostMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@PEBU_InputDeviceHandle@@AEBUtagL.c)
 * Callees:
 *     <none>
 */

struct tagWND *__fastcall CInputDest::GetUserWindow(CInputDest *this)
{
  if ( *((_DWORD *)this + 21) == 2 )
    return (struct tagWND *)*((_QWORD *)this + 9);
  else
    return 0LL;
}
