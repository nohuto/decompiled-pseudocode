/*
 * XREFs of RtlDoesFileExists_UEx @ 0x180035770
 * Callers:
 *     RtlpAssemblyStorageMapResolutionDefaultCallback @ 0x180033050 (RtlpAssemblyStorageMapResolutionDefaultCallback.c)
 *     RtlpGetMUIRedirectedFilePathInternal @ 0x180035530 (RtlpGetMUIRedirectedFilePathInternal.c)
 *     RtlDoesFileExists_U @ 0x180089270 (RtlDoesFileExists_U.c)
 *     RtlpCheckDeviceName @ 0x18008B3C8 (RtlpCheckDeviceName.c)
 *     RtlDosSearchPath_U @ 0x18008DB30 (RtlDosSearchPath_U.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x18000C120 (RtlInitUnicodeStringEx.c)
 *     RtlDoesFileExists_UstrEx @ 0x18002A404 (RtlDoesFileExists_UstrEx.c)
 */

bool __fastcall RtlDoesFileExists_UEx(__int64 a1, char a2)
{
  __int128 v4; // [rsp+20h] [rbp-18h] BYREF

  return (int)RtlInitUnicodeStringEx((__int64)&v4, a1) >= 0 && RtlDoesFileExists_UstrEx(&v4, a2);
}
