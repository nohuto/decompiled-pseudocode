/*
 * XREFs of ndisUpdateNoPauseOnSuspend @ 0x1C00C30B8
 * Callers:
 *     ?ndisMRecalculateMiniportStackAfterBinding@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00C3090 (-ndisMRecalculateMiniportStackAfterBinding@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     NdisMSetMiniportAttributes @ 0x1C00C95F0 (NdisMSetMiniportAttributes.c)
 * Callees:
 *     NdisNblTrackerDeregisterComponent @ 0x1C0014880 (NdisNblTrackerDeregisterComponent.c)
 *     NdisNblTrackerRegisterComponent @ 0x1C001C360 (NdisNblTrackerRegisterComponent.c)
 */

void __fastcall ndisUpdateNoPauseOnSuspend(__int64 a1)
{
  unsigned __int8 v2; // al

  if ( *(int *)(a1 + 1880) < 0
    && ((v2 = *(_BYTE *)(a1 + 3164), v2 > 6u) || v2 == 6 && *(_BYTE *)(a1 + 3165) >= 0x1Eu)
    && LODWORD(WPP_MAIN_CB.DeviceExtension) )
  {
    *(_DWORD *)(a1 + 2700) |= 0x80u;
    if ( !*(_QWORD *)(a1 + 3936) )
      *(_QWORD *)(a1 + 3936) = NdisNblTrackerRegisterComponent(3, a1, *(_QWORD *)(a1 + 3888));
  }
  else
  {
    *(_DWORD *)(a1 + 2700) &= ~0x80u;
    NdisNblTrackerDeregisterComponent(*(_QWORD *)(a1 + 3936));
    *(_QWORD *)(a1 + 3936) = 0LL;
  }
}
