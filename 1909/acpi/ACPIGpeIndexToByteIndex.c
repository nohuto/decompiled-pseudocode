/*
 * XREFs of ACPIGpeIndexToByteIndex @ 0x1C00224E8
 * Callers:
 *     ACPIInterruptDispatchEventDpc @ 0x1C0021BC0 (ACPIInterruptDispatchEventDpc.c)
 *     ACPIWakeRemoveDevicesAndUpdate @ 0x1C0021EFC (ACPIWakeRemoveDevicesAndUpdate.c)
 *     ACPIVectorDisconnect @ 0x1C0060980 (ACPIVectorDisconnect.c)
 *     ACPIVectorInstall @ 0x1C0060CE4 (ACPIVectorInstall.c)
 * Callees:
 *     ACPIGpeValidIndex @ 0x1C0023E5C (ACPIGpeValidIndex.c)
 */

__int64 __fastcall ACPIGpeIndexToByteIndex(__int64 a1)
{
  unsigned int v1; // ecx
  unsigned int v2; // edx

  if ( !(unsigned __int8)ACPIGpeValidIndex(a1) )
    KeBugCheckEx(0xA5u, 0x17uLL, v1, 1uLL, 0LL);
  v2 = *((unsigned __int16 *)AcpiInformation + 50);
  if ( v1 >= v2 )
    return v1 + *((unsigned __int16 *)AcpiInformation + 43) - v2;
  else
    return v1;
}
