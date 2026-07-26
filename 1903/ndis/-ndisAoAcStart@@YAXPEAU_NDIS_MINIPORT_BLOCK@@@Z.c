/*
 * XREFs of ?ndisAoAcStart@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C011C5D4
 * Callers:
 *     NdisWdfPnpPowerEventHandler @ 0x1C009EEA0 (NdisWdfPnpPowerEventHandler.c)
 *     ?ndisMExitInitMode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z @ 0x1C010A270 (-ndisMExitInitMode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z.c)
 * Callees:
 *     ?ndisAoAcClearStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z @ 0x1C00BA8F0 (-ndisAoAcClearStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z.c)
 *     ?ndisAoAcTakeInternalRef@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00BB31C (-ndisAoAcTakeInternalRef@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

void __fastcall ndisAoAcStart(struct _NDIS_MINIPORT_BLOCK *a1)
{
  _NDIS_MINIPORT_AOAC *AoAc; // r9
  unsigned __int64 v3; // r8
  bool v4; // cf

  AoAc = a1->AoAc;
  v3 = MEMORY[0xFFFFF78000000008];
  v4 = AoAc->IsInCsResiliency != 0;
  AoAc->StartTime = MEMORY[0xFFFFF78000000008];
  AoAc->CurrentActiveStartTime = v3;
  AoAc->TakeStartToRefTime = 1;
  AoAc->CurrentCsResiliencyStartTime = v3 & -(__int64)v4;
  if ( a1->AoAc )
  {
    ndisAoAcClearStop(a1, NdisSSNotStarted);
    if ( a1->AoAc )
    {
      if ( (a1->PMHardwareCapabilities.Flags & 6) != 0 && a1->SelectiveSuspend && ndisPowerRefManagementState == 1 )
        ndisAoAcTakeInternalRef(a1);
    }
  }
}
