/*
 * XREFs of ACPIGpeIndexToByteIndex @ 0x1C0026148
 * Callers:
 *     ACPIInterruptDispatchEventDpc @ 0x1C00257B0 (ACPIInterruptDispatchEventDpc.c)
 *     ACPIWakeRemoveDevicesAndUpdate @ 0x1C0025AEC (ACPIWakeRemoveDevicesAndUpdate.c)
 *     ACPIVectorDisconnect @ 0x1C005EAA0 (ACPIVectorDisconnect.c)
 *     ACPIVectorInstall @ 0x1C005EDF4 (ACPIVectorInstall.c)
 * Callees:
 *     ACPIGpeValidIndex @ 0x1C0019D54 (ACPIGpeValidIndex.c)
 */

__int64 __fastcall ACPIGpeIndexToByteIndex(unsigned int a1)
{
  unsigned int v1; // ecx
  unsigned int v2; // edx

  if ( !ACPIGpeValidIndex(a1) )
    KeBugCheckEx(0xA5u, 0x17uLL, v1, 1uLL, 0LL);
  v2 = *((unsigned __int16 *)AcpiInformation + 50);
  if ( v1 >= v2 )
    return v1 + *((unsigned __int16 *)AcpiInformation + 43) - v2;
  else
    return v1;
}
