/*
 * XREFs of PnpConcatenateUnicodeStrings @ 0x14070F85C
 * Callers:
 *     IoGetDeviceInstanceName @ 0x14016D200 (IoGetDeviceInstanceName.c)
 *     PiDeviceRegistration @ 0x1406EE378 (PiDeviceRegistration.c)
 *     IoGetDeviceDirectory @ 0x140824A10 (IoGetDeviceDirectory.c)
 *     PiCreateDirectoryPath @ 0x140824FE8 (PiCreateDirectoryPath.c)
 *     PiCreateRegistryPath @ 0x1408252D0 (PiCreateRegistryPath.c)
 *     PipServiceInstanceToDeviceInstance @ 0x1408276D0 (PipServiceInstanceToDeviceInstance.c)
 *     PiInitializeDevice @ 0x14083C184 (PiInitializeDevice.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x1400B9870 (RtlCopyUnicodeString.c)
 *     IopAllocateUnicodeString @ 0x14070FF14 (IopAllocateUnicodeString.c)
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
