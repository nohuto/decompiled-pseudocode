/*
 * XREFs of UsbhRegCreateUsbflagsKey @ 0x1C0025604
 * Callers:
 *     UsbhGetMSOS_Descriptor @ 0x1C0021E80 (UsbhGetMSOS_Descriptor.c)
 *     UsbhRegDriverEntry @ 0x1C0026920 (UsbhRegDriverEntry.c)
 * Callees:
 *     <none>
 */

NTSTATUS UsbhRegCreateUsbflagsKey()
{
  NTSTATUS result; // eax

  result = RtlCheckRegistryKey(2u, (PWSTR)L"usbflags");
  if ( (result & 0xC0000000) == 0xC0000000 )
    return RtlCreateRegistryKey(2u, (PWSTR)L"usbflags");
  return result;
}
