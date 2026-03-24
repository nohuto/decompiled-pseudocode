/*
 * XREFs of PnpUnicodeStringToWstrFree @ 0x1405980AC
 * Callers:
 *     PiControlGetDeviceInterfaceEnabled @ 0x140597CE0 (PiControlGetDeviceInterfaceEnabled.c)
 *     IopGetDeviceInterfaces @ 0x14059E6C4 (IopGetDeviceInterfaces.c)
 *     IoGetDeviceInterfaceAlias @ 0x1406D52A0 (IoGetDeviceInterfaceAlias.c)
 *     PiDeviceRegistration @ 0x1406EE358 (PiDeviceRegistration.c)
 *     PpForEachDeviceInstanceDriver @ 0x1406EE4FC (PpForEachDeviceInstanceDriver.c)
 *     PnpDisableDeviceInterfaces @ 0x1406EF3FC (PnpDisableDeviceInterfaces.c)
 *     PnpIsDeviceInstanceEnabled @ 0x1406FE4F4 (PnpIsDeviceInstanceEnabled.c)
 *     PnpGetDeviceInstanceCsConfigFlags @ 0x1406FE67C (PnpGetDeviceInstanceCsConfigFlags.c)
 *     IoRegisterDeviceInterface @ 0x140709980 (IoRegisterDeviceInterface.c)
 *     PnpSetDeviceInterfacePropertyData @ 0x14070A3F8 (PnpSetDeviceInterfacePropertyData.c)
 *     IopDeviceObjectFromSymbolicName @ 0x14070A73C (IopDeviceObjectFromSymbolicName.c)
 *     IopProcessSetInterfaceState @ 0x14070F8F8 (IopProcessSetInterfaceState.c)
 *     IopBuildGlobalSymbolicLinkString @ 0x14070FDCC (IopBuildGlobalSymbolicLinkString.c)
 *     IoReportDetectedDevice @ 0x14072D220 (IoReportDetectedDevice.c)
 *     PipApplyFunctionToServiceInstances @ 0x140754EF4 (PipApplyFunctionToServiceInstances.c)
 *     PnpGetDeviceDependencyList @ 0x1408242F0 (PnpGetDeviceDependencyList.c)
 *     IoOpenDeviceInterfaceRegistryKey @ 0x140825A00 (IoOpenDeviceInterfaceRegistryKey.c)
 *     PnpDeleteDeviceInterfaces @ 0x140825ADC (PnpDeleteDeviceInterfaces.c)
 *     PnpGetDeviceInterfacePropertyData @ 0x14082862C (PnpGetDeviceInterfacePropertyData.c)
 *     PiInitializeDevice @ 0x14083C164 (PiInitializeDevice.c)
 *     PipInitComputerIds @ 0x1409C8C60 (PipInitComputerIds.c)
 *     IopInitializeBootDrivers @ 0x1409CB0BC (IopInitializeBootDrivers.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 */

void __fastcall PnpUnicodeStringToWstrFree(void *a1, __int64 a2)
{
  void *v2; // rax

  if ( a1 )
  {
    if ( a2 )
    {
      if ( *(_WORD *)(a2 + 2) )
      {
        v2 = *(void **)(a2 + 8);
        if ( v2 )
        {
          if ( v2 != a1 )
            ExFreePoolWithTag(a1, 0);
        }
      }
    }
  }
}
