/*
 * XREFs of ndisUpdateNoPauseOnSuspend @ 0x1C00271E4
 * Callers:
 *     NdisMSetMiniportAttributes @ 0x1C002F6A0 (NdisMSetMiniportAttributes.c)
 *     ?ndisMRecalculateMiniportStackAfterBinding@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C01042E0 (-ndisMRecalculateMiniportStackAfterBinding@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     NdisNblTrackerDeregisterComponent @ 0x1C0022950 (NdisNblTrackerDeregisterComponent.c)
 *     NdisNblTrackerRegisterComponent @ 0x1C0026070 (NdisNblTrackerRegisterComponent.c)
 */

void __fastcall ndisUpdateNoPauseOnSuspend(__int64 a1)
{
  unsigned __int8 v2; // al

  if ( *(int *)(a1 + 1872) < 0
    && ((v2 = *(_BYTE *)(a1 + 3148), v2 > 6u) || v2 == 6 && *(_BYTE *)(a1 + 3149) >= 0x1Eu)
    && LODWORD(WPP_MAIN_CB.Queue.ListEntry.Flink) )
  {
    *(_DWORD *)(a1 + 2684) |= 0x80u;
    if ( !*(_QWORD *)(a1 + 3904) )
      *(_QWORD *)(a1 + 3904) = NdisNblTrackerRegisterComponent(3, a1, *(_QWORD *)(a1 + 3856));
  }
  else
  {
    *(_DWORD *)(a1 + 2684) &= ~0x80u;
    NdisNblTrackerDeregisterComponent(*(_QWORD *)(a1 + 3904));
    *(_QWORD *)(a1 + 3904) = 0LL;
  }
}
