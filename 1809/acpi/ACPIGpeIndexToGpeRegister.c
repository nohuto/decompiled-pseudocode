/*
 * XREFs of ACPIGpeIndexToGpeRegister @ 0x1C0019D20
 * Callers:
 *     ACPIGpeInstallRemoveIndex @ 0x1C0016EE4 (ACPIGpeInstallRemoveIndex.c)
 *     ACPIGpeBuildWakeMasks @ 0x1C001AB70 (ACPIGpeBuildWakeMasks.c)
 *     ACPIWakeRemoveDevicesAndUpdate @ 0x1C0025AEC (ACPIWakeRemoveDevicesAndUpdate.c)
 *     ACPIDeviceIrpWaitWakeRequestComplete @ 0x1C004EE28 (ACPIDeviceIrpWaitWakeRequestComplete.c)
 *     ACPIVectorClear @ 0x1C005E790 (ACPIVectorClear.c)
 *     ACPIVectorDisable @ 0x1C005E9C0 (ACPIVectorDisable.c)
 *     ACPIVectorEnable @ 0x1C005EBD0 (ACPIVectorEnable.c)
 * Callees:
 *     ACPIGpeValidIndex @ 0x1C0019D54 (ACPIGpeValidIndex.c)
 */

__int64 __fastcall ACPIGpeIndexToGpeRegister(__int64 a1)
{
  unsigned int v1; // ecx
  unsigned int v2; // edx

  if ( !(unsigned __int8)ACPIGpeValidIndex(a1) )
    KeBugCheckEx(0xA5u, 0x17uLL, v1, 0LL, 0LL);
  v2 = *((unsigned __int16 *)AcpiInformation + 50);
  if ( v1 >= v2 )
    return ((v1 - v2) >> 3) + *((unsigned __int16 *)AcpiInformation + 43);
  else
    return v1 >> 3;
}
