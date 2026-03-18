/*
 * XREFs of ?Vf_VerifyCompleteInternal@FxRequest@@AEAAXPEAU_FX_DRIVER_GLOBALS@@J@Z @ 0x1C00C6154
 * Callers:
 *     ?CompleteInternal@FxRequest@@AEAAJJ@Z @ 0x1C0008280 (-CompleteInternal@FxRequest@@AEAAJJ@Z.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000B110 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000B170 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_q @ 0x1C0010E28 (WPP_IFR_SF_q.c)
 *     memset @ 0x1C001B300 (memset.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002F850 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qDiD @ 0x1C0050C08 (WPP_IFR_SF_qDiD.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C005B7E4 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00C69C4 (-Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

// local variable allocation has failed, the output may be wrong!
void __fastcall FxRequest::Vf_VerifyCompleteInternal(FxRequest *this, _FX_DRIVER_GLOBALS *Status, int FxDriverGlobals)
{
  _FX_DRIVER_GLOBALS **p_m_Globals; // r14
  _FX_DRIVER_GLOBALS *m_Globals; // rdx
  __int16 m_VerifierFlags; // ax
  const void *_a1; // rcx
  FxIrp *p_m_Irp; // r12
  _IRP *m_Irp; // r8
  _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  unsigned int level; // ebp
  unsigned int id; // esi
  unsigned __int8 v14; // dl
  unsigned __int64 flags; // r15
  unsigned __int8 v16; // dl
  unsigned int v17; // r8d
  unsigned __int16 v18; // r9
  unsigned __int16 *p_m_ObjectSize; // rbx
  WDFREQUEST__ *v20; // rdi
  WDFREQUEST__ *v21; // rax
  _IRP *v22; // rdx
  bool v23; // zf
  _FX_DRIVER_GLOBALS *v24; // rcx
  const _GUID *traceGuid; // [rsp+20h] [rbp-88h]
  _WDF_REQUEST_FATAL_ERROR_INFORMATION_LENGTH_MISMATCH_DATA data; // [rsp+50h] [rbp-58h] BYREF
  _FX_DRIVER_GLOBALS *irql; // [rsp+B8h] [rbp+10h] OVERLAPPED BYREF

  irql = Status;
  FxNonPagedObject::Lock(this, (unsigned __int8 *)&irql, FxDriverGlobals);
  p_m_Globals = &this->m_Globals;
  m_Globals = this->m_Globals;
  if ( m_Globals->FxVerifierIO && m_Globals->FxVerifierOn )
    FxRequest::Vf_VerifyRequestIsNotCompleted(this, m_Globals);
  m_VerifierFlags = this->m_VerifierFlags;
  if ( (m_VerifierFlags & 0x10) != 0 && (m_VerifierFlags & 0x40) == 0 )
  {
    _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_q(*p_m_Globals, 2u, 0x10u, 0xEu, WPP_FxRequest_cpp_Traceguids, _a1);
    FxVerifierDbgBreakPoint(*p_m_Globals);
  }
  p_m_Irp = &this->m_Irp;
  m_Irp = this->m_Irp.m_Irp;
  CurrentStackLocation = m_Irp->Tail.Overlay.CurrentStackLocation;
  level = CurrentStackLocation->MajorFunction;
  if ( level == 3 || CurrentStackLocation->MajorFunction == 4 )
  {
    id = CurrentStackLocation->Parameters.Read.Length;
  }
  else
  {
    if ( CurrentStackLocation->MajorFunction != 14 )
      goto LABEL_14;
    if ( m_Irp->RequestorMode != 1 )
      goto LABEL_14;
    id = CurrentStackLocation->Parameters.Read.Length;
    if ( !id )
      goto LABEL_14;
  }
  if ( FxDriverGlobals >= 0 )
  {
    flags = m_Irp->IoStatus.Information;
    if ( flags > id )
    {
      memset(&data, 0, sizeof(data));
      p_m_ObjectSize = &this->m_ObjectSize;
      v20 = (WDFREQUEST__ *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      v21 = v20;
      if ( !*p_m_ObjectSize )
        v21 = 0LL;
      WPP_IFR_SF_qDiD(*p_m_Globals, v16, v17, v18, traceGuid, v21, level, flags, id);
      v22 = p_m_Irp->m_Irp;
      v23 = *p_m_ObjectSize == 0;
      v24 = *p_m_Globals;
      data.Irp = p_m_Irp->m_Irp;
      if ( v23 )
        v20 = 0LL;
      data.Request = v20;
      data.OutputBufferLength = id;
      data.Information = v22->IoStatus.Information;
      data.MajorFunction = v22->Tail.Overlay.CurrentStackLocation->MajorFunction;
      FxVerifierBugCheckWorker(v24, WDF_REQUEST_FATAL_ERROR, 4uLL, (ULONG_PTR)&data);
    }
  }
LABEL_14:
  v14 = (unsigned __int8)irql;
  this->m_Completed = 1;
  FxNonPagedObject::Unlock(this, v14, (unsigned __int8)m_Irp);
}
