/*
 * XREFs of StorFreeContiguousIoResources @ 0x1C00064F0
 * Callers:
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x1C0002F30 (RaidAdapterSendSrbIoControlSynchronously.c)
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C000615C (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     RaUnitScsiFreeDumpPointersIoctl @ 0x1C001105C (RaUnitScsiFreeDumpPointersIoctl.c)
 *     RaidUnitFreeResources @ 0x1C00124B4 (RaidUnitFreeResources.c)
 *     RaidPnPPassToMiniPort @ 0x1C0016918 (RaidPnPPassToMiniPort.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x1C0017634 (RaUnitScsiGetDumpPointersIoctl.c)
 *     RaidAdapterSendRPMBCommandSynchronously @ 0x1C0036A18 (RaidAdapterSendRPMBCommandSynchronously.c)
 *     RaidAdapterSendSrbProtocolCommandSynchronously @ 0x1C0036EE8 (RaidAdapterSendSrbProtocolCommandSynchronously.c)
 *     RaidDeleteAdapter @ 0x1C0037AAC (RaidDeleteAdapter.c)
 *     RaidUnitCompleteResetRequest @ 0x1C0048580 (RaidUnitCompleteResetRequest.c)
 *     RaFreeRaidResources @ 0x1C004AA04 (RaFreeRaidResources.c)
 *     RaUnitStorageDataSetManagementIoctl @ 0x1C006C7E4 (RaUnitStorageDataSetManagementIoctl.c)
 *     RaWmiPassToMiniPort @ 0x1C006FAE8 (RaWmiPassToMiniPort.c)
 *     RaidAdapterDiagnosticIoctl @ 0x1C0073120 (RaidAdapterDiagnosticIoctl.c)
 *     RaidAdapterFreeMiniportDumpInfo @ 0x1C0073748 (RaidAdapterFreeMiniportDumpInfo.c)
 *     RaidAdapterGetMiniportDumpInfo @ 0x1C0073A5C (RaidAdapterGetMiniportDumpInfo.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024A40 (_guard_dispatch_icall_nop.c)
 */

void __fastcall StorFreeContiguousIoResources(__int64 a1, __int64 a2)
{
  char v2; // [rsp+20h] [rbp-18h]

  if ( *(_BYTE *)(a1 + 704) && *(_DWORD *)(a1 + 724) == 3 )
  {
    v2 = 1;
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, char))(*(_QWORD *)(*(_QWORD *)(a1 + 696) + 8LL) + 24LL))(
      *(_QWORD *)(a1 + 696),
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
