/*
 * XREFs of ACPIThermalAcquireCoolingInterfaces @ 0x1C000DBF8
 * Callers:
 *     ACPIProcessorStartDevice @ 0x1C0007460 (ACPIProcessorStartDevice.c)
 *     ACPIInitStartDevice @ 0x1C000BF1C (ACPIInitStartDevice.c)
 *     ACPIFanStartDevice @ 0x1C0091220 (ACPIFanStartDevice.c)
 *     ACPIThermalStartDevice @ 0x1C0091630 (ACPIThermalStartDevice.c)
 *     ACPIBusIrpCancelRemoveOrStopDevice @ 0x1C00AD5D0 (ACPIBusIrpCancelRemoveOrStopDevice.c)
 *     ACPIRootIrpCancelRemoveOrStopDevice @ 0x1C00B47A0 (ACPIRootIrpCancelRemoveOrStopDevice.c)
 * Callees:
 *     ACPIThermalAssocaiteConstraint @ 0x1C0009D34 (ACPIThermalAssocaiteConstraint.c)
 *     ACPIThermalQueryCoolingInterfaces @ 0x1C000A838 (ACPIThermalQueryCoolingInterfaces.c)
 *     AMLIDereferenceHandleEx @ 0x1C001145C (AMLIDereferenceHandleEx.c)
 *     AMLIGetNameSpaceObject @ 0x1C001A858 (AMLIGetNameSpaceObject.c)
 */

__int64 __fastcall ACPIThermalAcquireCoolingInterfaces(__int64 a1)
{
  KIRQL v2; // al
  __int64 *v3; // rdi
  KIRQL v4; // r14
  __int64 *v5; // rcx

  v2 = KeAcquireSpinLockRaiseToDpc(&AcpiThermalConstraintLock);
  *(_BYTE *)(a1 + 616) = 1;
  v3 = (__int64 *)AcpiThermalUnclaimedConstraintList;
  v4 = v2;
  while ( v3 != &AcpiThermalUnclaimedConstraintList )
  {
    v5 = v3;
    v3 = (__int64 *)*v3;
    AMLIGetNameSpaceObject(v5 + 5);
  }
  KeReleaseSpinLock(&AcpiThermalConstraintLock, v4);
  return 3221225659LL;
}
