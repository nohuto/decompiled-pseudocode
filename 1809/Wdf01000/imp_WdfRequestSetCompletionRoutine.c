/*
 * XREFs of imp_WdfRequestSetCompletionRoutine @ 0x1C0003A20
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C0017FBC (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C005B3B8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 */

void __fastcall imp_WdfRequestSetCompletionRoutine(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Request,
        _SINGLE_LIST_ENTRY *CompletionRoutine,
        FxDeviceBase *CompletionContext)
{
  __int64 Offset; // r10
  FxObject *v7; // rax
  FxRequest *pRequest; // [rsp+48h] [rbp+10h] BYREF

  if ( !Request )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName, WDF_INVALID_HANDLE, 0LL, 0x1008uLL);
  LOWORD(Offset) = 0;
  v7 = (FxObject *)(~Request & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Request & 1) != 0 )
  {
    Offset = LOWORD(v7->__vftable);
    v7 = (FxObject *)((char *)v7 - Offset);
  }
  if ( v7->m_Type != 4104 )
  {
    FxObjectHandleGetPtrQI(v7, (void **)&pRequest, (void *)Request, 0x1008u, Offset);
    v7 = pRequest;
  }
  v7[1].m_DeviceBase = CompletionContext;
  v7[1].m_DisposeSingleEntry.Next = CompletionRoutine;
}
