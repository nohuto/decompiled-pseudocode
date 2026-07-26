/*
 * XREFs of ndisInitializeZeroBasedRef @ 0x1C00C46B8
 * Callers:
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C010C4C8 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 * Callees:
 *     NdisAllocateRefCount @ 0x1C00C42B0 (NdisAllocateRefCount.c)
 */

__int64 __fastcall ndisInitializeZeroBasedRef(__int64 a1)
{
  __int64 result; // rax

  KeInitializeSpinLock((PKSPIN_LOCK)a1);
  *(_DWORD *)(a1 + 8) = 0x1000000;
  result = NdisAllocateRefCount(0x19u, 0);
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
