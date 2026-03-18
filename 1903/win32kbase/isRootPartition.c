/*
 * XREFs of isRootPartition @ 0x1C00329F8
 * Callers:
 *     ?ProcessMouseEvent@CMouseProcessor@@QEAAXXZ @ 0x1C0032408 (-ProcessMouseEvent@CMouseProcessor@@QEAAXXZ.c)
 *     UseVelocityToEnableIV @ 0x1C0032928 (UseVelocityToEnableIV.c)
 *     ?BufferInputDestinedForContainer@CMouseProcessor@@AEAA_NAEBVCMouseEvent@1@AEBVCInputDest@@@Z @ 0x1C0034D34 (-BufferInputDestinedForContainer@CMouseProcessor@@AEAA_NAEBVCMouseEvent@1@AEBVCInputDest@@@Z.c)
 *     ?PostInitialize@CMouseSensor@@EEAAJXZ @ 0x1C0060E70 (-PostInitialize@CMouseSensor@@EEAAJXZ.c)
 *     ?PreUninitialize@CHidInput@@EEAAXXZ @ 0x1C006F050 (-PreUninitialize@CHidInput@@EEAAXXZ.c)
 *     ?RIMDeviceCallback_Destroyed@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C006F1D0 (-RIMDeviceCallback_Destroyed@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?RIMDeviceCallback_Created@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C006F4E0 (-RIMDeviceCallback_Created@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?RIMDeviceCallback_Opened@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C006F590 (-RIMDeviceCallback_Opened@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?RIMDeviceCallback_Closed@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C0071BE0 (-RIMDeviceCallback_Closed@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?PostInitialize@CHidInput@@EEAAJXZ @ 0x1C00A9360 (-PostInitialize@CHidInput@@EEAAJXZ.c)
 *     ?PostInitialize@CKeyboardSensor@@EEAAJXZ @ 0x1C00A95E0 (-PostInitialize@CKeyboardSensor@@EEAAJXZ.c)
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C016801C (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 *     ?VirtualizeFullKeyboardStates@CKeyboardSensor@@QEAAXK@Z @ 0x1C0180CF8 (-VirtualizeFullKeyboardStates@CKeyboardSensor@@QEAAXK@Z.c)
 *     ?VirtualizeKeyboardInput@CKeyboardSensor@@QEAA?AW4_SYNTHESIZED_KEYBOARD_PROCESSING_RESULT@@W4_SYNTHESIZE_KEYBOARD_OPTIONS@@AEBUCONTAINER_ID@@AEBU_KEYBOARD_INPUT_DATA@@PEAX@Z @ 0x1C0180DC4 (-VirtualizeKeyboardInput@CKeyboardSensor@@QEAA-AW4_SYNTHESIZED_KEYBOARD_PROCESSING_RESULT@@W4_SY.c)
 *     ivBroadcastSettingsUpdateToAllContainers @ 0x1C0187C00 (ivBroadcastSettingsUpdateToAllContainers.c)
 * Callees:
 *     isInputVirtualizationEnabled @ 0x1C0032A18 (isInputVirtualizationEnabled.c)
 */

bool isRootPartition()
{
  char v0; // al
  char v1; // cl

  v0 = isInputVirtualizationEnabled();
  v1 = 0;
  if ( v0 )
    return gbRootPartition != 0;
  return v1;
}
