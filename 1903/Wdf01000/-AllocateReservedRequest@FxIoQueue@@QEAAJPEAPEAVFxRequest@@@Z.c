/*
 * XREFs of ?AllocateReservedRequest@FxIoQueue@@QEAAJPEAPEAVFxRequest@@@Z @ 0x1C0078680
 * Callers:
 *     ?AssignForwardProgressPolicy@FxIoQueue@@QEAAJPEAU_WDF_IO_QUEUE_FORWARD_PROGRESS_POLICY@@@Z @ 0x1C007A8F4 (-AssignForwardProgressPolicy@FxIoQueue@@QEAAJPEAU_WDF_IO_QUEUE_FORWARD_PROGRESS_POLICY@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_d @ 0x1C0003FF0 (WPP_IFR_SF_d.c)
 *     ?FreeRequest@FxRequest@@QEAAXXZ @ 0x1C005029C (-FreeRequest@FxRequest@@QEAAXXZ.c)
 *     ?_CreateForPackage@FxRequest@@SAJPEAVFxDevice@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_IRP@@PEAPEAV1@@Z @ 0x1C00509E0 (-_CreateForPackage@FxRequest@@SAJPEAVFxDevice@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_IRP@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall FxIoQueue::AllocateReservedRequest(FxIoQueue *this, FxRequest **Request)
{
  FxCxDeviceInfo *m_CxDeviceInfo; // rax
  _FX_DRIVER_GLOBALS *m_Globals; // rbp
  FxDevice *m_Device; // rcx
  _WDF_OBJECT_ATTRIBUTES *p_RequestAttributes; // rdx
  int _a1; // eax
  unsigned int v9; // esi
  FxRequest *v10; // rbx
  unsigned __int64 v11; // rdx
  _FXIO_FORWARD_PROGRESS_CONTEXT *m_FwdProgContext; // rcx
  unsigned __int16 m_ObjectSize; // ax
  unsigned __int64 v14; // rdi
  int v15; // eax
  FxRequest *pRequest; // [rsp+50h] [rbp+8h] BYREF

  m_CxDeviceInfo = this->m_CxDeviceInfo;
  m_Globals = this->m_Globals;
  *Request = 0LL;
  m_Device = this->m_Device;
  p_RequestAttributes = &m_CxDeviceInfo->RequestAttributes;
  if ( !m_CxDeviceInfo )
    p_RequestAttributes = &m_Device->m_RequestAttributes;
  _a1 = FxRequest::_CreateForPackage(m_Device, p_RequestAttributes, 0LL, &pRequest);
  v9 = _a1;
  if ( _a1 >= 0 )
  {
    v10 = pRequest;
    pRequest->m_Reserved = 1;
    v10->m_IoQueue = this;
    v10->m_ForwardProgressQueue = this;
    v10->m_Completed = 0;
    if ( this->m_FwdProgContext->m_IoReservedResourcesAllocate.Method )
    {
      v10->m_Presented = 1;
      if ( v10->m_ObjectSize )
        v11 = (unsigned __int64)v10 ^ 0xFFFFFFFFFFFFFFF8uLL;
      else
        v11 = 0LL;
      m_FwdProgContext = this->m_FwdProgContext;
      m_ObjectSize = this->m_ObjectSize;
      v14 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
      if ( !m_ObjectSize )
        v14 = 0LL;
      v15 = m_FwdProgContext->m_IoReservedResourcesAllocate.Method((WDFQUEUE__ *)v14, (WDFREQUEST__ *)v11);
      v9 = v15;
      if ( v15 >= 0 )
        goto LABEL_14;
      WPP_IFR_SF_d(m_Globals, 2u, 0xDu, 0x6Bu, WPP_FxIoQueue_cpp_Traceguids, v15);
      FxRequest::FreeRequest(v10);
    }
    if ( (v9 & 0x80000000) != 0 )
      return v9;
LABEL_14:
    *Request = v10;
    return v9;
  }
  WPP_IFR_SF_d(m_Globals, 2u, 0xDu, 0x6Au, WPP_FxIoQueue_cpp_Traceguids, _a1);
  return v9;
}
