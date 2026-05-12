/*
 * XREFs of PortReadRegistrySettings @ 0x1C006F734
 * Callers:
 *     PortGetRegistrySettings @ 0x1C006C13C (PortGetRegistrySettings.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00232C0 (__security_check_cookie.c)
 *     PortpReadUncachedExtAlignmentEntry @ 0x1C006F7D0 (PortpReadUncachedExtAlignmentEntry.c)
 *     PortpReadNumberOfRequestsEntry @ 0x1C006F85C (PortpReadNumberOfRequestsEntry.c)
 *     PortpReadMinimumUCXAddressEntry @ 0x1C006F8E8 (PortpReadMinimumUCXAddressEntry.c)
 *     PortpReadMaximumUCXAddressEntry @ 0x1C006F974 (PortpReadMaximumUCXAddressEntry.c)
 *     PortpReadMaximumLogicalUnitEntry @ 0x1C006FA00 (PortpReadMaximumLogicalUnitEntry.c)
 */

__int64 __fastcall PortReadRegistrySettings(HANDLE KeyHandle)
{
  _BYTE KeyValueInformation[512]; // [rsp+20h] [rbp-218h] BYREF

  PortpReadMaximumLogicalUnitEntry(KeyHandle, KeyValueInformation);
  PortpReadMaximumUCXAddressEntry(KeyHandle, KeyValueInformation);
  PortpReadMinimumUCXAddressEntry(KeyHandle, KeyValueInformation);
  PortpReadNumberOfRequestsEntry(KeyHandle, KeyValueInformation);
  return PortpReadUncachedExtAlignmentEntry(KeyHandle, KeyValueInformation);
}
