/*
 * XREFs of imp_WdfIoQueuePurgeSynchronously @ 0x1C0076780
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0004610 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C000B6F4 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?FatalError@FxIoQueue@@QEAAXJ@Z @ 0x1C0078664 (-FatalError@FxIoQueue@@QEAAXJ@Z.c)
 *     ?QueuePurgeSynchronously@FxIoQueue@@QEAAJXZ @ 0x1C00794A8 (-QueuePurgeSynchronously@FxIoQueue@@QEAAJXZ.c)
 */

void __fastcall imp_WdfIoQueuePurgeSynchronously(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFQUEUE__ *Queue)
{
  int v2; // eax
  FxIoQueue *pQueue; // [rsp+30h] [rbp+8h] BYREF

  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
    (unsigned __int64)Queue,
    0x1003u,
    (void **)&pQueue);
  if ( (int)FxVerifierCheckIrqlLevel(pQueue->m_Globals, 0) >= 0 )
  {
    v2 = FxIoQueue::QueuePurgeSynchronously(pQueue);
    if ( v2 < 0 )
      FxIoQueue::FatalError(pQueue, v2);
  }
}
