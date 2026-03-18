/*
 * XREFs of ?VidSchiProcessCrossAdapterSignaledSyncObjectsFromPassiveLevel@@YAXPEAU_VIDSCH_GLOBAL@@@Z @ 0x1C0031554
 * Callers:
 *     VidSchFlushAdapter @ 0x1C00C80E0 (VidSchFlushAdapter.c)
 * Callees:
 *     ?ProcessHwQueues@HwQueueStagingList@@QEAAXXZ @ 0x1C00073A0 (-ProcessHwQueues@HwQueueStagingList@@QEAAXXZ.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x1C0011474 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     ??0AcquireSpinLock@@QEAA@AEA_K_N1@Z @ 0x1C0011694 (--0AcquireSpinLock@@QEAA@AEA_K_N1@Z.c)
 *     VidSchiProcessCrossAdapterSignaledSyncObjects @ 0x1C002E404 (VidSchiProcessCrossAdapterSignaledSyncObjects.c)
 */

void __fastcall VidSchiProcessCrossAdapterSignaledSyncObjectsFromPassiveLevel(
        struct _VIDSCH_GLOBAL *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // r8
  _QWORD v5[2]; // [rsp+20h] [rbp-48h] BYREF
  char v6; // [rsp+30h] [rbp-38h]
  _BYTE v7[48]; // [rsp+38h] [rbp-30h] BYREF

  AcquireSpinLock::AcquireSpinLock((AcquireSpinLock *)v7, (unsigned __int64 *)a1 + 206, a3, 0);
  v6 = 0;
  v5[1] = v5;
  v5[0] = v5;
  VidSchiProcessCrossAdapterSignaledSyncObjects((struct HwQueueStagingList *)v5, (unsigned __int64)a1, v4);
  if ( !v6 )
    HwQueueStagingList::ProcessHwQueues((HwQueueStagingList *)v5);
  AcquireSpinLock::Release((AcquireSpinLock *)v7);
}
