/*
 * XREFs of ACPIDeviceHasFirmwareDependencies @ 0x1C0009900
 * Callers:
 *     ACPIThermalLoopEx @ 0x1C0008C54 (ACPIThermalLoopEx.c)
 *     ACPIBuildProcessRunMethodPhaseCheckSta @ 0x1C0015700 (ACPIBuildProcessRunMethodPhaseCheckSta.c)
 *     ACPIDetectCouldExtensionBeInRelation @ 0x1C0096920 (ACPIDetectCouldExtensionBeInRelation.c)
 * Callees:
 *     <none>
 */

bool __fastcall ACPIDeviceHasFirmwareDependencies(__int64 a1)
{
  return (*(_BYTE *)(a1 + 952) & 0x40) != 0 || *(_QWORD *)(a1 + 600);
}
