/*
 * XREFs of imp_WdfRequestCreateFromIrp @ 0x1C004BC60
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0004610 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?_Create@FxRequest@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_IRP@@PEAVFxIoTarget@@W4FxRequestIrpOwnership@@W4FxRequestConstructorCaller@@PEAPEAV1@@Z @ 0x1C0050FEC (-_Create@FxRequest@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_IRP@@PEAVFxIoTar.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C005B41C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

int __fastcall imp_WdfRequestCreateFromIrp(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        _WDF_OBJECT_ATTRIBUTES *RequestAttributes,
        _IRP *Irp,
        unsigned __int8 RequestFreesIrp,
        WDFREQUEST__ **Request)
{
  _FX_DRIVER_GLOBALS *DriverName; // rcx
  void *ParentObject; // rdx
  WDFREQUEST__ **v10; // rbx
  int result; // eax
  unsigned __int64 v12; // rcx
  void *retaddr; // [rsp+58h] [rbp+0h]
  void *PPObject; // [rsp+60h] [rbp+8h] BYREF
  FxRequest *pRequest; // [rsp+68h] [rbp+10h] BYREF

  DriverName = (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName;
  if ( RequestAttributes )
  {
    ParentObject = RequestAttributes->ParentObject;
    if ( ParentObject )
    {
      FxObjectHandleGetPtr(DriverName, (unsigned __int64)ParentObject, 0x1000u, &PPObject);
      DriverName = (_FX_DRIVER_GLOBALS *)*((_QWORD *)PPObject + 2);
    }
  }
  if ( !Irp )
    FxVerifierNullBugCheck(DriverName, retaddr);
  v10 = Request;
  if ( !Request )
    FxVerifierNullBugCheck(DriverName, retaddr);
  *Request = 0LL;
  result = FxRequest::_Create(
             DriverName,
             RequestAttributes,
             Irp,
             0LL,
             (FxRequestIrpOwnership)(2 - (RequestFreesIrp != 0)),
             FxRequestConstructorCallerIsDriver,
             &pRequest);
  if ( result >= 0 )
  {
    if ( pRequest->m_ObjectSize )
      v12 = (unsigned __int64)pRequest ^ 0xFFFFFFFFFFFFFFF8uLL;
    else
      v12 = 0LL;
    *v10 = (WDFREQUEST__ *)v12;
  }
  return result;
}
