/*
 * XREFs of imp_WdfIoQueueRetrieveFoundRequest @ 0x1C0019420
 * Callers:
 *     <none>
 * Callees:
 *     ?GetRequest@FxIoQueue@@QEAAJPEAU_FILE_OBJECT@@PEAVFxRequest@@PEAPEAV3@@Z @ 0x1C000A2F0 (-GetRequest@FxIoQueue@@QEAAJPEAU_FILE_OBJECT@@PEAVFxRequest@@PEAPEAV3@@Z.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C000BDA0 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C005B850 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

int __fastcall imp_WdfIoQueueRetrieveFoundRequest(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFQUEUE__ *Queue,
        WDFREQUEST__ *TagRequest,
        WDFREQUEST__ **OutRequest)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  int result; // eax
  WDFREQUEST__ *v8; // rcx
  FxRequest *pOutputRequest; // [rsp+20h] [rbp-18h] BYREF
  void *retaddr; // [rsp+38h] [rbp+0h]
  FxRequest *pTagRequest; // [rsp+40h] [rbp+8h] BYREF
  FxIoQueue *pQueue; // [rsp+58h] [rbp+20h] BYREF

  pTagRequest = 0LL;
  pOutputRequest = 0LL;
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
    (unsigned __int64)Queue,
    0x1003u,
    (void **)&pQueue);
  m_Globals = pQueue->m_Globals;
  if ( !OutRequest )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  FxObjectHandleGetPtr(m_Globals, (unsigned __int64)TagRequest, 0x1008u, (void **)&pTagRequest);
  result = FxIoQueue::GetRequest(pQueue, 0LL, pTagRequest, &pOutputRequest);
  if ( result >= 0 && pOutputRequest->m_ObjectSize )
    v8 = (WDFREQUEST__ *)((unsigned __int64)pOutputRequest ^ 0xFFFFFFFFFFFFFFF8uLL);
  else
    v8 = 0LL;
  *OutRequest = v8;
  return result;
}
