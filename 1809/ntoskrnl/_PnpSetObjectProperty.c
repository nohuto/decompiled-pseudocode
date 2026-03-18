/*
 * XREFs of _PnpSetObjectProperty @ 0x1406E5644
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x140599080 (PiPnpRtlCmActionCallback.c)
 *     PiDrvDbLoadNodeWorkerCallback @ 0x140680D80 (PiDrvDbLoadNodeWorkerCallback.c)
 *     PiProcessNewDeviceNode @ 0x1406E3F34 (PiProcessNewDeviceNode.c)
 *     PiPnpRtlSetObjectProperty @ 0x1406E5270 (PiPnpRtlSetObjectProperty.c)
 *     PipCallDriverAddDevice @ 0x1406E6C6C (PipCallDriverAddDevice.c)
 *     PnpDeviceCompletionProcessCompletedRequest @ 0x1406E7E44 (PnpDeviceCompletionProcessCompletedRequest.c)
 *     _CmUpdateDevicePanel @ 0x1406E85F8 (_CmUpdateDevicePanel.c)
 *     PipProcessStartPhase3 @ 0x1406EAB38 (PipProcessStartPhase3.c)
 *     PiDcContainerRequiresConfiguration @ 0x1406EB3A4 (PiDcContainerRequiresConfiguration.c)
 *     PnpStartDeviceNode @ 0x1406EBA7C (PnpStartDeviceNode.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x1406ED74C (PnpUnlinkDeviceRemovalRelations.c)
 *     PipDmgSaveDeviceDmarPolicy @ 0x1406FE7C4 (PipDmgSaveDeviceDmarPolicy.c)
 *     PnpInitializeSessionId @ 0x140700C74 (PnpInitializeSessionId.c)
 *     IopRegisterDeviceInterface @ 0x140709AF4 (IopRegisterDeviceInterface.c)
 *     IoReportDetectedDevice @ 0x14072D240 (IoReportDetectedDevice.c)
 *     PiDrvDbSetupNodes @ 0x14073A7E4 (PiDrvDbSetupNodes.c)
 *     PiDcGenerateConfigNotificationIfContainerRequiresConfiguration @ 0x14073ADAC (PiDcGenerateConfigNotificationIfContainerRequiresConfiguration.c)
 *     IoReportRootDevice @ 0x140758C10 (IoReportRootDevice.c)
 *     IoGetDeviceDirectory @ 0x140824A10 (IoGetDeviceDirectory.c)
 *     _CmDeleteDeviceWorker @ 0x1408F75DC (_CmDeleteDeviceWorker.c)
 *     _CmDeleteDeviceMappedPropertyForAllDriverKeyRegValues @ 0x1408FCDC0 (_CmDeleteDeviceMappedPropertyForAllDriverKeyRegValues.c)
 *     PipInitComputerIds @ 0x1409C8C60 (PipInitComputerIds.c)
 *     PipMigrateResetDeviceCallback @ 0x1409F53E0 (PipMigrateResetDeviceCallback.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C5EB0 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D1780 (memset.c)
 *     _PnpSetObjectPropertyWorker @ 0x1406E57BC (_PnpSetObjectPropertyWorker.c)
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
