/*
 * XREFs of imp_WdfIoQueueDrainSynchronously @ 0x1C0076D00
 * Callers:
 *     <none>
 * Callees:
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C000BB38 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C000BDA0 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FatalError@FxIoQueue@@QEAAXJ@Z @ 0x1C0078E24 (-FatalError@FxIoQueue@@QEAAXJ@Z.c)
 *     ?QueueDrainSynchronously@FxIoQueue@@QEAAJXZ @ 0x1C00799E8 (-QueueDrainSynchronously@FxIoQueue@@QEAAJXZ.c)
 */

void __fastcall imp_WdfIoQueueDrainSynchronously(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFQUEUE__ *Queue)
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
    v2 = FxIoQueue::QueueDrainSynchronously(pQueue);
    if ( v2 < 0 )
      FxIoQueue::FatalError(pQueue, v2);
  }
}
