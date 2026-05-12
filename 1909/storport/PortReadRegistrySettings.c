/*
 * XREFs of PortReadRegistrySettings @ 0x1C00705C0
 * Callers:
 *     PortGetRegistrySettings @ 0x1C006E5C0 (PortGetRegistrySettings.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0023420 (__security_check_cookie.c)
 *     PortpReadUncachedExtAlignmentEntry @ 0x1C007065C (PortpReadUncachedExtAlignmentEntry.c)
 *     PortpReadNumberOfRequestsEntry @ 0x1C00706E8 (PortpReadNumberOfRequestsEntry.c)
 *     PortpReadMinimumUCXAddressEntry @ 0x1C0070774 (PortpReadMinimumUCXAddressEntry.c)
 *     PortpReadMaximumUCXAddressEntry @ 0x1C0070800 (PortpReadMaximumUCXAddressEntry.c)
 *     PortpReadMaximumLogicalUnitEntry @ 0x1C007088C (PortpReadMaximumLogicalUnitEntry.c)
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
