/*
 * XREFs of ?Vf_VerifyGetRequestUpdateFlags@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z @ 0x1C00C75AC
 * Callers:
 *     ?GetRequest@FxIoQueue@@QEAAJPEAU_FILE_OBJECT@@PEAVFxRequest@@PEAPEAV3@@Z @ 0x1C000A2F0 (-GetRequest@FxIoQueue@@QEAAJPEAU_FILE_OBJECT@@PEAVFxRequest@@PEAPEAV3@@Z.c)
 * Callees:
 *     WPP_IFR_SF_qL @ 0x1C0003F1C (WPP_IFR_SF_qL.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000B110 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000B170 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_q @ 0x1C0010E28 (WPP_IFR_SF_q.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C0014164 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002F850 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Vf_VerifyRequestIsTagRequest@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00C6A38 (-Vf_VerifyRequestIsTagRequest@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall FxIoQueue::Vf_VerifyGetRequestUpdateFlags(
        FxIoQueue *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        FxRequest *TagRequest)
{
  unsigned __int16 m_ObjectSize; // ax
  const void *_a1; // rbx
  unsigned __int8 v9; // r8
  int IsTagRequest; // ebp
  unsigned __int8 v11; // r8
  const void *v12; // rcx
  unsigned __int8 irql; // [rsp+70h] [rbp+18h] BYREF

  if ( TagRequest )
  {
    if ( _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(FxDriverGlobals, (unsigned int)FxDriverGlobals, 0xBu) )
    {
      if ( this->m_Type != WdfIoQueueDispatchManual )
      {
        m_ObjectSize = this->m_ObjectSize;
        _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !m_ObjectSize )
          _a1 = 0LL;
        WPP_IFR_SF_qL(FxDriverGlobals, 2u, 0xDu, 0x18u, WPP_FxIoQueue_cpp_Traceguids, _a1, 0xC0000010);
        FxVerifierDbgBreakPoint(FxDriverGlobals);
        return 3221225488LL;
      }
    }
    else
    {
      FxNonPagedObject::Lock(TagRequest, &irql, (unsigned __int8)TagRequest);
      if ( FxDriverGlobals->FxVerifierOn )
        IsTagRequest = FxRequest::Vf_VerifyRequestIsTagRequest(TagRequest, FxDriverGlobals);
      else
        IsTagRequest = 0;
      FxNonPagedObject::Unlock(TagRequest, irql, v9);
      if ( IsTagRequest < 0 )
        return (unsigned int)IsTagRequest;
    }
  }
  FxNonPagedObject::Lock(this, &irql, (unsigned __int8)TagRequest);
  if ( this->m_Type == WdfIoQueueDispatchSequential && !this->m_DriverIoCount )
  {
    v12 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      v12 = 0LL;
    WPP_IFR_SF_q(FxDriverGlobals, 2u, 0xDu, 0x19u, WPP_FxIoQueue_cpp_Traceguids, v12);
    FxVerifierDbgBreakPoint(FxDriverGlobals);
  }
  FxNonPagedObject::Unlock(this, irql, v11);
  return 0LL;
}
