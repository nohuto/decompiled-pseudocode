/*
 * XREFs of ?TestButtonAndSetVirtualKeyState@ControllerProcessor@@AEAAXPEAUInputInfo@@W4GamepadButtons@Input@Gaming@Windows@@G@Z @ 0x180077D1C
 * Callers:
 *     ?SendGamepadAsVirtualKeys@ControllerProcessor@@AEAAJPEAUInputInfo@@@Z @ 0x180077034 (-SendGamepadAsVirtualKeys@ControllerProcessor@@AEAAJPEAUInputInfo@@@Z.c)
 *     ?SendGamepadAsVirtualKeysForNavigation@ControllerProcessor@@AEAAJPEAUInputInfo@@@Z @ 0x180077290 (-SendGamepadAsVirtualKeysForNavigation@ControllerProcessor@@AEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?SetVirtualKeyState@ControllerProcessor@@AEAAXPEAUInputInfo@@G_N1@Z @ 0x180077840 (-SetVirtualKeyState@ControllerProcessor@@AEAAXPEAUInputInfo@@G_N1@Z.c)
 */

void __fastcall ControllerProcessor::TestButtonAndSetVirtualKeyState(
        ControllerProcessor *a1,
        __int64 a2,
        int a3,
        __int16 a4)
{
  ControllerProcessor::SetVirtualKeyState(a1, (struct InputInfo *)a2, a4, (a3 & *(_DWORD *)(a2 + 72)) != 0, 0);
}
