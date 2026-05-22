/*
 * XREFs of ?Inject@KeyboardInjectionDevice@@QEAAJPEAUInputInfo@@@Z @ 0x1800764F8
 * Callers:
 *     ?BuildAndSendKeyboardInputInfo@ControllerProcessor@@AEAAJG_N@Z @ 0x1800755B8 (-BuildAndSendKeyboardInputInfo@ControllerProcessor@@AEAAJG_N@Z.c)
 *     ?OnInputReport@ControllerProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180076990 (-OnInputReport@ControllerProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?SetVirtualKeyState@ControllerProcessor@@AEAAXPEAUInputInfo@@G_N1@Z @ 0x180077A80 (-SetVirtualKeyState@ControllerProcessor@@AEAAXPEAUInputInfo@@G_N1@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 */

__int64 __fastcall KeyboardInjectionDevice::Inject(KeyboardInjectionDevice *this, struct InputInfo *a2)
{
  __int128 v3; // [rsp+30h] [rbp-48h]
  _WORD v4[3]; // [rsp+40h] [rbp-38h] BYREF
  __int128 v5; // [rsp+46h] [rbp-32h]
  __int16 v6; // [rsp+56h] [rbp-22h]
  __int128 v7; // [rsp+58h] [rbp-20h]

  if ( !*((_BYTE *)this + 1576) )
    return 2147549183LL;
  v4[1] = *((_WORD *)a2 + 18);
  v4[2] = *((_WORD *)a2 + 35);
  *(_QWORD *)&v3 = *((_QWORD *)a2 + 42);
  DWORD2(v3) = *((_DWORD *)this + 2);
  v5 = 0LL;
  v4[0] = 0;
  v6 = 0;
  v7 = v3;
  return (unsigned int)NtMITSynthesizeKeyboardInput(8LL, v4, 0LL) != 1 ? 0x8007000D : 0;
}
