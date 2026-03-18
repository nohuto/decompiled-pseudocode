/*
 * XREFs of imp_WdfIoQueueRetrieveNextRequest @ 0x1C0017B00
 * Callers:
 *     <none>
 * Callees:
 *     ?GetRequest@FxIoQueue@@QEAAJPEAU_FILE_OBJECT@@PEAVFxRequest@@PEAPEAV3@@Z @ 0x1C000B010 (-GetRequest@FxIoQueue@@QEAAJPEAU_FILE_OBJECT@@PEAVFxRequest@@PEAPEAV3@@Z.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C0017FBC (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C005B3B8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C005B41C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

int __fastcall imp_WdfIoQueueRetrieveNextRequest(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Queue,
        WDFREQUEST__ **OutRequest)
{
  __int64 Offset; // r8
  FxIoQueue *v5; // rcx
  int result; // eax
  WDFREQUEST__ *v7; // rcx
  void *retaddr; // [rsp+38h] [rbp+0h]
  FxIoQueue *pQueue; // [rsp+48h] [rbp+10h] BYREF
  FxRequest *pOutputRequest; // [rsp+58h] [rbp+20h] BYREF

  pOutputRequest = 0LL;
  if ( !Queue )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName, WDF_INVALID_HANDLE, 0LL, 0x1003uLL);
  LOWORD(Offset) = 0;
  v5 = (FxIoQueue *)(~Queue & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Queue & 1) != 0 )
  {
    Offset = LOWORD(v5->FxNonPagedObject::FxObject::__vftable);
    v5 = (FxIoQueue *)((char *)v5 - Offset);
  }
  if ( v5->FxNonPagedObject::FxObject::m_Type == 4099 )
  {
    pQueue = v5;
  }
  else
  {
    FxObjectHandleGetPtrQI(v5, (void **)&pQueue, (void *)Queue, 0x1003u, Offset);
    v5 = pQueue;
  }
  if ( !OutRequest )
    FxVerifierNullBugCheck(v5->m_Globals, retaddr);
  result = FxIoQueue::GetRequest(v5, 0LL, 0LL, &pOutputRequest);
  if ( result >= 0 && pOutputRequest->m_ObjectSize )
    v7 = (WDFREQUEST__ *)((unsigned __int64)pOutputRequest ^ 0xFFFFFFFFFFFFFFF8uLL);
  else
    v7 = 0LL;
  *OutRequest = v7;
  return result;
}
