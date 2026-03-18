/*
 * XREFs of ?SubmitPendedRequest@FxIoTarget@@QEAAXPEAVFxRequestBase@@@Z @ 0x1C0067DE0
 * Callers:
 *     ?SubmitPendedRequests@FxIoTarget@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C0067F38 (-SubmitPendedRequests@FxIoTarget@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?Start@FxUsbDevice@@MEAAJXZ @ 0x1C0073990 (-Start@FxUsbDevice@@MEAAJXZ.c)
 * Callees:
 *     ?DecrementIoCount@FxIoTarget@@IEAAXXZ @ 0x1C000AF34 (-DecrementIoCount@FxIoTarget@@IEAAXXZ.c)
 *     ?Submit@FxIoTarget@@QEAAKPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@K@Z @ 0x1C000E570 (-Submit@FxIoTarget@@QEAAKPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@K@Z.c)
 *     WPP_IFR_SF_qq @ 0x1C0012FB4 (WPP_IFR_SF_qq.c)
 *     WPP_IFR_SF_qid @ 0x1C0031B08 (WPP_IFR_SF_qid.c)
 *     ?HandleFailedResubmit@FxIoTarget@@IEAAXPEAVFxRequestBase@@@Z @ 0x1C0067534 (-HandleFailedResubmit@FxIoTarget@@IEAAXPEAVFxRequestBase@@@Z.c)
 */

void __fastcall FxIoTarget::SubmitPendedRequest(FxIoTarget *this, FxRequestBase *Request)
{
  char v4; // si
  unsigned __int8 v5; // r8
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  unsigned __int64 v7; // rdx
  FxRequestBase *_a1; // rax
  _FX_DRIVER_GLOBALS *v9; // rcx
  unsigned __int64 v10; // r9
  FxRequestBase *v11; // rax

  v4 = FxIoTarget::Submit(this, Request, 0LL, 0);
  if ( (v4 & 1) != 0 )
  {
    m_Globals = this->m_Globals;
    if ( m_Globals->FxVerboseOn )
    {
      v7 = (unsigned __int64)Request ^ 0xFFFFFFFFFFFFFFF8uLL;
      _a1 = Request;
      if ( !Request->m_ObjectSize )
        v7 = 0LL;
      if ( v7 )
        _a1 = (FxRequestBase *)v7;
      WPP_IFR_SF_qq(m_Globals, 5u, 0xEu, 0xCu, WPP_FxIoTarget_cpp_Traceguids, _a1, Request->m_Irp.m_Irp);
    }
    this->Send(this, Request->m_Irp.m_Irp);
  }
  if ( (v4 & 3) != 0 )
  {
    FxIoTarget::DecrementIoCount(this);
    Request->Release(Request, this, 263, "minkernel\\wdf\\framework\\shared\\targets\\general\\fxiotarget.cpp");
  }
  else
  {
    v9 = this->m_Globals;
    if ( v9->FxVerboseOn )
    {
      v10 = (unsigned __int64)Request ^ 0xFFFFFFFFFFFFFFF8uLL;
      v11 = Request;
      if ( !Request->m_ObjectSize )
        v10 = 0LL;
      if ( v10 )
        v11 = (FxRequestBase *)v10;
      WPP_IFR_SF_qid(
        v9,
        5u,
        0xEu,
        0xDu,
        WPP_FxIoTarget_cpp_Traceguids,
        v11,
        (__int64)Request->m_Irp.m_Irp,
        Request->m_Irp.m_Irp->IoStatus.Status);
    }
    Request->m_Irp.m_Irp->IoStatus.Information = 0LL;
    FxIoTarget::HandleFailedResubmit(this, Request, v5);
  }
}
