/*
 * XREFs of PnpConcatenateUnicodeStrings @ 0x14070F83C
 * Callers:
 *     IoGetDeviceInstanceName @ 0x14016D220 (IoGetDeviceInstanceName.c)
 *     PiDeviceRegistration @ 0x1406EE358 (PiDeviceRegistration.c)
 *     IoGetDeviceDirectory @ 0x1408249F0 (IoGetDeviceDirectory.c)
 *     PiCreateDirectoryPath @ 0x140824FC8 (PiCreateDirectoryPath.c)
 *     PiCreateRegistryPath @ 0x1408252B0 (PiCreateRegistryPath.c)
 *     PipServiceInstanceToDeviceInstance @ 0x1408276B0 (PipServiceInstanceToDeviceInstance.c)
 *     PiInitializeDevice @ 0x14083C164 (PiInitializeDevice.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x1400B9890 (RtlCopyUnicodeString.c)
 *     IopAllocateUnicodeString @ 0x14070FEF4 (IopAllocateUnicodeString.c)
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
