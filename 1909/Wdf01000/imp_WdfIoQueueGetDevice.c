/*
 * XREFs of imp_WdfIoQueueGetDevice @ 0x1C0002040
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C0058664 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C005B7E4 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 */

WDFDEVICE__ *__fastcall imp_WdfIoQueueGetDevice(_WDF_DRIVER_GLOBALS *DriverGlobals, unsigned __int64 Queue)
{
  __int64 v2; // rbx
  FxIoQueue *v3; // rcx
  __int64 Offset; // r8
  FxDeviceBase *m_DeviceBase; // rcx
  FxIoQueue *pQueue; // [rsp+48h] [rbp+10h] BYREF

  if ( !Queue )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName, WDF_INVALID_HANDLE, 0LL, 0x1003uLL);
  v2 = 0LL;
  v3 = (FxIoQueue *)(~Queue & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(Offset) = 0;
  if ( (Queue & 1) != 0 )
  {
    Offset = LOWORD(v3->FxNonPagedObject::FxObject::__vftable);
    v3 = (FxIoQueue *)((char *)v3 - Offset);
  }
  if ( v3->FxNonPagedObject::FxObject::m_Type == 4099 )
  {
    pQueue = v3;
  }
  else
  {
    FxObjectHandleGetPtrQI(v3, (void **)&pQueue, (void *)Queue, 0x1003u, Offset);
    v3 = pQueue;
  }
  m_DeviceBase = v3->m_DeviceBase;
  if ( m_DeviceBase->m_ObjectSize )
    return (WDFDEVICE__ *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
  return (WDFDEVICE__ *)v2;
}
