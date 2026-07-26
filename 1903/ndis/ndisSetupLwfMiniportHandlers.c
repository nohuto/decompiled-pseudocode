/*
 * XREFs of ndisSetupLwfMiniportHandlers @ 0x1C00240B4
 * Callers:
 *     ?ndisSetupNdis6OpenHandlers@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0023FB0 (-ndisSetupNdis6OpenHandlers@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAU_NDIS_MINIPO.c)
 *     ndisHandleFilterHandlersChange @ 0x1C0029CCC (ndisHandleFilterHandlersChange.c)
 *     NdisFSetAttributes @ 0x1C003D7B0 (NdisFSetAttributes.c)
 *     ndisFilterAttachCleanUp @ 0x1C008F4AC (ndisFilterAttachCleanUp.c)
 *     ?ndisSetMiniportHandlers@@_Y2PAGENPNP@@AXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C012F354 (-ndisSetMiniportHandlers@@_Y2PAGENPNP@@AXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z @ 0x1C012FE70 (-ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     ?ndisSetupUpwardHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0024170 (-ndisSetupUpwardHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisSetupDownwardHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00244D4 (-ndisSetupDownwardHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisSetupNoFilterHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C003CE00 (-ndisSetupNoFilterHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

void __fastcall ndisSetupLwfMiniportHandlers(struct _NDIS_MINIPORT_BLOCK *a1)
{
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      1,
      70,
      (struct _GUID *)&WPP_6ee99368f40c34c231f69366c0436dad_Traceguids,
      (char)a1);
  if ( a1->LowestFilter )
  {
    ndisSetupDownwardHandlers(a1);
    ndisSetupUpwardHandlers(a1);
  }
  else
  {
    a1->ReceiveFilters = 0;
    ndisSetupNoFilterHandlers(a1);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      1,
      71,
      (struct _GUID *)&WPP_6ee99368f40c34c231f69366c0436dad_Traceguids,
      (char)a1);
}
