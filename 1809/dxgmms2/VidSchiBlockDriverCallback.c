/*
 * XREFs of VidSchiBlockDriverCallback @ 0x1C00CB37C
 * Callers:
 *     VidSchiReportHwHang @ 0x1C0039C84 (VidSchiReportHwHang.c)
 *     VidSchFlushAdapter @ 0x1C00C80E0 (VidSchFlushAdapter.c)
 *     VidSchTerminateAdapter @ 0x1C00C9A80 (VidSchTerminateAdapter.c)
 *     VidSchPrepareForRecovery @ 0x1C00CB180 (VidSchPrepareForRecovery.c)
 *     VidSchQueryDmaData @ 0x1C00CB1A8 (VidSchQueryDmaData.c)
 *     VidSchQueryDmaHeader @ 0x1C00CB298 (VidSchQueryDmaHeader.c)
 * Callees:
 *     <none>
 */

void __fastcall VidSchiBlockDriverCallback(__int64 a1)
{
  __int64 v1; // r9
  char v3; // [rsp+40h] [rbp+8h] BYREF

  v1 = *(unsigned int *)(a1 + 32);
  v3 = 0;
  DpSynchronizeExecution(*(_QWORD *)(a1 + 24), VidSchiBlockInterruptCallbackAtISR, a1, v1, &v3);
  KeFlushQueuedDpcs();
  DpiSetSchedulerCallbackState(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 192LL), 0LL);
  KeFlushQueuedDpcs();
}
