/*
 * XREFs of PnpConcatenateUnicodeStrings @ 0x1407319E8
 * Callers:
 *     IoGetDeviceInstanceName @ 0x140173DCC (IoGetDeviceInstanceName.c)
 *     PiDeviceRegistration @ 0x140722BA8 (PiDeviceRegistration.c)
 *     IoGetDeviceDirectory @ 0x14085EE50 (IoGetDeviceDirectory.c)
 *     PiCreateDirectoryPath @ 0x14085F440 (PiCreateDirectoryPath.c)
 *     PiCreateRegistryPath @ 0x14085F748 (PiCreateRegistryPath.c)
 *     PipServiceInstanceToDeviceInstance @ 0x140861A70 (PipServiceInstanceToDeviceInstance.c)
 *     PiInitializeDevice @ 0x1408772E0 (PiInitializeDevice.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x140043E20 (RtlCopyUnicodeString.c)
 *     IopAllocateUnicodeString @ 0x1407320B0 (IopAllocateUnicodeString.c)
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
