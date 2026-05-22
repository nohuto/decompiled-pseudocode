/*
 * XREFs of ?Inject@InjectionDevice@@QEAAJPEAUInputInfo@@@Z @ 0x1800764CC
 * Callers:
 *     ?BuildAndSendKeyboardInputInfo@ControllerProcessor@@AEAAJG_N@Z @ 0x1800755B8 (-BuildAndSendKeyboardInputInfo@ControllerProcessor@@AEAAJG_N@Z.c)
 *     ?InjectManipulationInput@ControllerProcessor@@UEAAJIPEAUtagPOINTER_TOUCH_INFO@@@Z @ 0x1800765A0 (-InjectManipulationInput@ControllerProcessor@@UEAAJIPEAUtagPOINTER_TOUCH_INFO@@@Z.c)
 *     ?OnInputReport@ControllerProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180076990 (-OnInputReport@ControllerProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?SendMouseInputInfo@ControllerProcessor@@AEAAJPEAURawMouseInputInfo@@@Z @ 0x180077658 (-SendMouseInputInfo@ControllerProcessor@@AEAAJPEAURawMouseInputInfo@@@Z.c)
 *     ?SetVirtualKeyState@ControllerProcessor@@AEAAXPEAUInputInfo@@G_N1@Z @ 0x180077A80 (-SetVirtualKeyState@ControllerProcessor@@AEAAXPEAUInputInfo@@G_N1@Z.c)
 *     ?ForwardInputReport@MouseProcessor@@UEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z @ 0x18012B480 (-ForwardInputReport@MouseProcessor@@UEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z.c)
 *     ?OnMouseAsTouchAutoRepeat@MouseProcessor@@AEAAXXZ @ 0x18012B81C (-OnMouseAsTouchAutoRepeat@MouseProcessor@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

Inject *__fastcall InjectionDevice::Inject(Inject *this, struct InputInfo *a2)
{
  if ( !*((_BYTE *)this + 1576) )
    return (Inject *)2147549183LL;
  *((_DWORD *)a2 + 1) = *((_DWORD *)this + 2);
  return (Inject *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 24LL))(*(_QWORD *)this);
}
