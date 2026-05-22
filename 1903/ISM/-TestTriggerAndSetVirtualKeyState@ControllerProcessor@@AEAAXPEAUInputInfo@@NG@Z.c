/*
 * XREFs of ?TestTriggerAndSetVirtualKeyState@ControllerProcessor@@AEAAXPEAUInputInfo@@NG@Z @ 0x18007804C
 * Callers:
 *     ?SendGamepadAsVirtualKeys@ControllerProcessor@@AEAAJPEAUInputInfo@@@Z @ 0x180077274 (-SendGamepadAsVirtualKeys@ControllerProcessor@@AEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?SetVirtualKeyState@ControllerProcessor@@AEAAXPEAUInputInfo@@G_N1@Z @ 0x180077A80 (-SetVirtualKeyState@ControllerProcessor@@AEAAXPEAUInputInfo@@G_N1@Z.c)
 */

void __fastcall ControllerProcessor::TestTriggerAndSetVirtualKeyState(
        ControllerProcessor *this,
        struct InputInfo *a2,
        double a3,
        __int16 a4)
{
  char v5; // r9

  if ( a3 < 0.1275 )
  {
    if ( a3 > 0.1075 )
      return;
    v5 = 0;
  }
  else
  {
    v5 = 1;
  }
  ControllerProcessor::SetVirtualKeyState(this, a2, a4, v5, 0);
}
