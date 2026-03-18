/*
 * XREFs of isChildPartition @ 0x1C0031698
 * Callers:
 *     ?SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAU_MOUSE_INPUT_DATA@@@Z @ 0x1C00313C0 (-SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAU_MOUSE_INPUT_DATA@@@Z.c)
 *     IsMouseIVEnabled @ 0x1C0031AA4 (IsMouseIVEnabled.c)
 *     IsPTPIVEnabled @ 0x1C004A2BC (IsPTPIVEnabled.c)
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C004B908 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 *     RIMChildInputTypeIsVirtualized @ 0x1C0058A58 (RIMChildInputTypeIsVirtualized.c)
 *     RawInputManagerObjectCreate @ 0x1C0059108 (RawInputManagerObjectCreate.c)
 *     RawInputManagerDeviceObjectCreate @ 0x1C00593F4 (RawInputManagerDeviceObjectCreate.c)
 *     InitializeInputComponents @ 0x1C00A90D8 (InitializeInputComponents.c)
 *     UnInitializeInputComponents @ 0x1C00B1AC4 (UnInitializeInputComponents.c)
 *     NtUserGetInputContainerId @ 0x1C0115710 (NtUserGetInputContainerId.c)
 *     RIMIDECreateDeviceInstancePath @ 0x1C014630C (RIMIDECreateDeviceInstancePath.c)
 *     ?ProcessInput@CHidInput@@EEAAJPEAXKK0@Z @ 0x1C017D3F0 (-ProcessInput@CHidInput@@EEAAJPEAXKK0@Z.c)
 *     IsKeyboardIVEnabled @ 0x1C018BF6C (IsKeyboardIVEnabled.c)
 *     IsPenIVEnabled @ 0x1C018BFC8 (IsPenIVEnabled.c)
 *     IsTouchIVEnabled @ 0x1C018C03C (IsTouchIVEnabled.c)
 *     ?ivChildLoop@CBaseInput@@AEAAJKPEAURawInputManagerObject@@@Z @ 0x1C018D3B0 (-ivChildLoop@CBaseInput@@AEAAJKPEAURawInputManagerObject@@@Z.c)
 *     ?ProcessInput@CMouseProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_DATA@@K_N@Z @ 0x1C0190084 (-ProcessInput@CMouseProcessor@@QEAA-AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_D.c)
 * Callees:
 *     isInputVirtualizationEnabled @ 0x1C0031CC8 (isInputVirtualizationEnabled.c)
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
