/*
 * XREFs of ObpPushStackInfo @ 0x1402D3258
 * Callers:
 *     ObReferenceObjectByPointer @ 0x140013530 (ObReferenceObjectByPointer.c)
 *     NtCancelTimer @ 0x14001CF40 (NtCancelTimer.c)
 *     ExpSetTimerObject @ 0x14001D7C0 (ExpSetTimerObject.c)
 *     ObpTraceObjectDereferenceIfActive @ 0x14001E38C (ObpTraceObjectDereferenceIfActive.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x14004E220 (ObfReferenceObject.c)
 *     ObReferenceObjectSafeWithTag @ 0x1400514C0 (ObReferenceObjectSafeWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x140059B50 (NtWaitForWorkViaWorkerFactory.c)
 *     PsImpersonateContainerOfThread @ 0x14005AE90 (PsImpersonateContainerOfThread.c)
 *     ObFastReferenceObjectLocked @ 0x14007DFE4 (ObFastReferenceObjectLocked.c)
 *     IopAcquireFastLock @ 0x14008C83C (IopAcquireFastLock.c)
 *     ObfReferenceObjectWithTag @ 0x1400ACD30 (ObfReferenceObjectWithTag.c)
 *     IoGetAttachedDeviceReference @ 0x1400ACD80 (IoGetAttachedDeviceReference.c)
 *     ObpTraceObjectReferenceIfActive @ 0x1400ACE38 (ObpTraceObjectReferenceIfActive.c)
 *     IopCallDriverReference @ 0x1400B6AF0 (IopCallDriverReference.c)
 *     ExAllocatePoolWithQuotaTag @ 0x1400B75B0 (ExAllocatePoolWithQuotaTag.c)
 *     IopQueueIrpToFileObject @ 0x1400B7930 (IopQueueIrpToFileObject.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1400BF8F0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     ObDereferenceObjectDeferDelete @ 0x1400C0FA0 (ObDereferenceObjectDeferDelete.c)
 *     ObReferenceObjectByPointerWithTag @ 0x1400CB210 (ObReferenceObjectByPointerWithTag.c)
 *     ExpApplyPriorityBoost @ 0x1400CEAA0 (ExpApplyPriorityBoost.c)
 *     NtSetInformationFile @ 0x140100F10 (NtSetInformationFile.c)
 *     NtSetInformationWorkerFactory @ 0x140106180 (NtSetInformationWorkerFactory.c)
 *     ObpLockDirectoryShared @ 0x140109FD8 (ObpLockDirectoryShared.c)
 *     ExpSetResourceOwnerPointerEx @ 0x14010A340 (ExpSetResourceOwnerPointerEx.c)
 *     ObReferenceObjectSafe @ 0x14010C190 (ObReferenceObjectSafe.c)
 *     ObReferenceObjectExWithTag @ 0x140111F40 (ObReferenceObjectExWithTag.c)
 *     ObWaitForMultipleObjects @ 0x14058B3E0 (ObWaitForMultipleObjects.c)
 *     ObpReferenceProcessObjectByHandle @ 0x1405D21B0 (ObpReferenceProcessObjectByHandle.c)
 *     ObCreateObjectEx @ 0x1405E15E0 (ObCreateObjectEx.c)
 *     CmpCreateKeyBody @ 0x1405E1970 (CmpCreateKeyBody.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405E9390 (ObpReferenceObjectByHandleWithTag.c)
 *     NtWriteFile @ 0x140639C60 (NtWriteFile.c)
 *     IopAllocRealFileObject @ 0x14063CB20 (IopAllocRealFileObject.c)
 *     PspReferenceCidTableEntry @ 0x140647D30 (PspReferenceCidTableEntry.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x1400CADE4 (KeAreInterruptsEnabled.c)
 *     MmCanThreadFault @ 0x1400CC2D4 (MmCanThreadFault.c)
 *     RtlCaptureStackBackTrace @ 0x1400CCD30 (RtlCaptureStackBackTrace.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ObpDeferPushRefDerefInfo @ 0x1402D3158 (ObpDeferPushRefDerefInfo.c)
 *     EtwTraceObjectOperation @ 0x140310168 (EtwTraceObjectOperation.c)
 *     ObpPushRefDerefInfo @ 0x140864614 (ObpPushRefDerefInfo.c)
 */

void __fastcall ObpPushStackInfo(__int64 a1, char a2, unsigned __int16 a3, int a4)
{
  __int64 v7; // rdi
  __int64 v9; // rdx
  USHORT v10; // ax
  signed __int32 v11; // ebx
  BOOL CanThreadFault; // eax
  int v13; // r9d
  int v14; // edx
  PVOID BackTrace[16]; // [rsp+30h] [rbp-88h] BYREF

  v7 = a1;
  if ( (xmmword_140542350 & 0x80u) != 0LL )
  {
    v9 = a1;
    LOWORD(a1) = 4403 - (a2 != 0);
    EtwTraceObjectOperation(a1, v9);
  }
  if ( (ObpTraceFlags & 0x73) != 0
    && (*(_BYTE *)(v7 + 25) & 1) != 0
    && KeAreInterruptsEnabled()
    && KeGetCurrentIrql() <= 2u )
  {
    v10 = RtlCaptureStackBackTrace(1u, 0x10u, BackTrace, 0LL);
    if ( v10 )
    {
      if ( v10 < 0x10u )
        memset(&BackTrace[v10], 0, 8LL * (16 - (unsigned int)v10));
      v11 = _InterlockedExchangeAdd(&ObpStackSequence, 1u);
      CanThreadFault = MmCanThreadFault();
      v13 = v11 + 1;
      LOBYTE(v14) = a2;
      if ( CanThreadFault )
        ObpPushRefDerefInfo(v7, v14, a3, v13, BackTrace, a4);
      else
        ObpDeferPushRefDerefInfo(v7, a2, a3, v13, (_SLIST_ENTRY *)BackTrace, a4);
    }
  }
}
