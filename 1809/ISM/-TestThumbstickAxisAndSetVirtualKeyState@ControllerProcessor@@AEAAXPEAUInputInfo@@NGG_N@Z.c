/*
 * XREFs of ?TestThumbstickAxisAndSetVirtualKeyState@ControllerProcessor@@AEAAXPEAUInputInfo@@NGG_N@Z @ 0x180036E30
 * Callers:
 *     ?TurnNavigationOff@ControllerProcessor@@AEAAJXZ @ 0x180034B5C (-TurnNavigationOff@ControllerProcessor@@AEAAJXZ.c)
 *     ?SendGamepadAsVirtualKeys@ControllerProcessor@@AEAAJPEAUInputInfo@@@Z @ 0x180036630 (-SendGamepadAsVirtualKeys@ControllerProcessor@@AEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?SetVirtualKeyState@ControllerProcessor@@AEAAXPEAUInputInfo@@G_N1@Z @ 0x180036C44 (-SetVirtualKeyState@ControllerProcessor@@AEAAXPEAUInputInfo@@G_N1@Z.c)
 */

void __fastcall ControllerProcessor::TestThumbstickAxisAndSetVirtualKeyState(
        ControllerProcessor *this,
        struct InputInfo *a2,
        double a3,
        __int16 a4,
        __int16 a5,
        bool a6)
{
  __int16 v6; // bx
  char v9; // r9

  v6 = a4;
  if ( a3 >= 0.71 )
  {
    ControllerProcessor::SetVirtualKeyState(this, a2, a5, 0, a6);
LABEL_10:
    v9 = 1;
    goto LABEL_11;
  }
  if ( a3 > 0.6899999999999999 )
    goto LABEL_6;
  if ( a3 >= -0.6899999999999999 )
  {
    ControllerProcessor::SetVirtualKeyState(this, a2, a4, 0, a6);
LABEL_6:
    v6 = a5;
    goto LABEL_8;
  }
  if ( a3 <= -0.71 )
  {
    ControllerProcessor::SetVirtualKeyState(this, a2, a4, 0, a6);
    v6 = a5;
    goto LABEL_10;
  }
LABEL_8:
  v9 = 0;
LABEL_11:
  ControllerProcessor::SetVirtualKeyState(this, a2, v6, v9, a6);
}
