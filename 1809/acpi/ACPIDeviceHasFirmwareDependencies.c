/*
 * XREFs of ACPIDeviceHasFirmwareDependencies @ 0x1C001422C
 * Callers:
 *     ACPIThermalLoopEx @ 0x1C0012518 (ACPIThermalLoopEx.c)
 *     ACPIBuildProcessRunMethodPhaseCheckSta @ 0x1C001EB30 (ACPIBuildProcessRunMethodPhaseCheckSta.c)
 *     ACPIDetectCouldExtensionBeInRelation @ 0x1C009A7B0 (ACPIDetectCouldExtensionBeInRelation.c)
 * Callees:
 *     <none>
 */

bool __fastcall ACPIDeviceHasFirmwareDependencies(__int64 a1)
{
  return (*(_BYTE *)(a1 + 952) & 0x40) != 0 || *(_QWORD *)(a1 + 600);
}
