/*
 * XREFs of imp_WdfIoQueueStart @ 0x1C0016950
 * Callers:
 *     <none>
 * Callees:
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C0008D40 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?SetState@FxIoQueue@@QEAAXW4_FX_IO_QUEUE_SET_STATE@@@Z @ 0x1C0016A00 (-SetState@FxIoQueue@@QEAAXW4_FX_IO_QUEUE_SET_STATE@@@Z.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C0017FBC (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C005B3B8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x1C005C9C4 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 */

void __fastcall imp_WdfIoQueueStart(_WDF_DRIVER_GLOBALS *DriverGlobals, unsigned __int64 Queue, unsigned __int8 a3)
{
  __int64 Offset; // rcx
  FxIoQueue *v4; // rbx
  unsigned __int8 v5; // di
  unsigned __int16 v6; // r9
  FxVerifierLock *v7; // rcx
  unsigned __int8 PreviousIrql; // [rsp+48h] [rbp+10h] BYREF
  FxIoQueue *pQueue; // [rsp+50h] [rbp+18h] BYREF

  if ( !Queue )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName, WDF_INVALID_HANDLE, 0LL, 0x1003uLL);
  LOWORD(Offset) = 0;
  v4 = (FxIoQueue *)(~Queue & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Queue & 1) != 0 )
  {
    Offset = LOWORD(v4->FxNonPagedObject::FxObject::__vftable);
    v4 = (FxIoQueue *)((char *)v4 - Offset);
  }
  if ( v4->FxNonPagedObject::FxObject::m_Type == 4099 )
  {
    pQueue = v4;
  }
  else
  {
    FxObjectHandleGetPtrQI(v4, (void **)&pQueue, (void *)Queue, 0x1003u, Offset);
    v4 = pQueue;
  }
  if ( SLOBYTE(v4->m_ObjectFlags) < 0 && (v7 = *(FxVerifierLock **)&v4[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
  {
    FxVerifierLock::Lock(v7, &PreviousIrql, a3);
    v5 = PreviousIrql;
  }
  else
  {
    v5 = KeAcquireSpinLockRaiseToDpc(&v4->m_NPLock.m_Lock);
    PreviousIrql = v5;
  }
  FxIoQueue::SetState(v4, FxIoQueueSetDispatchRequests|0x1);
  if ( v4->m_Queue.m_RequestCount > 0 )
  {
    v4->m_TransitionFromEmpty = 1;
    v4->m_ForceTransitionFromEmptyWhenAddingNewRequest = 0;
  }
  FxIoQueue::DispatchEvents(v4, v5, 0LL, v6);
}
