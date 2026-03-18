/*
 * XREFs of ?Vf_VerifyRequeue@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z @ 0x1C00C7884
 * Callers:
 *     ?Requeue@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x1C007A1FC (-Requeue@FxIoQueue@@QEAAJPEAVFxRequest@@@Z.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000B110 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000B170 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Vf_VerifyRequestIsDriverOwned@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00C6788 (-Vf_VerifyRequestIsDriverOwned@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Vf_VerifyRequestIsNotCancelable@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00C694C (-Vf_VerifyRequestIsNotCancelable@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall FxIoQueue::Vf_VerifyRequeue(
        FxIoQueue *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        FxRequest *pRequest)
{
  unsigned __int8 v5; // r8
  int IsDriverOwned; // ebx
  FxIoQueue *irql; // [rsp+30h] [rbp+8h] OVERLAPPED BYREF

  irql = this;
  FxNonPagedObject::Lock(pRequest, (unsigned __int8 *)&irql, (unsigned __int8)pRequest);
  if ( FxDriverGlobals->FxVerifierOn )
    IsDriverOwned = FxRequest::Vf_VerifyRequestIsDriverOwned(pRequest, FxDriverGlobals);
  else
    IsDriverOwned = 0;
  if ( IsDriverOwned >= 0 )
  {
    if ( FxDriverGlobals->FxVerifierOn )
      IsDriverOwned = FxRequest::Vf_VerifyRequestIsNotCancelable(pRequest, FxDriverGlobals);
    else
      IsDriverOwned = 0;
    if ( IsDriverOwned >= 0 )
      pRequest->m_VerifierFlags &= 0xFFF6u;
  }
  FxNonPagedObject::Unlock(pRequest, (unsigned __int8)irql, v5);
  return (unsigned int)IsDriverOwned;
}
