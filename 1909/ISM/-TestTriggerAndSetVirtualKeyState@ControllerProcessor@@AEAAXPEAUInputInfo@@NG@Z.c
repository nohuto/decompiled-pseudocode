/*
 * XREFs of ?TestTriggerAndSetVirtualKeyState@ControllerProcessor@@AEAAXPEAUInputInfo@@NG@Z @ 0x180077E0C
 * Callers:
 *     ?SendGamepadAsVirtualKeys@ControllerProcessor@@AEAAJPEAUInputInfo@@@Z @ 0x180077034 (-SendGamepadAsVirtualKeys@ControllerProcessor@@AEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?SetVirtualKeyState@ControllerProcessor@@AEAAXPEAUInputInfo@@G_N1@Z @ 0x180077840 (-SetVirtualKeyState@ControllerProcessor@@AEAAXPEAUInputInfo@@G_N1@Z.c)
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
