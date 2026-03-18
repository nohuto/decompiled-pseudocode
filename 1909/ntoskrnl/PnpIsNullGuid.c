/*
 * XREFs of PnpIsNullGuid @ 0x1405B6474
 * Callers:
 *     PiDqIrpQueryCreate @ 0x1405B6DD8 (PiDqIrpQueryCreate.c)
 *     PiPnpRtlCmActionCallback @ 0x1405BDF50 (PiPnpRtlCmActionCallback.c)
 *     PiDevCfgFindDeviceDriver @ 0x1406FCABC (PiDevCfgFindDeviceDriver.c)
 *     PiDevCfgBuildDriverConfigurationId @ 0x1406FE968 (PiDevCfgBuildDriverConfigurationId.c)
 *     PiDevCfgConfigureDevice @ 0x140705DE4 (PiDevCfgConfigureDevice.c)
 *     PiDqObjectManagerServiceActionQueue @ 0x1407154B0 (PiDqObjectManagerServiceActionQueue.c)
 *     IopRegisterDeviceInterface @ 0x140737524 (IopRegisterDeviceInterface.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x140868908 (PiDevCfgResetDeviceDriverSettings.c)
 * Callees:
 *     RtlCompareMemory @ 0x1401CCD70 (RtlCompareMemory.c)
 */

bool __fastcall PnpIsNullGuid(void *Source2)
{
  return RtlCompareMemory(&NullGuid, Source2, 0x10uLL) == 16;
}
