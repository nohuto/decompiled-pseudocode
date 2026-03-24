/*
 * XREFs of PnpIsNullGuid @ 0x1405901B0
 * Callers:
 *     PiDqIrpQueryCreate @ 0x140590B08 (PiDqIrpQueryCreate.c)
 *     PiPnpRtlCmActionCallback @ 0x140599080 (PiPnpRtlCmActionCallback.c)
 *     PiDevCfgConfigureDevice @ 0x1406E2E34 (PiDevCfgConfigureDevice.c)
 *     PiDevCfgFindDeviceDriver @ 0x1406F4B3C (PiDevCfgFindDeviceDriver.c)
 *     PiDevCfgBuildDriverConfigurationId @ 0x1406F5A10 (PiDevCfgBuildDriverConfigurationId.c)
 *     PiDqObjectManagerServiceActionQueue @ 0x1406F74E0 (PiDqObjectManagerServiceActionQueue.c)
 *     IopRegisterDeviceInterface @ 0x140709AD4 (IopRegisterDeviceInterface.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x14082E968 (PiDevCfgResetDeviceDriverSettings.c)
 * Callees:
 *     RtlCompareMemory @ 0x1401C5BD0 (RtlCompareMemory.c)
 */

bool __fastcall PnpIsNullGuid(void *Source2)
{
  return RtlCompareMemory(&NullGuid, Source2, 0x10uLL) == 16;
}
