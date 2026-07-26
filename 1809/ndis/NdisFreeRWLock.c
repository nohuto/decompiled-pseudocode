/*
 * XREFs of NdisFreeRWLock @ 0x1C00255E0
 * Callers:
 *     ?ndisVerifyNdisFreeRWLock@@YAXPEAU_NDIS_RW_LOCK_EX@@@Z @ 0x1C007EFB0 (-ndisVerifyNdisFreeRWLock@@YAXPEAU_NDIS_RW_LOCK_EX@@@Z.c)
 *     EthDeleteFilter @ 0x1C00F3B04 (EthDeleteFilter.c)
 *     nullCreateFilter @ 0x1C00F3EF0 (nullCreateFilter.c)
 *     nullDeleteFilter @ 0x1C00F3F84 (nullDeleteFilter.c)
 *     ndisUnloadPeriodicReceives @ 0x1C0129F60 (ndisUnloadPeriodicReceives.c)
 * Callees:
 *     ndisFreePerProcessorSlot @ 0x1C0025620 (ndisFreePerProcessorSlot.c)
 */

void __stdcall NdisFreeRWLock(PNDIS_RW_LOCK_EX Lock)
{
  *(_DWORD *)Lock |= 0xFFFFFF7F;
  ndisFreePerProcessorSlot(*((_QWORD *)Lock + 4), 0x7772444EuLL);
  ExFreePoolWithTag(Lock, 0x7772444Eu);
}
