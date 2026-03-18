/*
 * XREFs of ?OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C0005970
 * Callers:
 *     ?Dispatch@FxPkgGeneral@@UEAAJPEAU_IRP@@@Z @ 0x1C0007A90 (-Dispatch@FxPkgGeneral@@UEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0004610 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     WPP_IFR_SF_qL @ 0x1C0004E34 (WPP_IFR_SF_qL.c)
 *     WPP_IFR_SF_d @ 0x1C0004F10 (WPP_IFR_SF_d.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0007910 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C0008D40 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000AEA0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000AF00 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?GetRequest@FxIoQueue@@QEAAJPEAU_FILE_OBJECT@@PEAVFxRequest@@PEAPEAV3@@Z @ 0x1C000B010 (-GetRequest@FxIoQueue@@QEAAJPEAU_FILE_OBJECT@@PEAVFxRequest@@PEAPEAV3@@Z.c)
 *     ?MarkPassiveCallbacks@FxObject@@QEAAXW4FxObjectLockState@@@Z @ 0x1C000C6C4 (-MarkPassiveCallbacks@FxObject@@QEAAXW4FxObjectLockState@@@Z.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C000E230 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     WPP_IFR_SF_q @ 0x1C0010838 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qq @ 0x1C0012FB4 (WPP_IFR_SF_qq.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x1C0013F08 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     ?InsertNewRequestLocked@FxIoQueue@@AEAAJPEAPEAVFxRequest@@E@Z @ 0x1C0014584 (-InsertNewRequestLocked@FxIoQueue@@AEAAJPEAPEAVFxRequest@@E@Z.c)
 *     memset @ 0x1C001C1C0 (memset.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0030430 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qqqd @ 0x1C00308F8 (WPP_IFR_SF_qqqd.c)
 *     WPP_IFR_SF_qid @ 0x1C0031B08 (WPP_IFR_SF_qid.c)
 *     ?CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z @ 0x1C0033A78 (-CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z.c)
 *     ?Complete@FxRequest@@QEAAJJ@Z @ 0x1C004B660 (-Complete@FxRequest@@QEAAJJ@Z.c)
 *     ?FxPoolInsertNonPagedAllocateTracker@@YAXPEAUFX_POOL@@PEAUFX_POOL_TRACKER@@_KKPEAX@Z @ 0x1C0053DFC (-FxPoolInsertNonPagedAllocateTracker@@YAXPEAUFX_POOL@@PEAUFX_POOL_TRACKER@@_KKPEAX@Z.c)
 *     ?FxObjectAllocateContext@@YAJPEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@EPEAPEAX@Z @ 0x1C0058A20 (-FxObjectAllocateContext@@YAJPEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@EPEAPEAX@Z.c)
 *     WPP_IFR_SF_DDid @ 0x1C0058B9C (WPP_IFR_SF_DDid.c)
 *     ?AssignParentObject@FxObject@@QEAAJPEAV1@@Z @ 0x1C005BF04 (-AssignParentObject@FxObject@@QEAAJPEAV1@@Z.c)
 *     ?ClearEvtCallbacks@FxObject@@QEAAXXZ @ 0x1C005C030 (-ClearEvtCallbacks@FxObject@@QEAAXXZ.c)
 *     ?TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z @ 0x1C005C384 (-TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x1C005C9C4 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C005CCDC (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?ForwardRequest@FxIoQueue@@QEAAJPEAV1@PEAVFxRequest@@@Z @ 0x1C00786A8 (-ForwardRequest@FxIoQueue@@QEAAJPEAV1@PEAVFxRequest@@@Z.c)
 *     ?QueueRequest@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x1C00795C4 (-QueueRequest@FxIoQueue@@QEAAJPEAVFxRequest@@@Z.c)
 *     WPP_IFR_SF_qLsqd @ 0x1C0079D24 (WPP_IFR_SF_qLsqd.c)
 *     ?DecrementOpenHandleCount@FxPkgGeneral@@AEAAXXZ @ 0x1C009059C (-DecrementOpenHandleCount@FxPkgGeneral@@AEAAXXZ.c)
 *     ?ForwardCreateRequest@FxPkgGeneral@@AEAAJPEAVFxIrp@@P6AJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z3@Z @ 0x1C00905CC (-ForwardCreateRequest@FxPkgGeneral@@AEAAJPEAVFxIrp@@P6AJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z3@Z.c)
 *     ?Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00C2990 (-Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00C2C7C (-Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?Vf_VerifyLeakDetectionConsiderObject@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00C2CBC (-Vf_VerifyLeakDetectionConsiderObject@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall FxPkgGeneral::OnCreate(FxPkgGeneral *this, FxIrp *FxIrp)
{
  _IRP *m_Irp; // rax
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  FxIrp *v5; // r12
  _IO_STACK_LOCATION *CurrentStackLocation; // r8
  _FILE_OBJECT *v7; // rdi
  FxDeviceBase *m_DeviceBase; // rbx
  int v9; // eax
  __int64 v10; // r8
  _LIST_ENTRY *p_m_FileObjectInfoHeadList; // r15
  _LIST_ENTRY *Blink; // rdi
  _IRP *v13; // rax
  int v14; // ecx
  _FX_DRIVER_GLOBALS *v15; // r14
  unsigned __int64 flags; // rdx
  unsigned __int64 v17; // r15
  int id; // edi
  void *Caller; // rax
  FxFileObject *v20; // rax
  _FX_DRIVER_GLOBALS *v21; // rdx
  FxFileObject *v22; // rdi
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *ContextTypeInfo; // rax
  _LIST_ENTRY *p_m_ChildEntry; // r14
  _FX_DRIVER_GLOBALS *v25; // rax
  KIRQL v26; // al
  KIRQL v27; // al
  KIRQL v28; // al
  bool v29; // zf
  KIRQL v30; // r12
  KIRQL v31; // r13
  _LIST_ENTRY *v32; // rcx
  int v33; // r14d
  _FX_DRIVER_GLOBALS *v34; // rdx
  unsigned __int8 v35; // r8
  unsigned __int16 v36; // ax
  char *v37; // rax
  unsigned __int64 *p_m_Lock; // r14
  unsigned __int8 v39; // r9
  _LIST_ENTRY *v40; // rdx
  FxDeviceBase_vtbl *v41; // r8
  _LIST_ENTRY *p_m_Link; // rcx
  _LIST_ENTRY *v43; // rbx
  FxDeviceBase *v44; // r13
  _LIST_ENTRY *v45; // rax
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *Flink; // xmm1_8
  FxIrp v47; // rax
  FxRequest *v48; // r15
  _FX_DRIVER_GLOBALS *v49; // r12
  __int64 v50; // rax
  FX_POOL_TRACKER *v51; // rbx
  FX_POOL_TRACKER *v52; // r14
  FxRequest *p_Pool; // rbx
  _FX_DRIVER_GLOBALS *v54; // rdx
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *v55; // rax
  unsigned __int8 v56; // r8
  _FX_DRIVER_GLOBALS *v57; // rax
  _IRP *v58; // rcx
  _IRP *v59; // rcx
  _IO_STACK_LOCATION *v60; // r8
  unsigned __int8 MajorFunction; // dl
  FxObject *v62; // rdx
  unsigned __int16 v63; // ax
  char *v64; // rax
  _LIST_ENTRY *v65; // r12
  _LIST_ENTRY *v66; // rbx
  unsigned int m_Flags; // eax
  FxIoQueue *m_DefaultQueueForCreates; // r13
  unsigned __int8 v69; // bl
  unsigned int m_QueueState; // r11d
  _FX_DRIVER_GLOBALS *v71; // r12
  unsigned __int8 FxVerboseOn; // al
  FxIoQueue *v73; // rcx
  char v74; // dl
  _LIST_ENTRY *v75; // r14
  FxIoQueue *m_DriverCreatedQueue; // rcx
  unsigned __int64 v77; // r15
  FxDeviceBase *v78; // rbx
  unsigned __int64 v79; // rbx
  _LIST_ENTRY *v80; // rax
  _LIST_ENTRY *v81; // rcx
  _LIST_ENTRY *v82; // rcx
  unsigned __int64 v84; // rax
  unsigned __int64 v85; // rax
  unsigned __int64 ContextSizeOverride; // r8
  unsigned __int64 ContextSize; // r8
  unsigned __int16 m_ObjectSize; // ax
  const void *v89; // rbx
  unsigned __int64 v90; // rax
  unsigned __int64 v91; // rcx
  _FX_DRIVER_GLOBALS *v92; // rdx
  FxVerifierLock *m_DeviceObject; // rcx
  FxVerifierLock *v94; // rcx
  __m128i v95; // xmm2
  _LIST_ENTRY *v96; // rdx
  FxDeviceBase *v97; // rcx
  unsigned __int64 v98; // rdx
  unsigned __int16 v99; // ax
  unsigned __int64 v100; // rdx
  unsigned __int16 v101; // ax
  const void *v102; // rcx
  _LIST_ENTRY *v103; // rax
  __int64 v104; // rax
  _FX_DRIVER_GLOBALS *v105; // rdx
  void *MasterIrp; // rax
  void *UserBuffer; // rax
  _LIST_ENTRY *v108; // rax
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *v109; // xmm1_8
  FxDeviceBase *v110; // rax
  _LIST_ENTRY *v111; // rdx
  FxDeviceBase *v112; // rcx
  unsigned __int64 m_Driver; // rdx
  unsigned __int16 v114; // ax
  unsigned __int64 v115; // rdx
  unsigned __int16 v116; // ax
  const void *v117; // rcx
  FxDeviceBase *v118; // rcx
  unsigned __int16 v119; // ax
  const void *v120; // rcx
  FxVerifierLock *v121; // rcx
  const void *v122; // r10
  const char *v123; // r8
  const void *v124; // rdx
  const void *v125; // rdx
  const void *v126; // rcx
  _FX_DRIVER_GLOBALS *v127; // rdx
  unsigned __int16 v128; // ax
  unsigned __int16 v129; // r9
  const void *v130; // rcx
  FxIoQueue *v131; // rcx
  unsigned __int16 v132; // ax
  _LIST_ENTRY *v133; // rbx
  FxDeviceBase *v134; // r13
  unsigned __int64 v135; // r12
  unsigned __int16 v136; // ax
  unsigned __int64 v137; // r13
  _LIST_ENTRY *v138; // rax
  _LIST_ENTRY *v139; // rcx
  char v140; // al
  _LIST_ENTRY *v141; // rcx
  char v142; // r12
  signed int v143; // eax
  int v144; // ebx
  FxIoQueue *v145; // rdx
  unsigned __int16 v146; // cx
  const void *v147; // rdx
  FxDeviceBase *v148; // rcx
  unsigned __int16 v149; // ax
  const void *v150; // rcx
  _LIST_ENTRY *v151; // rdx
  _LIST_ENTRY *v152; // rcx
  FxDeviceBase *v153; // rcx
  unsigned __int16 v154; // ax
  const void *v155; // rcx
  const _GUID *Tag; // [rsp+20h] [rbp-B9h]
  unsigned __int8 v157; // [rsp+50h] [rbp-89h] BYREF
  char v158; // [rsp+51h] [rbp-88h]
  unsigned __int8 PreviousIrql; // [rsp+52h] [rbp-87h] BYREF
  unsigned __int8 v160; // [rsp+53h] [rbp-86h] BYREF
  unsigned __int8 v161[4]; // [rsp+54h] [rbp-85h] BYREF
  _FX_DRIVER_GLOBALS *globals; // [rsp+58h] [rbp-81h]
  _WDF_OBJECT_ATTRIBUTES attributes; // [rsp+60h] [rbp-79h] BYREF
  _LIST_ENTRY *v164; // [rsp+98h] [rbp-41h]
  void *PPObject; // [rsp+A0h] [rbp-39h] BYREF
  _FILE_OBJECT *FileObject; // [rsp+A8h] [rbp-31h]
  unsigned __int64 v167; // [rsp+B0h] [rbp-29h]
  FxFileObject *pFxFO; // [rsp+B8h] [rbp-21h]
  FxVerifierLock *VerifierLock; // [rsp+C0h] [rbp-19h] BYREF
  FxVerifierLock *v170; // [rsp+C8h] [rbp-11h] BYREF
  FxDeviceBase *v171; // [rsp+D0h] [rbp-9h]
  FxRequest *Request; // [rsp+D8h] [rbp-1h] BYREF
  FxRequest *outputRequest; // [rsp+E0h] [rbp+7h] BYREF
  void *retaddr; // [rsp+138h] [rbp+5Fh]
  unsigned __int8 v175; // [rsp+140h] [rbp+67h] BYREF
  FxIrp *Irp; // [rsp+148h] [rbp+6Fh]
  char v177; // [rsp+150h] [rbp+77h]
  _IRP *v178; // [rsp+158h] [rbp+7Fh] BYREF

  Irp = FxIrp;
  m_Irp = FxIrp->m_Irp;
  v167 = 0LL;
  m_Globals = this->m_Globals;
  v5 = FxIrp;
  v158 = 0;
  CurrentStackLocation = m_Irp->Tail.Overlay.CurrentStackLocation;
  v177 = 0;
  globals = m_Globals;
  v164 = 0LL;
  v7 = CurrentStackLocation->FileObject;
  FileObject = v7;
  LODWORD(m_Irp) = _InterlockedExchangeAdd(&this->m_OpenHandleCount, 1u);
  m_DeviceBase = this->m_DeviceBase;
  v9 = (_DWORD)m_Irp + 1;
  if ( BYTE4(m_DeviceBase[1].m_Globals) && v9 > 2 )
  {
    m_ObjectSize = m_DeviceBase->m_ObjectSize;
    v89 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_ObjectSize )
      v89 = 0LL;
    WPP_IFR_SF_q(m_Globals, 2u, 0xDu, 0x15u, WPP_FxPkgGeneral_cpp_Traceguids, v89);
    v33 = -1073741790;
    goto LABEL_322;
  }
  memset(&attributes, 0, sizeof(attributes));
  p_m_FileObjectInfoHeadList = &this->m_FileObjectInfoHeadList;
  attributes.Size = 56;
  attributes.ExecutionLevel = WdfExecutionLevelInheritFromParent;
  attributes.SynchronizationScope = WdfSynchronizationScopeInheritFromParent;
  if ( p_m_FileObjectInfoHeadList->Flink != p_m_FileObjectInfoHeadList )
  {
    Blink = this->m_FileObjectInfoHeadList.Blink;
    v164 = Blink;
    if ( LODWORD(Blink[5].Blink) )
      attributes = *(_WDF_OBJECT_ATTRIBUTES *)&Blink[5].Blink;
    v7 = FileObject;
    attributes.ExecutionLevel = this->m_ExecutionLevel;
    attributes.SynchronizationScope = this->m_SynchronizationScope;
  }
  v13 = v5->m_Irp;
  v14 = (__int64)m_DeviceBase[1].m_DisposeSingleEntry.Next & 0x7FFFFFFF;
  v15 = m_DeviceBase->m_Globals;
  LODWORD(PPObject) = v14;
  if ( v14 == 1 )
  {
    v22 = 0LL;
    pFxFO = 0LL;
    goto LABEL_55;
  }
  if ( !v7 && (v14 != 4 || !BYTE4(m_DeviceBase[1].m_Globals)) )
  {
    if ( v15->FxVerboseOn )
    {
      WPP_IFR_SF_q(v15, 5u, 0xDu, 0xAu, WPP_FxFileObject_cpp_Traceguids, v13);
      v15 = m_DeviceBase->m_Globals;
    }
    FxVerifierDbgBreakPoint(v15);
    v33 = -1073741438;
    goto LABEL_319;
  }
  flags = 0LL;
  if ( attributes.ContextTypeInfo )
  {
    flags = attributes.ContextSizeOverride;
    if ( !attributes.ContextSizeOverride )
      flags = attributes.ContextTypeInfo->ContextSize;
  }
  v17 = 208LL;
  if ( flags )
  {
    v84 = (flags + 7) & 0xFFFFFFFFFFFFFFF8uLL;
    if ( v84 < flags )
    {
LABEL_317:
      v33 = -1073741670;
      goto LABEL_318;
    }
    v85 = v84 + 208;
    if ( v85 < 0xD0 )
    {
      id = -1073741675;
LABEL_152:
      WPP_IFR_SF_DDid(v15, flags, v10, 0xA0u, Tag, 0xA0u, 0, flags, id);
      goto LABEL_317;
    }
    v17 = v85;
  }
  if ( v15->FxVerifierHandle )
  {
    v90 = v17 + 48;
    v91 = v17;
    v10 = -1LL;
    if ( v17 + 48 >= v17 )
      v10 = v17 + 48;
    v17 = v10;
    id = v90 < v91 ? 0xC0000095 : 0;
  }
  else
  {
    id = 0;
  }
  if ( id < 0 )
    goto LABEL_152;
  if ( v15->FxPoolTrackingOn )
    Caller = retaddr;
  else
    Caller = 0LL;
  v20 = (FxFileObject *)FxPoolAllocator(v15, &v15->FxPoolFrameworks, ExDefaultNonPagedPoolType, v17, v15->Tag, Caller);
  v22 = v20;
  if ( v20 )
  {
    if ( v15->FxVerifierHandle )
    {
      memset(v20, 0, 0x30uLL);
      LODWORD(v22->m_ChildListHead.Flink) = 1146058822;
      v22 = (FxFileObject *)((char *)v22 + 48);
    }
    memset(&v22[1], 0, 0x30uLL);
    v22[1].FxNonPagedObject::FxObject::__vftable = (FxFileObject_vtbl *)v22;
    ContextTypeInfo = attributes.ContextTypeInfo;
    if ( attributes.ContextTypeInfo )
    {
      ContextSizeOverride = attributes.ContextSizeOverride;
      if ( !attributes.ContextSizeOverride )
        ContextSizeOverride = attributes.ContextTypeInfo->ContextSize;
      memset(&v22[1].m_SpinLock, 0, (ContextSizeOverride + 7) & 0xFFFFFFFFFFFFFFF8uLL);
      ContextTypeInfo = attributes.ContextTypeInfo;
    }
    v22[1].m_ChildListHead.Flink = (_LIST_ENTRY *)ContextTypeInfo;
  }
  if ( !v22 )
    goto LABEL_317;
  p_m_ChildEntry = &v22->m_ChildEntry;
  v22->m_Globals = m_DeviceBase->m_Globals;
  v22->FxNonPagedObject::FxObject::__vftable = (FxFileObject_vtbl *)FxObject::`vftable';
  *(_DWORD *)&v22->m_Type = 10489880;
  v22->m_SpinLock.m_Lock = 0LL;
  v22->m_SpinLock.m_DbgFlagIsInitialized = 1;
  v22->m_Refcnt = 1;
  *(_DWORD *)&v22->m_ObjectFlags = 0x10000;
  v22->m_ParentObject = 0LL;
  v22->m_ChildListHead.Blink = &v22->m_ChildListHead;
  v22->m_ChildListHead.Flink = &v22->m_ChildListHead;
  v22->m_ChildEntry.Blink = &v22->m_ChildEntry;
  v22->m_ChildEntry.Flink = &v22->m_ChildEntry;
  v25 = v22->m_Globals;
  v22->m_DisposeSingleEntry.Next = 0LL;
  v22->m_DeviceBase = 0LL;
  if ( v25->FxVerifierOn )
    FxObject::Vf_VerifyConstruct(v22, v21, 0);
  v22->FxNonPagedObject::FxObject::__vftable = (FxFileObject_vtbl *)FxNonPagedObject::`vftable';
  v22->m_NPLock.m_Lock = 0LL;
  v22->m_NPLock.m_DbgFlagIsInitialized = 1;
  if ( SLOBYTE(v22->m_ObjectFlags) < 0 )
  {
    v92 = v22->m_Globals;
    if ( v92->FxVerifierLock )
    {
      VerifierLock = 0LL;
      FxVerifierLock::CreateAndInitialize(&VerifierLock, v92, v22);
      v22[-1].IFxHasCallbacks::__vftable = (IFxHasCallbacks_vtbl *)VerifierLock;
    }
  }
  v22->m_PkgContext = 0LL;
  v22->FxNonPagedObject::FxObject::__vftable = (FxFileObject_vtbl *)FxFileObject::`vftable'{for `FxNonPagedObject'};
  v22->m_DeviceBase = m_DeviceBase;
  v22->IFxHasCallbacks::__vftable = (IFxHasCallbacks_vtbl *)FxFileObject::`vftable'{for `IFxHasCallbacks'};
  v22->m_FileObject.m_FileObject = FileObject;
  v26 = KeAcquireSpinLockRaiseToDpc(&v22->m_SpinLock.m_Lock);
  v22->m_ObjectFlags |= 2u;
  KeReleaseSpinLock(&v22->m_SpinLock.m_Lock, v26);
  v171 = 0LL;
  if ( !v22->m_ObjectSize )
  {
    v33 = -1073741816;
LABEL_160:
    FxObject::ClearEvtCallbacks(v22);
    v22->DeleteObject(v22);
LABEL_318:
    v5 = Irp;
LABEL_319:
    v153 = this->m_DeviceBase;
    v154 = v153->m_ObjectSize;
    v155 = (const void *)((unsigned __int64)v153 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v154 )
      v155 = 0LL;
    WPP_IFR_SF_qL(globals, 2u, 0xDu, 0x16u, WPP_FxPkgGeneral_cpp_Traceguids, v155, v33);
    goto LABEL_322;
  }
  if ( attributes.ExecutionLevel == WdfExecutionLevelPassive )
  {
    v27 = KeAcquireSpinLockRaiseToDpc(&v22->m_SpinLock.m_Lock);
    v22->m_ObjectFlags |= 0x11u;
    KeReleaseSpinLock(&v22->m_SpinLock.m_Lock, v27);
  }
  v171 = m_DeviceBase;
  v28 = KeAcquireSpinLockRaiseToDpc(&v22->m_SpinLock.m_Lock);
  v29 = v22->m_ObjectState == 1;
  v30 = v28;
  LOBYTE(v178) = v28;
  if ( !v29 )
  {
    FxObject::TraceDroppedEvent(v22, FxObjectDroppedEventAssignParentObject);
    KeReleaseSpinLock(&v22->m_SpinLock.m_Lock, v30);
    v33 = -1073741738;
    goto LABEL_160;
  }
  if ( v22->m_ParentObject )
  {
    KeReleaseSpinLock(&v22->m_SpinLock.m_Lock, v28);
    v33 = -1071644147;
    goto LABEL_160;
  }
  v31 = KeAcquireSpinLockRaiseToDpc(&m_DeviceBase->m_SpinLock.m_Lock);
  if ( m_DeviceBase->m_ObjectState == 1 )
  {
    v32 = m_DeviceBase->m_ChildListHead.Blink;
    if ( v32->Flink != &m_DeviceBase->m_ChildListHead )
      goto LABEL_316;
    p_m_ChildEntry->Flink = &m_DeviceBase->m_ChildListHead;
    v22->m_ChildEntry.Blink = v32;
    v32->Flink = p_m_ChildEntry;
    m_DeviceBase->m_ChildListHead.Blink = p_m_ChildEntry;
    if ( !v22->m_DeviceBase )
      v22->m_DeviceBase = m_DeviceBase->m_DeviceBase;
    KeReleaseSpinLock(&m_DeviceBase->m_SpinLock.m_Lock, v31);
    v22->m_ParentObject = m_DeviceBase;
    v33 = 0;
  }
  else
  {
    FxObject::TraceDroppedEvent(m_DeviceBase, FxObjectDroppedEventAddChildObjectInternal);
    KeReleaseSpinLock(&m_DeviceBase->m_SpinLock.m_Lock, v31);
    v33 = -1073741738;
  }
  KeReleaseSpinLock(&v22->m_SpinLock.m_Lock, (KIRQL)v178);
  if ( v33 < 0 )
    goto LABEL_160;
  v36 = v22->m_ObjectSize;
  if ( v36 )
    v37 = (char *)v22 + v36;
  else
    v37 = 0LL;
  if ( attributes.EvtDestroyCallback )
    *((_QWORD *)v37 + 3) = attributes.EvtDestroyCallback;
  if ( attributes.EvtCleanupCallback )
  {
    *((_QWORD *)v37 + 2) = attributes.EvtCleanupCallback;
    v22->m_ObjectFlags |= 0x400u;
  }
  v22->m_ObjectFlags |= 8u;
  if ( v22->m_Globals->FxVerifierOn )
    FxObject::Vf_VerifyLeakDetectionConsiderObject(v22, v34);
  if ( SLOBYTE(m_DeviceBase->m_ObjectFlags) < 0
    && (m_DeviceObject = (FxVerifierLock *)m_DeviceBase[-1].m_PhysicalDevice.m_DeviceObject) != 0LL )
  {
    FxVerifierLock::Lock(m_DeviceObject, &PreviousIrql, v35);
    v39 = PreviousIrql;
    p_m_Lock = &m_DeviceBase->m_NPLock.m_Lock;
  }
  else
  {
    p_m_Lock = &m_DeviceBase->m_NPLock.m_Lock;
    v39 = KeAcquireSpinLockRaiseToDpc(&m_DeviceBase->m_NPLock.m_Lock);
  }
  v40 = (_LIST_ENTRY *)&m_DeviceBase[2];
  v41 = m_DeviceBase[2].FxNonPagedObject::FxObject::__vftable;
  p_m_Link = &v22->m_Link;
  if ( (FxDeviceBase *)v41->~FxObject != &m_DeviceBase[2] )
    goto LABEL_316;
  p_m_Link->Flink = (_LIST_ENTRY *)v41;
  v22->m_Link.Blink = v40;
  v41->~FxObject = (void (__fastcall *)(FxObject *))p_m_Link;
  v40->Flink = p_m_Link;
  if ( SLOBYTE(m_DeviceBase->m_ObjectFlags) < 0
    && (v94 = (FxVerifierLock *)m_DeviceBase[-1].m_PhysicalDevice.m_DeviceObject) != 0LL )
  {
    FxVerifierLock::Unlock(v94, v39, (unsigned __int8)v41);
  }
  else
  {
    KeReleaseSpinLock(p_m_Lock, v39);
  }
  if ( (_DWORD)PPObject == 2 )
  {
    FileObject->FsContext = v22;
  }
  else if ( (_DWORD)PPObject == 3 )
  {
    FileObject->FsContext2 = v22;
  }
  v29 = v22->m_ObjectSize == 0;
  pFxFO = v22;
  if ( v29 )
    v167 = 0LL;
  else
    v167 = (unsigned __int64)v22 ^ 0xFFFFFFFFFFFFFFF8uLL;
  p_m_FileObjectInfoHeadList = &this->m_FileObjectInfoHeadList;
  v43 = this->m_FileObjectInfoHeadList.Blink->Blink;
  if ( v43 == &this->m_FileObjectInfoHeadList )
  {
LABEL_54:
    v5 = Irp;
LABEL_55:
    if ( !this->m_DriverCreatedQueue && (this->m_Flags & 0xC) == 0 )
    {
      if ( BYTE1(this->m_DeviceBase[1].m_ChildEntry.Blink) )
      {
        return (unsigned int)FxPkgGeneral::ForwardCreateRequest(this, v5, FxPkgGeneral::_CreateCompletionRoutine, this);
      }
      else
      {
        v33 = 0;
        v5->m_Irp->IoStatus.Status = 0;
        v5->m_Irp->IoStatus.Information = 0LL;
        IofCompleteRequest(v5->m_Irp, 0);
        v5->m_Irp = 0LL;
      }
      return (unsigned int)v33;
    }
    v44 = this->m_DeviceBase;
    if ( p_m_FileObjectInfoHeadList->Flink != p_m_FileObjectInfoHeadList
      && (v45 = this->m_FileObjectInfoHeadList.Blink, v164 = v45, BYTE4(v45[9].Flink)) )
    {
      v103 = v45[9].Blink;
      *(_LIST_ENTRY *)&attributes.Size = v103[2];
      *(_LIST_ENTRY *)&attributes.EvtDestroyCallback = v103[3];
      *(_LIST_ENTRY *)&attributes.ParentObject = v103[4];
      Flink = (const _WDF_OBJECT_CONTEXT_TYPE_INFO *)v103[5].Flink;
    }
    else
    {
      *(_OWORD *)&attributes.Size = *(_OWORD *)&v44[2].m_ExecutionLevel;
      *(_OWORD *)&attributes.EvtDestroyCallback = *(_OWORD *)&v44[3].FxNonPagedObject::FxObject::__vftable;
      *(_OWORD *)&attributes.ParentObject = *(_OWORD *)&v44[3].m_Globals;
      Flink = (const _WDF_OBJECT_CONTEXT_TYPE_INFO *)v44[3].m_ChildListHead.Flink;
    }
    attributes.ContextTypeInfo = Flink;
    if ( *(FxDeviceBase **)&v44[1].m_ExecutionLevel != (FxDeviceBase *)&v44[1].m_ExecutionLevel )
    {
      attributes.ExecutionLevel = WdfExecutionLevelDispatch;
      attributes.SynchronizationScope = WdfSynchronizationScopeNone;
      attributes.ParentObject = 0LL;
    }
    v47.m_Irp = v5->m_Irp;
    v48 = 0LL;
    v49 = v44->m_Globals;
    v178 = v47.m_Irp;
    v50 = *(_QWORD *)&v44[3].m_SpinLock.m_DbgFlagIsInitialized;
    if ( v50 && *(_WORD *)(v50 + 8) == 4354 && *(_BYTE *)(v50 + 1691) )
    {
      v51 = (FX_POOL_TRACKER *)ExpInterlockedPopEntrySList((PSLIST_HEADER)&v44[2].m_SpinLock);
      if ( !v51 )
      {
        v104 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))v44[2].m_DeviceBase)(
                 HIDWORD(v44[2].m_ChildEntry.Blink),
                 HIDWORD(v44[2].m_DisposeSingleEntry.Next),
                 LODWORD(v44[2].m_DisposeSingleEntry.Next));
LABEL_191:
        v51 = (FX_POOL_TRACKER *)v104;
      }
    }
    else
    {
      ++HIDWORD(v44[2].m_ParentObject);
      v51 = (FX_POOL_TRACKER *)ExpInterlockedPopEntrySList((PSLIST_HEADER)&v44[2].m_SpinLock);
      if ( !v51 )
      {
        ++LODWORD(v44[2].m_ChildEntry.Flink);
        v104 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))v44[2].m_DeviceBase)(
                 HIDWORD(v44[2].m_ChildEntry.Blink),
                 HIDWORD(v44[2].m_DisposeSingleEntry.Next),
                 LODWORD(v44[2].m_DisposeSingleEntry.Next));
        goto LABEL_191;
      }
    }
    if ( !v51 )
      goto LABEL_305;
    if ( v49->FxPoolTrackingOn )
    {
      v52 = v51 + 1;
      FxPoolInsertNonPagedAllocateTracker(
        &v49->FxPoolFrameworks,
        v51,
        (unsigned __int64)v44[2].m_CallbackLockObjectPtr,
        v49->Tag,
        retaddr);
    }
    else
    {
      v52 = v51;
    }
    v52->Link.Flink = &v51->Link;
    p_Pool = (FxRequest *)&v52->Pool;
    v52->Link.Blink = &v49->Linkage;
    if ( v49->FxVerifierHandle )
    {
      memset(&v52->Pool, 0, 0x30uLL);
      LODWORD(v52->CallersAddress) = 1146058822;
      p_Pool = (FxRequest *)&v52[1];
    }
    memset(&p_Pool[1].m_Type, 0, 0x30uLL);
    *(_QWORD *)&p_Pool[1].m_Type = p_Pool;
    v55 = attributes.ContextTypeInfo;
    if ( attributes.ContextTypeInfo )
    {
      ContextSize = attributes.ContextSizeOverride;
      if ( !attributes.ContextSizeOverride )
        ContextSize = attributes.ContextTypeInfo->ContextSize;
      memset(&p_Pool[1].m_SpinLock.m_Lock, 0, (ContextSize + 7) & 0xFFFFFFFFFFFFFFF8uLL);
      v55 = attributes.ContextTypeInfo;
    }
    p_Pool[1].m_ChildListHead.Blink = (_LIST_ENTRY *)v55;
    if ( !p_Pool )
    {
LABEL_305:
      v33 = -1073741670;
      WPP_IFR_SF_d(v44->m_Globals, 2u, 0x10u, 0xAu, WPP_FxRequest_cpp_Traceguids, -1073741670);
      goto LABEL_306;
    }
    p_Pool->m_Globals = v44->m_Globals;
    v33 = 0;
    p_Pool->__vftable = (FxRequest_vtbl *)FxObject::`vftable';
    *(_DWORD *)&p_Pool->m_Type = 24121352;
    v56 = 1;
    p_Pool->m_SpinLock.m_Lock = 0LL;
    p_Pool->m_SpinLock.m_DbgFlagIsInitialized = 1;
    p_Pool->m_Refcnt = 1;
    *(_DWORD *)&p_Pool->m_ObjectFlags = 0x10000;
    p_Pool->m_ParentObject = 0LL;
    p_Pool->m_ChildListHead.Blink = &p_Pool->m_ChildListHead;
    p_Pool->m_ChildListHead.Flink = &p_Pool->m_ChildListHead;
    p_Pool->m_ChildEntry.Blink = &p_Pool->m_ChildEntry;
    p_Pool->m_ChildEntry.Flink = &p_Pool->m_ChildEntry;
    v57 = p_Pool->m_Globals;
    p_Pool->m_DisposeSingleEntry.Next = 0LL;
    p_Pool->m_DeviceBase = 0LL;
    if ( v57->FxVerifierOn )
    {
      FxObject::Vf_VerifyConstruct(p_Pool, v54, 0);
      v56 = 1;
    }
    p_Pool->__vftable = (FxRequest_vtbl *)FxNonPagedObject::`vftable';
    p_Pool->m_NPLock.m_Lock = 0LL;
    p_Pool->m_NPLock.m_DbgFlagIsInitialized = 1;
    if ( SLOBYTE(p_Pool->m_ObjectFlags) < 0 )
    {
      v105 = p_Pool->m_Globals;
      if ( v105->FxVerifierLock )
      {
        v170 = 0LL;
        FxVerifierLock::CreateAndInitialize(&v170, v105, p_Pool);
        v56 = 1;
        p_Pool[-1].m_ForwardProgressList.Flink = (_LIST_ENTRY *)v170;
      }
    }
    v58 = v178;
    p_Pool->__vftable = (FxRequest_vtbl *)FxRequestBase::`vftable';
    p_Pool->m_Irp.m_Irp = v58;
    p_Pool->m_CancelRoutine.m_Cancel = 0LL;
    p_Pool->m_CompletionRoutine.m_Completion = 0LL;
    *(_WORD *)&p_Pool->m_TargetFlags = 0;
    p_Pool->m_CanComplete = 1;
    p_Pool->m_Target = 0LL;
    p_Pool->m_TargetCompletionContext = 0LL;
    p_Pool->m_Completed = p_Pool->m_Irp.m_Irp == 0LL;
    p_Pool->m_Canceled = 0;
    p_Pool->m_PriorityBoost = 0;
    p_Pool->m_RequestContext = 0LL;
    p_Pool->m_Timer = 0LL;
    p_Pool->m_CsqContext.Irp = (_IRP *)&p_Pool->120;
    p_Pool->m_ListEntry.Flink = (_LIST_ENTRY *)&p_Pool->120;
    p_Pool->m_DrainSingleEntry.Next = 0LL;
    *(_QWORD *)&p_Pool->m_SystemBufferOffset = 216LL;
    p_Pool->m_IrpQueue = 0LL;
    p_Pool->m_IrpCompletionReferenceCount = 0;
    p_Pool->m_AllocatedMdl = 0LL;
    *(_DWORD *)&p_Pool->m_OutputBufferOffset = 232;
    p_Pool->m_CompletionState = 0;
    p_Pool->m_SystemBuffer.__vftable = (FxRequestSystemBuffer_vtbl *)FxRequestSystemBuffer::`vftable';
    p_Pool->m_SystemBuffer.m_Buffer = 0LL;
    p_Pool->m_OutputBuffer.__vftable = (FxRequestOutputBuffer_vtbl *)FxRequestOutputBuffer::`vftable';
    p_Pool->m_OutputBuffer.m_Buffer = 0LL;
    p_Pool->m_IoQueue = 0LL;
    p_Pool->m_PowerStopState = 0;
    p_Pool->m_OwnerListEntry.Blink = &p_Pool->m_OwnerListEntry;
    p_Pool->m_OwnerListEntry.Flink = &p_Pool->m_OwnerListEntry;
    p_Pool->m_OwnerListEntry2.Blink = &p_Pool->m_OwnerListEntry2;
    p_Pool->m_OwnerListEntry2.Flink = &p_Pool->m_OwnerListEntry2;
    p_Pool->m_ForwardProgressList.Blink = &p_Pool->m_ForwardProgressList;
    p_Pool->m_ForwardProgressList.Flink = &p_Pool->m_ForwardProgressList;
    p_Pool->__vftable = (FxRequest_vtbl *)FxRequestFromLookaside::`vftable';
    p_Pool->m_Presented = 0;
    *(_WORD *)&p_Pool->m_Reserved = 0;
    p_Pool->m_ForwardProgressQueue = 0LL;
    p_Pool->m_InternalContext = 0LL;
    p_Pool->m_DeviceBase = v44->m_DeviceBase;
    if ( !v58 )
    {
LABEL_78:
      if ( v44->m_Globals->FxRequestParentOptimizationOn )
      {
        v62 = 0LL;
        PPObject = 0LL;
        if ( !p_Pool->m_ObjectSize )
        {
          v33 = -1073741816;
          goto LABEL_219;
        }
        if ( attributes.ExecutionLevel == WdfExecutionLevelPassive )
        {
          FxObject::MarkPassiveCallbacks(p_Pool, ObjectLock);
          v62 = (FxObject *)PPObject;
          v56 = 1;
        }
        if ( attributes.ParentObject )
        {
          FxObjectHandleGetPtr(p_Pool->m_Globals, (unsigned __int64)attributes.ParentObject, 0x1000u, &PPObject);
          v62 = (FxObject *)PPObject;
          v56 = 1;
        }
        if ( !v62 )
          goto LABEL_85;
        v33 = FxObject::AssignParentObject(p_Pool, v62);
        if ( v33 >= 0 )
        {
          v33 = 0;
          v56 = 1;
LABEL_85:
          v63 = p_Pool->m_ObjectSize;
          if ( v63 )
            v64 = (char *)p_Pool + v63;
          else
            v64 = 0LL;
          if ( attributes.EvtDestroyCallback )
            *((_QWORD *)v64 + 3) = attributes.EvtDestroyCallback;
          if ( attributes.EvtCleanupCallback )
          {
            *((_QWORD *)v64 + 2) = attributes.EvtCleanupCallback;
            p_Pool->m_ObjectFlags |= 0x400u;
          }
          p_Pool->m_ObjectFlags |= 8u;
          if ( !p_Pool->m_Globals->FxVerifierOn )
            goto LABEL_92;
          FxObject::Vf_VerifyLeakDetectionConsiderObject(p_Pool, (_FX_DRIVER_GLOBALS *)v62);
LABEL_226:
          v56 = 1;
LABEL_92:
          v48 = p_Pool;
          goto LABEL_93;
        }
      }
      else
      {
        v33 = FxObject::Commit(p_Pool, &attributes, 0LL, v44, 0);
      }
      if ( v33 >= 0 )
        goto LABEL_226;
LABEL_219:
      WPP_IFR_SF_d(v44->m_Globals, 2u, 0x10u, 0xBu, WPP_FxRequest_cpp_Traceguids, v33);
      FxObject::ClearEvtCallbacks(p_Pool);
      p_Pool->DeleteObject(p_Pool);
      v56 = 1;
LABEL_93:
      if ( v33 >= 0 )
      {
        v65 = &this->m_FileObjectInfoHeadList;
        v66 = this->m_FileObjectInfoHeadList.Blink->Blink;
        if ( v66 != &this->m_FileObjectInfoHeadList )
        {
          do
          {
            v164 = v66;
            if ( BYTE4(v66[9].Flink) )
            {
              v108 = v66[9].Blink;
              *(_LIST_ENTRY *)&attributes.Size = v108[2];
              *(_LIST_ENTRY *)&attributes.EvtDestroyCallback = v108[3];
              *(_LIST_ENTRY *)&attributes.ParentObject = v108[4];
              v109 = (const _WDF_OBJECT_CONTEXT_TYPE_INFO *)v108[5].Flink;
            }
            else
            {
              v110 = this->m_DeviceBase;
              *(_OWORD *)&attributes.Size = *(_OWORD *)&v110[2].m_ExecutionLevel;
              *(_OWORD *)&attributes.EvtDestroyCallback = *(_OWORD *)&v110[3].FxNonPagedObject::FxObject::__vftable;
              *(_OWORD *)&attributes.ParentObject = *(_OWORD *)&v110[3].m_Globals;
              v109 = (const _WDF_OBJECT_CONTEXT_TYPE_INFO *)v110[3].m_ChildListHead.Flink;
            }
            attributes.ContextTypeInfo = v109;
            if ( attributes.Size )
            {
              attributes.ExecutionLevel = WdfExecutionLevelInheritFromParent;
              attributes.SynchronizationScope = WdfSynchronizationScopeInheritFromParent;
              attributes.ParentObject = 0LL;
              v33 = FxObjectAllocateContext(v48, &attributes, 1u, 0LL);
              if ( v33 < 0 )
              {
                v111 = v66[9].Blink;
                v112 = this->m_DeviceBase;
                if ( v111 )
                  m_Driver = (unsigned __int64)v111[1].Flink;
                else
                  m_Driver = (unsigned __int64)v112->m_Driver;
                v114 = *(_WORD *)(m_Driver + 10);
                v115 = m_Driver ^ 0xFFFFFFFFFFFFFFF8uLL;
                v29 = v114 == 0;
                v116 = v112->m_ObjectSize;
                if ( v29 )
                  v115 = 0LL;
                v117 = (const void *)((unsigned __int64)v112 ^ 0xFFFFFFFFFFFFFFF8uLL);
                if ( !v116 )
                  v117 = 0LL;
                WPP_IFR_SF_qid(globals, 2u, 0xDu, 0x19u, WPP_FxPkgGeneral_cpp_Traceguids, v117, v115, v33);
                goto LABEL_309;
              }
              v56 = 1;
            }
            v66 = v66->Blink;
          }
          while ( v66 != v65 );
        }
        if ( KeGetCurrentIrql() <= 1u )
        {
          KeEnterCriticalRegion();
          v158 = 1;
        }
        m_Flags = this->m_Flags;
        if ( (m_Flags & 4) == 0 && this->m_DriverCreatedQueue )
        {
          v74 = 0;
          goto LABEL_114;
        }
        if ( this->m_ExecutionLevel != WdfExecutionLevelPassive || KeGetCurrentIrql() < 2u )
        {
          m_DefaultQueueForCreates = this->m_DefaultQueueForCreates;
          Request = v48;
          if ( SLOBYTE(m_DefaultQueueForCreates->m_ObjectFlags) < 0
            && (v121 = *(FxVerifierLock **)&m_DefaultQueueForCreates[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
          {
            FxVerifierLock::Lock(v121, &v175, v56);
            v69 = v175;
          }
          else
          {
            v69 = KeAcquireSpinLockRaiseToDpc(&m_DefaultQueueForCreates->m_NPLock.m_Lock);
            v175 = v69;
          }
          if ( v48->m_Reserved )
            FxObject::AddRef(
              v48,
              (void *)0x50647746,
              2311,
              "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
          m_QueueState = m_DefaultQueueForCreates->m_QueueState;
          v71 = m_DefaultQueueForCreates->m_Globals;
          FxVerboseOn = v71->FxVerboseOn;
          if ( (m_QueueState & 1) == 0 )
          {
            v33 = -1073741436;
            if ( FxVerboseOn )
            {
              v122 = (const void *)((unsigned __int64)v48 ^ 0xFFFFFFFFFFFFFFF8uLL);
              v123 = "power stopping (Drain) in progress,";
              if ( !v48->m_ObjectSize )
                v122 = 0LL;
              if ( (m_QueueState & 0x10000) == 0 )
                v123 = a5;
              v124 = (const void *)((unsigned __int64)m_DefaultQueueForCreates ^ 0xFFFFFFFFFFFFFFF8uLL);
              if ( !m_DefaultQueueForCreates->m_ObjectSize )
                v124 = 0LL;
              WPP_IFR_SF_qLsqd(v71, 5u, (unsigned int)v123, 0x29u, Tag, v124, m_QueueState, v123, v122, -1073741436);
            }
            FxNonPagedObject::Unlock(m_DefaultQueueForCreates, v69);
            v48->m_Irp.m_Irp->IoStatus.Information = 0LL;
            FxRequest::Complete(v48, -1073741436);
            v48->Release(
              v48,
              (void *)1886220099,
              2338,
              "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
            goto LABEL_111;
          }
          if ( FxVerboseOn )
          {
            v125 = (const void *)((unsigned __int64)m_DefaultQueueForCreates ^ 0xFFFFFFFFFFFFFFF8uLL);
            if ( !m_DefaultQueueForCreates->m_ObjectSize )
              v125 = 0LL;
            v126 = (const void *)((unsigned __int64)v48 ^ 0xFFFFFFFFFFFFFFF8uLL);
            if ( !v48->m_ObjectSize )
              v126 = 0LL;
            WPP_IFR_SF_qq(v71, 5u, 0xDu, 0x2Au, WPP_FxIoQueue_cpp_Traceguids, v126, v125);
          }
          if ( v48->m_Globals->FxVerifierIO )
          {
            FxNonPagedObject::Lock(v48, &v160);
            v127 = v48->m_Globals;
            if ( v127->FxVerifierOn )
              FxRequest::Vf_VerifyRequestIsNotCompleted(v48, v127);
            FxNonPagedObject::Unlock(v48, v160);
          }
          v48->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
          if ( v48->m_Reserved )
          {
            if ( m_DefaultQueueForCreates->m_Dispatching )
            {
              FxIoQueue::InsertNewRequestLocked(m_DefaultQueueForCreates, &Request, v175);
              FxNonPagedObject::Unlock(m_DefaultQueueForCreates, v175);
              v22 = pFxFO;
              goto LABEL_110;
            }
            v22 = pFxFO;
            v69 = v175;
          }
          FxIoQueue::DispatchEvents(m_DefaultQueueForCreates, v69, v48);
LABEL_110:
          v33 = 259;
LABEL_111:
          v73 = this->m_DefaultQueueForCreates;
          if ( v33 < 0 )
          {
            v128 = v73->m_ObjectSize;
            v129 = 27;
            v130 = (const void *)((unsigned __int64)v73 ^ 0xFFFFFFFFFFFFFFF8uLL);
            if ( !v128 )
              v130 = 0LL;
            goto LABEL_273;
          }
          if ( FxIoQueue::GetRequest(v73, FileObject, 0LL, &outputRequest) < 0 )
            goto LABEL_126;
          m_Flags = this->m_Flags;
          v65 = &this->m_FileObjectInfoHeadList;
          v74 = 1;
          v177 = 1;
LABEL_114:
          if ( (m_Flags & 4) == 0 || (v133 = this->m_FileObjectInfoHeadList.Blink, v133 == v65) )
          {
            v75 = v164;
          }
          else
          {
            do
            {
              v75 = v133;
              if ( !BYTE4(v133[9].Flink) )
                break;
              if ( v22 )
                v22->m_PkgContext = v133->Blink;
              v134 = this->m_DeviceBase;
              v135 = (unsigned __int64)v48 ^ 0xFFFFFFFFFFFFFFF8uLL;
              v136 = v134->m_ObjectSize;
              if ( !v48->m_ObjectSize )
                v135 = 0LL;
              v137 = (unsigned __int64)v134 ^ 0xFFFFFFFFFFFFFFF8uLL;
              v29 = v136 == 0;
              v138 = v133[2].Blink;
              if ( v29 )
                v137 = 0LL;
              if ( v138 )
              {
                v139 = v133[2].Flink;
                LOBYTE(v178) = 0;
                if ( v139 )
                {
                  ((void (__fastcall *)(_LIST_ENTRY *, _IRP **, _QWORD))v139->Flink[1].Flink)(v139, &v178, 0LL);
                  v138 = v133[2].Blink;
                }
                v140 = ((__int64 (__fastcall *)(unsigned __int64, unsigned __int64, unsigned __int64))v138)(
                         v137,
                         v135,
                         v167);
                v141 = v133[2].Flink;
                v142 = v140;
                if ( v141 )
                  ((void (__fastcall *)(_LIST_ENTRY *, _QWORD))v141->Flink[1].Blink)(v141, (unsigned __int8)v178);
                if ( v142 )
                  goto LABEL_126;
              }
              v133 = v133->Blink;
            }
            while ( v133 != &this->m_FileObjectInfoHeadList );
            v74 = v177;
          }
          m_DriverCreatedQueue = this->m_DriverCreatedQueue;
          if ( !m_DriverCreatedQueue )
          {
            if ( (this->m_Flags & 8) != 0 )
            {
              if ( v48->m_ObjectSize )
                v77 = (unsigned __int64)v48 ^ 0xFFFFFFFFFFFFFFF8uLL;
              else
                v77 = 0LL;
              v78 = this->m_DeviceBase;
              if ( v78->m_ObjectSize )
                v79 = (unsigned __int64)v78 ^ 0xFFFFFFFFFFFFFFF8uLL;
              else
                v79 = 0LL;
              v80 = v75[1].Blink;
              if ( v80 )
              {
                v81 = v75[1].Flink;
                v157 = 0;
                if ( v81 )
                {
                  ((void (__fastcall *)(_LIST_ENTRY *, unsigned __int8 *, _QWORD))v81->Flink[1].Flink)(v81, &v157, 0LL);
                  ((void (__fastcall *)(unsigned __int64, unsigned __int64, unsigned __int64))v75[1].Blink)(
                    v79,
                    v77,
                    v167);
                }
                else
                {
                  ((void (__fastcall *)(unsigned __int64, unsigned __int64, unsigned __int64))v80)(v79, v77, v167);
                }
                v82 = v75[1].Flink;
                if ( v82 )
                {
                  ((void (__fastcall *)(_LIST_ENTRY *, _QWORD))v82->Flink[1].Blink)(v82, v157);
                  v33 = 259;
                  goto $RequestIsGone;
                }
              }
            }
            else
            {
              if ( !BYTE1(this->m_DeviceBase[1].m_ChildEntry.Blink) )
              {
                FxRequest::Complete(v48, 0);
                v33 = 259;
                goto $RequestIsGone;
              }
              FxPkgGeneral::ForwardCreateRequest(this, Irp, FxPkgGeneral::_CreateCompletionRoutine2, v48);
            }
LABEL_126:
            v33 = 259;
            goto $RequestIsGone;
          }
          if ( v74 )
          {
            v143 = FxIoQueue::ForwardRequest(this->m_DefaultQueueForCreates, this->m_DriverCreatedQueue, v48);
            v144 = v143;
            if ( v143 < 0 )
            {
              v145 = this->m_DriverCreatedQueue;
              v146 = v145->m_ObjectSize;
              v147 = (const void *)((unsigned __int64)v145 ^ 0xFFFFFFFFFFFFFFF8uLL);
              if ( !v146 )
                v147 = 0LL;
              WPP_IFR_SF_qL(globals, 2u, 0xDu, 0x1Cu, WPP_FxPkgGeneral_cpp_Traceguids, v147, v143);
              FxRequest::Complete(v48, v144);
              v33 = 259;
              goto $RequestIsGone;
            }
            goto LABEL_126;
          }
          v33 = FxIoQueue::QueueRequest(m_DriverCreatedQueue, v48);
          if ( v33 >= 0 )
            goto $RequestIsGone;
          v131 = this->m_DriverCreatedQueue;
          v132 = v131->m_ObjectSize;
          v129 = 29;
          v130 = (const void *)((unsigned __int64)v131 ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !v132 )
            v130 = 0LL;
LABEL_273:
          WPP_IFR_SF_qL(globals, 2u, 0xDu, v129, WPP_FxPkgGeneral_cpp_Traceguids, v130, v33);
          goto $RequestIsGone;
        }
        v33 = -1073741808;
        v118 = this->m_DeviceBase;
        v5 = Irp;
        v119 = v118->m_ObjectSize;
        v120 = (const void *)((unsigned __int64)v118 ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !v119 )
          v120 = 0LL;
        WPP_IFR_SF_qid(
          globals,
          2u,
          0xDu,
          0x1Au,
          WPP_FxPkgGeneral_cpp_Traceguids,
          v120,
          (__int64)Irp->m_Irp,
          -1073741808);
        goto LABEL_310;
      }
LABEL_306:
      v148 = this->m_DeviceBase;
      v149 = v148->m_ObjectSize;
      v150 = (const void *)((unsigned __int64)v148 ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !v149 )
        v150 = 0LL;
      WPP_IFR_SF_qL(globals, 2u, 0xDu, 0x18u, WPP_FxPkgGeneral_cpp_Traceguids, v150, v33);
LABEL_309:
      v5 = Irp;
LABEL_310:
      if ( v48 )
      {
        FxObject::ClearEvtCallbacks(v48);
        v48->DeleteObject(v48);
      }
      goto LABEL_312;
    }
    v59 = p_Pool->m_Irp.m_Irp;
    v60 = v59->Tail.Overlay.CurrentStackLocation;
    MajorFunction = v60->MajorFunction;
    if ( v60->MajorFunction < 3u )
    {
LABEL_77:
      v56 = 1;
      goto LABEL_78;
    }
    if ( MajorFunction <= 4u )
    {
      if ( v44[1].m_Refcnt == 1 )
      {
        if ( v59->RequestorMode )
          goto LABEL_77;
        UserBuffer = v59->UserBuffer;
      }
      else
      {
        if ( v44[1].m_Refcnt != 2 )
          goto LABEL_77;
        UserBuffer = v59->AssociatedIrp.MasterIrp;
      }
      p_Pool->m_SystemBuffer.m_Buffer = UserBuffer;
      goto LABEL_214;
    }
    if ( (unsigned __int8)(MajorFunction - 14) > 1u )
      goto LABEL_77;
    if ( (v60->Parameters.Read.ByteOffset.LowPart & 3) != 0 )
    {
      if ( (v60->Parameters.Read.ByteOffset.LowPart & 3) == 1 || (v60->Parameters.Read.ByteOffset.LowPart & 3) == 2 )
      {
        p_Pool->m_SystemBuffer.m_Buffer = v59->AssociatedIrp.MasterIrp;
      }
      else if ( (v60->Parameters.Read.ByteOffset.LowPart & 3) == 3 )
      {
        if ( MajorFunction != 15 && v59->RequestorMode )
          goto LABEL_77;
        p_Pool->m_SystemBuffer.m_Buffer = v60->Parameters.CreatePipe.Parameters;
        MasterIrp = v59->UserBuffer;
        goto LABEL_206;
      }
LABEL_207:
      UserBuffer = p_Pool->m_SystemBuffer.m_Buffer;
LABEL_214:
      if ( UserBuffer )
        p_Pool->m_RequestBaseStaticFlags |= 1u;
      v56 = 1;
      if ( p_Pool->m_OutputBuffer.m_Buffer )
        p_Pool->m_RequestBaseStaticFlags |= 2u;
      goto LABEL_78;
    }
    p_Pool->m_SystemBuffer.m_Buffer = v59->AssociatedIrp.MasterIrp;
    MasterIrp = v59->AssociatedIrp.MasterIrp;
LABEL_206:
    p_Pool->m_OutputBuffer.m_Buffer = MasterIrp;
    goto LABEL_207;
  }
  while ( 1 )
  {
    v95 = *(__m128i *)&v43[5].Blink;
    v164 = v43;
    *(__m128i *)&attributes.Size = v95;
    *(_LIST_ENTRY *)&attributes.EvtDestroyCallback = *(_LIST_ENTRY *)((char *)v43 + 104);
    *(_LIST_ENTRY *)&attributes.ParentObject = *(_LIST_ENTRY *)((char *)v43 + 120);
    attributes.ContextTypeInfo = (const _WDF_OBJECT_CONTEXT_TYPE_INFO *)v43[8].Blink;
    if ( _mm_cvtsi128_si32(v95) )
    {
      attributes.ExecutionLevel = WdfExecutionLevelInheritFromParent;
      attributes.SynchronizationScope = WdfSynchronizationScopeInheritFromParent;
      attributes.ParentObject = 0LL;
      v33 = FxObjectAllocateContext(v22, &attributes, 1u, 0LL);
      if ( v33 < 0 )
        break;
    }
    v43 = v43->Blink;
    if ( v43 == p_m_FileObjectInfoHeadList )
      goto LABEL_54;
  }
  v96 = v43[9].Blink;
  v97 = this->m_DeviceBase;
  if ( v96 )
    v98 = (unsigned __int64)v96[1].Flink;
  else
    v98 = (unsigned __int64)v97->m_Driver;
  v99 = *(_WORD *)(v98 + 10);
  v100 = v98 ^ 0xFFFFFFFFFFFFFFF8uLL;
  v29 = v99 == 0;
  v101 = v97->m_ObjectSize;
  if ( v29 )
    v100 = 0LL;
  v102 = (const void *)((unsigned __int64)v97 ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !v101 )
    v102 = 0LL;
  WPP_IFR_SF_qqqd(globals, 2u, 0xDu, 0x17u, WPP_FxPkgGeneral_cpp_Traceguids, &v43[5].Blink, v102, v100, v33);
  v5 = Irp;
LABEL_312:
  if ( v22 )
  {
    FxNonPagedObject::Lock(v22->m_DeviceBase, v161);
    v151 = v22->m_Link.Flink;
    if ( v151->Blink == &v22->m_Link )
    {
      v152 = v22->m_Link.Blink;
      if ( v152->Flink == &v22->m_Link )
      {
        v152->Flink = v151;
        v151->Blink = v152;
        FxNonPagedObject::Unlock(v22->m_DeviceBase, v161[0]);
        FxObject::ClearEvtCallbacks(v22);
        ((void (*)(void))v22->DeleteObject)();
        goto LABEL_322;
      }
    }
LABEL_316:
    __fastfail(3u);
  }
LABEL_322:
  FxPkgGeneral::DecrementOpenHandleCount(this);
  v5->m_Irp->IoStatus.Status = v33;
  v5->m_Irp->IoStatus.Information = 0LL;
  IofCompleteRequest(v5->m_Irp, 0);
  v5->m_Irp = 0LL;
$RequestIsGone:
  if ( v158 )
    KeLeaveCriticalRegion();
  return (unsigned int)v33;
}
