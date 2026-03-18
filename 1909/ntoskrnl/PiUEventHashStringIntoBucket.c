/*
 * XREFs of PiUEventHashStringIntoBucket @ 0x1400EE028
 * Callers:
 *     PiUEventHandleRegistration @ 0x140695404 (PiUEventHandleRegistration.c)
 *     PiUEventNotifyTargetDeviceChange @ 0x1406990D0 (PiUEventNotifyTargetDeviceChange.c)
 *     PiUEventNotifyDeviceInstanceChange @ 0x14071D0B8 (PiUEventNotifyDeviceInstanceChange.c)
 *     PiUEventNotifyDeviceInstancePropertyChange @ 0x14073CCC4 (PiUEventNotifyDeviceInstancePropertyChange.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     RtlHashUnicodeString @ 0x140666720 (RtlHashUnicodeString.c)
 */

__int64 __fastcall PiUEventHashStringIntoBucket(PCWSTR SourceString)
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF
  ULONG HashValue; // [rsp+48h] [rbp+10h] BYREF

  HashValue = 0;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  RtlHashUnicodeString(&DestinationString, 1u, 0, &HashValue);
  return HashValue % 0xD;
}
