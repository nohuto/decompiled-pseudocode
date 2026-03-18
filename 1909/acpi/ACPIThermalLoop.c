/*
 * XREFs of ACPIThermalLoop @ 0x1C0008C3C
 * Callers:
 *     ACPIThermalComplete @ 0x1C0008180 (ACPIThermalComplete.c)
 *     ACPIThermalTMPCallback @ 0x1C00086D0 (ACPIThermalTMPCallback.c)
 *     ACPIThermalLoopEx @ 0x1C0008C54 (ACPIThermalLoopEx.c)
 *     ACPIThermalUpdateTemperature @ 0x1C000976C (ACPIThermalUpdateTemperature.c)
 *     ACPIThermalWorker @ 0x1C0091ED0 (ACPIThermalWorker.c)
 * Callees:
 *     ACPIThermalLoopEx @ 0x1C0008C54 (ACPIThermalLoopEx.c)
 */

__int64 __fastcall ACPIThermalLoop(__int64 a1, __int64 a2)
{
  return ACPIThermalLoopEx(a1, a2, 0LL);
}
