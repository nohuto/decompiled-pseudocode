/*
 * XREFs of ?ProcessInput@CMouseSensor@@EEAAJPEAXKK0@Z @ 0x1C0185100
 * Callers:
 *     <none>
 * Callees:
 *     RIMRefreshDeviceAttributes @ 0x1C0137CE0 (RIMRefreshDeviceAttributes.c)
 *     ?FindDeviceInfo@CBaseInput@@QEBAPEAUDEVICEINFO@@PEAXH@Z @ 0x1C0176550 (-FindDeviceInfo@CBaseInput@@QEBAPEAUDEVICEINFO@@PEAXH@Z.c)
 *     ?ProcessInput@CMouseProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_DATA@@K_N@Z @ 0x1C0190084 (-ProcessInput@CMouseProcessor@@QEAA-AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_D.c)
 */

__int64 __fastcall CMouseSensor::ProcessInput(char **this, _WORD *a2, __int64 a3, unsigned int a4, char *a5)
{
  bool v8; // si
  struct DEVICEINFO *DeviceInfo; // rax

  v8 = *a2 == 0xFFFE;
  DeviceInfo = CBaseInput::FindDeviceInfo((CBaseInput *)this, a5, v8);
  if ( DeviceInfo && (unsigned int)CMouseProcessor::ProcessInput(this[152], DeviceInfo, a2, a4, v8) == 1 )
    RIMRefreshDeviceAttributes(this[1], a5);
  return 0LL;
}
