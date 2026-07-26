/*
 * XREFs of NdisFreeRWLock @ 0x1C003E2B0
 * Callers:
 *     EthDeleteFilter @ 0x1C00A17DC (EthDeleteFilter.c)
 *     nullCreateFilter @ 0x1C00A3714 (nullCreateFilter.c)
 *     nullDeleteFilter @ 0x1C00A37A8 (nullDeleteFilter.c)
 *     ?ndisVerifyNdisFreeRWLock@@YAXPEAU_NDIS_RW_LOCK_EX@@@Z @ 0x1C00C3F30 (-ndisVerifyNdisFreeRWLock@@YAXPEAU_NDIS_RW_LOCK_EX@@@Z.c)
 *     ?ndisUnloadPeriodicReceives@@_Y2INIT@@AXXZ @ 0x1C0147FA0 (-ndisUnloadPeriodicReceives@@_Y2INIT@@AXXZ.c)
 * Callees:
 *     ndisFreePerProcessorSlot @ 0x1C003E2F0 (ndisFreePerProcessorSlot.c)
 */

void __stdcall NdisFreeRWLock(PNDIS_RW_LOCK_EX Lock)
{
  *(_DWORD *)Lock |= 0xFFFFFF7F;
  ndisFreePerProcessorSlot(*((_QWORD *)Lock + 4), 0x7772444EuLL);
  ExFreePoolWithTag(Lock, 0x7772444Eu);
}
