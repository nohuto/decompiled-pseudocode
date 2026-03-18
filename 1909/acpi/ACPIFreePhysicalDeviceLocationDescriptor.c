/*
 * XREFs of ACPIFreePhysicalDeviceLocationDescriptor @ 0x1C0093380
 * Callers:
 *     ACPIFreePhysicalDeviceLocationDescriptors @ 0x1C009333C (ACPIFreePhysicalDeviceLocationDescriptors.c)
 *     ACPIProcessPhysicalDeviceLocation @ 0x1C0097100 (ACPIProcessPhysicalDeviceLocation.c)
 * Callees:
 *     <none>
 */

void __fastcall ACPIFreePhysicalDeviceLocationDescriptor(char *P)
{
  if ( *((_QWORD *)P + 16) )
    RtlFreeUnicodeString((PUNICODE_STRING)(P + 120));
  ExFreePoolWithTag(P, 0);
}
