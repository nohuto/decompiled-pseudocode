/*
 * XREFs of ?QueueRequest@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x1C00795C4
 * Callers:
 *     ?OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C0005970 (-OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?DispatchStep2@FxPkgIo@@QEAAJPEAU_IRP@@PEAVFxIoInCallerContext@@PEAVFxIoQueue@@@Z @ 0x1C0077208 (-DispatchStep2@FxPkgIo@@QEAAJPEAU_IRP@@PEAVFxIoInCallerContext@@PEAVFxIoQueue@@@Z.c)
 *     ?ReturnReservedRequest@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x1C007A63C (-ReturnReservedRequest@FxIoQueue@@QEAAXPEAVFxRequest@@@Z.c)
 * Callees:
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C0008D40 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000AEA0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000AF00 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?GetIrp@FxRequest@@QEAAJPEAPEAU_IRP@@@Z @ 0x1C0012590 (-GetIrp@FxRequest@@QEAAJPEAPEAU_IRP@@@Z.c)
 *     WPP_IFR_SF_qq @ 0x1C0012FB4 (WPP_IFR_SF_qq.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x1C0013F08 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     ?InsertNewRequestLocked@FxIoQueue@@AEAAJPEAPEAVFxRequest@@E@Z @ 0x1C0014584 (-InsertNewRequestLocked@FxIoQueue@@AEAAJPEAPEAVFxRequest@@E@Z.c)
 *     ?Complete@FxRequest@@QEAAJJ@Z @ 0x1C004B660 (-Complete@FxRequest@@QEAAJJ@Z.c)
 *     WPP_IFR_SF_qLsqd @ 0x1C0079D24 (WPP_IFR_SF_qLsqd.c)
 */

__int64 __fastcall FxIoQueue::QueueRequest(FxIoQueue *this, FxRequest *pRequest, unsigned __int8 a3)
{
  FxRequest *v3; // rbx
  _FX_IO_QUEUE_STATE _a4; // r8d
  _FX_DRIVER_GLOBALS *m_Globals; // r10
  const char *_a5; // r11
  const void *globals; // rcx
  const void *_a3; // rdx
  __int64 v10; // r8
  unsigned __int16 v11; // r9
  const void *v13; // rcx
  const void *v14; // rax
  unsigned int *v15; // r8
  unsigned __int16 v16; // r9
  unsigned __int8 v17; // r8
  const _GUID *traceGuid; // [rsp+20h] [rbp-48h]
  unsigned __int8 irql; // [rsp+70h] [rbp+8h] BYREF
  FxRequest *Request; // [rsp+78h] [rbp+10h] BYREF
  _IRP *pIrp; // [rsp+80h] [rbp+18h] BYREF

  Request = pRequest;
  v3 = pRequest;
  FxNonPagedObject::Lock(this, &irql, a3);
  if ( v3->m_Reserved )
    FxObject::AddRef(v3, (void *)0x50647746, 2311, "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
  _a4 = this->m_QueueState;
  m_Globals = this->m_Globals;
  if ( (_a4 & 1) != 0 )
  {
    if ( m_Globals->FxVerboseOn )
    {
      v13 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !this->m_ObjectSize )
        v13 = 0LL;
      if ( v3->m_ObjectSize )
        v14 = (const void *)((unsigned __int64)v3 ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v14 = 0LL;
      WPP_IFR_SF_qq(m_Globals, 5u, 0xDu, 0x2Au, WPP_FxIoQueue_cpp_Traceguids, v14, v13);
    }
    FxRequest::GetIrp(v3, &pIrp, _a4);
    v3->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
    if ( v3->m_Reserved )
    {
      if ( this->m_Dispatching )
      {
        LOBYTE(v15) = irql;
        FxIoQueue::InsertNewRequestLocked(this, &Request, v15);
        FxNonPagedObject::Unlock(this, irql, v17);
        return 259LL;
      }
      v3 = Request;
    }
    FxIoQueue::DispatchEvents(this, irql, v3, v16);
    return 259LL;
  }
  if ( m_Globals->FxVerboseOn )
  {
    _a5 = "power stopping (Drain) in progress,";
    if ( (_a4 & 0x10000) == 0 )
      _a5 = a5;
    if ( v3->m_ObjectSize )
      globals = (const void *)((unsigned __int64)v3 ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      globals = 0LL;
    _a3 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      _a3 = 0LL;
    WPP_IFR_SF_qLsqd(m_Globals, 5u, _a4, 0x29u, traceGuid, _a3, _a4, _a5, globals, -1073741436);
  }
  FxNonPagedObject::Unlock(this, irql, _a4);
  v3->m_Irp.m_Irp->IoStatus.Information = 0LL;
  FxRequest::Complete(v3, 0xC0000184, v10, v11);
  v3->Release(v3, (void *)1886220099, 2338, "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
  return 3221225860LL;
}
