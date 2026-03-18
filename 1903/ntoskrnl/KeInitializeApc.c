/*
 * XREFs of KeInitializeApc @ 0x140081C30
 * Callers:
 *     ExpSetTimerObject @ 0x140008C70 (ExpSetTimerObject.c)
 *     IopCompleteRequest @ 0x1400656B0 (IopCompleteRequest.c)
 *     IopfCompleteRequest @ 0x1400668F0 (IopfCompleteRequest.c)
 *     EtwpEventWriteFull @ 0x1400C01A0 (EtwpEventWriteFull.c)
 *     MiStoreModifiedWriteDereference @ 0x140149F44 (MiStoreModifiedWriteDereference.c)
 *     IoRaiseHardError @ 0x140298660 (IoRaiseHardError.c)
 *     IoRaiseInformationalHardError @ 0x140298920 (IoRaiseInformationalHardError.c)
 *     MiQueueSyncModifiedWriterApc @ 0x1402CEC98 (MiQueueSyncModifiedWriterApc.c)
 *     EtwpQueueStackWalkApc @ 0x14032CF00 (EtwpQueueStackWalkApc.c)
 *     EtwpTraceThreadRundownWithStack @ 0x140332238 (EtwpTraceThreadRundownWithStack.c)
 *     EtwpCovSampCaptureQueueApc @ 0x140335558 (EtwpCovSampCaptureQueueApc.c)
 *     KeInitThread @ 0x1405952E0 (KeInitThread.c)
 *     PspSetContextThreadInternal @ 0x1405E5310 (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x1405E7D40 (PspGetContextThreadInternal.c)
 *     NtNotifyChangeMultipleKeys @ 0x14062B6E0 (NtNotifyChangeMultipleKeys.c)
 *     PerfLogImageUnload @ 0x140678768 (PerfLogImageUnload.c)
 *     IopCancelIrpsInThreadList @ 0x1406D1024 (IopCancelIrpsInThreadList.c)
 *     NtQueueApcThreadEx @ 0x1406D8840 (NtQueueApcThreadEx.c)
 *     ExSwapinWorkerThreads @ 0x140727638 (ExSwapinWorkerThreads.c)
 *     DbgkpLkmdLaunchSnapApc @ 0x14084B774 (DbgkpLkmdLaunchSnapApc.c)
 *     KeSpecialUserApcKernelRoutine @ 0x140880160 (KeSpecialUserApcKernelRoutine.c)
 *     PspRundownUmsThreadForApcDelivery @ 0x1408CD50C (PspRundownUmsThreadForApcDelivery.c)
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
