/*
 * XREFs of ?SubmitLocked@FxIoTarget@@QEAAKPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@K@Z @ 0x1C00019F0
 * Callers:
 *     imp_WdfRequestSend @ 0x1C00017C0 (imp_WdfRequestSend.c)
 *     ?Submit@FxIoTarget@@QEAAKPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@K@Z @ 0x1C000EA30 (-Submit@FxIoTarget@@QEAAKPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@K@Z.c)
 *     ?ResubmitRepeater@FxUsbPipeContinuousReader@@QEAAKPEAUFxUsbPipeRepeatReader@@PEAJ@Z @ 0x1C00703DC (-ResubmitRepeater@FxUsbPipeContinuousReader@@QEAAKPEAUFxUsbPipeRepeatReader@@PEAJ@Z.c)
 * Callees:
 *     WPP_IFR_SF_qL @ 0x1C0003F1C (WPP_IFR_SF_qL.c)
 *     ?DecrementIoCount@FxIoTarget@@IEAAXXZ @ 0x1C000B1A4 (-DecrementIoCount@FxIoTarget@@IEAAXXZ.c)
 *     WPP_IFR_SF_q @ 0x1C0010E28 (WPP_IFR_SF_q.c)
 *     ?Start@MxTimer@@QEAAXT_LARGE_INTEGER@@K@Z @ 0x1C0019C10 (-Start@MxTimer@@QEAAXT_LARGE_INTEGER@@K@Z.c)
 *     WPP_IFR_SF_qid @ 0x1C0030F38 (WPP_IFR_SF_qid.c)
 *     ?SetVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x1C004B190 (-SetVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     WPP_IFR_SF_qLqd @ 0x1C0050D18 (WPP_IFR_SF_qLqd.c)
 *     ?CreateTimer@FxRequestBase@@QEAAJXZ @ 0x1C0055030 (-CreateTimer@FxRequestBase@@QEAAJXZ.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C005B7E4 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x1C005DDB8 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 *     ?PendRequestLocked@FxIoTarget@@IEAAJPEAVFxRequestBase@@@Z @ 0x1C0067E40 (-PendRequestLocked@FxIoTarget@@IEAAJPEAVFxRequestBase@@@Z.c)
 *     ?Vf_VerifySubmitLocked@FxIoTarget@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequestBase@@@Z @ 0x1C00C6DF8 (-Vf_VerifySubmitLocked@FxIoTarget@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequestBase@@@Z.c)
 */

__int64 __fastcall FxIoTarget::SubmitLocked(
        FxIoTarget *this,
        FxRequestBase *Request,
        _WDF_REQUEST_SEND_OPTIONS *Options,
        int Flags)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r13
  char v7; // r12
  char v8; // dl
  unsigned int v9; // esi
  _WDF_REQUEST_SEND_OPTIONS *v10; // rax
  char v12; // r15
  _WDF_IO_TARGET_STATE m_State; // r8d
  int Timer; // ebp
  unsigned int v15; // edx
  bool v16; // zf
  $41EACD23695CB34D39C03C31B435114F *v17; // rax
  _LIST_ENTRY *p_m_IgnoredIoListHead; // rcx
  _IRP *Blink; // rdx
  unsigned __int64 v20; // r14
  unsigned __int16 *p_m_ObjectSize; // rdi
  unsigned __int64 v23; // rsi
  FxRequestBase *v24; // rax
  int v25; // eax
  unsigned __int64 v26; // rcx
  FxRequestBase *v27; // rax
  FxRequestBase *_a3; // rdx
  unsigned __int64 v29; // rcx
  const void *v30; // rcx
  unsigned __int64 v31; // rcx
  FxRequestBase *v32; // rdx
  const void *v33; // rcx
  unsigned __int64 v34; // rdx
  FxRequestBase *v35; // rax
  unsigned __int64 v36; // rcx
  FxTagTracker *m_TargetCompletionContext; // rcx
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  unsigned __int64 v39; // rdx
  FxRequestBase *v40; // rcx
  unsigned __int64 v41; // rax
  FxRequestBase *v42; // rax
  FxRequestTimer *m_Timer; // rcx
  __int64 Timeout; // rdx
  char v45; // [rsp+A0h] [rbp+8h]

  m_Globals = this->m_Globals;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  v10 = Options;
  v45 = 0;
  if ( Request->m_IrpCompletionReferenceCount )
  {
    p_m_ObjectSize = &Request->m_ObjectSize;
    v23 = (unsigned __int64)Request ^ 0xFFFFFFFFFFFFFFF8uLL;
    v24 = (FxRequestBase *)((unsigned __int64)Request ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !Request->m_ObjectSize )
      v24 = 0LL;
    if ( v24 )
      Request = v24;
    WPP_IFR_SF_q(m_Globals, 2u, 0xEu, 0x1Du, WPP_FxIoTarget_cpp_Traceguids, Request);
    if ( !*p_m_ObjectSize )
      v23 = 0LL;
    FxVerifierBugCheckWorker(m_Globals, WDF_REQUEST_FATAL_ERROR, 3uLL, v23);
  }
  if ( m_Globals->FxVerifierOn && m_Globals->FxVerifierIO )
  {
    v12 = 1;
    v25 = FxIoTarget::Vf_VerifySubmitLocked(this, m_Globals, Request);
    v8 = 0;
    Timer = v25;
    if ( v25 < 0 )
      goto LABEL_54;
    v10 = Options;
  }
  else
  {
    v12 = 0;
  }
  if ( (Flags & 1) == 0 || !v10->Timeout )
  {
LABEL_5:
    m_State = this->m_State;
    if ( (Flags & 4) != 0 )
    {
      if ( (unsigned int)(m_State - 3) > 2 || this->m_Removing )
      {
        v9 = 1;
        v31 = (unsigned __int64)Request ^ 0xFFFFFFFFFFFFFFF8uLL;
        v32 = Request;
        if ( !Request->m_ObjectSize )
          v31 = 0LL;
        if ( v31 )
          v32 = (FxRequestBase *)v31;
        v33 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !this->m_ObjectSize )
          v33 = 0LL;
        WPP_IFR_SF_qid(m_Globals, 4u, 0xEu, 0x20u, WPP_FxIoTarget_cpp_Traceguids, v33, (__int64)v32, m_State);
        Request->m_TargetFlags |= 0x10u;
        v8 = 0;
        v7 = 1;
        goto LABEL_8;
      }
      Timer = -1073741436;
      _a3 = Request;
      v29 = (unsigned __int64)Request ^ 0xFFFFFFFFFFFFFFF8uLL;
      if ( !Request->m_ObjectSize )
        v29 = 0LL;
      if ( v29 )
        _a3 = (FxRequestBase *)v29;
      v30 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !this->m_ObjectSize )
        v30 = 0LL;
      WPP_IFR_SF_qLqd(m_Globals, 4u, 0xEu, 0x1Fu, WPP_FxIoTarget_cpp_Traceguids, v30, m_State, _a3, -1073741436);
      v8 = 0;
    }
    else
    {
      if ( m_State == WdfIoTargetStarted )
      {
        v9 = 1;
LABEL_8:
        Timer = 0;
LABEL_9:
        Request->m_CsqContext.Irp = (_IRP *)&Request->120;
        Request->m_ListEntry.Flink = (_LIST_ENTRY *)&Request->120;
        goto $Done_0;
      }
      if ( m_State == WdfIoTargetStopped )
      {
        if ( Flags < 0 )
        {
          Timer = -1073741436;
          goto LABEL_54;
        }
        Timer = 1075838976;
        v9 = 2;
        goto LABEL_9;
      }
      v34 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
      v35 = Request;
      if ( !this->m_ObjectSize )
        v34 = 0LL;
      v36 = (unsigned __int64)Request ^ 0xFFFFFFFFFFFFFFF8uLL;
      if ( !Request->m_ObjectSize )
        v36 = 0LL;
      if ( v36 )
        v35 = (FxRequestBase *)v36;
      WPP_IFR_SF_qid(m_Globals, 2u, 0xEu, 0x21u, WPP_FxIoTarget_cpp_Traceguids, v35, v34, m_State);
      v8 = 0;
      Timer = -1073741436;
    }
LABEL_54:
    v9 &= ~1u;
    Request->m_Irp.m_Irp->IoStatus.Status = Timer;
    if ( !v8 )
      return v9;
    goto LABEL_23;
  }
  Timer = FxRequestBase::CreateTimer(Request);
  if ( Timer >= 0 )
  {
    v8 = 0;
    v45 = 1;
    goto LABEL_5;
  }
  v26 = (unsigned __int64)Request ^ 0xFFFFFFFFFFFFFFF8uLL;
  v27 = Request;
  if ( !Request->m_ObjectSize )
    v26 = 0LL;
  if ( v26 )
    v27 = (FxRequestBase *)v26;
  WPP_IFR_SF_qL(m_Globals, 2u, 0xEu, 0x1Eu, WPP_FxIoTarget_cpp_Traceguids, v27, Timer);
  v8 = 0;
$Done_0:
  if ( Timer < 0 )
    goto LABEL_54;
  Request->m_Target = this;
  _InterlockedIncrement(&this->m_IoCount);
  v15 = _InterlockedIncrement(&Request->m_Refcnt);
  if ( SLOBYTE(Request->m_ObjectFlags) < 0 )
  {
    m_TargetCompletionContext = (FxTagTracker *)Request[-1].m_TargetCompletionContext;
    if ( m_TargetCompletionContext )
      FxTagTracker::UpdateTagHistory(
        m_TargetCompletionContext,
        this,
        1472,
        "minkernel\\wdf\\framework\\shared\\targets\\general\\fxiotarget.cpp",
        TagAddRef,
        v15);
  }
  v16 = Request->m_Canceled == 0;
  v8 = 1;
  Request->m_IrpCompletionReferenceCount = 1;
  if ( !v16 )
  {
    Timer = -1073741536;
    v9 = 2 * (_InterlockedAdd(&Request->m_IrpCompletionReferenceCount, 0xFFFFFFFF) != 0);
    goto LABEL_54;
  }
  if ( (v9 & 1) != 0 )
  {
    v17 = &Request->120;
    if ( v7 )
    {
      p_m_IgnoredIoListHead = &this->m_IgnoredIoListHead;
      Blink = (_IRP *)this->m_IgnoredIoListHead.Blink;
      if ( *(FxIoTarget **)&Blink->Type == (FxIoTarget *)&this->m_IgnoredIoListHead )
      {
LABEL_16:
        v17->m_ListEntry.Flink = p_m_IgnoredIoListHead;
        Request->m_CsqContext.Irp = Blink;
        *(_QWORD *)&Blink->Type = v17;
        p_m_IgnoredIoListHead->Blink = (_LIST_ENTRY *)v17;
        if ( IoSetCompletionRoutineEx(
               this->m_InStackDevice,
               Request->m_Irp.m_Irp,
               FxIoTarget::_RequestCompletionRoutine,
               Request,
               1u,
               1u,
               1u) < 0 )
        {
          CurrentStackLocation = Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation;
          CurrentStackLocation[-1].CompletionRoutine = FxIoTarget::_RequestCompletionRoutine;
          CurrentStackLocation[-1].Context = Request;
          CurrentStackLocation[-1].Control = -32;
        }
        goto LABEL_18;
      }
    }
    else
    {
      p_m_IgnoredIoListHead = &this->m_SentIoListHead;
      Blink = (_IRP *)this->m_SentIoListHead.Blink;
      if ( *(FxIoTarget **)&Blink->Type == (FxIoTarget *)&this->m_SentIoListHead )
        goto LABEL_16;
    }
    __fastfail(3u);
  }
  Timer = FxIoTarget::PendRequestLocked(this, Request);
  v39 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
  v40 = Request;
  if ( !this->m_ObjectSize )
    v39 = 0LL;
  v20 = (unsigned __int64)Request ^ 0xFFFFFFFFFFFFFFF8uLL;
  v41 = (unsigned __int64)Request ^ 0xFFFFFFFFFFFFFFF8uLL;
  if ( !Request->m_ObjectSize )
    v41 = 0LL;
  if ( v41 )
    v40 = (FxRequestBase *)v41;
  WPP_IFR_SF_qid(m_Globals, 4u, 0xEu, 0x22u, WPP_FxIoTarget_cpp_Traceguids, v40, v39, Timer);
  if ( Timer >= 0 )
    goto LABEL_20;
  if ( !_InterlockedAdd(&Request->m_IrpCompletionReferenceCount, 0xFFFFFFFF) )
    v9 = 0;
LABEL_18:
  if ( Timer < 0 )
  {
    v8 = 1;
    goto LABEL_54;
  }
  v20 = (unsigned __int64)Request ^ 0xFFFFFFFFFFFFFFF8uLL;
LABEL_20:
  if ( v45 )
  {
    if ( m_Globals->FxVerboseOn )
    {
      if ( !Request->m_ObjectSize )
        v20 = 0LL;
      v42 = Request;
      if ( v20 )
        v42 = (FxRequestBase *)v20;
      WPP_IFR_SF_q(m_Globals, 5u, 0xEu, 0x23u, WPP_FxIoTarget_cpp_Traceguids, v42);
    }
    m_Timer = Request->m_Timer;
    Timeout = Options->Timeout;
    Request->m_TargetFlags |= 4u;
    MxTimer::Start(&m_Timer->Timer, (_LARGE_INTEGER)Timeout, 0);
  }
  if ( v12 )
    FxRequestBase::SetVerifierFlags(Request, 256);
LABEL_23:
  if ( !v9 )
  {
    Request->Release(Request, this, 1630, "minkernel\\wdf\\framework\\shared\\targets\\general\\fxiotarget.cpp");
    FxIoTarget::DecrementIoCount(this);
  }
  return v9;
}
