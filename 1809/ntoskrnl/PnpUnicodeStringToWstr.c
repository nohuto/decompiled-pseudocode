/*
 * XREFs of PnpUnicodeStringToWstr @ 0x14059ACA8
 * Callers:
 *     PiControlGetDeviceInterfaceEnabled @ 0x140598CE0 (PiControlGetDeviceInterfaceEnabled.c)
 *     IopGetDeviceInterfaces @ 0x14059F6C4 (IopGetDeviceInterfaces.c)
 *     IoGetDeviceInterfaceAlias @ 0x1406D6540 (IoGetDeviceInterfaceAlias.c)
 *     PiDeviceRegistration @ 0x1406EF5F8 (PiDeviceRegistration.c)
 *     PpForEachDeviceInstanceDriver @ 0x1406EF79C (PpForEachDeviceInstanceDriver.c)
 *     PnpDisableDeviceInterfaces @ 0x1406F069C (PnpDisableDeviceInterfaces.c)
 *     PnpIsDeviceInstanceEnabled @ 0x1406FF794 (PnpIsDeviceInstanceEnabled.c)
 *     PnpGetDeviceInstanceCsConfigFlags @ 0x1406FF91C (PnpGetDeviceInstanceCsConfigFlags.c)
 *     IoRegisterDeviceInterface @ 0x14070AC20 (IoRegisterDeviceInterface.c)
 *     PnpSetDeviceInterfacePropertyData @ 0x14070B698 (PnpSetDeviceInterfacePropertyData.c)
 *     IopDeviceObjectFromSymbolicName @ 0x14070B9DC (IopDeviceObjectFromSymbolicName.c)
 *     IopProcessSetInterfaceState @ 0x140710B98 (IopProcessSetInterfaceState.c)
 *     IopBuildGlobalSymbolicLinkString @ 0x14071106C (IopBuildGlobalSymbolicLinkString.c)
 *     IoReportDetectedDevice @ 0x14072E410 (IoReportDetectedDevice.c)
 *     PipApplyFunctionToServiceInstances @ 0x1407560E4 (PipApplyFunctionToServiceInstances.c)
 *     PnpGetDeviceDependencyList @ 0x1408254F0 (PnpGetDeviceDependencyList.c)
 *     IoOpenDeviceInterfaceRegistryKey @ 0x140826C00 (IoOpenDeviceInterfaceRegistryKey.c)
 *     PnpDeleteDeviceInterfaces @ 0x140826CDC (PnpDeleteDeviceInterfaces.c)
 *     PnpGetDeviceInterfacePropertyData @ 0x14082982C (PnpGetDeviceInterfacePropertyData.c)
 *     PiInitializeDevice @ 0x14083D3C4 (PiInitializeDevice.c)
 *     PipInitComputerIds @ 0x1409C9C60 (PipInitComputerIds.c)
 *     IopInitializeBootDrivers @ 0x1409CC0BC (IopInitializeBootDrivers.c)
 * Callees:
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PnpUnicodeStringToWstr(__int16 **a1, unsigned int *a2, unsigned __int16 *a3)
{
  unsigned int v3; // ebx
  unsigned __int16 v7; // dx
  __int16 *v8; // rcx
  unsigned __int16 v9; // r9
  __int16 v10; // ax
  unsigned __int64 v11; // r8
  unsigned int v12; // ebp
  __int16 *PoolWithTag; // rax
  __int16 *v14; // r15
  unsigned __int64 v15; // rax
  __int16 *v17; // rax

  v3 = 0;
  if ( !a1 || !a3 )
    return (unsigned int)-1073741811;
  v7 = a3[1];
  if ( v7 < 2u || (v8 = (__int16 *)*((_QWORD *)a3 + 1)) == 0LL )
  {
    *a1 = 0LL;
    if ( a2 )
      *a2 = 0;
    return v3;
  }
  v9 = *a3;
  if ( *a3 > v7 )
    return (unsigned int)-1073741811;
  v10 = *v8;
  if ( v9 )
  {
    if ( !v10 )
      goto LABEL_17;
    v11 = (unsigned __int64)v9 >> 1;
    if ( v9 == v7 && !v8[v11 - 1] )
      goto LABEL_17;
    if ( v9 <= (unsigned __int64)v7 - 2 && (!v8[v11 - 1] || !v8[v11]) )
      goto LABEL_17;
    v12 = v9 + 2;
    PoolWithTag = (__int16 *)ExAllocatePoolWithTag(PagedPool, v12, 0x75737050u);
    v14 = PoolWithTag;
    if ( PoolWithTag )
    {
      memmove(PoolWithTag, *((const void **)a3 + 1), *a3);
      v15 = (unsigned __int64)*a3 >> 1;
      *a1 = v14;
      v14[v15] = 0;
      if ( a2 )
        *a2 = v12;
      return v3;
    }
    return (unsigned int)-1073741670;
  }
  if ( !v10 )
  {
LABEL_17:
    *a1 = v8;
    if ( a2 )
      *a2 = v7;
    return v3;
  }
  v17 = (__int16 *)ExAllocatePoolWithTag(PagedPool, 2uLL, 0x75737050u);
  if ( !v17 )
    return (unsigned int)-1073741670;
  *v17 = 0;
  *a1 = v17;
  if ( a2 )
    *a2 = 2;
  return v3;
}
