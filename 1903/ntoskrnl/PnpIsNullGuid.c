/*
 * XREFs of PnpIsNullGuid @ 0x1405B6094
 * Callers:
 *     PiDqIrpQueryCreate @ 0x1405B69F8 (PiDqIrpQueryCreate.c)
 *     PiPnpRtlCmActionCallback @ 0x1405BDA80 (PiPnpRtlCmActionCallback.c)
 *     PiDevCfgFindDeviceDriver @ 0x1406FACDC (PiDevCfgFindDeviceDriver.c)
 *     PiDevCfgBuildDriverConfigurationId @ 0x1406FCB88 (PiDevCfgBuildDriverConfigurationId.c)
 *     PiDevCfgConfigureDevice @ 0x140704004 (PiDevCfgConfigureDevice.c)
 *     PiDqObjectManagerServiceActionQueue @ 0x1407136D0 (PiDqObjectManagerServiceActionQueue.c)
 *     IopRegisterDeviceInterface @ 0x1407352C4 (IopRegisterDeviceInterface.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x140869208 (PiDevCfgResetDeviceDriverSettings.c)
 * Callees:
 *     RtlCompareMemory @ 0x1401CC1F0 (RtlCompareMemory.c)
 */

bool __fastcall PnpIsNullGuid(void *Source2)
{
  return RtlCompareMemory(&NullGuid, Source2, 0x10uLL) == 16;
}
