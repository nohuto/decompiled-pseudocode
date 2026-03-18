/*
 * XREFs of PnpUnicodeStringToWstrFree @ 0x1405980AC
 * Callers:
 *     PiControlGetDeviceInterfaceEnabled @ 0x140597CE0 (PiControlGetDeviceInterfaceEnabled.c)
 *     IopGetDeviceInterfaces @ 0x14059E6C4 (IopGetDeviceInterfaces.c)
 *     IoGetDeviceInterfaceAlias @ 0x1406D52C0 (IoGetDeviceInterfaceAlias.c)
 *     PiDeviceRegistration @ 0x1406EE378 (PiDeviceRegistration.c)
 *     PpForEachDeviceInstanceDriver @ 0x1406EE51C (PpForEachDeviceInstanceDriver.c)
 *     PnpDisableDeviceInterfaces @ 0x1406EF41C (PnpDisableDeviceInterfaces.c)
 *     PnpIsDeviceInstanceEnabled @ 0x1406FE514 (PnpIsDeviceInstanceEnabled.c)
 *     PnpGetDeviceInstanceCsConfigFlags @ 0x1406FE69C (PnpGetDeviceInstanceCsConfigFlags.c)
 *     IoRegisterDeviceInterface @ 0x1407099A0 (IoRegisterDeviceInterface.c)
 *     PnpSetDeviceInterfacePropertyData @ 0x14070A418 (PnpSetDeviceInterfacePropertyData.c)
 *     IopDeviceObjectFromSymbolicName @ 0x14070A75C (IopDeviceObjectFromSymbolicName.c)
 *     IopProcessSetInterfaceState @ 0x14070F918 (IopProcessSetInterfaceState.c)
 *     IopBuildGlobalSymbolicLinkString @ 0x14070FDEC (IopBuildGlobalSymbolicLinkString.c)
 *     IoReportDetectedDevice @ 0x14072D240 (IoReportDetectedDevice.c)
 *     PipApplyFunctionToServiceInstances @ 0x140754F14 (PipApplyFunctionToServiceInstances.c)
 *     PnpGetDeviceDependencyList @ 0x140824310 (PnpGetDeviceDependencyList.c)
 *     IoOpenDeviceInterfaceRegistryKey @ 0x140825A20 (IoOpenDeviceInterfaceRegistryKey.c)
 *     PnpDeleteDeviceInterfaces @ 0x140825AFC (PnpDeleteDeviceInterfaces.c)
 *     PnpGetDeviceInterfacePropertyData @ 0x14082864C (PnpGetDeviceInterfacePropertyData.c)
 *     PiInitializeDevice @ 0x14083C184 (PiInitializeDevice.c)
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
