/*
 * XREFs of VslRegisterIumPowerCallbacks @ 0x1409DF644
 * Callers:
 *     IoInitSystemPreDrivers @ 0x1409B1F54 (IoInitSystemPreDrivers.c)
 * Callees:
 *     PoRegisterPowerSettingCallback @ 0x140589EE0 (PoRegisterPowerSettingCallback.c)
 *     NtPowerInformation @ 0x14058C170 (NtPowerInformation.c)
 *     ExSubscribeWnfStateChange @ 0x1406BC490 (ExSubscribeWnfStateChange.c)
 */

void VslRegisterIumPowerCallbacks()
{
  char OutputBuffer; // [rsp+40h] [rbp+8h] BYREF

  if ( VslVsmEnabled && NtPowerInformation((POWER_INFORMATION_LEVEL)66, 0LL, 0, &OutputBuffer, 1u) >= 0 )
  {
    if ( OutputBuffer )
    {
      ExSubscribeWnfStateChange(
        (__int64)&VslpIumCsWnfSubscription,
        (__int64)&WNF_PO_SCENARIO_CHANGE,
        1,
        0,
        (__int64)VslpConnectedStandbyWnfCallback,
        0LL);
      PoRegisterPowerSettingCallback(
        0LL,
        &GUID_LOW_POWER_EPOCH,
        (PPOWER_SETTING_CALLBACK)VslpConnectedStandbyPoCallback,
        0LL,
        0LL);
      PoRegisterPowerSettingCallback(
        0LL,
        &GUID_PDC_IDLE_RESILIENCY_ENGAGED,
        (PPOWER_SETTING_CALLBACK)VslpConnectedStandbyPoCallback,
        0LL,
        0LL);
    }
  }
}
