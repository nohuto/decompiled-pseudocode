/*
 * XREFs of imp_WdfIoQueuePurge @ 0x1C00163A0
 * Callers:
 *     <none>
 * Callees:
 *     ?QueuePurge@FxIoQueue@@QEAAJEEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z @ 0x1C0016430 (-QueuePurge@FxIoQueue@@QEAAJEEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C0017FBC (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C005B3B8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?FatalError@FxIoQueue@@QEAAXJ@Z @ 0x1C0078664 (-FatalError@FxIoQueue@@QEAAXJ@Z.c)
 */

void __fastcall imp_WdfIoQueuePurge(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Queue,
        void (__fastcall *PurgeComplete)(WDFQUEUE__ *, void *),
        void *Context)
{
  __int64 v6; // r8
  FxIoQueue *v7; // rcx
  int v8; // eax
  FxIoQueue *pQueue; // [rsp+48h] [rbp+10h] BYREF

  if ( !Queue )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName, WDF_INVALID_HANDLE, 0LL, 0x1003uLL);
  LOWORD(v6) = 0;
  v7 = (FxIoQueue *)(~Queue & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Queue & 1) != 0 )
  {
    v6 = LOWORD(v7->FxNonPagedObject::FxObject::__vftable);
    v7 = (FxIoQueue *)((char *)v7 - v6);
  }
  if ( v7->FxNonPagedObject::FxObject::m_Type == 4099 )
  {
    pQueue = v7;
  }
  else
  {
    FxObjectHandleGetPtrQI(v7, (void **)&pQueue, (void *)Queue, 0x1003u, v6);
    v7 = pQueue;
  }
  v8 = FxIoQueue::QueuePurge(v7, 1u, 1u, PurgeComplete, Context);
  if ( v8 < 0 )
    FxIoQueue::FatalError(pQueue, v8);
}
