/*
 * XREFs of PnpConcatenateUnicodeStrings @ 0x140710ADC
 * Callers:
 *     IoGetDeviceInstanceName @ 0x14016D320 (IoGetDeviceInstanceName.c)
 *     PiDeviceRegistration @ 0x1406EF5F8 (PiDeviceRegistration.c)
 *     IoGetDeviceDirectory @ 0x140825BF0 (IoGetDeviceDirectory.c)
 *     PiCreateDirectoryPath @ 0x1408261C8 (PiCreateDirectoryPath.c)
 *     PiCreateRegistryPath @ 0x1408264B0 (PiCreateRegistryPath.c)
 *     PipServiceInstanceToDeviceInstance @ 0x1408288B0 (PipServiceInstanceToDeviceInstance.c)
 *     PiInitializeDevice @ 0x14083D3C4 (PiInitializeDevice.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x1400B97D0 (RtlCopyUnicodeString.c)
 *     IopAllocateUnicodeString @ 0x140711194 (IopAllocateUnicodeString.c)
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
