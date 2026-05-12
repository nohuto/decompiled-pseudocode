/*
 * XREFs of RaidSrbStatusToNtStatus @ 0x1C000DC5C
 * Callers:
 *     RaUnitStartIo @ 0x1C0003430 (RaUnitStartIo.c)
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C0007ACC (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     RaUnitAsyncError @ 0x1C000D9D4 (RaUnitAsyncError.c)
 *     RaidBusEnumeratorProcessAtaInformation @ 0x1C0012090 (RaidBusEnumeratorProcessAtaInformation.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x1C00149DC (RaUnitScsiGetDumpPointersIoctl.c)
 *     RaidBusEnumeratorProcess1667DeviceInquiry @ 0x1C00159F0 (RaidBusEnumeratorProcess1667DeviceInquiry.c)
 *     RaidBusEnumeratorProcessInquiry @ 0x1C0015A80 (RaidBusEnumeratorProcessInquiry.c)
 *     RaUnitScsiFreeDumpPointersIoctl @ 0x1C0015ACC (RaUnitScsiFreeDumpPointersIoctl.c)
 *     RaidBusEnumeratorProcessSupportedPages @ 0x1C0015EF0 (RaidBusEnumeratorProcessSupportedPages.c)
 *     RaidBusEnumeratorProcessDeviceId @ 0x1C0015F80 (RaidBusEnumeratorProcessDeviceId.c)
 *     RaidBusEnumeratorProcessSerialNumber @ 0x1C0016000 (RaidBusEnumeratorProcessSerialNumber.c)
 *     RaidBusEnumeratorProcessProbeLunZero @ 0x1C0026010 (RaidBusEnumeratorProcessProbeLunZero.c)
 *     RaidAdapterSendRPMBCommandSynchronously @ 0x1C00399A4 (RaidAdapterSendRPMBCommandSynchronously.c)
 *     RaidBusEnumeratorProcessBlockDeviceCharacteristics @ 0x1C003BD70 (RaidBusEnumeratorProcessBlockDeviceCharacteristics.c)
 *     RaidCancelIrp @ 0x1C0045D1C (RaidCancelIrp.c)
 *     RaidUnitCompleteResetRequest @ 0x1C0049A50 (RaidUnitCompleteResetRequest.c)
 *     RaUnitStorageDataSetManagementIoctl @ 0x1C006AF84 (RaUnitStorageDataSetManagementIoctl.c)
 *     RaWmiPassToMiniPort @ 0x1C006FFF4 (RaWmiPassToMiniPort.c)
 *     RaidAdapterDiagnosticIoctl @ 0x1C0072E30 (RaidAdapterDiagnosticIoctl.c)
 *     RaidAdapterFreeMiniportDumpInfo @ 0x1C0073478 (RaidAdapterFreeMiniportDumpInfo.c)
 *     RaidAdapterGetMiniportDumpInfo @ 0x1C0073798 (RaidAdapterGetMiniportDumpInfo.c)
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
