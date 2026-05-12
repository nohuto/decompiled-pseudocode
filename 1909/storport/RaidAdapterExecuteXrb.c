/*
 * XREFs of RaidAdapterExecuteXrb @ 0x1C00034E0
 * Callers:
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x1C0002F30 (RaidAdapterSendSrbIoControlSynchronously.c)
 *     RaidAdapterRaiseIrqlAndExecuteXrb @ 0x1C0003484 (RaidAdapterRaiseIrqlAndExecuteXrb.c)
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C000615C (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     RaUnitScsiFreeDumpPointersIoctl @ 0x1C001105C (RaUnitScsiFreeDumpPointersIoctl.c)
 *     RaAdapterStartPowerIo @ 0x1C00115F4 (RaAdapterStartPowerIo.c)
 *     RaidPnPPassToMiniPort @ 0x1C0016918 (RaidPnPPassToMiniPort.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x1C0017634 (RaUnitScsiGetDumpPointersIoctl.c)
 *     RaidAdapterProgramCryptoKeyRoutine @ 0x1C0035680 (RaidAdapterProgramCryptoKeyRoutine.c)
 *     RaidAdapterSendRPMBCommandSynchronously @ 0x1C0036A18 (RaidAdapterSendRPMBCommandSynchronously.c)
 *     RaidAdapterSendSrbProtocolCommandSynchronously @ 0x1C0036EE8 (RaidAdapterSendSrbProtocolCommandSynchronously.c)
 *     RaUnitStartResetIo @ 0x1C0046E0C (RaUnitStartResetIo.c)
 *     RaUnitStorageDataSetManagementIoctl @ 0x1C006C7E4 (RaUnitStorageDataSetManagementIoctl.c)
 *     RaWmiPassToMiniPort @ 0x1C006FAE8 (RaWmiPassToMiniPort.c)
 *     RaidAdapterDiagnosticIoctl @ 0x1C0073120 (RaidAdapterDiagnosticIoctl.c)
 *     RaidAdapterFreeMiniportDumpInfo @ 0x1C0073748 (RaidAdapterFreeMiniportDumpInfo.c)
 *     RaidAdapterGetMiniportDumpInfo @ 0x1C0073A5C (RaidAdapterGetMiniportDumpInfo.c)
 * Callees:
 *     RaidAdapterPostScatterGatherExecute @ 0x1C00046A0 (RaidAdapterPostScatterGatherExecute.c)
 *     RaidAdapterScatterGatherExecute @ 0x1C000510C (RaidAdapterScatterGatherExecute.c)
 *     RaidDmaFlushDmaBuffers @ 0x1C00226AC (RaidDmaFlushDmaBuffers.c)
 *     RaidAdapterScatterGatherExecuteBidirectionalRequest @ 0x1C003646C (RaidAdapterScatterGatherExecuteBidirectionalRequest.c)
 */

__int64 __fastcall RaidAdapterExecuteXrb(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v5; // rax
  int v6; // edi
  __int64 v8; // rdx
  __int64 v9; // rbp
  bool v10; // di
  __int64 v11; // rdx

  if ( !*(_BYTE *)(a1 + 4450) )
    return RaidAdapterPostScatterGatherExecute(a1, a2);
  v5 = a2[21];
  if ( *(_BYTE *)(v5 + 2) == 40 )
    v6 = *(_DWORD *)(v5 + 24);
  else
    v6 = *(_DWORD *)(v5 + 12);
  if ( (*(_BYTE *)(a1 + 4451) & 4) != 0 )
  {
    v8 = a2[13];
    v9 = a1 + 696;
    v10 = (v6 & 0x40) != 0;
    if ( v8 )
    {
      LOBYTE(a3) = v10;
      RaidDmaFlushDmaBuffers(a1 + 696, v8, a3);
    }
    v11 = a2[17];
    if ( v11 )
    {
      LOBYTE(a3) = v10;
      RaidDmaFlushDmaBuffers(v9, v11, a3);
    }
    return RaidAdapterPostScatterGatherExecute(a1, a2);
  }
  if ( !a2[17] )
  {
    if ( (v6 & 0xC0) != 0 )
      return RaidAdapterScatterGatherExecute();
    return RaidAdapterPostScatterGatherExecute(a1, a2);
  }
  return RaidAdapterScatterGatherExecuteBidirectionalRequest();
}
