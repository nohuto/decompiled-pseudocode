/*
 * XREFs of RaidXrbDeallocateResources @ 0x1C0008CA8
 * Callers:
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C0007ACC (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     RaidUnitReleaseIrp @ 0x1C0008DD4 (RaidUnitReleaseIrp.c)
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x1C000DE48 (RaidAdapterSendSrbIoControlSynchronously.c)
 *     RaAdapterStartPowerIo @ 0x1C001327C (RaAdapterStartPowerIo.c)
 *     RaidPnPPassToMiniPort @ 0x1C00144F4 (RaidPnPPassToMiniPort.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x1C00149DC (RaUnitScsiGetDumpPointersIoctl.c)
 *     RaUnitScsiFreeDumpPointersIoctl @ 0x1C0015ACC (RaUnitScsiFreeDumpPointersIoctl.c)
 *     RaidAdapterSendRPMBCommandSynchronously @ 0x1C00399A4 (RaidAdapterSendRPMBCommandSynchronously.c)
 *     RaidAdapterSendSrbProtocolCommandSynchronously @ 0x1C0039E74 (RaidAdapterSendSrbProtocolCommandSynchronously.c)
 *     RaidUnitCompleteResetRequest @ 0x1C0049A50 (RaidUnitCompleteResetRequest.c)
 *     RaUnitStorageDataSetManagementIoctl @ 0x1C006AF84 (RaUnitStorageDataSetManagementIoctl.c)
 *     RaWmiPassToMiniPort @ 0x1C006FFF4 (RaWmiPassToMiniPort.c)
 *     RaidAdapterDiagnosticIoctl @ 0x1C0072E30 (RaidAdapterDiagnosticIoctl.c)
 *     RaidAdapterFreeMiniportDumpInfo @ 0x1C0073478 (RaidAdapterFreeMiniportDumpInfo.c)
 *     RaidAdapterGetMiniportDumpInfo @ 0x1C0073798 (RaidAdapterGetMiniportDumpInfo.c)
 * Callees:
 *     RaidDmaPutScatterGatherList @ 0x1C0008C1C (RaidDmaPutScatterGatherList.c)
 *     RaidFreeRemappedScatterGatherListMdl @ 0x1C004B8EC (RaidFreeRemappedScatterGatherListMdl.c)
 */

void __fastcall RaidXrbDeallocateResources(__int64 a1, int a2)
{
  KIRQL v2; // bp
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct _MDL *v7; // rcx

  v2 = 0;
  if ( *(_QWORD *)(a1 + 112) )
  {
    if ( RaidVerifierEnabled )
      RaidFreeRemappedScatterGatherListMdl();
    if ( !a2 )
      v2 = KfRaiseIrql(2u);
    RaidDmaPutScatterGatherList((__int64 *)(*(_QWORD *)(a1 + 216) + 720LL));
    v5 = *(_QWORD *)(a1 + 152);
    *(_QWORD *)(a1 + 112) = 0LL;
    *(_QWORD *)(a1 + 144) = 0LL;
    if ( v5 )
    {
      RaidDmaPutScatterGatherList((__int64 *)(*(_QWORD *)(a1 + 216) + 720LL));
      *(_QWORD *)(a1 + 152) = 0LL;
    }
    if ( !a2 )
      KeLowerIrql(v2);
  }
  v6 = *(_QWORD *)(a1 + 104);
  if ( v6 && (*(_BYTE *)(a1 + 16) & 1) != 0 )
  {
    if ( (*(_BYTE *)(v6 + 10) & 2) != 0 )
    {
      MmUnlockPages((PMDL)v6);
      v6 = *(_QWORD *)(a1 + 104);
    }
    IoFreeMdl((PMDL)v6);
    *(_QWORD *)(a1 + 104) = 0LL;
    *(_BYTE *)(a1 + 16) &= ~1u;
  }
  v7 = *(struct _MDL **)(a1 + 136);
  if ( v7 )
  {
    MmUnlockPages(v7);
    IoFreeMdl(*(PMDL *)(a1 + 136));
    *(_QWORD *)(a1 + 136) = 0LL;
  }
}
