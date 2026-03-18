/*
 * XREFs of imp_WdfDeviceWdmDispatchIrpToIoQueue @ 0x1C00124F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_d @ 0x1C0003FF0 (WPP_IFR_SF_d.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C0008860 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000B110 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C000B6A0 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C000BDA0 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?GetIrp@FxRequest@@QEAAJPEAPEAU_IRP@@@Z @ 0x1C0012BA4 (-GetIrp@FxRequest@@QEAAJPEAPEAU_IRP@@@Z.c)
 *     ?AssignMemoryBuffers@FxRequest@@AEAAXW4_WDF_DEVICE_IO_TYPE@@@Z @ 0x1C0012C00 (-AssignMemoryBuffers@FxRequest@@AEAAXW4_WDF_DEVICE_IO_TYPE@@@Z.c)
 *     WPP_IFR_SF_qq @ 0x1C00133A4 (WPP_IFR_SF_qq.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x1C0013DAC (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     ?InsertNewRequestLocked@FxIoQueue@@AEAAJPEAPEAVFxRequest@@E@Z @ 0x1C00143F4 (-InsertNewRequestLocked@FxIoQueue@@AEAAJPEAPEAVFxRequest@@E@Z.c)
 *     ?MarkPassiveCallbacks@FxObject@@QEAAXW4FxObjectLockState@@@Z @ 0x1C001A234 (-MarkPassiveCallbacks@FxObject@@QEAAXW4FxObjectLockState@@@Z.c)
 *     memset @ 0x1C001B300 (memset.c)
 *     ?CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z @ 0x1C0032E60 (-CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z.c)
 *     ?Complete@FxRequest@@QEAAJJ@Z @ 0x1C004AF90 (-Complete@FxRequest@@QEAAJJ@Z.c)
 *     ?FreeRequest@FxRequest@@QEAAXXZ @ 0x1C005029C (-FreeRequest@FxRequest@@QEAAXXZ.c)
 *     ?FxPoolInsertNonPagedAllocateTracker@@YAXPEAUFX_POOL@@PEAUFX_POOL_TRACKER@@_KKPEAX@Z @ 0x1C0053814 (-FxPoolInsertNonPagedAllocateTracker@@YAXPEAUFX_POOL@@PEAUFX_POOL_TRACKER@@_KKPEAX@Z.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C0058664 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C005B7E4 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C005B850 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?AssignParentObject@FxObject@@QEAAJPEAV1@@Z @ 0x1C005C364 (-AssignParentObject@FxObject@@QEAAJPEAV1@@Z.c)
 *     ?ClearEvtCallbacks@FxObject@@QEAAXXZ @ 0x1C005C490 (-ClearEvtCallbacks@FxObject@@QEAAXXZ.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x1C005CD60 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?DispathToInCallerContextCallback@FxPkgIo@@QEAAJPEAVFxIoInCallerContext@@PEAVFxRequest@@PEAU_IRP@@@Z @ 0x1C0077A94 (-DispathToInCallerContextCallback@FxPkgIo@@QEAAJPEAVFxIoInCallerContext@@PEAVFxRequest@@PEAU_IRP.c)
 *     ?VerifierFreeRequestToTestForwardProgess@FxPkgIo@@AEAAJPEAVFxRequest@@@Z @ 0x1C007802C (-VerifierFreeRequestToTestForwardProgess@FxPkgIo@@AEAAJPEAVFxRequest@@@Z.c)
 *     WPP_IFR_SF_qLsqd @ 0x1C007A5E4 (WPP_IFR_SF_qLsqd.c)
 *     ?GetReservedRequest@FxIoQueue@@QEAAJPEAU_IRP@@PEAPEAVFxRequest@@@Z @ 0x1C007ACA8 (-GetReservedRequest@FxIoQueue@@QEAAJPEAU_IRP@@PEAPEAVFxRequest@@@Z.c)
 *     Vf_VerifyWdfDeviceWdmDispatchIrpToIoQueue @ 0x1C00C5B08 (Vf_VerifyWdfDeviceWdmDispatchIrpToIoQueue.c)
 *     ?Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00C6CAC (-Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?Vf_VerifyLeakDetectionConsiderObject@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00C6CEC (-Vf_VerifyLeakDetectionConsiderObject@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall imp_WdfDeviceWdmDispatchIrpToIoQueue(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Device,
        _IRP *Irp,
        unsigned __int64 Queue,
        unsigned int Flags)
{
  const void *v5; // rsi
  __int64 v9; // r8
  FxDevice *v10; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  __int64 v12; // rdx
  unsigned __int64 v13; // rdi
  unsigned int v14; // r15d
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  _IO_STACK_LOCATION *v16; // rcx
  FxPkgIo *m_PkgIo; // rcx
  __int64 v18; // r13
  FxDeviceBase *m_DeviceBase; // r12
  _WDF_EXECUTION_LEVEL *p_m_ExecutionLevel; // r13
  __int64 v21; // rcx
  FxRequest *v22; // r15
  FxVerifierLock *v23; // rax
  FX_POOL_TRACKER *v24; // rbx
  _FX_DRIVER_GLOBALS *v25; // rdx
  _QWORD *p_Flink; // rax
  FxRequest *v27; // rbx
  _WDF_EXECUTION_LEVEL *v28; // rcx
  _LIST_ENTRY *v29; // rax
  _LIST_ENTRY *Flink; // r8
  _FX_DRIVER_GLOBALS *v31; // rax
  unsigned __int8 v32; // r8
  FxObjectLockState v33; // r11d
  _FX_DRIVER_GLOBALS *v34; // rdx
  unsigned __int16 m_ObjectSize; // ax
  char *v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rcx
  _FX_DRIVER_GLOBALS *v39; // rax
  int _a1; // r12d
  char v41; // al
  FxPkgIo *v42; // rbx
  FxIoInCallerContext *v43; // rax
  char v44; // al
  unsigned __int8 v45; // bl
  unsigned __int8 v46; // r8
  unsigned int _a4; // ecx
  _FX_DRIVER_GLOBALS *v48; // rcx
  unsigned __int16 v49; // r9
  int v51; // eax
  unsigned int v52; // ebx
  FxIoInCallerContext *v53; // rax
  FxIoInCallerContext *p_m_InCallerContextCallback; // rax
  _FX_DRIVER_GLOBALS *v55; // rdx
  int v56; // eax
  unsigned __int64 v57; // rdx
  unsigned __int64 v58; // rcx
  int v59; // eax
  FxVerifierLock *v60; // rcx
  _FX_DRIVER_GLOBALS *v61; // r11
  const char *_a5; // r10
  const void *globals; // r8
  const void *v64; // rdx
  const void *v65; // rdx
  unsigned __int8 v66; // r8
  const _GUID *Offset; // [rsp+20h] [rbp-61h]
  unsigned __int8 PreviousIrql[8]; // [rsp+50h] [rbp-31h] BYREF
  void *PPObject; // [rsp+58h] [rbp-29h] BYREF
  FxRequest *ReservedRequest; // [rsp+60h] [rbp-21h] BYREF
  void *v71; // [rsp+68h] [rbp-19h] BYREF
  FxVerifierLock *VerifierLock; // [rsp+70h] [rbp-11h] BYREF
  FxPkgIo *v73; // [rsp+78h] [rbp-9h]
  _WDF_EXECUTION_LEVEL *v74; // [rsp+80h] [rbp-1h]
  void *v75; // [rsp+88h] [rbp+7h] BYREF
  FxDeviceBase *v76; // [rsp+90h] [rbp+Fh]
  FxIoInCallerContext *InCallerContextInfo; // [rsp+98h] [rbp+17h]
  __int64 CurrentIrql; // [rsp+A0h] [rbp+1Fh]
  _IRP *ppIrp; // [rsp+A8h] [rbp+27h] BYREF
  void *retaddr; // [rsp+D8h] [rbp+57h]
  FxRequest *Request; // [rsp+E8h] [rbp+67h] BYREF

  v5 = 0LL;
  v71 = 0LL;
  InCallerContextInfo = 0LL;
  if ( !Device )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName, WDF_INVALID_HANDLE, 0LL, 0x1002uLL);
  LOWORD(v9) = 0;
  v10 = (FxDevice *)(~Device & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Device & 1) != 0 )
  {
    v9 = LOWORD(v10->FxDeviceBase::FxNonPagedObject::FxObject::__vftable);
    v10 = (FxDevice *)((char *)v10 - v9);
  }
  if ( v10->m_Type == 4098 )
  {
    PPObject = v10;
  }
  else
  {
    FxObjectHandleGetPtrQI(v10, &PPObject, (void *)Device, 0x1002u, v9);
    v10 = (FxDevice *)PPObject;
  }
  m_Globals = v10->m_Globals;
  if ( m_Globals->FxTrackDriverForMiniDumpLog )
  {
    *(_FX_DRIVER_GLOBALS *volatile *)((char *)&stru_1C00AEE88.m_DriverUsage->FxDriverGlobals
                                    + stru_1C00AEE88.m_EntrySize * HIDWORD(KeGetPcr()[1].LockArray)) = m_Globals;
    v10 = (FxDevice *)PPObject;
  }
  if ( !Queue )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName, WDF_INVALID_HANDLE, 0LL, 0x1003uLL);
  LOWORD(v12) = 0;
  v13 = ~Queue & 0xFFFFFFFFFFFFFFF8uLL;
  if ( (Queue & 1) != 0 )
  {
    v12 = *(unsigned __int16 *)v13;
    v13 -= v12;
  }
  if ( *(_WORD *)(v13 + 8) == 4099 )
  {
    v71 = (void *)v13;
  }
  else
  {
    FxObjectHandleGetPtrQI((FxObject *)v13, &v71, (void *)Queue, 0x1003u, v12);
    v10 = (FxDevice *)PPObject;
    v13 = (unsigned __int64)v71;
  }
  if ( !Irp )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  v14 = Flags;
  if ( (Flags & 2) != 0 )
  {
    --Irp->CurrentLocation;
    --Irp->Tail.Overlay.CurrentStackLocation;
  }
  if ( m_Globals->FxVerifierOn )
  {
    v51 = Vf_VerifyWdfDeviceWdmDispatchIrpToIoQueue(m_Globals, v10, Irp, (FxIoQueue *)v13, v14);
    v52 = v51;
    if ( v51 < 0 )
    {
      Irp->IoStatus.Status = v51;
      Irp->IoStatus.Information = 0LL;
      IofCompleteRequest(Irp, 0);
      return v52;
    }
    v13 = (unsigned __int64)v71;
    v10 = (FxDevice *)PPObject;
  }
  if ( v10->m_ParentDevice == *(FxDevice **)(v13 + 96) )
  {
    CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
    *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
    *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
    *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.SetQuota
                                                                               + 6);
    CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
    CurrentStackLocation[-1].Control = 0;
    --Irp->CurrentLocation;
    v16 = --Irp->Tail.Overlay.CurrentStackLocation;
    PPObject = (void *)*((_QWORD *)PPObject + 28);
    v16->DeviceObject = (_DEVICE_OBJECT *)*((_QWORD *)PPObject + 18);
    v13 = (unsigned __int64)v71;
    v10 = (FxDevice *)PPObject;
  }
  if ( (v14 & 1) != 0 )
  {
    v53 = *(FxIoInCallerContext **)(v13 + 360);
    if ( v53 )
      p_m_InCallerContextCallback = v53 + 3;
    else
      p_m_InCallerContextCallback = &v10->m_PkgIo->m_InCallerContextCallback;
    InCallerContextInfo = p_m_InCallerContextCallback;
  }
  m_PkgIo = v10->m_PkgIo;
  v73 = m_PkgIo;
  LOBYTE(Request) = v13 && *(_BYTE *)(v13 + 136);
  CurrentIrql = KeGetCurrentIrql();
  if ( (unsigned __int8)CurrentIrql <= 1u )
  {
    KeEnterCriticalRegion();
    m_PkgIo = v73;
  }
  if ( v13 && (v18 = *(_QWORD *)(v13 + 360)) != 0 )
  {
    m_DeviceBase = m_PkgIo->m_DeviceBase;
    p_m_ExecutionLevel = (_WDF_EXECUTION_LEVEL *)(v18 + 32);
  }
  else
  {
    m_DeviceBase = m_PkgIo->m_DeviceBase;
    p_m_ExecutionLevel = &m_DeviceBase[2].m_ExecutionLevel;
  }
  v21 = *(_QWORD *)&m_DeviceBase[3].m_SpinLock.m_DbgFlagIsInitialized;
  v22 = 0LL;
  v23 = (FxVerifierLock *)m_DeviceBase->m_Globals;
  v76 = m_DeviceBase;
  ReservedRequest = 0LL;
  v74 = p_m_ExecutionLevel;
  VerifierLock = v23;
  if ( v21 && *(_WORD *)(v21 + 8) == 4354 && *(_BYTE *)(v21 + 1699) )
  {
    v24 = (FX_POOL_TRACKER *)ExpInterlockedPopEntrySList((PSLIST_HEADER)&m_DeviceBase[2].m_SpinLock);
    if ( v24 )
      goto LABEL_31;
    goto LABEL_89;
  }
  ++HIDWORD(m_DeviceBase[2].m_ParentObject);
  v24 = (FX_POOL_TRACKER *)ExpInterlockedPopEntrySList((PSLIST_HEADER)&m_DeviceBase[2].m_SpinLock);
  if ( !v24 )
  {
    ++LODWORD(m_DeviceBase[2].m_ChildEntry.Flink);
LABEL_89:
    v24 = (FX_POOL_TRACKER *)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))m_DeviceBase[2].m_DeviceBase)(
                               HIDWORD(m_DeviceBase[2].m_ChildEntry.Blink),
                               HIDWORD(m_DeviceBase[2].m_DisposeSingleEntry.Next),
                               LODWORD(m_DeviceBase[2].m_DisposeSingleEntry.Next));
  }
LABEL_31:
  if ( v24 )
  {
    v25 = (_FX_DRIVER_GLOBALS *)VerifierLock;
    if ( LOBYTE(VerifierLock[1].m_Mutex.m_Lock.Event.Header.WaitListHead.Blink) )
    {
      FxPoolInsertNonPagedAllocateTracker(
        (FX_POOL *)&VerifierLock->m_ParentObject,
        v24,
        (unsigned __int64)m_DeviceBase[2].m_CallbackLockObjectPtr,
        *(&VerifierLock->m_Mutex.m_Lock.Contention + 1),
        retaddr);
      v25 = (_FX_DRIVER_GLOBALS *)VerifierLock;
      p_Flink = &v24[1].Link.Flink;
    }
    else
    {
      p_Flink = &v24->Link.Flink;
    }
    *p_Flink = v24;
    v27 = (FxRequest *)(p_Flink + 2);
    p_Flink[1] = v25;
    if ( p_m_ExecutionLevel )
    {
      v28 = p_m_ExecutionLevel;
    }
    else
    {
      v28 = &m_DeviceBase[2].m_ExecutionLevel;
      v74 = &m_DeviceBase[2].m_ExecutionLevel;
    }
    if ( v25->FxVerifierHandle )
    {
      memset(p_Flink + 2, 0, 0x30uLL);
      v28 = v74;
      LODWORD(v27->m_ChildListHead.Flink) = 1146058822;
      v27 = (FxRequest *)((char *)v27 + 48);
    }
    v27[1].m_Globals = 0LL;
    *(_QWORD *)&v27[1].m_ObjectFlags = 0LL;
    v27[1].m_ChildListHead.Flink = 0LL;
    v27[1].m_ChildListHead.Blink = 0LL;
    *(_QWORD *)&v27[1].m_SpinLock.m_DbgFlagIsInitialized = 0LL;
    *(_QWORD *)&v27[1].m_Type = v27;
    if ( v28 )
    {
      v29 = (_LIST_ENTRY *)*((_QWORD *)v28 + 6);
      if ( v29 )
      {
        Flink = (_LIST_ENTRY *)*((_QWORD *)v28 + 5);
        if ( !Flink )
          Flink = v29[1].Flink;
        memset(&v27[1].m_SpinLock.m_Lock, 0, ((unsigned __int64)&Flink->Flink + 7) & 0xFFFFFFFFFFFFFFF8uLL);
        v29 = (_LIST_ENTRY *)*((_QWORD *)v74 + 6);
      }
      v27[1].m_ChildListHead.Blink = v29;
    }
    if ( v27 )
    {
      v27->m_Globals = m_DeviceBase->m_Globals;
      v27->__vftable = (FxRequest_vtbl *)FxObject::`vftable';
      *(_DWORD *)&v27->m_Type = 24121352;
      v27->m_SpinLock.m_Lock = 0LL;
      v27->m_SpinLock.m_DbgFlagIsInitialized = 1;
      v27->m_Refcnt = 1;
      *(_DWORD *)&v27->m_ObjectFlags = 0x10000;
      v27->m_ParentObject = 0LL;
      v27->m_ChildListHead.Blink = &v27->m_ChildListHead;
      v27->m_ChildListHead.Flink = &v27->m_ChildListHead;
      v27->m_ChildEntry.Blink = &v27->m_ChildEntry;
      v27->m_ChildEntry.Flink = &v27->m_ChildEntry;
      v31 = v27->m_Globals;
      v27->m_DisposeSingleEntry.Next = 0LL;
      v27->m_DeviceBase = 0LL;
      if ( v31->FxVerifierOn )
        FxObject::Vf_VerifyConstruct(v27, v25, 0);
      v27->__vftable = (FxRequest_vtbl *)FxNonPagedObject::`vftable';
      v27->m_NPLock.m_Lock = 0LL;
      v27->m_NPLock.m_DbgFlagIsInitialized = 1;
      if ( SLOBYTE(v27->m_ObjectFlags) < 0 )
      {
        v55 = v27->m_Globals;
        if ( v55->FxVerifierLock )
        {
          VerifierLock = 0LL;
          FxVerifierLock::CreateAndInitialize(&VerifierLock, v55, v27);
          v27[-1].m_ForwardProgressList.Flink = (_LIST_ENTRY *)VerifierLock;
        }
      }
      v27->m_Irp.m_Irp = Irp;
      v27->m_CancelRoutine.m_Cancel = 0LL;
      v27->m_CompletionRoutine.m_Completion = 0LL;
      *(_WORD *)&v27->m_TargetFlags = 0;
      v27->m_CanComplete = 1;
      v27->m_Target = 0LL;
      v27->m_TargetCompletionContext = 0LL;
      v27->m_Completed = v27->m_Irp.m_Irp == 0LL;
      v27->m_Canceled = 0;
      v27->m_PriorityBoost = 0;
      v27->m_RequestContext = 0LL;
      v27->m_Timer = 0LL;
      v27->m_CsqContext.Irp = (_IRP *)&v27->120;
      v27->m_ListEntry.Flink = (_LIST_ENTRY *)&v27->120;
      v27->m_DrainSingleEntry.Next = 0LL;
      *(_QWORD *)&v27->m_SystemBufferOffset = 216LL;
      v27->m_IrpQueue = 0LL;
      v27->m_IrpCompletionReferenceCount = 0;
      v27->m_AllocatedMdl = 0LL;
      *(_DWORD *)&v27->m_OutputBufferOffset = 232;
      v27->m_CompletionState = 0;
      v27->m_SystemBuffer.__vftable = (FxRequestSystemBuffer_vtbl *)FxRequestSystemBuffer::`vftable';
      v27->m_SystemBuffer.m_Buffer = 0LL;
      v27->m_OutputBuffer.__vftable = (FxRequestOutputBuffer_vtbl *)FxRequestOutputBuffer::`vftable';
      v27->m_OutputBuffer.m_Buffer = 0LL;
      v27->m_IoQueue = 0LL;
      v27->m_PowerStopState = 0;
      v27->m_OwnerListEntry.Blink = &v27->m_OwnerListEntry;
      v27->m_OwnerListEntry.Flink = &v27->m_OwnerListEntry;
      v27->m_OwnerListEntry2.Blink = &v27->m_OwnerListEntry2;
      v27->m_OwnerListEntry2.Flink = &v27->m_OwnerListEntry2;
      v27->m_ForwardProgressList.Blink = &v27->m_ForwardProgressList;
      v27->m_ForwardProgressList.Flink = &v27->m_ForwardProgressList;
      v27->__vftable = (FxRequest_vtbl *)FxRequestFromLookaside::`vftable';
      v27->m_Presented = 0;
      *(_WORD *)&v27->m_Reserved = 0;
      v27->m_ForwardProgressQueue = 0LL;
      v27->m_InternalContext = 0LL;
      v27->m_DeviceBase = m_DeviceBase->m_DeviceBase;
      FxRequest::AssignMemoryBuffers(v27, (_WDF_DEVICE_IO_TYPE)m_DeviceBase[1].m_Refcnt);
      if ( m_DeviceBase->m_Globals->FxRequestParentOptimizationOn )
      {
        v34 = 0LL;
        v75 = 0LL;
        if ( !v27->m_ObjectSize )
        {
          _a1 = -1073741816;
LABEL_116:
          WPP_IFR_SF_d(v76->m_Globals, 2u, 0x10u, 0xBu, WPP_FxRequest_cpp_Traceguids, _a1);
          FxObject::ClearEvtCallbacks(v27);
          v27->DeleteObject(v27);
          goto LABEL_66;
        }
        if ( !p_m_ExecutionLevel )
        {
LABEL_62:
          v39 = v27->m_Globals;
          v27->m_ObjectFlags |= 8u;
          if ( v39->FxVerifierOn )
            FxObject::Vf_VerifyLeakDetectionConsiderObject(v27, v34);
          _a1 = 0;
          goto LABEL_65;
        }
        if ( *((_DWORD *)p_m_ExecutionLevel + 6) == 2 )
        {
          FxObject::MarkPassiveCallbacks(v27, v33);
          v34 = (_FX_DRIVER_GLOBALS *)v75;
        }
        if ( *((_QWORD *)p_m_ExecutionLevel + 4) )
        {
          FxObjectHandleGetPtr(v27->m_Globals, *((_QWORD *)p_m_ExecutionLevel + 4), 0x1000u, &v75);
          v34 = (_FX_DRIVER_GLOBALS *)v75;
        }
        if ( !v34 || (_a1 = FxObject::AssignParentObject(v27, (FxObject *)v34), _a1 >= 0) )
        {
          m_ObjectSize = v27->m_ObjectSize;
          if ( m_ObjectSize )
            v36 = (char *)v27 + m_ObjectSize;
          else
            v36 = 0LL;
          v37 = *((_QWORD *)p_m_ExecutionLevel + 2);
          if ( v37 )
            *((_QWORD *)v36 + 3) = v37;
          v38 = *((_QWORD *)p_m_ExecutionLevel + 1);
          if ( v38 )
          {
            *((_QWORD *)v36 + 2) = v38;
            v27->m_ObjectFlags |= 0x400u;
          }
          goto LABEL_62;
        }
      }
      else
      {
        _a1 = FxObject::Commit(v27, (_FX_DRIVER_GLOBALS *)p_m_ExecutionLevel, 0LL, m_DeviceBase, 0);
      }
      if ( _a1 >= 0 )
      {
LABEL_65:
        v22 = v27;
        ReservedRequest = v27;
        goto LABEL_66;
      }
      goto LABEL_116;
    }
  }
  _a1 = -1073741670;
  WPP_IFR_SF_d(v76->m_Globals, 2u, 0x10u, 0xAu, WPP_FxRequest_cpp_Traceguids, -1073741670);
LABEL_66:
  v41 = (char)Request;
  v42 = v73;
  if ( (_BYTE)Request )
  {
    if ( _a1 < 0 )
    {
LABEL_118:
      if ( v42->m_Filter && !v13 )
        goto LABEL_132;
      if ( v41 )
      {
        v56 = FxIoQueue::GetReservedRequest((FxIoQueue *)v13, Irp, &ReservedRequest);
        _a1 = v56;
        if ( v56 == 259 )
          goto LABEL_84;
        if ( v56 >= 0 )
          goto LABEL_123;
      }
      else
      {
        WPP_IFR_SF_d(v42->m_Globals, 2u, 0xDu, 0x10u, WPP_FxPkgIo_cpp_Traceguids, _a1);
      }
LABEL_132:
      Irp->IoStatus.Status = _a1;
      Irp->IoStatus.Information = 0LL;
      IofCompleteRequest(Irp, 0);
      goto LABEL_84;
    }
    if ( (v73->m_Globals->FxEnhancedVerifierOptions & 0xF0000) != 0 )
      _a1 = FxPkgIo::VerifierFreeRequestToTestForwardProgess(v73, v22);
    v41 = (char)Request;
  }
  if ( _a1 < 0 )
    goto LABEL_118;
  if ( v41 && *(_QWORD *)(*(_QWORD *)(v13 + 128) + 16LL) )
  {
    v22->m_Presented = 1;
    v57 = (unsigned __int64)v22 ^ 0xFFFFFFFFFFFFFFF8uLL;
    if ( !v22->m_ObjectSize )
      v57 = 0LL;
    v58 = v13 ^ 0xFFFFFFFFFFFFFFF8uLL;
    if ( !*(_WORD *)(v13 + 10) )
      v58 = 0LL;
    if ( (*(int (__fastcall **)(unsigned __int64, unsigned __int64, _QWORD))(*(_QWORD *)(v13 + 128) + 16LL))(
           v58,
           v57,
           *(_QWORD *)(v13 + 128)) < 0 )
    {
      FxRequest::FreeRequest(v22);
      ReservedRequest = 0LL;
      v59 = FxIoQueue::GetReservedRequest((FxIoQueue *)v13, Irp, &ReservedRequest);
      _a1 = v59;
      if ( v59 == 259 )
        goto LABEL_84;
      if ( v59 < 0 )
        goto LABEL_132;
LABEL_123:
      v22 = ReservedRequest;
    }
  }
  v43 = InCallerContextInfo;
  if ( InCallerContextInfo && InCallerContextInfo->m_Method && !v22->m_Reserved )
  {
    v22->m_InternalContext = (void *)v13;
    _a1 = FxPkgIo::DispathToInCallerContextCallback(v42, v43, v22, Irp);
    goto LABEL_84;
  }
  v44 = *(_BYTE *)(v13 + 24);
  Request = v22;
  if ( v44 < 0 && (v60 = *(FxVerifierLock **)(v13 - 40)) != 0LL )
  {
    FxVerifierLock::Lock(v60, PreviousIrql, v32);
    v45 = PreviousIrql[0];
  }
  else
  {
    v45 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v13 + 112));
    PreviousIrql[0] = v45;
  }
  if ( v22->m_Reserved )
    FxObject::AddRef(v22, (void *)0x50647746, 2311, "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
  _a4 = *(_DWORD *)(v13 + 188);
  if ( (_a4 & 1) == 0 )
  {
    v61 = *(_FX_DRIVER_GLOBALS **)(v13 + 16);
    _a1 = -1073741436;
    if ( v61->FxVerboseOn )
    {
      _a5 = "power stopping (Drain) in progress,";
      if ( (_a4 & 0x10000) == 0 )
        _a5 = a5;
      if ( v22->m_ObjectSize )
        globals = (const void *)((unsigned __int64)v22 ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        globals = 0LL;
      v64 = (const void *)(v13 ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !*(_WORD *)(v13 + 10) )
        v64 = 0LL;
      WPP_IFR_SF_qLsqd(v61, 5u, (unsigned int)globals, 0x29u, Offset, v64, _a4, _a5, globals, -1073741436);
    }
    FxNonPagedObject::Unlock((FxNonPagedObject *)v13, v45, v46);
    v22->m_Irp.m_Irp->IoStatus.Information = 0LL;
    FxRequest::Complete(v22, -1073741436);
    v22->Release(v22, (void *)1886220099, 2338, "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
    goto LABEL_84;
  }
  v48 = *(_FX_DRIVER_GLOBALS **)(v13 + 16);
  if ( v48->FxVerboseOn )
  {
    v65 = (const void *)(v13 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !*(_WORD *)(v13 + 10) )
      v65 = 0LL;
    if ( v22->m_ObjectSize )
      v5 = (const void *)((unsigned __int64)v22 ^ 0xFFFFFFFFFFFFFFF8uLL);
    WPP_IFR_SF_qq(v48, 5u, 0xDu, 0x2Au, WPP_FxIoQueue_cpp_Traceguids, v5, v65);
  }
  FxRequest::GetIrp(v22, &ppIrp);
  v22->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  if ( v22->m_Reserved )
  {
    if ( *(_DWORD *)(v13 + 368) )
    {
      FxIoQueue::InsertNewRequestLocked((FxIoQueue *)v13, &Request, PreviousIrql[0]);
      FxNonPagedObject::Unlock((FxNonPagedObject *)v13, PreviousIrql[0], v66);
      goto LABEL_83;
    }
    v22 = ReservedRequest;
    v45 = PreviousIrql[0];
  }
  FxIoQueue::DispatchEvents((FxIoQueue *)v13, v45, v22, v49);
LABEL_83:
  _a1 = 259;
LABEL_84:
  if ( (unsigned __int8)CurrentIrql <= 1u )
    KeLeaveCriticalRegion();
  return (unsigned int)_a1;
}
