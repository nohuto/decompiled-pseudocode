/*
 * XREFs of PiUEventHashStringIntoBucket @ 0x140006568
 * Callers:
 *     PiUEventNotifyTargetDeviceChange @ 0x14058F668 (PiUEventNotifyTargetDeviceChange.c)
 *     PiUEventHandleRegistration @ 0x140655C04 (PiUEventHandleRegistration.c)
 *     PiUEventNotifyDeviceInstanceChange @ 0x1406FEEF4 (PiUEventNotifyDeviceInstanceChange.c)
 *     PiUEventNotifyDeviceInstancePropertyChange @ 0x14070EC84 (PiUEventNotifyDeviceInstancePropertyChange.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400B9A70 (RtlInitUnicodeString.c)
 *     RtlHashUnicodeString @ 0x140598BE0 (RtlHashUnicodeString.c)
 */

__int64 __fastcall PiUEventHashStringIntoBucket(PCWSTR SourceString)
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF
  ULONG HashValue; // [rsp+48h] [rbp+10h] BYREF

  HashValue = 0;
  RtlInitUnicodeString(&DestinationString, SourceString);
  RtlHashUnicodeString(&DestinationString, 1u, 0, &HashValue);
  return HashValue % 0xD;
}
