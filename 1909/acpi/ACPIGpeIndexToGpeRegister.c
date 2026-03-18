/*
 * XREFs of ACPIGpeIndexToGpeRegister @ 0x1C0023E28
 * Callers:
 *     ACPIGpeBuildWakeMasks @ 0x1C0012260 (ACPIGpeBuildWakeMasks.c)
 *     ACPIWakeRemoveDevicesAndUpdate @ 0x1C0021EFC (ACPIWakeRemoveDevicesAndUpdate.c)
 *     ACPIGpeInstallRemoveIndex @ 0x1C0023C40 (ACPIGpeInstallRemoveIndex.c)
 *     ACPIDeviceIrpWaitWakeRequestComplete @ 0x1C00506A8 (ACPIDeviceIrpWaitWakeRequestComplete.c)
 *     ACPIVectorClear @ 0x1C0060660 (ACPIVectorClear.c)
 *     ACPIVectorDisable @ 0x1C0060890 (ACPIVectorDisable.c)
 *     ACPIVectorEnable @ 0x1C0060AC0 (ACPIVectorEnable.c)
 * Callees:
 *     ACPIGpeValidIndex @ 0x1C0023E5C (ACPIGpeValidIndex.c)
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
