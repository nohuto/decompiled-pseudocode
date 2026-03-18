/*
 * XREFs of ACPIThermalLoop @ 0x1C0012500
 * Callers:
 *     ACPIThermalComplete @ 0x1C0011970 (ACPIThermalComplete.c)
 *     ACPIThermalTMPCallback @ 0x1C0012000 (ACPIThermalTMPCallback.c)
 *     ACPIThermalLoopEx @ 0x1C0012518 (ACPIThermalLoopEx.c)
 *     ACPIThermalUpdateTemperature @ 0x1C0013018 (ACPIThermalUpdateTemperature.c)
 *     ACPIThermalWorker @ 0x1C0097860 (ACPIThermalWorker.c)
 * Callees:
 *     ACPIThermalLoopEx @ 0x1C0012518 (ACPIThermalLoopEx.c)
 */

__int64 __fastcall ACPIThermalLoop(__int64 a1, __int64 a2)
{
  return ACPIThermalLoopEx(a1, a2, 0LL);
}
