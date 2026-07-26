/*
 * XREFs of ndisMIsPowerSynchronizedDatapathRequired @ 0x1C002FB1C
 * Callers:
 *     ?ndisSetMiniportHandlers@@_Y2PAGENPNP@@AXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C012F354 (-ndisSetMiniportHandlers@@_Y2PAGENPNP@@AXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall ndisMIsPowerSynchronizedDatapathRequired(_DWORD *a1)
{
  return (a1[30] & 0x80u) == 0
      && ((a1[978] & 0x3000) == 0x2000 || LODWORD(WPP_MAIN_CB.Queue.ListEntry.Flink) && (int)a1[468] < 0);
}
