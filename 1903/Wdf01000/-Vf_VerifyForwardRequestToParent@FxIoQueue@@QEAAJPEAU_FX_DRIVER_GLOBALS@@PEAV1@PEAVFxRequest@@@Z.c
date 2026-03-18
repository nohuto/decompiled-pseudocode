/*
 * XREFs of ?Vf_VerifyForwardRequestToParent@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAV1@PEAVFxRequest@@@Z @ 0x1C00C7320
 * Callers:
 *     ?ForwardRequestToParent@FxIoQueue@@QEAAJPEAV1@PEAVFxRequest@@PEAU_WDF_REQUEST_FORWARD_OPTIONS@@@Z @ 0x1C0078EC4 (-ForwardRequestToParent@FxIoQueue@@QEAAJPEAV1@PEAVFxRequest@@PEAU_WDF_REQUEST_FORWARD_OPTIONS@@@.c)
 * Callees:
 *     WPP_IFR_SF_qL @ 0x1C0003F1C (WPP_IFR_SF_qL.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000B110 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000B170 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002F850 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qid @ 0x1C0030F38 (WPP_IFR_SF_qid.c)
 *     ?Vf_VerifyRequestIsDriverOwned@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00C6788 (-Vf_VerifyRequestIsDriverOwned@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Vf_VerifyRequestIsNotCancelable@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00C694C (-Vf_VerifyRequestIsNotCancelable@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall FxIoQueue::Vf_VerifyForwardRequestToParent(
        FxIoQueue *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        FxIoQueue *DestQueue,
        FxRequest *Request)
{
  int IsDriverOwned; // ebx
  FxDeviceBase *m_DeviceBase; // rcx
  unsigned __int16 v10; // r9
  unsigned __int16 m_ObjectSize; // ax
  const void *_a1; // rcx
  unsigned __int8 v13; // r8
  unsigned __int16 v14; // ax
  const void *v15; // rbp
  FxDeviceBase *v16; // r8
  unsigned __int16 v17; // ax
  unsigned __int64 _a2; // rcx
  bool v19; // zf
  unsigned __int16 v20; // ax
  const void *v21; // rsi
  __int64 v22; // rax
  unsigned __int16 v23; // ax
  const void *v24; // r8
  unsigned __int8 irql; // [rsp+60h] [rbp+8h] BYREF

  if ( !*(_QWORD *)&this->m_DeviceBase[1].m_ObjectFlags )
  {
    IsDriverOwned = -1073741808;
    m_DeviceBase = DestQueue->m_DeviceBase;
    v10 = 32;
LABEL_3:
    m_ObjectSize = m_DeviceBase->m_ObjectSize;
    _a1 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_qL(FxDriverGlobals, 2u, 0xDu, v10, WPP_FxIoQueue_cpp_Traceguids, _a1, 0xC0000010);
LABEL_31:
    FxVerifierDbgBreakPoint(FxDriverGlobals);
    return (unsigned int)IsDriverOwned;
  }
  FxNonPagedObject::Lock(Request, &irql, (unsigned __int8)DestQueue);
  if ( FxDriverGlobals->FxVerifierOn )
    IsDriverOwned = FxRequest::Vf_VerifyRequestIsDriverOwned(Request, FxDriverGlobals);
  else
    IsDriverOwned = 0;
  if ( IsDriverOwned >= 0 )
  {
    if ( FxDriverGlobals->FxVerifierOn )
      IsDriverOwned = FxRequest::Vf_VerifyRequestIsNotCancelable(Request, FxDriverGlobals);
    else
      IsDriverOwned = 0;
  }
  FxNonPagedObject::Unlock(Request, irql, v13);
  if ( IsDriverOwned >= 0 )
  {
    if ( DestQueue == this )
    {
      IsDriverOwned = -1073741808;
      v14 = this->m_ObjectSize;
      v15 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !v14 )
        v15 = 0LL;
      WPP_IFR_SF_qL(FxDriverGlobals, 2u, 0xDu, 0x21u, WPP_FxIoQueue_cpp_Traceguids, v15, 0xC0000010);
      goto LABEL_31;
    }
    v16 = this->m_DeviceBase;
    m_DeviceBase = DestQueue->m_DeviceBase;
    if ( *(FxDeviceBase **)&v16[1].m_ObjectFlags != m_DeviceBase )
    {
      v10 = 34;
      IsDriverOwned = -1073741808;
      goto LABEL_3;
    }
    if ( Request->m_Reserved )
    {
      IsDriverOwned = -1073741808;
      v17 = m_DeviceBase->m_ObjectSize;
      _a2 = (unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL;
      v19 = v17 == 0;
      v20 = Request->m_ObjectSize;
      if ( v19 )
        _a2 = 0LL;
      v21 = (const void *)((unsigned __int64)Request ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !v20 )
        v21 = 0LL;
      WPP_IFR_SF_qid(FxDriverGlobals, 2u, 0xDu, 0x23u, WPP_FxIoQueue_cpp_Traceguids, v21, _a2, -1073741808);
      goto LABEL_31;
    }
    v22 = *(_QWORD *)&v16[3].m_SpinLock.m_DbgFlagIsInitialized;
    if ( v22 && !*(_BYTE *)(v22 + 1699) )
    {
      IsDriverOwned = -1073741808;
      v23 = v16->m_ObjectSize;
      v24 = (const void *)((unsigned __int64)v16 ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !v23 )
        v24 = 0LL;
      WPP_IFR_SF_qL(FxDriverGlobals, 2u, 0xDu, 0x24u, WPP_FxIoQueue_cpp_Traceguids, v24, 0xC0000010);
      goto LABEL_31;
    }
  }
  return (unsigned int)IsDriverOwned;
}
