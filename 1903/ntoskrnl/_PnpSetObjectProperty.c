/*
 * XREFs of _PnpSetObjectProperty @ 0x1407065F4
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x1405BDA80 (PiPnpRtlCmActionCallback.c)
 *     PiDrvDbLoadNodeWorkerCallback @ 0x1406F0460 (PiDrvDbLoadNodeWorkerCallback.c)
 *     PipProcessStartPhase3 @ 0x1406FEE28 (PipProcessStartPhase3.c)
 *     _CmUpdateDevicePanel @ 0x1406FF59C (_CmUpdateDevicePanel.c)
 *     PnpDeviceCompletionProcessCompletedRequest @ 0x140702480 (PnpDeviceCompletionProcessCompletedRequest.c)
 *     PipCallDriverAddDevice @ 0x140702D58 (PipCallDriverAddDevice.c)
 *     PiProcessNewDeviceNode @ 0x14070502C (PiProcessNewDeviceNode.c)
 *     PiPnpRtlSetObjectProperty @ 0x140706204 (PiPnpRtlSetObjectProperty.c)
 *     PiDcContainerRequiresConfiguration @ 0x14070B20C (PiDcContainerRequiresConfiguration.c)
 *     PnpStartDeviceNode @ 0x14071802C (PnpStartDeviceNode.c)
 *     PnpInitializeSessionId @ 0x14071BDF4 (PnpInitializeSessionId.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x14072F8C4 (PnpUnlinkDeviceRemovalRelations.c)
 *     IopRegisterDeviceInterface @ 0x1407352C4 (IopRegisterDeviceInterface.c)
 *     IoReportDetectedDevice @ 0x140750EB0 (IoReportDetectedDevice.c)
 *     PiDrvDbSetupNodes @ 0x1407561CC (PiDrvDbSetupNodes.c)
 *     PiDrvDbRegisterNode @ 0x140756450 (PiDrvDbRegisterNode.c)
 *     PiDcGenerateConfigNotificationIfContainerRequiresConfiguration @ 0x140756808 (PiDcGenerateConfigNotificationIfContainerRequiresConfiguration.c)
 *     PipDmgSaveDeviceDmarPolicy @ 0x14077BBB4 (PipDmgSaveDeviceDmarPolicy.c)
 *     IoReportRootDevice @ 0x14077EA20 (IoReportRootDevice.c)
 *     IoGetDeviceDirectory @ 0x14085EE50 (IoGetDeviceDirectory.c)
 *     PipSetGuestAssignedProperty @ 0x140877F4C (PipSetGuestAssignedProperty.c)
 *     PiDrvDbSetupNodeHive @ 0x14087A994 (PiDrvDbSetupNodeHive.c)
 *     _CmDeleteDeviceWorker @ 0x140935264 (_CmDeleteDeviceWorker.c)
 *     _CmDeleteDeviceMappedPropertyForAllDriverKeyRegValues @ 0x14093AB34 (_CmDeleteDeviceMappedPropertyForAllDriverKeyRegValues.c)
 *     _CmGetDeviceCompoundFiltersWorker @ 0x14093B748 (_CmGetDeviceCompoundFiltersWorker.c)
 *     _CmGetInstallerClassCompoundFiltersWorker @ 0x14093C5AC (_CmGetInstallerClassCompoundFiltersWorker.c)
 *     PipInitComputerIds @ 0x1409F5B3C (PipInitComputerIds.c)
 *     PipMigrateResetDeviceCallback @ 0x140A3A9B0 (PipMigrateResetDeviceCallback.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     _PnpSetObjectPropertyWorker @ 0x14070676C (_PnpSetObjectPropertyWorker.c)
 */

__int64 __fastcall PnpSetObjectProperty(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8,
        unsigned int a9,
        unsigned int a10)
{
  __int64 (__fastcall *v14)(__int64, __int64, _QWORD, __int64, int, _QWORD *); // rdi
  int v15; // eax
  unsigned int v16; // eax
  unsigned int v17; // ebx
  int v18; // eax
  int v19; // ecx
  unsigned int v20; // eax
  _QWORD SecurityDescriptorLength[10]; // [rsp+58h] [rbp-39h] BYREF

  memset(SecurityDescriptorLength, 0, sizeof(SecurityDescriptorLength));
  v14 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, int, _QWORD *))(a1 + 488);
  SecurityDescriptorLength[3] = a5;
  SecurityDescriptorLength[4] = a6;
  LODWORD(SecurityDescriptorLength[5]) = a7;
  SecurityDescriptorLength[6] = a8;
  SecurityDescriptorLength[7] = __PAIR64__(a10, a9);
  SecurityDescriptorLength[2] = a4;
  if ( v14 )
  {
    v15 = v14(a1, a2, a3, 9LL, 1, SecurityDescriptorLength);
    if ( v15 == -1073741822 )
    {
      v14 = 0LL;
    }
    else
    {
      if ( v15 == -1073741536 )
        return LODWORD(SecurityDescriptorLength[0]);
      if ( v15 )
        return (unsigned int)-1073741595;
    }
  }
  v16 = PnpSetObjectPropertyWorker(
          a1,
          a2,
          a3,
          SecurityDescriptorLength[2],
          SecurityDescriptorLength[3],
          SecurityDescriptorLength[4],
          SecurityDescriptorLength[5],
          SecurityDescriptorLength[6],
          SecurityDescriptorLength[7],
          SHIDWORD(SecurityDescriptorLength[7]));
  v17 = v16;
  if ( !v14 )
    return v17;
  LODWORD(SecurityDescriptorLength[0]) = v16;
  v18 = v14(a1, a2, a3, 9LL, 2, SecurityDescriptorLength);
  v19 = v18;
  if ( v18 == -1073741822 )
    return v17;
  if ( v18 == -1073741536 )
    return LODWORD(SecurityDescriptorLength[0]);
  v20 = v17;
  if ( v19 )
    return (unsigned int)-1073741595;
  return v20;
}
