/*
 * XREFs of AlpcpWaitForSingleObject @ 0x140121C78
 * Callers:
 *     AlpcpReceiveMessagePort @ 0x1405DFFD0 (AlpcpReceiveMessagePort.c)
 *     AlpcpReceiveSynchronousReply @ 0x1405E1020 (AlpcpReceiveSynchronousReply.c)
 *     AlpcpCompleteDeferSignalRequestAndWait @ 0x1406CB094 (AlpcpCompleteDeferSignalRequestAndWait.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14003E220 (KeLeaveCriticalRegion.c)
 *     KeWaitForSingleObject @ 0x14003FDD0 (KeWaitForSingleObject.c)
 *     AlpcpLogUnwait @ 0x140886F68 (AlpcpLogUnwait.c)
 */

__int64 __fastcall AlpcpWaitForSingleObject(
        PVOID Object,
        KWAIT_REASON WaitReason,
        KPROCESSOR_MODE WaitMode,
        BOOLEAN Alertable,
        PLARGE_INTEGER Timeout)
{
  unsigned int v9; // eax
  struct _KTHREAD *CurrentThread; // rcx
  unsigned int v11; // ebx

  KeLeaveCriticalRegion();
  v9 = KeWaitForSingleObject(Object, WaitReason, WaitMode, Alertable, Timeout);
  CurrentThread = KeGetCurrentThread();
  v11 = v9;
  --CurrentThread->KernelApcDisable;
  if ( AlpcpLogEnabled )
    AlpcpLogUnwait(v9);
  return v11;
}
