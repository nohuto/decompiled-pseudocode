/*
 * XREFs of ndisFilterXStateSetFlag @ 0x1C002528C
 * Callers:
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C010C4C8 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 * Callees:
 *     ndisUpdateFilterFakeStatus @ 0x1C00252A8 (ndisUpdateFilterFakeStatus.c)
 */

__int64 __fastcall ndisFilterXStateSetFlag(__int64 a1)
{
  *(_BYTE *)(a1 + 384) |= 1u;
  return ndisUpdateFilterFakeStatus(a1);
}
