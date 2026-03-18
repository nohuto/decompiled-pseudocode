/*
 * XREFs of ?DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z @ 0x1C0006B40
 * Callers:
 *     ?Dispatch@FxPkgIo@@UEAAJPEAU_IRP@@@Z @ 0x1C0006AD0 (-Dispatch@FxPkgIo@@UEAAJPEAU_IRP@@@Z.c)
 *     imp_WdfDeviceWdmDispatchIrp @ 0x1C004AA10 (imp_WdfDeviceWdmDispatchIrp.c)
 * Callees:
 *     WPP_IFR_SF_d @ 0x1C0003FF0 (WPP_IFR_SF_d.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C0008860 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000B110 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000B170 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C000B6A0 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C000BDA0 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     WPP_IFR_SF_q @ 0x1C0010E28 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qq @ 0x1C00133A4 (WPP_IFR_SF_qq.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x1C0013DAC (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     ?InsertNewRequestLocked@FxIoQueue@@AEAAJPEAPEAVFxRequest@@E@Z @ 0x1C00143F4 (-InsertNewRequestLocked@FxIoQueue@@AEAAJPEAPEAVFxRequest@@E@Z.c)
 *     ?MarkPassiveCallbacks@FxObject@@QEAAXW4FxObjectLockState@@@Z @ 0x1C001A234 (-MarkPassiveCallbacks@FxObject@@QEAAXW4FxObjectLockState@@@Z.c)
 *     memset @ 0x1C001B300 (memset.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002F850 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qid @ 0x1C0030F38 (WPP_IFR_SF_qid.c)
 *     ?CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z @ 0x1C0032E60 (-CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z.c)
 *     ?Complete@FxRequest@@QEAAJJ@Z @ 0x1C004AF90 (-Complete@FxRequest@@QEAAJJ@Z.c)
 *     ?SetVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x1C004B190 (-SetVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     ?FreeRequest@FxRequest@@QEAAXXZ @ 0x1C005029C (-FreeRequest@FxRequest@@QEAAXXZ.c)
 *     ?FxPoolInsertNonPagedAllocateTracker@@YAXPEAUFX_POOL@@PEAUFX_POOL_TRACKER@@_KKPEAX@Z @ 0x1C0053814 (-FxPoolInsertNonPagedAllocateTracker@@YAXPEAUFX_POOL@@PEAUFX_POOL_TRACKER@@_KKPEAX@Z.c)
 *     ?AssignParentObject@FxObject@@QEAAJPEAV1@@Z @ 0x1C005C364 (-AssignParentObject@FxObject@@QEAAJPEAV1@@Z.c)
 *     ?ClearEvtCallbacks@FxObject@@QEAAXXZ @ 0x1C005C490 (-ClearEvtCallbacks@FxObject@@QEAAXXZ.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x1C005CD60 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x1C005DDB8 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 *     WPP_IFR_SF_qcDqd @ 0x1C0068FFC (WPP_IFR_SF_qcDqd.c)
 *     ?Mj2Index@FxIrpDynamicDispatchInfo@@SAHE@Z @ 0x1C0077C38 (-Mj2Index@FxIrpDynamicDispatchInfo@@SAHE@Z.c)
 *     ?VerifierFreeRequestToTestForwardProgess@FxPkgIo@@AEAAJPEAVFxRequest@@@Z @ 0x1C007802C (-VerifierFreeRequestToTestForwardProgess@FxPkgIo@@AEAAJPEAVFxRequest@@@Z.c)
 *     ?IsIoEventHandlerRegistered@FxIoQueue@@QEAAEW4_WDF_REQUEST_TYPE@@@Z @ 0x1C0079690 (-IsIoEventHandlerRegistered@FxIoQueue@@QEAAEW4_WDF_REQUEST_TYPE@@@Z.c)
 *     WPP_IFR_SF_qLsqd @ 0x1C007A5E4 (WPP_IFR_SF_qLsqd.c)
 *     ?GetReservedRequest@FxIoQueue@@QEAAJPEAU_IRP@@PEAPEAVFxRequest@@@Z @ 0x1C007ACA8 (-GetReservedRequest@FxIoQueue@@QEAAJPEAU_IRP@@PEAPEAVFxRequest@@@Z.c)
 *     ?Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00C69C4 (-Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00C6CAC (-Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?Vf_VerifyLeakDetectionConsiderObject@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00C6CEC (-Vf_VerifyLeakDetectionConsiderObject@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Vf_VerifyDispatchContext@FxPkgIo@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C00C6FAC (-Vf_VerifyDispatchContext@FxPkgIo@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

NTSTATUS __fastcall FxPkgIo::DispatchStep1(FxPkgIo *this, _IRP *Irp, _LIST_ENTRY *DispatchContext)
{
  _LIST_ENTRY *p_m_DynamicDispatchInfoListHead; // rdi
  _LIST_ENTRY *v4; // rsi
  _IO_STACK_LOCATION *CurrentStackLocation; // r9
  __int64 MajorFunction; // rcx
  FxIoQueue *v9; // rsi
  FxCxDeviceInfo *m_CxDeviceInfo; // rax
  FxIoInCallerContext *p_IoInCallerContextCallback; // rax
  FxCxDeviceInfo *v12; // r15
  FxDeviceBase *m_DeviceBase; // r13
  _WDF_OBJECT_ATTRIBUTES *p_RequestAttributes; // r15
  __int64 v15; // rax
  WDFDEVICE__ *v16; // rdi
  _BYTE *m_Globals; // r12
  FxRequest *v18; // r14
  _FX_DRIVER_GLOBALS *v19; // rdx
  FX_POOL_TRACKER *v20; // rbx
  _QWORD *p_Flink; // r12
  _BYTE *v22; // rax
  FxRequest *v23; // rbx
  _WDF_EXECUTION_LEVEL *p_m_ExecutionLevel; // r12
  _LIST_ENTRY *v25; // rax
  _FX_DRIVER_GLOBALS *v26; // rax
  PIRP v27; // r10
  _IRP *m_Irp; // rcx
  _IO_STACK_LOCATION *v29; // rdx
  unsigned __int8 v30; // r8
  void *MasterIrp; // rax
  _FX_DRIVER_GLOBALS *v32; // rdx
  unsigned __int16 m_ObjectSize; // ax
  char *v34; // rax
  void (__fastcall *EvtDestroyCallback)(void *); // rcx
  void (__fastcall *EvtCleanupCallback)(void *); // rcx
  _FX_DRIVER_GLOBALS *v37; // rax
  int v38; // r12d
  char v39; // al
  FxPkgIo *v40; // rbx
  FxIoInCallerContext *v41; // r15
  char m_ObjectFlags; // al
  KIRQL v43; // bl
  unsigned int m_QueueState; // ecx
  _FX_DRIVER_GLOBALS *v45; // rcx
  _LIST_ENTRY *Flink; // r8
  _FX_DRIVER_GLOBALS *v48; // rcx
  unsigned __int8 m_CompletionState; // al
  signed __int32 v50; // r9d
  unsigned int v51; // r9d
  unsigned __int64 v52; // rdx
  void (__fastcall *m_Method)(WDFDEVICE__ *, WDFREQUEST__ *); // rax
  int v54; // eax
  unsigned __int8 v55; // dl
  __int64 v56; // r8
  char _a3; // r10
  __int64 v58; // r15
  int v59; // r14d
  FxDeviceBase *v60; // rcx
  unsigned __int16 v61; // ax
  const void *globals; // rcx
  _FX_DRIVER_GLOBALS *v63; // rdx
  __int64 v64; // r11
  _LIST_ENTRY *v65; // r15
  _LIST_ENTRY *v66; // r14
  FxDeviceBase *v67; // rcx
  unsigned __int16 v68; // r10
  unsigned __int64 v69; // rcx
  bool v70; // zf
  FxDeviceBase *v71; // rcx
  unsigned __int16 v72; // ax
  const void *v73; // rcx
  _FX_DRIVER_GLOBALS *v74; // rdx
  void *UserBuffer; // rax
  int v76; // eax
  int v77; // eax
  unsigned __int64 v78; // rdx
  unsigned __int64 v79; // rcx
  int v80; // eax
  const void *v81; // rcx
  _LIST_ENTRY *Blink; // rcx
  FxVerifierLock *v83; // rcx
  _FX_DRIVER_GLOBALS *v84; // r11
  const char *v85; // r10
  const void *v86; // r8
  const void *v87; // rdx
  const void *v88; // rdx
  _FX_DRIVER_GLOBALS *v89; // rdx
  const _GUID *_a1; // [rsp+20h] [rbp-60h]
  int level; // [rsp+48h] [rbp-38h]
  FxRequest *ReservedRequest; // [rsp+50h] [rbp-30h] BYREF
  void *PPObject; // [rsp+58h] [rbp-28h] BYREF
  FxIoInCallerContext *p_m_InCallerContextCallback; // [rsp+60h] [rbp-20h]
  FxVerifierLock *VerifierLock; // [rsp+68h] [rbp-18h] BYREF
  void *retaddr; // [rsp+B8h] [rbp+38h]
  FxPkgIo *v97; // [rsp+C0h] [rbp+40h] BYREF
  PIRP v98; // [rsp+C8h] [rbp+48h] BYREF
  FxRequest *Request; // [rsp+D0h] [rbp+50h] BYREF
  char v100; // [rsp+D8h] [rbp+58h]

  v98 = Irp;
  v97 = this;
  p_m_DynamicDispatchInfoListHead = &this->m_DynamicDispatchInfoListHead;
  v4 = DispatchContext;
  if ( DispatchContext == &this->m_DynamicDispatchInfoListHead )
  {
LABEL_2:
    CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
    MajorFunction = CurrentStackLocation->MajorFunction;
    v9 = this->m_DispatchTable[MajorFunction];
    if ( v9 )
    {
      m_CxDeviceInfo = v9->m_CxDeviceInfo;
      if ( m_CxDeviceInfo )
        p_IoInCallerContextCallback = &m_CxDeviceInfo->IoInCallerContextCallback;
      else
        p_IoInCallerContextCallback = &this->m_InCallerContextCallback;
      p_m_InCallerContextCallback = p_IoInCallerContextCallback;
LABEL_6:
      if ( this->m_Filter
        && !p_IoInCallerContextCallback->m_Method
        && v9 == this->m_DefaultQueue
        && !FxIoQueue::IsIoEventHandlerRegistered(v9, (_WDF_REQUEST_TYPE)MajorFunction) )
      {
        goto LABEL_125;
      }
      v100 = 0;
      LOBYTE(Request) = v9 && v9->m_SupportForwardProgress;
      if ( KeGetCurrentIrql() <= 1u )
      {
        KeEnterCriticalRegion();
        v100 = 1;
      }
      if ( v9 && (v12 = v9->m_CxDeviceInfo) != 0LL )
      {
        m_DeviceBase = this->m_DeviceBase;
        p_RequestAttributes = &v12->RequestAttributes;
      }
      else
      {
        m_DeviceBase = this->m_DeviceBase;
        p_RequestAttributes = (_WDF_OBJECT_ATTRIBUTES *)&m_DeviceBase[2].m_ExecutionLevel;
      }
      v15 = *(_QWORD *)&m_DeviceBase[3].m_SpinLock.m_DbgFlagIsInitialized;
      v16 = 0LL;
      m_Globals = m_DeviceBase->m_Globals;
      v18 = 0LL;
      ReservedRequest = 0LL;
      PPObject = m_Globals;
      if ( v15 && *(_WORD *)(v15 + 8) == 4354 && *(_BYTE *)(v15 + 1699) )
      {
        v20 = (FX_POOL_TRACKER *)ExpInterlockedPopEntrySList((PSLIST_HEADER)&m_DeviceBase[2].m_SpinLock);
        if ( !v20 )
          v20 = (FX_POOL_TRACKER *)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))m_DeviceBase[2].m_DeviceBase)(
                                     HIDWORD(m_DeviceBase[2].m_ChildEntry.Blink),
                                     HIDWORD(m_DeviceBase[2].m_DisposeSingleEntry.Next),
                                     LODWORD(m_DeviceBase[2].m_DisposeSingleEntry.Next));
      }
      else
      {
        ++HIDWORD(m_DeviceBase[2].m_ParentObject);
        v20 = (FX_POOL_TRACKER *)ExpInterlockedPopEntrySList((PSLIST_HEADER)&m_DeviceBase[2].m_SpinLock);
        if ( !v20 )
        {
          ++LODWORD(m_DeviceBase[2].m_ChildEntry.Flink);
          v20 = (FX_POOL_TRACKER *)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))m_DeviceBase[2].m_DeviceBase)(
                                     HIDWORD(m_DeviceBase[2].m_ChildEntry.Blink),
                                     HIDWORD(m_DeviceBase[2].m_DisposeSingleEntry.Next),
                                     LODWORD(m_DeviceBase[2].m_DisposeSingleEntry.Next));
        }
        m_Globals = PPObject;
      }
      if ( !v20 )
        goto LABEL_152;
      if ( m_Globals[264] )
      {
        p_Flink = &v20[1].Link.Flink;
        FxPoolInsertNonPagedAllocateTracker(
          (FX_POOL *)((char *)PPObject + 104),
          v20,
          (unsigned __int64)m_DeviceBase[2].m_CallbackLockObjectPtr,
          *((_DWORD *)PPObject + 17),
          retaddr);
      }
      else
      {
        p_Flink = &v20->Link.Flink;
      }
      v22 = PPObject;
      *p_Flink = v20;
      v23 = (FxRequest *)(p_Flink + 2);
      p_Flink[1] = v22;
      if ( p_RequestAttributes )
        p_m_ExecutionLevel = (_WDF_EXECUTION_LEVEL *)p_RequestAttributes;
      else
        p_m_ExecutionLevel = &m_DeviceBase[2].m_ExecutionLevel;
      if ( v22[320] )
      {
        memset(v23, 0, 0x30uLL);
        LODWORD(v23->m_ChildListHead.Flink) = 1146058822;
        v23 = (FxRequest *)((char *)v23 + 48);
      }
      v23[1].m_Globals = 0LL;
      *(_QWORD *)&v23[1].m_ObjectFlags = 0LL;
      v23[1].m_ChildListHead.Flink = 0LL;
      v23[1].m_ChildListHead.Blink = 0LL;
      *(_QWORD *)&v23[1].m_SpinLock.m_DbgFlagIsInitialized = 0LL;
      *(_QWORD *)&v23[1].m_Type = v23;
      if ( p_m_ExecutionLevel )
      {
        v25 = (_LIST_ENTRY *)*((_QWORD *)p_m_ExecutionLevel + 6);
        if ( v25 )
        {
          Flink = (_LIST_ENTRY *)*((_QWORD *)p_m_ExecutionLevel + 5);
          if ( !Flink )
            Flink = v25[1].Flink;
          memset(&v23[1].m_SpinLock.m_Lock, 0, ((unsigned __int64)&Flink->Flink + 7) & 0xFFFFFFFFFFFFFFF8uLL);
          v25 = (_LIST_ENTRY *)*((_QWORD *)p_m_ExecutionLevel + 6);
        }
        v23[1].m_ChildListHead.Blink = v25;
      }
      if ( !v23 )
      {
LABEL_152:
        v38 = -1073741670;
        WPP_IFR_SF_d(m_DeviceBase->m_Globals, 2u, 0x10u, 0xAu, WPP_FxRequest_cpp_Traceguids, -1073741670);
        goto LABEL_153;
      }
      v23->m_Globals = m_DeviceBase->m_Globals;
      v23->__vftable = (FxRequest_vtbl *)FxObject::`vftable';
      *(_DWORD *)&v23->m_Type = 24121352;
      v23->m_SpinLock.m_Lock = 0LL;
      v23->m_SpinLock.m_DbgFlagIsInitialized = 1;
      v23->m_Refcnt = 1;
      *(_DWORD *)&v23->m_ObjectFlags = 0x10000;
      v23->m_ParentObject = 0LL;
      v23->m_ChildListHead.Blink = &v23->m_ChildListHead;
      v23->m_ChildListHead.Flink = &v23->m_ChildListHead;
      v23->m_ChildEntry.Blink = &v23->m_ChildEntry;
      v23->m_ChildEntry.Flink = &v23->m_ChildEntry;
      v26 = v23->m_Globals;
      v23->m_DisposeSingleEntry.Next = 0LL;
      v23->m_DeviceBase = 0LL;
      if ( v26->FxVerifierOn )
        FxObject::Vf_VerifyConstruct(v23, v19, 0);
      v23->__vftable = (FxRequest_vtbl *)FxNonPagedObject::`vftable';
      v23->m_NPLock.m_Lock = 0LL;
      v23->m_NPLock.m_DbgFlagIsInitialized = 1;
      if ( SLOBYTE(v23->m_ObjectFlags) < 0 )
      {
        v74 = v23->m_Globals;
        if ( v74->FxVerifierLock )
        {
          VerifierLock = 0LL;
          FxVerifierLock::CreateAndInitialize(&VerifierLock, v74, v23);
          v23[-1].m_ForwardProgressList.Flink = (_LIST_ENTRY *)VerifierLock;
        }
      }
      v27 = v98;
      v23->m_Irp.m_Irp = v98;
      v23->m_CancelRoutine.m_Cancel = 0LL;
      v23->m_CompletionRoutine.m_Completion = 0LL;
      *(_WORD *)&v23->m_TargetFlags = 0;
      v23->m_CanComplete = 1;
      v23->m_Target = 0LL;
      v23->m_TargetCompletionContext = 0LL;
      v23->m_Completed = v23->m_Irp.m_Irp == 0LL;
      v23->m_Canceled = 0;
      v23->m_PriorityBoost = 0;
      v23->m_RequestContext = 0LL;
      v23->m_Timer = 0LL;
      v23->m_CsqContext.Irp = (_IRP *)&v23->120;
      v23->m_ListEntry.Flink = (_LIST_ENTRY *)&v23->120;
      v23->m_DrainSingleEntry.Next = 0LL;
      *(_QWORD *)&v23->m_SystemBufferOffset = 216LL;
      v23->m_IrpQueue = 0LL;
      v23->m_IrpCompletionReferenceCount = 0;
      v23->m_AllocatedMdl = 0LL;
      *(_DWORD *)&v23->m_OutputBufferOffset = 232;
      v23->m_CompletionState = 0;
      v23->m_SystemBuffer.__vftable = (FxRequestSystemBuffer_vtbl *)FxRequestSystemBuffer::`vftable';
      v23->m_SystemBuffer.m_Buffer = 0LL;
      v23->m_OutputBuffer.__vftable = (FxRequestOutputBuffer_vtbl *)FxRequestOutputBuffer::`vftable';
      v23->m_OutputBuffer.m_Buffer = 0LL;
      v23->m_IoQueue = 0LL;
      v23->m_PowerStopState = 0;
      v23->m_OwnerListEntry.Blink = &v23->m_OwnerListEntry;
      v23->m_OwnerListEntry.Flink = &v23->m_OwnerListEntry;
      v23->m_OwnerListEntry2.Blink = &v23->m_OwnerListEntry2;
      v23->m_OwnerListEntry2.Flink = &v23->m_OwnerListEntry2;
      v23->m_ForwardProgressList.Blink = &v23->m_ForwardProgressList;
      v23->m_ForwardProgressList.Flink = &v23->m_ForwardProgressList;
      v23->__vftable = (FxRequest_vtbl *)FxRequestFromLookaside::`vftable';
      v23->m_Presented = 0;
      *(_WORD *)&v23->m_Reserved = 0;
      v23->m_ForwardProgressQueue = 0LL;
      v23->m_InternalContext = 0LL;
      v23->m_DeviceBase = m_DeviceBase->m_DeviceBase;
      m_Irp = v23->m_Irp.m_Irp;
      v29 = m_Irp->Tail.Overlay.CurrentStackLocation;
      v30 = v29->MajorFunction;
      if ( v29->MajorFunction != 14 )
      {
        if ( v30 < 3u )
          goto LABEL_42;
        if ( v30 <= 4u )
        {
          if ( m_DeviceBase[1].m_Refcnt == 1 )
          {
            if ( m_Irp->RequestorMode )
              goto LABEL_42;
            UserBuffer = m_Irp->UserBuffer;
          }
          else
          {
            if ( m_DeviceBase[1].m_Refcnt != 2 )
              goto LABEL_42;
            UserBuffer = m_Irp->AssociatedIrp.MasterIrp;
          }
          v23->m_SystemBuffer.m_Buffer = UserBuffer;
          goto LABEL_38;
        }
        if ( v30 != 15 )
          goto LABEL_42;
      }
      if ( (v29->Parameters.Read.ByteOffset.LowPart & 3) != 0 )
      {
        if ( (v29->Parameters.Read.ByteOffset.LowPart & 3) == 1 || (v29->Parameters.Read.ByteOffset.LowPart & 3) == 2 )
        {
          v23->m_SystemBuffer.m_Buffer = m_Irp->AssociatedIrp.MasterIrp;
          goto LABEL_38;
        }
        if ( (v29->Parameters.Read.ByteOffset.LowPart & 3) != 3 )
        {
LABEL_38:
          if ( v23->m_SystemBuffer.m_Buffer )
            v23->m_RequestBaseStaticFlags |= 1u;
          if ( v23->m_OutputBuffer.m_Buffer )
            v23->m_RequestBaseStaticFlags |= 2u;
LABEL_42:
          if ( m_DeviceBase->m_Globals->FxRequestParentOptimizationOn )
          {
            v32 = 0LL;
            PPObject = 0LL;
            if ( !v23->m_ObjectSize )
            {
              v38 = -1073741816;
LABEL_145:
              WPP_IFR_SF_d(m_DeviceBase->m_Globals, 2u, 0x10u, 0xBu, WPP_FxRequest_cpp_Traceguids, v38);
              FxObject::ClearEvtCallbacks(v23);
              v23->DeleteObject(v23);
LABEL_153:
              v27 = v98;
LABEL_60:
              v39 = (char)Request;
              v40 = v97;
              if ( (_BYTE)Request )
              {
                if ( v38 < 0 )
                  goto LABEL_158;
                if ( (v97->m_Globals->FxEnhancedVerifierOptions & 0xF0000) != 0 )
                {
                  v76 = FxPkgIo::VerifierFreeRequestToTestForwardProgess(v97, v18);
                  v27 = v98;
                  v38 = v76;
                }
                v39 = (char)Request;
              }
              if ( v38 >= 0 )
              {
                if ( !v39 || !v9->m_FwdProgContext->m_IoResourcesAllocate.Method )
                {
LABEL_63:
                  v41 = p_m_InCallerContextCallback;
                  if ( p_m_InCallerContextCallback && p_m_InCallerContextCallback->m_Method && !v18->m_Reserved )
                  {
                    v18->m_InternalContext = v9;
                    v48 = v40->m_Globals;
                    v27->Tail.Overlay.CurrentStackLocation->Control |= 1u;
                    if ( v48->FxVerifierOn )
                      FxRequestBase::SetVerifierFlags(v18, 33);
                    if ( v18->m_Completed )
                    {
                      v81 = (const void *)((unsigned __int64)v18 ^ 0xFFFFFFFFFFFFFFF8uLL);
                      if ( !v18->m_ObjectSize )
                        v81 = 0LL;
                      WPP_IFR_SF_q(v18->m_Globals, 2u, 0x10u, 0x27u, WPP_FxRequest_cpp_Traceguids, v81);
                      FxVerifierDbgBreakPoint(v18->m_Globals);
                    }
                    else
                    {
                      m_CompletionState = v18->m_CompletionState;
                      v18->m_CompletionState = -126;
                      if ( !m_CompletionState )
                      {
                        v50 = _InterlockedExchangeAdd(&v18->m_Refcnt, 1u);
                        v18 = ReservedRequest;
                        v51 = v50 + 1;
                        if ( SLOBYTE(ReservedRequest->m_ObjectFlags) < 0 )
                        {
                          Blink = ReservedRequest[-1].m_OwnerListEntry2.Blink;
                          if ( Blink )
                            FxTagTracker::UpdateTagHistory(
                              (FxTagTracker *)Blink,
                              (void *)0x74617453,
                              1820,
                              "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp",
                              TagAddRef,
                              v51);
                        }
                      }
                    }
                    v18->Release(
                      v18,
                      (void *)1952543827,
                      1740,
                      "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxpkgio.cpp");
                    v18->m_Presented = 1;
                    v52 = 0LL;
                    if ( v18->m_ObjectSize )
                      v52 = (unsigned __int64)v18 ^ 0xFFFFFFFFFFFFFFF8uLL;
                    m_Method = v41->m_Method;
                    if ( v40->m_DeviceBase->m_ObjectSize )
                      v16 = (WDFDEVICE__ *)((unsigned __int64)v40->m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
                    if ( m_Method )
                      m_Method(v16, (WDFREQUEST__ *)v52);
                    goto LABEL_74;
                  }
                  m_ObjectFlags = v9->m_ObjectFlags;
                  Request = v18;
                  if ( m_ObjectFlags < 0
                    && (v83 = *(FxVerifierLock **)&v9[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
                  {
                    FxVerifierLock::Lock(v83, (unsigned __int8 *)&v98, (unsigned __int8)WPP_FxRequest_cpp_Traceguids);
                    v43 = (unsigned __int8)v98;
                  }
                  else
                  {
                    v43 = KeAcquireSpinLockRaiseToDpc(&v9->m_NPLock.m_Lock);
                    LOBYTE(v98) = v43;
                  }
                  if ( v18->m_Reserved )
                    FxObject::AddRef(
                      v18,
                      (void *)0x50647746,
                      2311,
                      "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
                  m_QueueState = v9->m_QueueState;
                  if ( (m_QueueState & 1) == 0 )
                  {
                    v84 = v9->m_Globals;
                    v38 = -1073741436;
                    if ( v84->FxVerboseOn )
                    {
                      v85 = "power stopping (Drain) in progress,";
                      if ( (m_QueueState & 0x10000) == 0 )
                        v85 = a5;
                      if ( v18->m_ObjectSize )
                        v86 = (const void *)((unsigned __int64)v18 ^ 0xFFFFFFFFFFFFFFF8uLL);
                      else
                        v86 = 0LL;
                      v87 = (const void *)((unsigned __int64)v9 ^ 0xFFFFFFFFFFFFFFF8uLL);
                      if ( !v9->m_ObjectSize )
                        v87 = 0LL;
                      WPP_IFR_SF_qLsqd(v84, 5u, (unsigned int)v86, 0x29u, _a1, v87, m_QueueState, v85, v86, -1073741436);
                    }
                    FxNonPagedObject::Unlock(v9, v43);
                    v18->m_Irp.m_Irp->IoStatus.Information = 0LL;
                    FxRequest::Complete(v18, -1073741436);
                    v18->Release(
                      v18,
                      (void *)1886220099,
                      2338,
                      "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
                    goto LABEL_75;
                  }
                  v45 = v9->m_Globals;
                  if ( v45->FxVerboseOn )
                  {
                    v88 = (const void *)((unsigned __int64)v9 ^ 0xFFFFFFFFFFFFFFF8uLL);
                    if ( !v9->m_ObjectSize )
                      v88 = 0LL;
                    if ( v18->m_ObjectSize )
                      v16 = (WDFDEVICE__ *)((unsigned __int64)v18 ^ 0xFFFFFFFFFFFFFFF8uLL);
                    WPP_IFR_SF_qq(v45, 5u, 0xDu, 0x2Au, WPP_FxIoQueue_cpp_Traceguids, v16, v88);
                  }
                  if ( v18->m_Globals->FxVerifierIO )
                  {
                    FxNonPagedObject::Lock(v18, (unsigned __int8 *)&v97);
                    v89 = v18->m_Globals;
                    if ( v89->FxVerifierOn )
                      FxRequest::Vf_VerifyRequestIsNotCompleted(v18, v89);
                    FxNonPagedObject::Unlock(v18, (unsigned __int8)v97);
                  }
                  v18->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
                  if ( v18->m_Reserved )
                  {
                    if ( v9->m_Dispatching )
                    {
                      FxIoQueue::InsertNewRequestLocked(v9, &Request, (unsigned __int8)v98);
                      FxNonPagedObject::Unlock(v9, (unsigned __int8)v98);
                      goto LABEL_74;
                    }
                    v18 = ReservedRequest;
                    v43 = (unsigned __int8)v98;
                  }
                  FxIoQueue::DispatchEvents(v9, v43, v18);
LABEL_74:
                  v38 = 259;
LABEL_75:
                  if ( v100 )
                    KeLeaveCriticalRegion();
                  return v38;
                }
                v18->m_Presented = 1;
                v78 = (unsigned __int64)v18 ^ 0xFFFFFFFFFFFFFFF8uLL;
                if ( !v18->m_ObjectSize )
                  v78 = 0LL;
                v79 = (unsigned __int64)v9 ^ 0xFFFFFFFFFFFFFFF8uLL;
                if ( !v9->m_ObjectSize )
                  v79 = 0LL;
                if ( ((int (__fastcall *)(unsigned __int64, unsigned __int64, _FXIO_FORWARD_PROGRESS_CONTEXT *, __int64))v9->m_FwdProgContext->m_IoResourcesAllocate.Method)(
                       v79,
                       v78,
                       v9->m_FwdProgContext,
                       1LL) >= 0 )
                {
                  v27 = v98;
                  goto LABEL_63;
                }
                FxRequest::FreeRequest(v18);
                ReservedRequest = 0LL;
                v80 = FxIoQueue::GetReservedRequest(v9, v98, &ReservedRequest);
                v38 = v80;
                if ( v80 == 259 )
                  goto LABEL_75;
                v27 = v98;
                if ( v80 < 0 )
                  goto LABEL_173;
LABEL_163:
                v18 = ReservedRequest;
                goto LABEL_63;
              }
LABEL_158:
              if ( v40->m_Filter && !v9 )
                goto LABEL_173;
              if ( v39 )
              {
                v77 = FxIoQueue::GetReservedRequest(v9, v27, &ReservedRequest);
                v38 = v77;
                if ( v77 == 259 )
                  goto LABEL_75;
                v27 = v98;
                if ( v77 >= 0 )
                  goto LABEL_163;
              }
              else
              {
                WPP_IFR_SF_d(v40->m_Globals, 2u, 0xDu, 0x10u, WPP_FxPkgIo_cpp_Traceguids, v38);
                v27 = v98;
              }
LABEL_173:
              v27->IoStatus.Status = v38;
              v27->IoStatus.Information = 0LL;
              IofCompleteRequest(v27, 0);
              goto LABEL_75;
            }
            if ( !p_RequestAttributes )
            {
LABEL_56:
              v37 = v23->m_Globals;
              v23->m_ObjectFlags |= 8u;
              if ( v37->FxVerifierOn )
              {
                FxObject::Vf_VerifyLeakDetectionConsiderObject(v23, v32);
                v27 = v98;
              }
              v38 = 0;
              goto LABEL_59;
            }
            if ( p_RequestAttributes->ExecutionLevel == WdfExecutionLevelPassive )
            {
              FxObject::MarkPassiveCallbacks(v23, ObjectLock);
              v32 = (_FX_DRIVER_GLOBALS *)PPObject;
              v27 = v98;
            }
            if ( p_RequestAttributes->ParentObject )
            {
              FxObjectHandleGetPtr(v23->m_Globals, p_RequestAttributes->ParentObject, 0x1000u, &PPObject);
              v32 = (_FX_DRIVER_GLOBALS *)PPObject;
              v27 = v98;
            }
            if ( !v32 )
            {
LABEL_50:
              m_ObjectSize = v23->m_ObjectSize;
              if ( m_ObjectSize )
                v34 = (char *)v23 + m_ObjectSize;
              else
                v34 = 0LL;
              EvtDestroyCallback = p_RequestAttributes->EvtDestroyCallback;
              if ( EvtDestroyCallback )
                *((_QWORD *)v34 + 3) = EvtDestroyCallback;
              EvtCleanupCallback = p_RequestAttributes->EvtCleanupCallback;
              if ( EvtCleanupCallback )
              {
                *((_QWORD *)v34 + 2) = EvtCleanupCallback;
                v23->m_ObjectFlags |= 0x400u;
              }
              goto LABEL_56;
            }
            v38 = FxObject::AssignParentObject(v23, (FxObject *)v32);
            if ( v38 >= 0 )
            {
              v27 = v98;
              goto LABEL_50;
            }
          }
          else
          {
            v38 = FxObject::Commit(v23, p_RequestAttributes, 0LL, m_DeviceBase, 0);
          }
          if ( v38 >= 0 )
          {
            v27 = v98;
LABEL_59:
            v18 = v23;
            ReservedRequest = v23;
            goto LABEL_60;
          }
          goto LABEL_145;
        }
        if ( v30 != 15 && m_Irp->RequestorMode )
          goto LABEL_42;
        v23->m_SystemBuffer.m_Buffer = v29->Parameters.CreatePipe.Parameters;
        MasterIrp = m_Irp->UserBuffer;
      }
      else
      {
        v23->m_SystemBuffer.m_Buffer = m_Irp->AssociatedIrp.MasterIrp;
        MasterIrp = m_Irp->AssociatedIrp.MasterIrp;
      }
      v23->m_OutputBuffer.m_Buffer = MasterIrp;
      goto LABEL_38;
    }
    p_IoInCallerContextCallback = &this->m_InCallerContextCallback;
    v70 = this->m_InCallerContextCallback.m_Method == 0LL;
    p_m_InCallerContextCallback = &this->m_InCallerContextCallback;
    if ( !v70 )
      goto LABEL_6;
    if ( this->m_Filter )
    {
LABEL_125:
      ++Irp->CurrentLocation;
      Irp->Tail.Overlay.CurrentStackLocation = CurrentStackLocation + 1;
      return IofCallDriver(this->m_DeviceBase->m_AttachedDevice.m_DeviceObject, Irp);
    }
    v59 = -1073741808;
    v71 = this->m_DeviceBase;
    v72 = v71->m_ObjectSize;
    v73 = (const void *)((unsigned __int64)v71 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v72 )
      v73 = 0LL;
    WPP_IFR_SF_qid(this->m_Globals, 2u, 0xDu, 0xFu, WPP_FxPkgIo_cpp_Traceguids, v73, (__int64)Irp, -1073741808);
    goto LABEL_120;
  }
  v54 = FxIrpDynamicDispatchInfo::Mj2Index(Irp->Tail.Overlay.CurrentStackLocation->MajorFunction);
  v58 = v54;
  if ( v54 >= 4 )
  {
    v59 = -1073741811;
    v60 = this->m_DeviceBase;
    v61 = v60->m_ObjectSize;
    globals = (const void *)((unsigned __int64)v60 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v61 )
      globals = 0LL;
    WPP_IFR_SF_qcDqd(
      this->m_Globals,
      v55,
      0xDu,
      0xEu,
      WPP_FxPkgIo_cpp_Traceguids,
      Irp,
      _a3,
      *(unsigned __int8 *)(v56 + 1),
      globals,
      level);
    FxVerifierDbgBreakPoint(this->m_Globals);
    goto LABEL_120;
  }
  v63 = this->m_Globals;
  if ( v63->FxVerifierOn )
  {
    v59 = FxPkgIo::Vf_VerifyDispatchContext(this, v63, v4);
    if ( v59 < 0 )
    {
LABEL_120:
      Irp->IoStatus.Status = v59;
      Irp->IoStatus.Information = 0LL;
      IofCompleteRequest(Irp, 0);
      return v59;
    }
  }
  v64 = v58;
  while ( 1 )
  {
    v65 = v4[v64 + 1].Flink;
    v66 = v4;
    v4 = v4->Flink;
    if ( v65 )
      break;
    if ( v4 == p_m_DynamicDispatchInfoListHead )
      goto LABEL_2;
  }
  v67 = this->m_DeviceBase;
  v68 = v67->m_ObjectSize;
  v69 = (unsigned __int64)v67 ^ 0xFFFFFFFFFFFFFFF8uLL;
  if ( !v68 )
    v69 = 0LL;
  return ((__int64 (__fastcall *)(unsigned __int64, _QWORD, _QWORD, _QWORD, _LIST_ENTRY *, _IRP *, unsigned __int64))v65)(
           v69,
           Irp->Tail.Overlay.CurrentStackLocation->MajorFunction,
           Irp->Tail.Overlay.CurrentStackLocation->MinorFunction,
           Irp->Tail.Overlay.CurrentStackLocation->Parameters.Read.ByteOffset.LowPart,
           v66[v64 + 1].Blink,
           Irp,
           (unsigned __int64)v4 | 1);
}
