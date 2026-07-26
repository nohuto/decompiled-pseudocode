/*
 * XREFs of ndisSynchReturnPacketsForTranslation @ 0x1C00AF3A0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisReturnPacketToNetBufferList@@YAXPEAXPEAU_NDIS_PACKET@@@Z @ 0x1C00ADEE4 (-ndisReturnPacketToNetBufferList@@YAXPEAXPEAU_NDIS_PACKET@@@Z.c)
 */

void __fastcall ndisSynchReturnPacketsForTranslation(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_PACKET *a2)
{
  ndisReturnPacketToNetBufferList(a1, a2);
}
