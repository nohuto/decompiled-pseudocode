/*
 * XREFs of RtlDoesFileExists_UEx @ 0x18005A68C
 * Callers:
 *     RtlpGetMUIRedirectedFilePathInternal @ 0x18005A44C (RtlpGetMUIRedirectedFilePathInternal.c)
 *     RtlpAssemblyStorageMapResolutionDefaultCallback @ 0x18005AB90 (RtlpAssemblyStorageMapResolutionDefaultCallback.c)
 *     RtlDoesFileExists_U @ 0x18005D950 (RtlDoesFileExists_U.c)
 *     RtlpCheckDeviceName @ 0x180088D20 (RtlpCheckDeviceName.c)
 *     RtlDosSearchPath_U @ 0x18008A850 (RtlDosSearchPath_U.c)
 * Callees:
 *     RtlDoesFileExists_UstrEx @ 0x180025E00 (RtlDoesFileExists_UstrEx.c)
 *     RtlInitUnicodeStringEx @ 0x180028DF0 (RtlInitUnicodeStringEx.c)
 */

bool __fastcall RtlDoesFileExists_UEx(__int64 a1, char a2)
{
  _BYTE v4[24]; // [rsp+20h] [rbp-18h] BYREF

  return (int)RtlInitUnicodeStringEx((__int64)v4, a1) >= 0 && RtlDoesFileExists_UstrEx((int)v4, a2);
}
