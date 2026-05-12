/*
 * XREFs of RaidSrbStatusToNtStatus @ 0x1C000B9D8
 * Callers:
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x1C0002F30 (RaidAdapterSendSrbIoControlSynchronously.c)
 *     RaUnitStartIo @ 0x1C00035A0 (RaUnitStartIo.c)
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C000615C (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     RaUnitAsyncError @ 0x1C000B754 (RaUnitAsyncError.c)
 *     RaidBusEnumeratorProcessAtaInformation @ 0x1C00102D0 (RaidBusEnumeratorProcessAtaInformation.c)
 *     RaUnitScsiFreeDumpPointersIoctl @ 0x1C001105C (RaUnitScsiFreeDumpPointersIoctl.c)
 *     RaidPnPPassToMiniPort @ 0x1C0016918 (RaidPnPPassToMiniPort.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x1C0017634 (RaUnitScsiGetDumpPointersIoctl.c)
 *     RaidBusEnumeratorProcess1667DeviceInquiry @ 0x1C0018130 (RaidBusEnumeratorProcess1667DeviceInquiry.c)
 *     RaidBusEnumeratorProcessInquiry @ 0x1C0018370 (RaidBusEnumeratorProcessInquiry.c)
 *     RaidBusEnumeratorProcessSupportedPages @ 0x1C00183C0 (RaidBusEnumeratorProcessSupportedPages.c)
 *     RaidBusEnumeratorProcessDeviceId @ 0x1C0018450 (RaidBusEnumeratorProcessDeviceId.c)
 *     RaidBusEnumeratorProcessSerialNumber @ 0x1C0018520 (RaidBusEnumeratorProcessSerialNumber.c)
 *     RaidBusEnumeratorProcessProbeLunZero @ 0x1C0023360 (RaidBusEnumeratorProcessProbeLunZero.c)
 *     RaidAdapterSendRPMBCommandSynchronously @ 0x1C0036A18 (RaidAdapterSendRPMBCommandSynchronously.c)
 *     RaidAdapterSendSrbProtocolCommandSynchronously @ 0x1C0036EE8 (RaidAdapterSendSrbProtocolCommandSynchronously.c)
 *     RaidBusEnumeratorProcessBlockDeviceCharacteristics @ 0x1C0039030 (RaidBusEnumeratorProcessBlockDeviceCharacteristics.c)
 *     RaidCancelIrp @ 0x1C00443A4 (RaidCancelIrp.c)
 *     RaidUnitCompleteResetRequest @ 0x1C0048580 (RaidUnitCompleteResetRequest.c)
 *     RaUnitStorageDataSetManagementIoctl @ 0x1C006C7E4 (RaUnitStorageDataSetManagementIoctl.c)
 *     RaWmiPassToMiniPort @ 0x1C006FAE8 (RaWmiPassToMiniPort.c)
 *     RaidAdapterDiagnosticIoctl @ 0x1C0073120 (RaidAdapterDiagnosticIoctl.c)
 *     RaidAdapterFreeMiniportDumpInfo @ 0x1C0073748 (RaidAdapterFreeMiniportDumpInfo.c)
 *     RaidAdapterGetMiniportDumpInfo @ 0x1C0073A5C (RaidAdapterGetMiniportDumpInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaidSrbStatusToNtStatus(char a1)
{
  unsigned int v1; // edx
  unsigned int v2; // edx
  unsigned int v3; // edx
  unsigned int v4; // edx
  unsigned int v5; // edx
  unsigned int v6; // edx

  v1 = a1 & 0x3F;
  if ( v1 > 0x11 )
  {
    if ( v1 == 18 )
      return 2147483653LL;
    if ( v1 != 21 )
    {
      if ( v1 == 22 )
        return 3221225473LL;
      if ( v1 <= 0x1F )
        return 3221225861LL;
      if ( v1 <= 0x21 )
        return 3221225664LL;
      if ( v1 != 34 )
      {
        if ( v1 != 56 )
          return 3221225861LL;
        return 3221226762LL;
      }
    }
    return 3221225488LL;
  }
  if ( v1 == 17 )
    return 3221225664LL;
  v2 = v1 - 1;
  if ( !v2 )
    return 0LL;
  v3 = v2 - 4;
  if ( !v3 )
    return 2147483665LL;
  v4 = v3 - 3;
  if ( !v4 )
    return 3221225664LL;
  v5 = v4 - 1;
  if ( v5 )
  {
    v6 = v5 - 1;
    if ( !v6 )
      return 3221225629LL;
    if ( v6 != 1 )
      return 3221225861LL;
  }
  return 3221225653LL;
}
