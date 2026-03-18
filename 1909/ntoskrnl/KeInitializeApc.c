/*
 * XREFs of KeInitializeApc @ 0x140082030
 * Callers:
 *     ExpSetTimerObject @ 0x140008D00 (ExpSetTimerObject.c)
 *     IopCompleteRequest @ 0x140065750 (IopCompleteRequest.c)
 *     IopfCompleteRequest @ 0x140066B60 (IopfCompleteRequest.c)
 *     EtwpEventWriteFull @ 0x1400A0020 (EtwpEventWriteFull.c)
 *     MiStoreModifiedWriteDereference @ 0x14014A5E4 (MiStoreModifiedWriteDereference.c)
 *     IoRaiseHardError @ 0x1402983C0 (IoRaiseHardError.c)
 *     IoRaiseInformationalHardError @ 0x140298680 (IoRaiseInformationalHardError.c)
 *     MiQueueSyncModifiedWriterApc @ 0x1402CE9F8 (MiQueueSyncModifiedWriterApc.c)
 *     EtwpQueueStackWalkApc @ 0x14032C950 (EtwpQueueStackWalkApc.c)
 *     EtwpTraceThreadRundownWithStack @ 0x140331C98 (EtwpTraceThreadRundownWithStack.c)
 *     EtwpCovSampCaptureQueueApc @ 0x140334FB8 (EtwpCovSampCaptureQueueApc.c)
 *     KeInitThread @ 0x1405952E0 (KeInitThread.c)
 *     PspSetContextThreadInternal @ 0x1405E5AE0 (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x1405E8510 (PspGetContextThreadInternal.c)
 *     NtNotifyChangeMultipleKeys @ 0x14062F530 (NtNotifyChangeMultipleKeys.c)
 *     PerfLogImageUnload @ 0x14067E0E0 (PerfLogImageUnload.c)
 *     IopCancelIrpsInThreadList @ 0x1406D0294 (IopCancelIrpsInThreadList.c)
 *     NtQueueApcThreadEx @ 0x1406D84B0 (NtQueueApcThreadEx.c)
 *     ExSwapinWorkerThreads @ 0x14072BB98 (ExSwapinWorkerThreads.c)
 *     DbgkpLkmdLaunchSnapApc @ 0x14084AE74 (DbgkpLkmdLaunchSnapApc.c)
 *     KeSpecialUserApcKernelRoutine @ 0x14087F860 (KeSpecialUserApcKernelRoutine.c)
 *     PspRundownUmsThreadForApcDelivery @ 0x1408CCDEC (PspRundownUmsThreadForApcDelivery.c)
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
