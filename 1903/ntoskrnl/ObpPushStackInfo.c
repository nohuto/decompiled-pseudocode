/*
 * XREFs of ObpPushStackInfo @ 0x1402ED6EC
 * Callers:
 *     ObReferenceObjectByPointerWithTag @ 0x140006360 (ObReferenceObjectByPointerWithTag.c)
 *     ObpTraceObjectDereferenceIfActive @ 0x140009A30 (ObpTraceObjectDereferenceIfActive.c)
 *     ObfReferenceObjectWithTag @ 0x14000D6B0 (ObfReferenceObjectWithTag.c)
 *     IoGetAttachedDeviceReference @ 0x14000E250 (IoGetAttachedDeviceReference.c)
 *     ExpApplyPriorityBoost @ 0x14000EA10 (ExpApplyPriorityBoost.c)
 *     MiEmptyPageAccessLog @ 0x14001C930 (MiEmptyPageAccessLog.c)
 *     IopVerifierExAllocatePoolWithQuota @ 0x140037620 (IopVerifierExAllocatePoolWithQuota.c)
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x14003E330 (ObfReferenceObject.c)
 *     ObReferenceObjectSafeWithTag @ 0x14003FAD0 (ObReferenceObjectSafeWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x14003FB20 (ObfDereferenceObjectWithTag.c)
 *     PsImpersonateContainerOfThread @ 0x1400471A0 (PsImpersonateContainerOfThread.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x140065650 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     ObDereferenceObjectDeferDelete @ 0x140066860 (ObDereferenceObjectDeferDelete.c)
 *     ObFastReferenceObjectLocked @ 0x14007F850 (ObFastReferenceObjectLocked.c)
 *     ObReferenceObjectByPointer @ 0x140086CA0 (ObReferenceObjectByPointer.c)
 *     ExpSetResourceOwnerPointerEx @ 0x1400B4EB0 (ExpSetResourceOwnerPointerEx.c)
 *     IopCallDriverReference @ 0x1400BAD70 (IopCallDriverReference.c)
 *     NtSetInformationFile @ 0x1400BB3D0 (NtSetInformationFile.c)
 *     ExAllocatePoolWithQuotaTag @ 0x1400BEF80 (ExAllocatePoolWithQuotaTag.c)
 *     IopQueueIrpToFileObject @ 0x140100010 (IopQueueIrpToFileObject.c)
 *     ObReferenceObjectSafe @ 0x140104560 (ObReferenceObjectSafe.c)
 *     ObReferenceObjectExWithTag @ 0x14010AAE0 (ObReferenceObjectExWithTag.c)
 *     MiCapturePfnVm @ 0x14013ECA0 (MiCapturePfnVm.c)
 *     PspReferenceCidTableEntry @ 0x1405D0680 (PspReferenceCidTableEntry.c)
 *     PsLookupThreadByThreadId @ 0x1405D0860 (PsLookupThreadByThreadId.c)
 *     IopAllocRealFileObject @ 0x1405D8060 (IopAllocRealFileObject.c)
 *     ObCreateObjectEx @ 0x1405D9340 (ObCreateObjectEx.c)
 *     ObpReferenceProcessObjectByHandle @ 0x1405E6820 (ObpReferenceProcessObjectByHandle.c)
 *     CmpCreateKeyBody @ 0x1405EFC00 (CmpCreateKeyBody.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405FA4A0 (ObpReferenceObjectByHandleWithTag.c)
 *     ObWaitForMultipleObjects @ 0x14060AF40 (ObWaitForMultipleObjects.c)
 *     ObReferenceFileObjectForWrite @ 0x1406299E0 (ObReferenceFileObjectForWrite.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x140017170 (RtlCaptureStackBackTrace.c)
 *     MmCanThreadFault @ 0x1400BF6DC (MmCanThreadFault.c)
 *     KeAreInterruptsEnabled @ 0x1400C31C0 (KeAreInterruptsEnabled.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ObpDeferPushRefDerefInfo @ 0x1402ED5EC (ObpDeferPushRefDerefInfo.c)
 *     EtwTraceObjectOperation @ 0x14032DC38 (EtwTraceObjectOperation.c)
 *     ObpPushRefDerefInfo @ 0x14089FE0C (ObpPushRefDerefInfo.c)
 */

void __fastcall ObpPushStackInfo(__int64 a1, char a2, unsigned int a3, unsigned int a4)
{
  __int64 v8; // rcx
  USHORT v9; // ax
  signed __int32 v10; // ebx
  BOOL CanThreadFault; // eax
  int v12; // r9d
  int v13; // edx
  PVOID BackTrace[16]; // [rsp+30h] [rbp-88h] BYREF

  memset(BackTrace, 0, sizeof(BackTrace));
  if ( (xmmword_140572410 & 0x80u) != 0LL )
  {
    LOWORD(v8) = 4403 - (a2 != 0);
    EtwTraceObjectOperation(v8, a1, a3, a4);
  }
  if ( (ObpTraceFlags & 0x73) != 0
    && (*(_BYTE *)(a1 + 25) & 1) != 0
    && KeAreInterruptsEnabled()
    && KeGetCurrentIrql() <= 2u )
  {
    v9 = RtlCaptureStackBackTrace(1u, 0x10u, BackTrace, 0LL);
    if ( v9 )
    {
      if ( v9 < 0x10u )
        memset(&BackTrace[v9], 0, 8LL * (16 - (unsigned int)v9));
      v10 = _InterlockedExchangeAdd(&ObpStackSequence, 1u);
      CanThreadFault = MmCanThreadFault();
      v12 = v10 + 1;
      LOBYTE(v13) = a2;
      if ( CanThreadFault )
        ObpPushRefDerefInfo(a1, v13, (unsigned __int16)a3, v12, BackTrace, a4);
      else
        ObpDeferPushRefDerefInfo(a1, a2, a3, v12, (_SLIST_ENTRY *)BackTrace, a4);
    }
  }
}
