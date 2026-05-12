/*
 * XREFs of StorFreeContiguousIoResources @ 0x1C0007F20
 * Callers:
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C0007ACC (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x1C000DE48 (RaidAdapterSendSrbIoControlSynchronously.c)
 *     RaidPnPPassToMiniPort @ 0x1C00144F4 (RaidPnPPassToMiniPort.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x1C00149DC (RaUnitScsiGetDumpPointersIoctl.c)
 *     RaUnitScsiFreeDumpPointersIoctl @ 0x1C0015ACC (RaUnitScsiFreeDumpPointersIoctl.c)
 *     RaidUnitFreeResources @ 0x1C001A4C8 (RaidUnitFreeResources.c)
 *     RaidAdapterSendRPMBCommandSynchronously @ 0x1C00399A4 (RaidAdapterSendRPMBCommandSynchronously.c)
 *     RaidAdapterSendSrbProtocolCommandSynchronously @ 0x1C0039E74 (RaidAdapterSendSrbProtocolCommandSynchronously.c)
 *     RaidDeleteAdapter @ 0x1C003A9C4 (RaidDeleteAdapter.c)
 *     RaidUnitCompleteResetRequest @ 0x1C0049A50 (RaidUnitCompleteResetRequest.c)
 *     RaFreeRaidResources @ 0x1C004BFF8 (RaFreeRaidResources.c)
 *     RaUnitStorageDataSetManagementIoctl @ 0x1C006AF84 (RaUnitStorageDataSetManagementIoctl.c)
 *     RaWmiPassToMiniPort @ 0x1C006FFF4 (RaWmiPassToMiniPort.c)
 *     RaidAdapterDiagnosticIoctl @ 0x1C0072E30 (RaidAdapterDiagnosticIoctl.c)
 *     RaidAdapterFreeMiniportDumpInfo @ 0x1C0073478 (RaidAdapterFreeMiniportDumpInfo.c)
 *     RaidAdapterGetMiniportDumpInfo @ 0x1C0073798 (RaidAdapterGetMiniportDumpInfo.c)
 *     RaidAdapterReleaseResources @ 0x1C0073DA0 (RaidAdapterReleaseResources.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002C060 (_guard_dispatch_icall_nop.c)
 */

void __fastcall StorFreeContiguousIoResources(__int64 a1, __int64 a2)
{
  char v2; // [rsp+20h] [rbp-18h]

  if ( *(_BYTE *)(a1 + 728) && *(_DWORD *)(a1 + 748) == 3 )
  {
    v2 = 1;
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, char))(*(_QWORD *)(*(_QWORD *)(a1 + 720) + 8LL) + 24LL))(
      *(_QWORD *)(a1 + 720),
      *(unsigned int *)(a2 + 16),
      *(_QWORD *)(a2 + 24),
      a2,
      v2);
  }
  else
  {
    MmFreeContiguousMemory((PVOID)a2);
  }
}
