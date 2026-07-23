/*
 * XREFs of RtlDoesFileExists_UEx @ 0x180035770
 * Callers:
 *     RtlpAssemblyStorageMapResolutionDefaultCallback @ 0x180033050 (RtlpAssemblyStorageMapResolutionDefaultCallback.c)
 *     RtlpGetMUIRedirectedFilePathInternal @ 0x180035530 (RtlpGetMUIRedirectedFilePathInternal.c)
 *     RtlDoesFileExists_U @ 0x180089280 (RtlDoesFileExists_U.c)
 *     RtlpCheckDeviceName @ 0x18008B3D8 (RtlpCheckDeviceName.c)
 *     RtlDosSearchPath_U @ 0x18008DB40 (RtlDosSearchPath_U.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x18000C120 (RtlInitUnicodeStringEx.c)
 *     RtlDoesFileExists_UstrEx @ 0x18002A404 (RtlDoesFileExists_UstrEx.c)
 */

bool __fastcall RtlDoesFileExists_UEx(PCWSTR SourceString, char a2)
{
  _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  return RtlInitUnicodeStringEx(&DestinationString, SourceString) >= 0
      && RtlDoesFileExists_UstrEx(&DestinationString, a2);
}
