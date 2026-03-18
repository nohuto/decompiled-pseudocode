/*
 * XREFs of ??0FxRequest@@IEAA@PEAU_FX_DRIVER_GLOBALS@@PEAU_IRP@@W4FxRequestIrpOwnership@@W4FxRequestConstructorCaller@@G@Z @ 0x1C000A330
 * Callers:
 *     imp_WdfRequestCreate @ 0x1C000A590 (imp_WdfRequestCreate.c)
 *     ?_Create@FxRequest@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_IRP@@PEAVFxIoTarget@@W4FxRequestIrpOwnership@@W4FxRequestConstructorCaller@@PEAPEAV1@@Z @ 0x1C0050FEC (-_Create@FxRequest@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_IRP@@PEAVFxIoTar.c)
 *     ?_CreateForPackage@FxRequest@@SAJPEAVFxDevice@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_IRP@@PEAPEAV1@@Z @ 0x1C005118C (-_CreateForPackage@FxRequest@@SAJPEAVFxDevice@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_IRP@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z @ 0x1C0033A78 (-CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z.c)
 *     ?Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00C2C7C (-Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 */

void __fastcall FxRequest::FxRequest(
        FxRequest *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _IRP *Irp,
        FxRequestIrpOwnership Ownership,
        FxRequestConstructorCaller Caller)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rax
  FxRequestConstructorCaller v10; // esi
  unsigned __int8 v11; // al
  _WDF_BIND_INFO *WdfBindInfo; // rax
  unsigned int Major; // ecx
  KIRQL v14; // al
  _FX_DRIVER_GLOBALS *v15; // rdx
  FxVerifierLock *VerifierLock; // [rsp+40h] [rbp+8h] BYREF

  this->m_Globals = FxDriverGlobals;
  this->__vftable = (FxRequest_vtbl *)FxObject::`vftable';
  *(_DWORD *)&this->m_Type = 24121352;
  this->m_SpinLock.m_Lock = 0LL;
  this->m_SpinLock.m_DbgFlagIsInitialized = 1;
  this->m_Refcnt = 1;
  *(_DWORD *)&this->m_ObjectFlags = 0x10000;
  this->m_ParentObject = 0LL;
  this->m_ChildListHead.Blink = &this->m_ChildListHead;
  this->m_ChildListHead.Flink = &this->m_ChildListHead;
  this->m_ChildEntry.Blink = &this->m_ChildEntry;
  this->m_ChildEntry.Flink = &this->m_ChildEntry;
  m_Globals = this->m_Globals;
  this->m_DisposeSingleEntry.Next = 0LL;
  this->m_DeviceBase = 0LL;
  if ( m_Globals->FxVerifierOn )
    FxObject::Vf_VerifyConstruct(this, FxDriverGlobals, 0);
  this->__vftable = (FxRequest_vtbl *)FxNonPagedObject::`vftable';
  this->m_NPLock.m_Lock = 0LL;
  this->m_NPLock.m_DbgFlagIsInitialized = 1;
  if ( SLOBYTE(this->m_ObjectFlags) < 0 )
  {
    v15 = this->m_Globals;
    if ( v15->FxVerifierLock )
    {
      VerifierLock = 0LL;
      FxVerifierLock::CreateAndInitialize(&VerifierLock, v15, this);
      this[-1].m_ForwardProgressList.Flink = (_LIST_ENTRY *)VerifierLock;
    }
  }
  this->__vftable = (FxRequest_vtbl *)FxRequestBase::`vftable';
  this->m_Irp.m_Irp = Irp;
  v10 = Caller;
  this->m_CancelRoutine.m_Cancel = 0LL;
  this->m_CompletionRoutine.m_Completion = 0LL;
  this->m_CanComplete = 0;
  if ( v10 == FxRequestConstructorCallerIsDriver )
  {
    if ( Ownership == FxRequestOwnsIrp )
      v11 = 1;
    else
      v11 = 2;
    this->m_IrpAllocation = v11;
    WdfBindInfo = FxDriverGlobals->WdfBindInfo;
    Major = WdfBindInfo->Version.Major;
    if ( Major > 1 || Major == 1 && WdfBindInfo->Version.Minor >= 0xB )
    {
      v14 = KeAcquireSpinLockRaiseToDpc(&this->m_SpinLock.m_Lock);
      this->m_ObjectFlags |= 0x800u;
      KeReleaseSpinLock(&this->m_SpinLock.m_Lock, v14);
    }
  }
  else if ( Ownership == FxRequestOwnsIrp )
  {
    this->m_IrpAllocation = 1;
  }
  else
  {
    this->m_IrpAllocation = 0;
    this->m_CanComplete = 1;
  }
  this->m_Target = 0LL;
  this->m_TargetFlags = 0;
  this->m_TargetCompletionContext = 0LL;
  this->m_Completed = this->m_Irp.m_Irp == 0LL;
  this->m_Canceled = 0;
  this->m_PriorityBoost = 0;
  this->m_RequestContext = 0LL;
  this->m_Timer = 0LL;
  this->m_CsqContext.Irp = (_IRP *)&this->120;
  this->m_ListEntry.Flink = (_LIST_ENTRY *)&this->120;
  this->__vftable = (FxRequest_vtbl *)FxRequest::`vftable';
  this->m_DrainSingleEntry.Next = 0LL;
  *(_QWORD *)&this->m_SystemBufferOffset = 216LL;
  this->m_IrpQueue = 0LL;
  this->m_IrpCompletionReferenceCount = 0;
  this->m_AllocatedMdl = 0LL;
  *(_DWORD *)&this->m_OutputBufferOffset = 232;
  this->m_CompletionState = 0;
  this->m_SystemBuffer.__vftable = (FxRequestSystemBuffer_vtbl *)FxRequestSystemBuffer::`vftable';
  this->m_SystemBuffer.m_Buffer = 0LL;
  this->m_OutputBuffer.__vftable = (FxRequestOutputBuffer_vtbl *)FxRequestOutputBuffer::`vftable';
  this->m_OutputBuffer.m_Buffer = 0LL;
  this->m_IoQueue = 0LL;
  this->m_PowerStopState = 0;
  this->m_OwnerListEntry.Blink = &this->m_OwnerListEntry;
  this->m_OwnerListEntry.Flink = &this->m_OwnerListEntry;
  this->m_OwnerListEntry2.Blink = &this->m_OwnerListEntry2;
  this->m_OwnerListEntry2.Flink = &this->m_OwnerListEntry2;
  this->m_ForwardProgressList.Blink = &this->m_ForwardProgressList;
  this->m_ForwardProgressList.Flink = &this->m_ForwardProgressList;
  this->m_Presented = v10 == FxRequestConstructorCallerIsDriver;
  *(_WORD *)&this->m_Reserved = 0;
  this->m_ForwardProgressQueue = 0LL;
  this->m_InternalContext = 0LL;
}
