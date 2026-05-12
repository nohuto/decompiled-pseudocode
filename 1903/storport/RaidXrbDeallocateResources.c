/*
 * XREFs of RaidXrbDeallocateResources @ 0x1C0007A94
 * Callers:
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x1C0002F4C (RaidAdapterSendSrbIoControlSynchronously.c)
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C000610C (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     RaidUnitReleaseIrp @ 0x1C0007468 (RaidUnitReleaseIrp.c)
 *     RaUnitScsiFreeDumpPointersIoctl @ 0x1C0010EBC (RaUnitScsiFreeDumpPointersIoctl.c)
 *     RaAdapterStartPowerIo @ 0x1C0011454 (RaAdapterStartPowerIo.c)
 *     RaidPnPPassToMiniPort @ 0x1C00169C8 (RaidPnPPassToMiniPort.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x1C0017624 (RaUnitScsiGetDumpPointersIoctl.c)
 *     RaidAdapterSendRPMBCommandSynchronously @ 0x1C0035620 (RaidAdapterSendRPMBCommandSynchronously.c)
 *     RaidAdapterSendSrbProtocolCommandSynchronously @ 0x1C0035AF0 (RaidAdapterSendSrbProtocolCommandSynchronously.c)
 *     RaidUnitCompleteResetRequest @ 0x1C00470E0 (RaidUnitCompleteResetRequest.c)
 *     RaUnitStorageDataSetManagementIoctl @ 0x1C006B8E4 (RaUnitStorageDataSetManagementIoctl.c)
 *     RaWmiPassToMiniPort @ 0x1C006E888 (RaWmiPassToMiniPort.c)
 *     RaidAdapterDiagnosticIoctl @ 0x1C007224C (RaidAdapterDiagnosticIoctl.c)
 *     RaidAdapterFreeMiniportDumpInfo @ 0x1C0072874 (RaidAdapterFreeMiniportDumpInfo.c)
 *     RaidAdapterGetMiniportDumpInfo @ 0x1C0072B88 (RaidAdapterGetMiniportDumpInfo.c)
 * Callees:
 *     RaidDmaPutScatterGatherList @ 0x1C00073DC (RaidDmaPutScatterGatherList.c)
 *     RaidFreeRemappedScatterGatherListMdl @ 0x1C0049154 (RaidFreeRemappedScatterGatherListMdl.c)
 */

void __fastcall RaidXrbDeallocateResources(__int64 a1, int a2)
{
  KIRQL v2; // bp
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct _MDL *v7; // rcx

  if ( a1 )
  {
    v2 = 0;
    if ( *(_QWORD *)(a1 + 112) )
    {
      if ( RaidVerifierEnabled )
        RaidFreeRemappedScatterGatherListMdl();
      if ( !a2 )
        v2 = KfRaiseIrql(2u);
      RaidDmaPutScatterGatherList((__int64 *)(*(_QWORD *)(a1 + 216) + 696LL));
      v5 = *(_QWORD *)(a1 + 152);
      *(_QWORD *)(a1 + 112) = 0LL;
      *(_QWORD *)(a1 + 144) = 0LL;
      if ( v5 )
      {
        RaidDmaPutScatterGatherList((__int64 *)(*(_QWORD *)(a1 + 216) + 696LL));
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
}
