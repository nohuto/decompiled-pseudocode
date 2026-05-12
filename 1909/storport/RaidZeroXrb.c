/*
 * XREFs of RaidZeroXrb @ 0x1C000B624
 * Callers:
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x1C0002F30 (RaidAdapterSendSrbIoControlSynchronously.c)
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C000615C (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     StorRemoveIoGatewayItem @ 0x1C000A760 (StorRemoveIoGatewayItem.c)
 *     StorSubmitIoGatewayItem @ 0x1C000B558 (StorSubmitIoGatewayItem.c)
 *     RaUnitScsiFreeDumpPointersIoctl @ 0x1C001105C (RaUnitScsiFreeDumpPointersIoctl.c)
 *     RaAdapterStartPowerIo @ 0x1C00115F4 (RaAdapterStartPowerIo.c)
 *     RaidUnitAllocateResources @ 0x1C00154BC (RaidUnitAllocateResources.c)
 *     RaidAdapterRestartQueues @ 0x1C0016154 (RaidAdapterRestartQueues.c)
 *     RaidPnPPassToMiniPort @ 0x1C0016918 (RaidPnPPassToMiniPort.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x1C0017634 (RaUnitScsiGetDumpPointersIoctl.c)
 *     RaidAdapterSendRPMBCommandSynchronously @ 0x1C0036A18 (RaidAdapterSendRPMBCommandSynchronously.c)
 *     RaidAdapterSendSrbProtocolCommandSynchronously @ 0x1C0036EE8 (RaidAdapterSendSrbProtocolCommandSynchronously.c)
 *     RaidUnitSubmitResetRequest @ 0x1C0049C88 (RaidUnitSubmitResetRequest.c)
 *     RaUnitStorageDataSetManagementIoctl @ 0x1C006C7E4 (RaUnitStorageDataSetManagementIoctl.c)
 *     RaWmiPassToMiniPort @ 0x1C006FAE8 (RaWmiPassToMiniPort.c)
 *     RaidAdapterDiagnosticIoctl @ 0x1C0073120 (RaidAdapterDiagnosticIoctl.c)
 *     RaidAdapterFreeMiniportDumpInfo @ 0x1C0073748 (RaidAdapterFreeMiniportDumpInfo.c)
 *     RaidAdapterGetMiniportDumpInfo @ 0x1C0073A5C (RaidAdapterGetMiniportDumpInfo.c)
 * Callees:
 *     memset @ 0x1C0024DC0 (memset.c)
 */

char __fastcall RaidZeroXrb(__int64 a1, __int64 a2, unsigned int a3, void *a4)
{
  __int64 v4; // rdi
  char v6; // al
  char result; // al

  *(_BYTE *)(a1 + 16) &= 0x9Cu;
  v4 = *(_QWORD *)(a1 + 784);
  *(_WORD *)(a1 + 18) = -1;
  v6 = *(_BYTE *)(a1 + 16);
  *(_DWORD *)a1 = 523124044;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_BYTE *)(a1 + 20) = -1;
  *(_DWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 152) = 0LL;
  *(_QWORD *)(a1 + 144) = 0LL;
  *(_QWORD *)(a1 + 192) = 0LL;
  *(_QWORD *)(a1 + 160) = 0LL;
  *(_QWORD *)(a1 + 168) = 0LL;
  *(_QWORD *)(a1 + 216) = 0LL;
  *(_QWORD *)(a1 + 224) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_QWORD *)(a1 + 696) = 0LL;
  *(_QWORD *)(a1 + 704) = 0LL;
  *(_QWORD *)(a1 + 712) = 0LL;
  *(_QWORD *)(a1 + 720) = 0LL;
  *(_DWORD *)(a1 + 744) = a3;
  *(_QWORD *)(a1 + 760) = a4;
  if ( a4 )
  {
    memset(a4, 0, a3);
    v6 = *(_BYTE *)(a1 + 16);
  }
  result = v6 & 0x7F;
  *(_QWORD *)(a1 + 768) = 0LL;
  *(_BYTE *)(a1 + 17) &= 0xF0u;
  *(_DWORD *)(a1 + 748) = 0;
  *(_DWORD *)(a1 + 776) = 0;
  *(_BYTE *)(a1 + 16) = result;
  *(_QWORD *)(a1 + 784) = v4;
  return result;
}
