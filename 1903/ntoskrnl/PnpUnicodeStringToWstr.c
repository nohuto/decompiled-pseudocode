/*
 * XREFs of PnpUnicodeStringToWstr @ 0x1405BF440
 * Callers:
 *     PiControlGetDeviceInterfaceEnabled @ 0x1405BD5E0 (PiControlGetDeviceInterfaceEnabled.c)
 *     IopGetDeviceInterfaces @ 0x1406239A8 (IopGetDeviceInterfaces.c)
 *     IoGetDeviceInterfaceAlias @ 0x1406F5DA0 (IoGetDeviceInterfaceAlias.c)
 *     PiDeviceRegistration @ 0x140722BA8 (PiDeviceRegistration.c)
 *     PpForEachDeviceInstanceDriver @ 0x140722D58 (PpForEachDeviceInstanceDriver.c)
 *     PnpIsDeviceInstanceEnabled @ 0x14072304C (PnpIsDeviceInstanceEnabled.c)
 *     PnpGetDeviceInstanceCsConfigFlags @ 0x1407231B0 (PnpGetDeviceInstanceCsConfigFlags.c)
 *     PnpDisableDeviceInterfaces @ 0x140730F74 (PnpDisableDeviceInterfaces.c)
 *     IopProcessSetInterfaceState @ 0x140731AA8 (IopProcessSetInterfaceState.c)
 *     IopBuildGlobalSymbolicLinkString @ 0x140731F98 (IopBuildGlobalSymbolicLinkString.c)
 *     IoRegisterDeviceInterface @ 0x140735170 (IoRegisterDeviceInterface.c)
 *     IopDeviceObjectFromSymbolicName @ 0x140735B00 (IopDeviceObjectFromSymbolicName.c)
 *     PnpSetDeviceInterfacePropertyData @ 0x140735FE8 (PnpSetDeviceInterfacePropertyData.c)
 *     IoReportDetectedDevice @ 0x140750EB0 (IoReportDetectedDevice.c)
 *     PipApplyFunctionToServiceInstances @ 0x14077A264 (PipApplyFunctionToServiceInstances.c)
 *     IoOpenDeviceInterfaceRegistryKey @ 0x140783E10 (IoOpenDeviceInterfaceRegistryKey.c)
 *     PnpGetDeviceDependencyList @ 0x14085E740 (PnpGetDeviceDependencyList.c)
 *     PnpDeleteDeviceInterfaces @ 0x14085FF14 (PnpDeleteDeviceInterfaces.c)
 *     PnpGetDeviceInterfacePropertyData @ 0x140862B14 (PnpGetDeviceInterfacePropertyData.c)
 *     PiInitializeDevice @ 0x1408772E0 (PiInitializeDevice.c)
 *     PipInitComputerIds @ 0x1409F5B3C (PipInitComputerIds.c)
 *     IopInitializeBootDrivers @ 0x140A10470 (IopInitializeBootDrivers.c)
 * Callees:
 *     memmove @ 0x1401D6880 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
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
