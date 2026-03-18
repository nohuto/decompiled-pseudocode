/*
 * XREFs of ACPIFreePhysicalDeviceLocationDescriptor @ 0x1C0096F84
 * Callers:
 *     ACPIFreePhysicalDeviceLocationDescriptors @ 0x1C0096F40 (ACPIFreePhysicalDeviceLocationDescriptors.c)
 *     ACPIProcessPhysicalDeviceLocation @ 0x1C009AEFC (ACPIProcessPhysicalDeviceLocation.c)
 * Callees:
 *     <none>
 */

void __fastcall ACPIFreePhysicalDeviceLocationDescriptor(char *P)
{
  if ( *((_QWORD *)P + 16) )
    RtlFreeUnicodeString((PUNICODE_STRING)(P + 120));
  ExFreePoolWithTag(P, 0);
}
