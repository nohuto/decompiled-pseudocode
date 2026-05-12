/*
 * XREFs of PortReadRegistrySettings @ 0x1C006BFA4
 * Callers:
 *     PortGetRegistrySettings @ 0x1C006D304 (PortGetRegistrySettings.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0026060 (__security_check_cookie.c)
 *     PortpReadUncachedExtAlignmentEntry @ 0x1C006C040 (PortpReadUncachedExtAlignmentEntry.c)
 *     PortpReadNumberOfRequestsEntry @ 0x1C006C0C0 (PortpReadNumberOfRequestsEntry.c)
 *     PortpReadMinimumUCXAddressEntry @ 0x1C006C140 (PortpReadMinimumUCXAddressEntry.c)
 *     PortpReadMaximumUCXAddressEntry @ 0x1C006C1C4 (PortpReadMaximumUCXAddressEntry.c)
 *     PortpReadMaximumLogicalUnitEntry @ 0x1C006C244 (PortpReadMaximumLogicalUnitEntry.c)
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
