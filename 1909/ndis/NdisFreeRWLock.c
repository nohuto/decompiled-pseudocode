/*
 * XREFs of NdisFreeRWLock @ 0x1C003E2A0
 * Callers:
 *     EthDeleteFilter @ 0x1C00A19AC (EthDeleteFilter.c)
 *     nullCreateFilter @ 0x1C00A38E4 (nullCreateFilter.c)
 *     nullDeleteFilter @ 0x1C00A3978 (nullDeleteFilter.c)
 *     ?ndisVerifyNdisFreeRWLock@@YAXPEAU_NDIS_RW_LOCK_EX@@@Z @ 0x1C00C4100 (-ndisVerifyNdisFreeRWLock@@YAXPEAU_NDIS_RW_LOCK_EX@@@Z.c)
 *     ?ndisUnloadPeriodicReceives@@_Y2INIT@@AXXZ @ 0x1C0147FA0 (-ndisUnloadPeriodicReceives@@_Y2INIT@@AXXZ.c)
 * Callees:
 *     ndisFreePerProcessorSlot @ 0x1C003E2E0 (ndisFreePerProcessorSlot.c)
 */

void __stdcall NdisFreeRWLock(PNDIS_RW_LOCK_EX Lock)
{
  *(_DWORD *)Lock |= 0xFFFFFF7F;
  ndisFreePerProcessorSlot(*((_QWORD *)Lock + 4), 0x7772444EuLL);
  ExFreePoolWithTag(Lock, 0x7772444Eu);
}
