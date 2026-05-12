/*
 * XREFs of RaSrbSetMiniportContext @ 0x1C0007AA0
 * Callers:
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C0007ACC (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x1C000DE48 (RaidAdapterSendSrbIoControlSynchronously.c)
 *     RaidPowerPassToMiniPort @ 0x1C0013118 (RaidPowerPassToMiniPort.c)
 *     RaAdapterStartPowerIo @ 0x1C001327C (RaAdapterStartPowerIo.c)
 *     RaidPnPPassToMiniPort @ 0x1C00144F4 (RaidPnPPassToMiniPort.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x1C00149DC (RaUnitScsiGetDumpPointersIoctl.c)
 *     RaidAdapterSendRPMBCommandSynchronously @ 0x1C00399A4 (RaidAdapterSendRPMBCommandSynchronously.c)
 *     RaidAdapterSendSrbProtocolCommandSynchronously @ 0x1C0039E74 (RaidAdapterSendSrbProtocolCommandSynchronously.c)
 *     RaUnitStorageDataSetManagementIoctl @ 0x1C006AF84 (RaUnitStorageDataSetManagementIoctl.c)
 *     RaWmiPassToMiniPort @ 0x1C006FFF4 (RaWmiPassToMiniPort.c)
 *     RaidAdapterDiagnosticIoctl @ 0x1C0072E30 (RaidAdapterDiagnosticIoctl.c)
 *     RaidAdapterGetMiniportDumpInfo @ 0x1C0073798 (RaidAdapterGetMiniportDumpInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaSrbSetMiniportContext(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = (*(_DWORD *)(a1 + 460) + 7) & 0xFFFFFFF8;
  if ( *(_BYTE *)(a2 + 2) == 40 )
  {
    if ( (_DWORD)result )
      *(_QWORD *)(a2 + 104) = a3;
  }
  else if ( (_DWORD)result )
  {
    *(_QWORD *)(a2 + 56) = a3;
  }
  return result;
}
