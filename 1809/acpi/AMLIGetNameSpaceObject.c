/*
 * XREFs of AMLIGetNameSpaceObject @ 0x1C000ABD0
 * Callers:
 *     ACPIIoctlEvalPreProcessingV1 @ 0x1C000B2E8 (ACPIIoctlEvalPreProcessingV1.c)
 *     ACPIThermalAcquireCoolingInterfaces @ 0x1C000DB28 (ACPIThermalAcquireCoolingInterfaces.c)
 *     ACPIThermalActivateConstraint @ 0x1C000DFF0 (ACPIThermalActivateConstraint.c)
 *     LinkNodeCrackPrt @ 0x1C000E844 (LinkNodeCrackPrt.c)
 *     ACPIConvertDependenciesToPnpReservations @ 0x1C00114BC (ACPIConvertDependenciesToPnpReservations.c)
 *     ACPIThermalGetSensorDevice @ 0x1C001174C (ACPIThermalGetSensorDevice.c)
 *     ACPIIsPowerNodeMissingDependencies @ 0x1C00141E4 (ACPIIsPowerNodeMissingDependencies.c)
 *     ACPIBuildDevicePowerNodes @ 0x1C0015A94 (ACPIBuildDevicePowerNodes.c)
 *     ACPIGpeBuildEventMasks @ 0x1C0016DA0 (ACPIGpeBuildEventMasks.c)
 *     ACPIInterruptDispatchEventDpc @ 0x1C00257B0 (ACPIInterruptDispatchEventDpc.c)
 *     ACPIEcInitOpRegionHandler @ 0x1C0026218 (ACPIEcInitOpRegionHandler.c)
 *     ACPIPowerNodeDiscoverDependencies @ 0x1C0028B04 (ACPIPowerNodeDiscoverDependencies.c)
 *     ACPIIoctlEvalPreProcessingV1Ex @ 0x1C0028E9C (ACPIIoctlEvalPreProcessingV1Ex.c)
 *     ACPIIoctlGetDeviceSpecificData @ 0x1C002C3CC (ACPIIoctlGetDeviceSpecificData.c)
 *     AreDependenciesSatisfied @ 0x1C002D3C0 (AreDependenciesSatisfied.c)
 *     ACPIVerifyAndCopyFirmwareDependencies @ 0x1C002D678 (ACPIVerifyAndCopyFirmwareDependencies.c)
 *     ACPIBuildDeviceResetPowerNode @ 0x1C004969C (ACPIBuildDeviceResetPowerNode.c)
 *     ACPIBuildMissingEjectionRelations @ 0x1C004A010 (ACPIBuildMissingEjectionRelations.c)
 *     ACPIBuildWakeEventDeviceContext @ 0x1C004A9D0 (ACPIBuildWakeEventDeviceContext.c)
 *     ACPIIoctlEvalPreProcessingV2 @ 0x1C0055ADC (ACPIIoctlEvalPreProcessingV2.c)
 *     ACPIIoctlEvalPreProcessingV2Ex @ 0x1C0055E50 (ACPIIoctlEvalPreProcessingV2Ex.c)
 *     ACPIRootInitialize @ 0x1C0095120 (ACPIRootInitialize.c)
 *     RegisterOperationRegionHandler @ 0x1C009EB20 (RegisterOperationRegionHandler.c)
 *     AcpiGetFullyQualifiedBiosName @ 0x1C00AB6C0 (AcpiGetFullyQualifiedBiosName.c)
 *     ExternalRequestBiosNameDeviceAssociation @ 0x1C00AB960 (ExternalRequestBiosNameDeviceAssociation.c)
 *     UnRegisterOperationRegionHandler @ 0x1C00ADD24 (UnRegisterOperationRegionHandler.c)
 *     NotifyHalWithMachineStatesAndRetrieveInterruptModel @ 0x1C00B9CA4 (NotifyHalWithMachineStatesAndRetrieveInterruptModel.c)
 * Callees:
 *     AMLIGetNameSpaceObjectNoLock @ 0x1C000AAE8 (AMLIGetNameSpaceObjectNoLock.c)
 *     __security_check_cookie @ 0x1C0030A80 (__security_check_cookie.c)
 *     memmove @ 0x1C0030D80 (memmove.c)
 */

__int64 __fastcall AMLIGetNameSpaceObject(_BYTE *Src, __int64 *a2, unsigned __int64 *a3, unsigned int a4)
{
  size_t v8; // rbx
  _BYTE *PoolWithTag; // rdi
  KIRQL v10; // bl
  unsigned int v11; // esi
  _BYTE P[128]; // [rsp+20h] [rbp-B8h] BYREF

  v8 = -1LL;
  do
    ++v8;
  while ( Src[v8] );
  if ( v8 + 1 >= 0x80 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v8 + 1, 0x69706341u);
    if ( !PoolWithTag )
      return 3221225626LL;
  }
  else
  {
    PoolWithTag = P;
  }
  memmove(PoolWithTag, Src, v8);
  PoolWithTag[v8] = 0;
  v10 = ExAcquireSpinLockShared(&ACPINamespaceLock);
  v11 = AMLIGetNameSpaceObjectNoLock(PoolWithTag, a2, a3, a4);
  ExReleaseSpinLockShared(&ACPINamespaceLock, v10);
  if ( P != PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  return v11;
}
