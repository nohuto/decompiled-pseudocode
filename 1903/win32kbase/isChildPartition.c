/*
 * XREFs of isChildPartition @ 0x1C00323E8
 * Callers:
 *     ?SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAU_MOUSE_INPUT_DATA@@@Z @ 0x1C0032110 (-SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAU_MOUSE_INPUT_DATA@@@Z.c)
 *     IsMouseIVEnabled @ 0x1C00327F4 (IsMouseIVEnabled.c)
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C0041208 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 *     IsPTPIVEnabled @ 0x1C00421F8 (IsPTPIVEnabled.c)
 *     RawInputManagerDeviceObjectCreate @ 0x1C0051DE4 (RawInputManagerDeviceObjectCreate.c)
 *     InitializeInputComponents @ 0x1C0060348 (InitializeInputComponents.c)
 *     RIMChildInputTypeIsVirtualized @ 0x1C006C9B8 (RIMChildInputTypeIsVirtualized.c)
 *     RawInputManagerObjectCreate @ 0x1C00A0374 (RawInputManagerObjectCreate.c)
 *     UnInitializeInputComponents @ 0x1C00B45A4 (UnInitializeInputComponents.c)
 *     NtUserGetInputContainerId @ 0x1C0118080 (NtUserGetInputContainerId.c)
 *     RIMIDECreateDeviceInstancePath @ 0x1C014897C (RIMIDECreateDeviceInstancePath.c)
 *     ?ProcessInput@CHidInput@@EEAAJPEAXKK0@Z @ 0x1C017F5E0 (-ProcessInput@CHidInput@@EEAAJPEAXKK0@Z.c)
 *     IsKeyboardIVEnabled @ 0x1C018E15C (IsKeyboardIVEnabled.c)
 *     IsPenIVEnabled @ 0x1C018E1B8 (IsPenIVEnabled.c)
 *     IsTouchIVEnabled @ 0x1C018E22C (IsTouchIVEnabled.c)
 *     ?ivChildLoop@CBaseInput@@AEAAJKPEAURawInputManagerObject@@@Z @ 0x1C018F5A0 (-ivChildLoop@CBaseInput@@AEAAJKPEAURawInputManagerObject@@@Z.c)
 *     ?ProcessInput@CMouseProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_DATA@@K_N@Z @ 0x1C0192274 (-ProcessInput@CMouseProcessor@@QEAA-AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_D.c)
 * Callees:
 *     isInputVirtualizationEnabled @ 0x1C0032A18 (isInputVirtualizationEnabled.c)
 */

bool isChildPartition()
{
  char v0; // al
  char v1; // cl

  v0 = isInputVirtualizationEnabled();
  v1 = 0;
  if ( v0 )
    return gbRootPartition == 0;
  return v1;
}
