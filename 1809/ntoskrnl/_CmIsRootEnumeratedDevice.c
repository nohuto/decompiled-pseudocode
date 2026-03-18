/*
 * XREFs of _CmIsRootEnumeratedDevice @ 0x14059C4CC
 * Callers:
 *     PiControlGetUserFlagsFromDeviceNode @ 0x14059C36C (PiControlGetUserFlagsFromDeviceNode.c)
 *     PiPnpRtlSetObjectProperty @ 0x1406E5270 (PiPnpRtlSetObjectProperty.c)
 *     PiDevCfgProcessDevice @ 0x1406F4444 (PiDevCfgProcessDevice.c)
 *     PiPnpRtlSetDeviceRegProperty @ 0x1406F696C (PiPnpRtlSetDeviceRegProperty.c)
 *     PiDevCfgMigrateDevice @ 0x140700D30 (PiDevCfgMigrateDevice.c)
 *     PiDevCfgCheckDeviceNeedsUpdate @ 0x14082B57C (PiDevCfgCheckDeviceNeedsUpdate.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x14082C68C (PiDevCfgFindDeviceMigrationNode.c)
 *     PiCMDeleteDevice @ 0x1408371A8 (PiCMDeleteDevice.c)
 *     PipResetDevice @ 0x1409F5568 (PipResetDevice.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140015EB0 (RtlInitUnicodeStringEx.c)
 *     RtlPrefixUnicodeString @ 0x1405C7460 (RtlPrefixUnicodeString.c)
 */

BOOLEAN __fastcall CmIsRootEnumeratedDevice(PCWSTR SourceString)
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  if ( RtlInitUnicodeStringEx(&DestinationString, SourceString) < 0 )
    return 0;
  else
    return RtlPrefixUnicodeString(&stru_14034F468, &DestinationString, 1u);
}
