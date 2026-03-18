/*
 * XREFs of imp_WdfRequestGetParameters @ 0x1C00022A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000AEA0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000AF00 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C0017FBC (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     memmove @ 0x1C001BE80 (memmove.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0030430 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_dd @ 0x1C00305C0 (WPP_IFR_SF_dd.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C005B3B8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C005B41C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?Vf_VerifyRequestIsCurrentStackValid@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00C2688 (-Vf_VerifyRequestIsCurrentStackValid@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00C2990 (-Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

void __fastcall imp_WdfRequestGetParameters(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Request,
        _WDF_REQUEST_PARAMETERS *Parameters)
{
  FxRequest *v4; // rbx
  __int64 Offset; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  int IsCurrentStackValid; // ebp
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  void *retaddr; // [rsp+58h] [rbp+0h]
  unsigned __int8 PreviousIrql; // [rsp+68h] [rbp+10h] BYREF
  FxRequest *pRequest; // [rsp+78h] [rbp+20h] BYREF

  if ( !Request )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName, WDF_INVALID_HANDLE, 0LL, 0x1008uLL);
  v4 = (FxRequest *)(~Request & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(Offset) = 0;
  if ( (Request & 1) != 0 )
  {
    Offset = LOWORD(v4->__vftable);
    v4 = (FxRequest *)((char *)v4 - Offset);
  }
  if ( v4->m_Type == 4104 )
  {
    pRequest = v4;
  }
  else
  {
    FxObjectHandleGetPtrQI(v4, (void **)&pRequest, (void *)Request, 0x1008u, Offset);
    v4 = pRequest;
  }
  m_Globals = v4->m_Globals;
  if ( !Parameters )
    FxVerifierNullBugCheck(v4->m_Globals, retaddr);
  if ( Parameters->Size != 40 )
  {
    WPP_IFR_SF_dd(m_Globals, 2u, 0x10u, 0x39u, WPP_FxRequestApi_cpp_Traceguids, Parameters->Size, 40);
    FxVerifierDbgBreakPoint(m_Globals);
    return;
  }
  if ( m_Globals->FxVerifierIO )
  {
    FxNonPagedObject::Lock(v4, &PreviousIrql);
    if ( !m_Globals->FxVerifierOn )
      goto LABEL_19;
    IsCurrentStackValid = FxRequest::Vf_VerifyRequestIsCurrentStackValid(v4, m_Globals);
    if ( IsCurrentStackValid < 0 )
      goto LABEL_20;
    if ( m_Globals->FxVerifierOn )
      IsCurrentStackValid = FxRequest::Vf_VerifyRequestIsNotCompleted(v4, m_Globals);
    else
LABEL_19:
      IsCurrentStackValid = 0;
LABEL_20:
    FxNonPagedObject::Unlock(v4, PreviousIrql);
    if ( IsCurrentStackValid < 0 )
      return;
  }
  Parameters->Size = 40;
  Parameters->Type = v4->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->MajorFunction;
  Parameters->MinorFunction = v4->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->MinorFunction;
  memmove(&Parameters->Parameters, &v4->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->Parameters, 0x20uLL);
  if ( m_Globals->FxVerifierIO )
  {
    CurrentStackLocation = v4->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation;
    if ( CurrentStackLocation->MajorFunction == 14
      && (CurrentStackLocation->Parameters.LockControl.ByteOffset.LowPart & 3) == 3 )
    {
      Parameters->Parameters.DeviceIoControl.Type3InputBuffer = 0LL;
    }
  }
}
