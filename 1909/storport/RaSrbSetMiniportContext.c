/*
 * XREFs of RaSrbSetMiniportContext @ 0x1C0006130
 * Callers:
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x1C0002F30 (RaidAdapterSendSrbIoControlSynchronously.c)
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C000615C (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     RaidPowerPassToMiniPort @ 0x1C001148C (RaidPowerPassToMiniPort.c)
 *     RaAdapterStartPowerIo @ 0x1C00115F4 (RaAdapterStartPowerIo.c)
 *     RaidPnPPassToMiniPort @ 0x1C0016918 (RaidPnPPassToMiniPort.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x1C0017634 (RaUnitScsiGetDumpPointersIoctl.c)
 *     RaidAdapterSendRPMBCommandSynchronously @ 0x1C0036A18 (RaidAdapterSendRPMBCommandSynchronously.c)
 *     RaidAdapterSendSrbProtocolCommandSynchronously @ 0x1C0036EE8 (RaidAdapterSendSrbProtocolCommandSynchronously.c)
 *     RaUnitStorageDataSetManagementIoctl @ 0x1C006C7E4 (RaUnitStorageDataSetManagementIoctl.c)
 *     RaWmiPassToMiniPort @ 0x1C006FAE8 (RaWmiPassToMiniPort.c)
 *     RaidAdapterDiagnosticIoctl @ 0x1C0073120 (RaidAdapterDiagnosticIoctl.c)
 *     RaidAdapterGetMiniportDumpInfo @ 0x1C0073A5C (RaidAdapterGetMiniportDumpInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaSrbSetMiniportContext(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = (unsigned int)(*(_DWORD *)(a1 + 444) + 7);
  if ( (result & 0xFFFFFFF8) != 0 )
  {
    if ( *(_BYTE *)(a2 + 2) == 40 )
      *(_QWORD *)(a2 + 104) = a3;
    else
      *(_QWORD *)(a2 + 56) = a3;
  }
  return result;
}
