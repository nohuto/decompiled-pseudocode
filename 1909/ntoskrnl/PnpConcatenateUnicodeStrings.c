/*
 * XREFs of PnpConcatenateUnicodeStrings @ 0x140733C48
 * Callers:
 *     IoGetDeviceInstanceName @ 0x1401744FC (IoGetDeviceInstanceName.c)
 *     PiDeviceRegistration @ 0x140724A48 (PiDeviceRegistration.c)
 *     IoGetDeviceDirectory @ 0x14085E550 (IoGetDeviceDirectory.c)
 *     PiCreateDirectoryPath @ 0x14085EB40 (PiCreateDirectoryPath.c)
 *     PiCreateRegistryPath @ 0x14085EE48 (PiCreateRegistryPath.c)
 *     PipServiceInstanceToDeviceInstance @ 0x140861170 (PipServiceInstanceToDeviceInstance.c)
 *     PiInitializeDevice @ 0x1408769E0 (PiInitializeDevice.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x140043EC0 (RtlCopyUnicodeString.c)
 *     IopAllocateUnicodeString @ 0x140734310 (IopAllocateUnicodeString.c)
 */

__int64 __fastcall PnpConcatenateUnicodeStrings(PUNICODE_STRING DestinationString, PCUNICODE_STRING SourceString)
{
  __int64 result; // rax

  result = IopAllocateUnicodeString(DestinationString, SourceString->Length);
  if ( (int)result >= 0 )
  {
    RtlCopyUnicodeString(DestinationString, SourceString);
    return 0LL;
  }
  return result;
}
