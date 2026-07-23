/*
 * XREFs of KeInitializeApc @ 0x14008A350
 * Callers:
 *     ExpSetTimerObject @ 0x14001D7C0 (ExpSetTimerObject.c)
 *     IopCompleteRequest @ 0x1400BFC50 (IopCompleteRequest.c)
 *     IopfCompleteRequest @ 0x1400C1030 (IopfCompleteRequest.c)
 *     EtwpEventWriteFull @ 0x1400C8420 (EtwpEventWriteFull.c)
 *     MiStoreModifiedWriteDereference @ 0x14014CC1C (MiStoreModifiedWriteDereference.c)
 *     IoRaiseHardError @ 0x140283440 (IoRaiseHardError.c)
 *     IoRaiseInformationalHardError @ 0x1402836F0 (IoRaiseInformationalHardError.c)
 *     MiQueueSyncModifiedWriterApc @ 0x1402B8AE8 (MiQueueSyncModifiedWriterApc.c)
 *     EtwpQueueStackWalkApc @ 0x14030F450 (EtwpQueueStackWalkApc.c)
 *     EtwpTraceThreadRundownWithStack @ 0x140314058 (EtwpTraceThreadRundownWithStack.c)
 *     EtwpCovSampCaptureQueueApc @ 0x140316D1C (EtwpCovSampCaptureQueueApc.c)
 *     KeInitThread @ 0x1405666E0 (KeInitThread.c)
 *     NtNotifyChangeMultipleKeys @ 0x1405CF180 (NtNotifyChangeMultipleKeys.c)
 *     PspSetContextThreadInternal @ 0x140621A30 (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x140621C00 (PspGetContextThreadInternal.c)
 *     PerfLogImageUnload @ 0x1406786CC (PerfLogImageUnload.c)
 *     NtQueueApcThreadEx @ 0x140678850 (NtQueueApcThreadEx.c)
 *     IopCancelIrpsInThreadList @ 0x1406A7CA8 (IopCancelIrpsInThreadList.c)
 *     ExSwapinWorkerThreads @ 0x1406E15BC (ExSwapinWorkerThreads.c)
 *     DbgkpLkmdLaunchSnapApc @ 0x140812F34 (DbgkpLkmdLaunchSnapApc.c)
 *     KeSpecialUserApcKernelRoutine @ 0x1408459C0 (KeSpecialUserApcKernelRoutine.c)
 *     PspRundownUmsThreadForApcDelivery @ 0x1408903AC (PspRundownUmsThreadForApcDelivery.c)
 * Callees:
 *     <none>
 */

char __fastcall KeInitializeApc(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  char result; // al

  *(_BYTE *)a1 = 18;
  *(_BYTE *)(a1 + 2) = 88;
  if ( a3 == 2 )
    LOBYTE(a3) = *(_BYTE *)(a2 + 586);
  *(_BYTE *)(a1 + 80) = a3;
  *(_QWORD *)(a1 + 40) = a5;
  *(_QWORD *)(a1 + 8) = a2;
  *(_QWORD *)(a1 + 48) = a6;
  *(_QWORD *)(a1 + 32) = a4;
  result = a6 != 0 ? a7 : 0;
  *(_BYTE *)(a1 + 81) = result;
  *(_QWORD *)(a1 + 56) = a8 & -(__int64)(a6 != 0);
  *(_BYTE *)(a1 + 82) = 0;
  return result;
}
