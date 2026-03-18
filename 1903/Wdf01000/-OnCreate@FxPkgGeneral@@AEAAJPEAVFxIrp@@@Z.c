/*
 * XREFs of ?OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C0006010
 * Callers:
 *     ?Dispatch@FxPkgGeneral@@UEAAJPEAU_IRP@@@Z @ 0x1C00075E0 (-Dispatch@FxPkgGeneral@@UEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_qL @ 0x1C0003F1C (WPP_IFR_SF_qL.c)
 *     WPP_IFR_SF_d @ 0x1C0003FF0 (WPP_IFR_SF_d.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C00055A0 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C0008860 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?GetRequest@FxIoQueue@@QEAAJPEAU_FILE_OBJECT@@PEAVFxRequest@@PEAPEAV3@@Z @ 0x1C000A2F0 (-GetRequest@FxIoQueue@@QEAAJPEAU_FILE_OBJECT@@PEAVFxRequest@@PEAPEAV3@@Z.c)
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
 *     WPP_IFR_SF_qqqd @ 0x1C002FD20 (WPP_IFR_SF_qqqd.c)
 *     WPP_IFR_SF_qid @ 0x1C0030F38 (WPP_IFR_SF_qid.c)
 *     ?CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z @ 0x1C0032E60 (-CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z.c)
 *     ?Complete@FxRequest@@QEAAJJ@Z @ 0x1C004AF90 (-Complete@FxRequest@@QEAAJJ@Z.c)
 *     ?FxPoolInsertNonPagedAllocateTracker@@YAXPEAUFX_POOL@@PEAUFX_POOL_TRACKER@@_KKPEAX@Z @ 0x1C0053814 (-FxPoolInsertNonPagedAllocateTracker@@YAXPEAUFX_POOL@@PEAUFX_POOL_TRACKER@@_KKPEAX@Z.c)
 *     ?FxObjectAllocateContext@@YAJPEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@EPEAPEAX@Z @ 0x1C0058480 (-FxObjectAllocateContext@@YAJPEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@EPEAPEAX@Z.c)
 *     WPP_IFR_SF_DDid @ 0x1C0058700 (WPP_IFR_SF_DDid.c)
 *     ?AssignParentObject@FxObject@@QEAAJPEAV1@@Z @ 0x1C005C364 (-AssignParentObject@FxObject@@QEAAJPEAV1@@Z.c)
 *     ?ClearEvtCallbacks@FxObject@@QEAAXXZ @ 0x1C005C490 (-ClearEvtCallbacks@FxObject@@QEAAXXZ.c)
 *     ?TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z @ 0x1C005C720 (-TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x1C005CD60 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C005D078 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?ForwardRequest@FxIoQueue@@QEAAJPEAV1@PEAVFxRequest@@@Z @ 0x1C0078E68 (-ForwardRequest@FxIoQueue@@QEAAJPEAV1@PEAVFxRequest@@@Z.c)
 *     ?QueueRequest@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x1C0079E74 (-QueueRequest@FxIoQueue@@QEAAJPEAVFxRequest@@@Z.c)
 *     WPP_IFR_SF_qLsqd @ 0x1C007A5E4 (WPP_IFR_SF_qLsqd.c)
 *     ?DecrementOpenHandleCount@FxPkgGeneral@@AEAAXXZ @ 0x1C009202C (-DecrementOpenHandleCount@FxPkgGeneral@@AEAAXXZ.c)
 *     ?ForwardCreateRequest@FxPkgGeneral@@AEAAJPEAVFxIrp@@P6AJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z3@Z @ 0x1C009205C (-ForwardCreateRequest@FxPkgGeneral@@AEAAJPEAVFxIrp@@P6AJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z3@Z.c)
 *     ?Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00C69C4 (-Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00C6CAC (-Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?Vf_VerifyLeakDetectionConsiderObject@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00C6CEC (-Vf_VerifyLeakDetectionConsiderObject@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall FxPkgGeneral::OnCreate(FxPkgGeneral *this, FxIrp *FxIrp)
{
  FxIrp *v2; // r12
  FxIrp v4; // rax
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  _FILE_OBJECT *v7; // r8
  FxDeviceBase *m_DeviceBase; // rbx
  int v9; // eax
  _LIST_ENTRY *p_m_FileObjectInfoHeadList; // r15
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *ContextTypeInfo; // rcx
  _LIST_ENTRY *Blink; // rdx
  _IRP *m_Irp; // rax
  int v14; // edx
  _FX_DRIVER_GLOBALS *v15; // r14
  _POOL_TYPE v16; // r15d
  unsigned __int64 flags; // rdx
  ULONG v18; // r12d
  unsigned __int64 v19; // r13
  int id; // edi
  __int64 v21; // r8
  void *Caller; // rax
  FxFileObject *v23; // rax
  _FX_DRIVER_GLOBALS *v24; // rdx
  FxFileObject *v25; // rdi
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *v26; // rax
  _LIST_ENTRY *p_m_ChildEntry; // r14
  _FX_DRIVER_GLOBALS *v28; // rax
  KIRQL v29; // al
  bool v30; // zf
  KIRQL v31; // al
  KIRQL v32; // al
  KIRQL v33; // r12
  KIRQL v34; // r13
  _LIST_ENTRY *v35; // rcx
  int v36; // r14d
  _FX_DRIVER_GLOBALS *v37; // rdx
  unsigned __int8 v38; // r8
  unsigned __int16 v39; // ax
  char *v40; // rax
  __int16 m_ObjectFlags; // ax
  unsigned __int64 *p_m_Lock; // r14
  unsigned __int8 v43; // r9
  _LIST_ENTRY *v44; // rdx
  FxDeviceBase_vtbl *v45; // r8
  _LIST_ENTRY *p_m_Link; // rcx
  _LIST_ENTRY *v47; // rbx
  FxDeviceBase *v48; // r13
  _LIST_ENTRY *v49; // rax
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *Flink; // xmm1_8
  FxIrp v51; // rax
  FxRequest *v52; // r15
  _FX_DRIVER_GLOBALS *v53; // r12
  __int64 v54; // rax
  _FX_DRIVER_GLOBALS *v55; // rdx
  FX_POOL_TRACKER *v56; // rbx
  FX_POOL_TRACKER *v57; // r14
  FX_POOL **p_Pool; // rbx
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *v59; // rax
  unsigned __int8 v60; // r8
  FX_POOL *v61; // rax
  _IRP *v62; // rcx
  FX_POOL *v63; // rcx
  unsigned __int8 *v64; // r8
  unsigned __int8 v65; // dl
  FxObject *v66; // rdx
  unsigned __int16 v67; // ax
  __int64 v68; // rax
  __int16 v69; // ax
  _LIST_ENTRY *v70; // r12
  _LIST_ENTRY *v71; // rbx
  unsigned int m_Flags; // eax
  FxIoQueue *m_DefaultQueueForCreates; // r13
  unsigned __int8 v74; // bl
  unsigned int m_QueueState; // r11d
  _FX_DRIVER_GLOBALS *v76; // r12
  unsigned __int8 FxVerboseOn; // al
  FxIoQueue *v78; // rcx
  char v79; // dl
  unsigned __int64 v80; // r13
  _LIST_ENTRY *v81; // r14
  FxIoQueue *m_DriverCreatedQueue; // rcx
  unsigned __int64 v83; // r15
  FxDeviceBase *v84; // rbx
  unsigned __int64 v85; // rbx
  _LIST_ENTRY *v86; // rax
  _LIST_ENTRY *v87; // rcx
  _LIST_ENTRY *v88; // rcx
  unsigned __int16 m_ObjectSize; // ax
  const void *v91; // rbx
  unsigned __int64 v92; // rax
  unsigned __int64 v93; // rax
  unsigned __int64 v94; // rax
  unsigned __int64 v95; // rcx
  unsigned __int64 ContextSizeOverride; // r8
  _FX_DRIVER_GLOBALS *v97; // rdx
  FxVerifierLock *m_DeviceObject; // rcx
  FxVerifierLock *v99; // rcx
  __m128i v100; // xmm2
  _LIST_ENTRY *v101; // rdx
  FxDeviceBase *v102; // rcx
  unsigned __int64 v103; // rdx
  unsigned __int16 v104; // ax
  unsigned __int64 v105; // rdx
  unsigned __int16 v106; // ax
  const void *v107; // rcx
  _LIST_ENTRY *v108; // rax
  __int64 v109; // rax
  unsigned __int64 ContextSize; // r8
  _FX_DRIVER_GLOBALS *v111; // rdx
  FX_POOL *v112; // rax
  FX_POOL *NonPagedBytes; // rax
  _LIST_ENTRY *v114; // rax
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *v115; // xmm1_8
  FxDeviceBase *v116; // rax
  _LIST_ENTRY *v117; // rdx
  FxDeviceBase *v118; // rcx
  unsigned __int64 m_Driver; // rdx
  unsigned __int16 v120; // ax
  unsigned __int64 v121; // rdx
  unsigned __int16 v122; // ax
  const void *v123; // rcx
  FxDeviceBase *v124; // rcx
  unsigned __int16 v125; // ax
  const void *v126; // rcx
  FxVerifierLock *v127; // rcx
  const void *v128; // r10
  const char *v129; // r8
  const void *v130; // rdx
  const void *v131; // rdx
  const void *v132; // rcx
  _FX_DRIVER_GLOBALS *v133; // rdx
  unsigned __int16 v134; // ax
  unsigned __int16 v135; // r9
  const void *v136; // rcx
  FxIoQueue *v137; // rcx
  unsigned __int16 v138; // ax
  _LIST_ENTRY *v139; // rbx
  FxDeviceBase *v140; // r14
  unsigned __int64 v141; // r12
  unsigned __int16 v142; // ax
  unsigned __int64 v143; // r14
  _LIST_ENTRY *v144; // rax
  _LIST_ENTRY *v145; // rcx
  char v146; // al
  _LIST_ENTRY *v147; // rcx
  char v148; // r14
  signed int v149; // eax
  int v150; // ebx
  FxIoQueue *v151; // rdx
  unsigned __int16 v152; // cx
  const void *v153; // rdx
  FxDeviceBase *v154; // rcx
  unsigned __int16 v155; // ax
  const void *v156; // rcx
  _LIST_ENTRY *v157; // rdx
  _LIST_ENTRY *v158; // rcx
  FxDeviceBase *v159; // rcx
  unsigned __int16 v160; // ax
  const void *v161; // rcx
  const _GUID *Tag; // [rsp+20h] [rbp-B9h]
  unsigned __int8 v163; // [rsp+50h] [rbp-89h] BYREF
  char v164; // [rsp+51h] [rbp-88h]
  unsigned __int8 PreviousIrql; // [rsp+52h] [rbp-87h] BYREF
  unsigned __int8 v166; // [rsp+53h] [rbp-86h] BYREF
  unsigned __int8 v167[4]; // [rsp+54h] [rbp-85h] BYREF
  _WDF_OBJECT_ATTRIBUTES attributes; // [rsp+58h] [rbp-81h] BYREF
  _LIST_ENTRY *v169; // [rsp+90h] [rbp-49h]
  _FX_DRIVER_GLOBALS *globals; // [rsp+98h] [rbp-41h]
  void *PPObject; // [rsp+A0h] [rbp-39h] BYREF
  unsigned __int64 v172; // [rsp+A8h] [rbp-31h]
  _FILE_OBJECT *FileObject; // [rsp+B0h] [rbp-29h]
  FxFileObject *pFxFO; // [rsp+B8h] [rbp-21h]
  FxVerifierLock *VerifierLock; // [rsp+C0h] [rbp-19h] BYREF
  FxVerifierLock *v176; // [rsp+C8h] [rbp-11h] BYREF
  FxDeviceBase *v177; // [rsp+D0h] [rbp-9h]
  FxRequest *Request; // [rsp+D8h] [rbp-1h] BYREF
  FxRequest *outputRequest; // [rsp+E0h] [rbp+7h] BYREF
  void *retaddr; // [rsp+138h] [rbp+5Fh]
  unsigned __int8 v181; // [rsp+140h] [rbp+67h] BYREF
  FxIrp *Irp; // [rsp+148h] [rbp+6Fh]
  char v183; // [rsp+150h] [rbp+77h]
  _IRP *v184; // [rsp+158h] [rbp+7Fh] BYREF

  Irp = FxIrp;
  v2 = FxIrp;
  memset(&attributes, 0, sizeof(attributes));
  v4.m_Irp = v2->m_Irp;
  m_Globals = this->m_Globals;
  v172 = 0LL;
  v164 = 0;
  CurrentStackLocation = v4.m_Irp->Tail.Overlay.CurrentStackLocation;
  v183 = 0;
  globals = m_Globals;
  v169 = 0LL;
  v7 = CurrentStackLocation->FileObject;
  FileObject = v7;
  LODWORD(v4.m_Irp) = _InterlockedExchangeAdd(&this->m_OpenHandleCount, 1u);
  m_DeviceBase = this->m_DeviceBase;
  v9 = LODWORD(v4.m_Irp) + 1;
  if ( BYTE4(m_DeviceBase[1].m_Globals) && v9 > 2 )
  {
    m_ObjectSize = m_DeviceBase->m_ObjectSize;
    v91 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_ObjectSize )
      v91 = 0LL;
    WPP_IFR_SF_q(m_Globals, 2u, 0xDu, 0x15u, WPP_FxPkgGeneral_cpp_Traceguids, v91);
    v36 = -1073741790;
    goto LABEL_327;
  }
  p_m_FileObjectInfoHeadList = &this->m_FileObjectInfoHeadList;
  ContextTypeInfo = 0LL;
  attributes.Size = 56;
  memset(&attributes.Size + 1, 0, 20);
  memset(&attributes.ParentObject, 0, 24);
  attributes.ExecutionLevel = WdfExecutionLevelInheritFromParent;
  attributes.SynchronizationScope = WdfSynchronizationScopeInheritFromParent;
  if ( p_m_FileObjectInfoHeadList->Flink != p_m_FileObjectInfoHeadList )
  {
    Blink = this->m_FileObjectInfoHeadList.Blink;
    v169 = Blink;
    if ( LODWORD(Blink[5].Blink) )
    {
      attributes = *(_WDF_OBJECT_ATTRIBUTES *)&Blink[5].Blink;
      ContextTypeInfo = attributes.ContextTypeInfo;
    }
    attributes.ExecutionLevel = this->m_ExecutionLevel;
    attributes.SynchronizationScope = this->m_SynchronizationScope;
  }
  m_Irp = v2->m_Irp;
  v14 = (__int64)m_DeviceBase[1].m_DisposeSingleEntry.Next & 0x7FFFFFFF;
  v15 = m_DeviceBase->m_Globals;
  LODWORD(PPObject) = v14;
  if ( v14 == 1 )
  {
    v25 = 0LL;
    pFxFO = 0LL;
    goto LABEL_54;
  }
  if ( !v7 && (v14 != 4 || !BYTE4(m_DeviceBase[1].m_Globals)) )
  {
    if ( v15->FxVerboseOn )
    {
      WPP_IFR_SF_q(v15, 5u, 0xDu, 0xAu, WPP_FxFileObject_cpp_Traceguids, m_Irp);
      v15 = m_DeviceBase->m_Globals;
    }
    FxVerifierDbgBreakPoint(v15);
    v36 = -1073741438;
    goto LABEL_324;
  }
  v16 = ExDefaultNonPagedPoolType;
  flags = 0LL;
  v18 = v15->Tag;
  if ( ContextTypeInfo )
  {
    flags = attributes.ContextSizeOverride;
    if ( !attributes.ContextSizeOverride )
      flags = ContextTypeInfo->ContextSize;
  }
  v19 = 208LL;
  id = 0;
  v21 = -1LL;
  if ( flags )
  {
    v92 = (flags + 7) & 0xFFFFFFFFFFFFFFF8uLL;
    if ( v92 < flags )
      goto LABEL_322;
    v93 = v92 + 208;
    v19 = -1LL;
    if ( v93 >= 0xD0 )
      v19 = v93;
    id = v93 < 0xD0 ? 0xC0000095 : 0;
    if ( v93 < 0xD0 )
      goto LABEL_148;
  }
  if ( v15->FxVerifierHandle )
  {
    v94 = v19 + 48;
    v95 = v19;
    if ( v19 + 48 >= v19 )
      v21 = v19 + 48;
    v19 = v21;
    id = v94 < v95 ? 0xC0000095 : 0;
  }
  if ( id < 0 )
  {
LABEL_148:
    WPP_IFR_SF_DDid(v15, flags, v21, 0xA0u, Tag, 0xA0u, 0, flags, id);
    if ( id >= 0 )
      goto LABEL_12;
LABEL_322:
    v36 = -1073741670;
    goto LABEL_323;
  }
LABEL_12:
  if ( v15->FxPoolTrackingOn )
    Caller = retaddr;
  else
    Caller = 0LL;
  v23 = (FxFileObject *)FxPoolAllocator(v15, &v15->FxPoolFrameworks, v16, v19, v18, Caller);
  v25 = v23;
  if ( v23 )
  {
    if ( v15->FxVerifierHandle )
    {
      memset(v23, 0, 0x30uLL);
      LODWORD(v25->m_ChildListHead.Flink) = 1146058822;
      v25 = (FxFileObject *)((char *)v25 + 48);
    }
    *(_QWORD *)&v25[1].m_Type = 0LL;
    v25[1].m_Globals = 0LL;
    *(_QWORD *)&v25[1].m_ObjectFlags = 0LL;
    v25[1].m_ChildListHead.Flink = 0LL;
    v25[1].m_ChildListHead.Blink = 0LL;
    v25[1].FxNonPagedObject::FxObject::__vftable = (FxFileObject_vtbl *)v25;
    v26 = attributes.ContextTypeInfo;
    if ( attributes.ContextTypeInfo )
    {
      ContextSizeOverride = attributes.ContextSizeOverride;
      if ( !attributes.ContextSizeOverride )
        ContextSizeOverride = attributes.ContextTypeInfo->ContextSize;
      memset(&v25[1].m_SpinLock, 0, (ContextSizeOverride + 7) & 0xFFFFFFFFFFFFFFF8uLL);
      v26 = attributes.ContextTypeInfo;
    }
    v25[1].m_ChildListHead.Flink = (_LIST_ENTRY *)v26;
  }
  if ( !v25 )
    goto LABEL_322;
  p_m_ChildEntry = &v25->m_ChildEntry;
  v25->m_Globals = m_DeviceBase->m_Globals;
  v25->FxNonPagedObject::FxObject::__vftable = (FxFileObject_vtbl *)FxObject::`vftable';
  *(_DWORD *)&v25->m_Type = 10489880;
  v25->m_SpinLock.m_Lock = 0LL;
  v25->m_SpinLock.m_DbgFlagIsInitialized = 1;
  v25->m_Refcnt = 1;
  *(_DWORD *)&v25->m_ObjectFlags = 0x10000;
  v25->m_ParentObject = 0LL;
  v25->m_ChildListHead.Blink = &v25->m_ChildListHead;
  v25->m_ChildListHead.Flink = &v25->m_ChildListHead;
  v25->m_ChildEntry.Blink = &v25->m_ChildEntry;
  v25->m_ChildEntry.Flink = &v25->m_ChildEntry;
  v28 = v25->m_Globals;
  v25->m_DisposeSingleEntry.Next = 0LL;
  v25->m_DeviceBase = 0LL;
  if ( v28->FxVerifierOn )
    FxObject::Vf_VerifyConstruct(v25, v24, 0);
  v25->FxNonPagedObject::FxObject::__vftable = (FxFileObject_vtbl *)FxNonPagedObject::`vftable';
  v25->m_NPLock.m_Lock = 0LL;
  v25->m_NPLock.m_DbgFlagIsInitialized = 1;
  if ( SLOBYTE(v25->m_ObjectFlags) < 0 )
  {
    v97 = v25->m_Globals;
    if ( v97->FxVerifierLock )
    {
      VerifierLock = 0LL;
      FxVerifierLock::CreateAndInitialize(&VerifierLock, v97, v25);
      v25[-1].IFxHasCallbacks::__vftable = (IFxHasCallbacks_vtbl *)VerifierLock;
    }
  }
  v25->m_PkgContext = 0LL;
  v25->FxNonPagedObject::FxObject::__vftable = (FxFileObject_vtbl *)FxFileObject::`vftable'{for `FxNonPagedObject'};
  v25->m_DeviceBase = m_DeviceBase;
  v25->IFxHasCallbacks::__vftable = (IFxHasCallbacks_vtbl *)FxFileObject::`vftable'{for `IFxHasCallbacks'};
  v25->m_FileObject.m_FileObject = FileObject;
  v29 = KeAcquireSpinLockRaiseToDpc(&v25->m_SpinLock.m_Lock);
  v25->m_ObjectFlags |= 2u;
  KeReleaseSpinLock(&v25->m_SpinLock.m_Lock, v29);
  v30 = v25->m_ObjectSize == 0;
  v177 = 0LL;
  if ( v30 )
  {
    v36 = -1073741816;
LABEL_161:
    FxObject::ClearEvtCallbacks(v25);
    v25->DeleteObject(v25);
LABEL_323:
    v2 = Irp;
LABEL_324:
    v159 = this->m_DeviceBase;
    v160 = v159->m_ObjectSize;
    v161 = (const void *)((unsigned __int64)v159 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v160 )
      v161 = 0LL;
    WPP_IFR_SF_qL(globals, 2u, 0xDu, 0x16u, WPP_FxPkgGeneral_cpp_Traceguids, v161, v36);
    goto LABEL_327;
  }
  if ( attributes.ExecutionLevel == WdfExecutionLevelPassive )
  {
    v31 = KeAcquireSpinLockRaiseToDpc(&v25->m_SpinLock.m_Lock);
    v25->m_ObjectFlags |= 0x11u;
    KeReleaseSpinLock(&v25->m_SpinLock.m_Lock, v31);
  }
  v177 = m_DeviceBase;
  v32 = KeAcquireSpinLockRaiseToDpc(&v25->m_SpinLock.m_Lock);
  v30 = v25->m_ObjectState == 1;
  v33 = v32;
  LOBYTE(v184) = v32;
  if ( !v30 )
  {
    FxObject::TraceDroppedEvent(v25, FxObjectDroppedEventAssignParentObject);
    KeReleaseSpinLock(&v25->m_SpinLock.m_Lock, v33);
    v36 = -1073741738;
    goto LABEL_161;
  }
  if ( v25->m_ParentObject )
  {
    KeReleaseSpinLock(&v25->m_SpinLock.m_Lock, v32);
    v36 = -1071644147;
    goto LABEL_161;
  }
  v34 = KeAcquireSpinLockRaiseToDpc(&m_DeviceBase->m_SpinLock.m_Lock);
  if ( m_DeviceBase->m_ObjectState == 1 )
  {
    v35 = m_DeviceBase->m_ChildListHead.Blink;
    if ( v35->Flink != &m_DeviceBase->m_ChildListHead )
      goto LABEL_321;
    p_m_ChildEntry->Flink = &m_DeviceBase->m_ChildListHead;
    v25->m_ChildEntry.Blink = v35;
    v35->Flink = p_m_ChildEntry;
    m_DeviceBase->m_ChildListHead.Blink = p_m_ChildEntry;
    if ( !v25->m_DeviceBase )
      v25->m_DeviceBase = m_DeviceBase->m_DeviceBase;
    KeReleaseSpinLock(&m_DeviceBase->m_SpinLock.m_Lock, v34);
    v25->m_ParentObject = m_DeviceBase;
    v36 = 0;
  }
  else
  {
    FxObject::TraceDroppedEvent(m_DeviceBase, FxObjectDroppedEventAddChildObjectInternal);
    KeReleaseSpinLock(&m_DeviceBase->m_SpinLock.m_Lock, v34);
    v36 = -1073741738;
  }
  KeReleaseSpinLock(&v25->m_SpinLock.m_Lock, (KIRQL)v184);
  if ( v36 < 0 )
    goto LABEL_161;
  v39 = v25->m_ObjectSize;
  if ( v39 )
    v40 = (char *)v25 + v39;
  else
    v40 = 0LL;
  if ( attributes.EvtDestroyCallback )
    *((_QWORD *)v40 + 3) = attributes.EvtDestroyCallback;
  if ( attributes.EvtCleanupCallback )
  {
    *((_QWORD *)v40 + 2) = attributes.EvtCleanupCallback;
    m_ObjectFlags = v25->m_ObjectFlags | 0x400;
  }
  else
  {
    m_ObjectFlags = v25->m_ObjectFlags;
  }
  v25->m_ObjectFlags = m_ObjectFlags | 8;
  if ( v25->m_Globals->FxVerifierOn )
    FxObject::Vf_VerifyLeakDetectionConsiderObject(v25, v37);
  if ( SLOBYTE(m_DeviceBase->m_ObjectFlags) < 0
    && (m_DeviceObject = (FxVerifierLock *)m_DeviceBase[-1].m_PhysicalDevice.m_DeviceObject) != 0LL )
  {
    FxVerifierLock::Lock(m_DeviceObject, &PreviousIrql, v38);
    v43 = PreviousIrql;
    p_m_Lock = &m_DeviceBase->m_NPLock.m_Lock;
  }
  else
  {
    p_m_Lock = &m_DeviceBase->m_NPLock.m_Lock;
    v43 = KeAcquireSpinLockRaiseToDpc(&m_DeviceBase->m_NPLock.m_Lock);
  }
  v44 = (_LIST_ENTRY *)&m_DeviceBase[2];
  v45 = m_DeviceBase[2].FxNonPagedObject::FxObject::__vftable;
  p_m_Link = &v25->m_Link;
  if ( (FxDeviceBase *)v45->~FxObject != &m_DeviceBase[2] )
    goto LABEL_321;
  p_m_Link->Flink = (_LIST_ENTRY *)v45;
  v25->m_Link.Blink = v44;
  v45->~FxObject = (void (__fastcall *)(FxObject *))p_m_Link;
  v44->Flink = p_m_Link;
  if ( SLOBYTE(m_DeviceBase->m_ObjectFlags) < 0
    && (v99 = (FxVerifierLock *)m_DeviceBase[-1].m_PhysicalDevice.m_DeviceObject) != 0LL )
  {
    FxVerifierLock::Unlock(v99, v43, (unsigned __int8)v45);
  }
  else
  {
    KeReleaseSpinLock(p_m_Lock, v43);
  }
  if ( (_DWORD)PPObject == 2 )
  {
    FileObject->FsContext = v25;
  }
  else if ( (_DWORD)PPObject == 3 )
  {
    FileObject->FsContext2 = v25;
  }
  v30 = v25->m_ObjectSize == 0;
  pFxFO = v25;
  if ( v30 )
    v172 = 0LL;
  else
    v172 = (unsigned __int64)v25 ^ 0xFFFFFFFFFFFFFFF8uLL;
  p_m_FileObjectInfoHeadList = &this->m_FileObjectInfoHeadList;
  v47 = this->m_FileObjectInfoHeadList.Blink->Blink;
  if ( v47 == &this->m_FileObjectInfoHeadList )
  {
LABEL_53:
    v2 = Irp;
LABEL_54:
    if ( !this->m_DriverCreatedQueue && (this->m_Flags & 0xC) == 0 )
    {
      if ( BYTE1(this->m_DeviceBase[1].m_ChildEntry.Blink) )
      {
        return (unsigned int)FxPkgGeneral::ForwardCreateRequest(this, v2, FxPkgGeneral::_CreateCompletionRoutine, this);
      }
      else
      {
        v36 = 0;
        v2->m_Irp->IoStatus.Status = 0;
        v2->m_Irp->IoStatus.Information = 0LL;
        IofCompleteRequest(v2->m_Irp, 0);
        v2->m_Irp = 0LL;
      }
      return (unsigned int)v36;
    }
    v48 = this->m_DeviceBase;
    if ( p_m_FileObjectInfoHeadList->Flink != p_m_FileObjectInfoHeadList
      && (v49 = this->m_FileObjectInfoHeadList.Blink, v169 = v49, BYTE4(v49[9].Flink)) )
    {
      v108 = v49[9].Blink;
      *(_LIST_ENTRY *)&attributes.Size = v108[2];
      *(_LIST_ENTRY *)&attributes.EvtDestroyCallback = v108[3];
      *(_LIST_ENTRY *)&attributes.ParentObject = v108[4];
      Flink = (const _WDF_OBJECT_CONTEXT_TYPE_INFO *)v108[5].Flink;
    }
    else
    {
      *(_OWORD *)&attributes.Size = *(_OWORD *)&v48[2].m_ExecutionLevel;
      *(_OWORD *)&attributes.EvtDestroyCallback = *(_OWORD *)&v48[3].FxNonPagedObject::FxObject::__vftable;
      *(_OWORD *)&attributes.ParentObject = *(_OWORD *)&v48[3].m_Globals;
      Flink = (const _WDF_OBJECT_CONTEXT_TYPE_INFO *)v48[3].m_ChildListHead.Flink;
    }
    attributes.ContextTypeInfo = Flink;
    if ( *(FxDeviceBase **)&v48[1].m_ExecutionLevel != (FxDeviceBase *)&v48[1].m_ExecutionLevel )
    {
      attributes.ExecutionLevel = WdfExecutionLevelDispatch;
      attributes.SynchronizationScope = WdfSynchronizationScopeNone;
      attributes.ParentObject = 0LL;
    }
    v51.m_Irp = v2->m_Irp;
    v52 = 0LL;
    v53 = v48->m_Globals;
    v184 = v51.m_Irp;
    v54 = *(_QWORD *)&v48[3].m_SpinLock.m_DbgFlagIsInitialized;
    if ( v54 && *(_WORD *)(v54 + 8) == 4354 && *(_BYTE *)(v54 + 1699) )
    {
      v56 = (FX_POOL_TRACKER *)ExpInterlockedPopEntrySList((PSLIST_HEADER)&v48[2].m_SpinLock);
      if ( !v56 )
      {
        v109 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))v48[2].m_DeviceBase)(
                 HIDWORD(v48[2].m_ChildEntry.Blink),
                 HIDWORD(v48[2].m_DisposeSingleEntry.Next),
                 LODWORD(v48[2].m_DisposeSingleEntry.Next));
LABEL_193:
        v56 = (FX_POOL_TRACKER *)v109;
      }
    }
    else
    {
      ++HIDWORD(v48[2].m_ParentObject);
      v56 = (FX_POOL_TRACKER *)ExpInterlockedPopEntrySList((PSLIST_HEADER)&v48[2].m_SpinLock);
      if ( !v56 )
      {
        ++LODWORD(v48[2].m_ChildEntry.Flink);
        v109 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))v48[2].m_DeviceBase)(
                 HIDWORD(v48[2].m_ChildEntry.Blink),
                 HIDWORD(v48[2].m_DisposeSingleEntry.Next),
                 LODWORD(v48[2].m_DisposeSingleEntry.Next));
        goto LABEL_193;
      }
    }
    if ( !v56 )
      goto LABEL_310;
    if ( v53->FxPoolTrackingOn )
    {
      v57 = v56 + 1;
      FxPoolInsertNonPagedAllocateTracker(
        &v53->FxPoolFrameworks,
        v56,
        (unsigned __int64)v48[2].m_CallbackLockObjectPtr,
        v53->Tag,
        retaddr);
    }
    else
    {
      v57 = v56;
    }
    v57->Link.Flink = &v56->Link;
    p_Pool = &v57->Pool;
    v57->Link.Blink = &v53->Linkage;
    if ( v53->FxVerifierHandle )
    {
      memset(&v57->Pool, 0, 0x30uLL);
      LODWORD(v57->CallersAddress) = 1146058822;
      p_Pool = (FX_POOL **)&v57[1];
    }
    p_Pool[47] = 0LL;
    p_Pool[48] = 0LL;
    p_Pool[49] = 0LL;
    p_Pool[50] = 0LL;
    p_Pool[51] = 0LL;
    p_Pool[46] = (FX_POOL *)p_Pool;
    v59 = attributes.ContextTypeInfo;
    if ( attributes.ContextTypeInfo )
    {
      ContextSize = attributes.ContextSizeOverride;
      if ( !attributes.ContextSizeOverride )
        ContextSize = attributes.ContextTypeInfo->ContextSize;
      memset(p_Pool + 52, 0, (ContextSize + 7) & 0xFFFFFFFFFFFFFFF8uLL);
      v59 = attributes.ContextTypeInfo;
    }
    p_Pool[50] = (FX_POOL *)v59;
    if ( !p_Pool )
    {
LABEL_310:
      v36 = -1073741670;
      WPP_IFR_SF_d(v48->m_Globals, 2u, 0x10u, 0xAu, WPP_FxRequest_cpp_Traceguids, -1073741670);
      goto LABEL_311;
    }
    p_Pool[2] = (FX_POOL *)v48->m_Globals;
    v60 = 1;
    *p_Pool = (FX_POOL *)FxObject::`vftable';
    *((_DWORD *)p_Pool + 2) = 24121352;
    p_Pool[7] = 0LL;
    *((_BYTE *)p_Pool + 48) = 1;
    *((_DWORD *)p_Pool + 3) = 1;
    *((_DWORD *)p_Pool + 6) = 0x10000;
    p_Pool[8] = 0LL;
    p_Pool[5] = (FX_POOL *)(p_Pool + 4);
    p_Pool[4] = (FX_POOL *)(p_Pool + 4);
    p_Pool[10] = (FX_POOL *)(p_Pool + 9);
    p_Pool[9] = (FX_POOL *)(p_Pool + 9);
    v61 = p_Pool[2];
    p_Pool[11] = 0LL;
    p_Pool[12] = 0LL;
    if ( LOBYTE(v61[1].PeakPagedAllocations) )
    {
      FxObject::Vf_VerifyConstruct((FxObject *)p_Pool, v55, 0);
      v60 = 1;
    }
    *p_Pool = (FX_POOL *)FxNonPagedObject::`vftable';
    p_Pool[14] = 0LL;
    *((_BYTE *)p_Pool + 104) = 1;
    if ( *((char *)p_Pool + 24) < 0 )
    {
      v111 = (_FX_DRIVER_GLOBALS *)p_Pool[2];
      if ( v111->FxVerifierLock )
      {
        v176 = 0LL;
        FxVerifierLock::CreateAndInitialize(&v176, v111, (FxObject *)p_Pool);
        v60 = 1;
        *(p_Pool - 5) = (FX_POOL *)v176;
      }
    }
    v62 = v184;
    p_Pool[19] = (FX_POOL *)v184;
    p_Pool[23] = 0LL;
    p_Pool[24] = 0LL;
    *((_WORD *)p_Pool + 106) = 0;
    *((_BYTE *)p_Pool + 238) = 1;
    p_Pool[20] = 0LL;
    p_Pool[25] = 0LL;
    *((_BYTE *)p_Pool + 214) = p_Pool[19] == 0LL;
    *((_BYTE *)p_Pool + 215) = 0;
    *((_BYTE *)p_Pool + 236) = 0;
    p_Pool[21] = 0LL;
    p_Pool[22] = 0LL;
    p_Pool[16] = (FX_POOL *)(p_Pool + 15);
    p_Pool[15] = (FX_POOL *)(p_Pool + 15);
    p_Pool[18] = 0LL;
    p_Pool[27] = (FX_POOL *)216;
    p_Pool[28] = 0LL;
    *((_DWORD *)p_Pool + 52) = 0;
    p_Pool[30] = 0LL;
    *((_DWORD *)p_Pool + 58) = 232;
    *((_BYTE *)p_Pool + 237) = 0;
    p_Pool[32] = (FX_POOL *)FxRequestSystemBuffer::`vftable';
    p_Pool[33] = 0LL;
    p_Pool[34] = (FX_POOL *)FxRequestOutputBuffer::`vftable';
    p_Pool[35] = 0LL;
    p_Pool[31] = 0LL;
    *((_BYTE *)p_Pool + 353) = 0;
    p_Pool[37] = (FX_POOL *)(p_Pool + 36);
    p_Pool[36] = (FX_POOL *)(p_Pool + 36);
    p_Pool[39] = (FX_POOL *)(p_Pool + 38);
    p_Pool[38] = (FX_POOL *)(p_Pool + 38);
    p_Pool[41] = (FX_POOL *)(p_Pool + 40);
    p_Pool[40] = (FX_POOL *)(p_Pool + 40);
    *p_Pool = (FX_POOL *)FxRequestFromLookaside::`vftable';
    *((_BYTE *)p_Pool + 352) = 0;
    *((_WORD *)p_Pool + 177) = 0;
    p_Pool[42] = 0LL;
    p_Pool[43] = 0LL;
    p_Pool[12] = (FX_POOL *)v48->m_DeviceBase;
    if ( !v62 )
    {
LABEL_77:
      if ( v48->m_Globals->FxRequestParentOptimizationOn )
      {
        v66 = 0LL;
        PPObject = 0LL;
        if ( !*((_WORD *)p_Pool + 5) )
        {
          v36 = -1073741816;
          goto LABEL_224;
        }
        if ( attributes.ExecutionLevel == WdfExecutionLevelPassive )
        {
          FxObject::MarkPassiveCallbacks((FxObject *)p_Pool, ObjectLock);
          v66 = (FxObject *)PPObject;
          v60 = 1;
        }
        if ( attributes.ParentObject )
        {
          FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)p_Pool[2], attributes.ParentObject, 0x1000u, &PPObject);
          v66 = (FxObject *)PPObject;
          v60 = 1;
        }
        if ( !v66 )
          goto LABEL_84;
        v36 = FxObject::AssignParentObject((FxObject *)p_Pool, v66);
        if ( v36 >= 0 )
        {
          v60 = 1;
LABEL_84:
          v67 = *((_WORD *)p_Pool + 5);
          if ( v67 )
            v68 = (__int64)p_Pool + v67;
          else
            v68 = 0LL;
          if ( attributes.EvtDestroyCallback )
            *(_QWORD *)(v68 + 24) = attributes.EvtDestroyCallback;
          if ( attributes.EvtCleanupCallback )
          {
            *(_QWORD *)(v68 + 16) = attributes.EvtCleanupCallback;
            v69 = *((_WORD *)p_Pool + 12) | 0x400;
          }
          else
          {
            v69 = *((_WORD *)p_Pool + 12);
          }
          *((_WORD *)p_Pool + 12) = v69 | 8;
          if ( LOBYTE(p_Pool[2][1].PeakPagedAllocations) )
          {
            FxObject::Vf_VerifyLeakDetectionConsiderObject((FxObject *)p_Pool, (_FX_DRIVER_GLOBALS *)v66);
            v60 = 1;
          }
          v36 = 0;
          goto LABEL_93;
        }
      }
      else
      {
        v36 = FxObject::Commit((FxObject *)p_Pool, &attributes, 0LL, v48, 0);
      }
      if ( v36 >= 0 )
      {
        v60 = 1;
LABEL_93:
        v52 = (FxRequest *)p_Pool;
        goto LABEL_94;
      }
LABEL_224:
      WPP_IFR_SF_d(v48->m_Globals, 2u, 0x10u, 0xBu, WPP_FxRequest_cpp_Traceguids, v36);
      FxObject::ClearEvtCallbacks((FxObject *)p_Pool);
      ((void (__fastcall *)(FX_POOL **))(*p_Pool)->PagedLock.m_Lock.Owner)(p_Pool);
      v60 = 1;
LABEL_94:
      if ( v36 >= 0 )
      {
        v70 = &this->m_FileObjectInfoHeadList;
        v71 = this->m_FileObjectInfoHeadList.Blink->Blink;
        if ( v71 != &this->m_FileObjectInfoHeadList )
        {
          do
          {
            v169 = v71;
            if ( BYTE4(v71[9].Flink) )
            {
              v114 = v71[9].Blink;
              *(_LIST_ENTRY *)&attributes.Size = v114[2];
              *(_LIST_ENTRY *)&attributes.EvtDestroyCallback = v114[3];
              *(_LIST_ENTRY *)&attributes.ParentObject = v114[4];
              v115 = (const _WDF_OBJECT_CONTEXT_TYPE_INFO *)v114[5].Flink;
            }
            else
            {
              v116 = this->m_DeviceBase;
              *(_OWORD *)&attributes.Size = *(_OWORD *)&v116[2].m_ExecutionLevel;
              *(_OWORD *)&attributes.EvtDestroyCallback = *(_OWORD *)&v116[3].FxNonPagedObject::FxObject::__vftable;
              *(_OWORD *)&attributes.ParentObject = *(_OWORD *)&v116[3].m_Globals;
              v115 = (const _WDF_OBJECT_CONTEXT_TYPE_INFO *)v116[3].m_ChildListHead.Flink;
            }
            attributes.ContextTypeInfo = v115;
            if ( attributes.Size )
            {
              attributes.ExecutionLevel = WdfExecutionLevelInheritFromParent;
              attributes.SynchronizationScope = WdfSynchronizationScopeInheritFromParent;
              attributes.ParentObject = 0LL;
              v36 = FxObjectAllocateContext(v52, &attributes, 1u, 0LL);
              if ( v36 < 0 )
              {
                v117 = v71[9].Blink;
                v118 = this->m_DeviceBase;
                if ( v117 )
                  m_Driver = (unsigned __int64)v117[1].Flink;
                else
                  m_Driver = (unsigned __int64)v118->m_Driver;
                v120 = *(_WORD *)(m_Driver + 10);
                v121 = m_Driver ^ 0xFFFFFFFFFFFFFFF8uLL;
                v30 = v120 == 0;
                v122 = v118->m_ObjectSize;
                if ( v30 )
                  v121 = 0LL;
                v123 = (const void *)((unsigned __int64)v118 ^ 0xFFFFFFFFFFFFFFF8uLL);
                if ( !v122 )
                  v123 = 0LL;
                WPP_IFR_SF_qid(globals, 2u, 0xDu, 0x19u, WPP_FxPkgGeneral_cpp_Traceguids, v123, v121, v36);
                goto LABEL_314;
              }
              v60 = 1;
            }
            v71 = v71->Blink;
          }
          while ( v71 != v70 );
        }
        if ( KeGetCurrentIrql() <= 1u )
        {
          KeEnterCriticalRegion();
          v164 = 1;
        }
        m_Flags = this->m_Flags;
        if ( (m_Flags & 4) == 0 && this->m_DriverCreatedQueue )
        {
          v79 = 0;
          goto LABEL_115;
        }
        if ( this->m_ExecutionLevel != WdfExecutionLevelPassive || KeGetCurrentIrql() < 2u )
        {
          m_DefaultQueueForCreates = this->m_DefaultQueueForCreates;
          Request = v52;
          if ( SLOBYTE(m_DefaultQueueForCreates->m_ObjectFlags) < 0
            && (v127 = *(FxVerifierLock **)&m_DefaultQueueForCreates[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
          {
            FxVerifierLock::Lock(v127, &v181, v60);
            v74 = v181;
          }
          else
          {
            v74 = KeAcquireSpinLockRaiseToDpc(&m_DefaultQueueForCreates->m_NPLock.m_Lock);
            v181 = v74;
          }
          if ( v52->m_Reserved )
            FxObject::AddRef(
              v52,
              (void *)0x50647746,
              2311,
              "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
          m_QueueState = m_DefaultQueueForCreates->m_QueueState;
          v76 = m_DefaultQueueForCreates->m_Globals;
          FxVerboseOn = v76->FxVerboseOn;
          if ( (m_QueueState & 1) == 0 )
          {
            v36 = -1073741436;
            if ( FxVerboseOn )
            {
              v128 = (const void *)((unsigned __int64)v52 ^ 0xFFFFFFFFFFFFFFF8uLL);
              v129 = "power stopping (Drain) in progress,";
              if ( !v52->m_ObjectSize )
                v128 = 0LL;
              if ( (m_QueueState & 0x10000) == 0 )
                v129 = a5;
              v130 = (const void *)((unsigned __int64)m_DefaultQueueForCreates ^ 0xFFFFFFFFFFFFFFF8uLL);
              if ( !m_DefaultQueueForCreates->m_ObjectSize )
                v130 = 0LL;
              WPP_IFR_SF_qLsqd(v76, 5u, (unsigned int)v129, 0x29u, Tag, v130, m_QueueState, v129, v128, -1073741436);
            }
            FxNonPagedObject::Unlock(m_DefaultQueueForCreates, v74);
            v52->m_Irp.m_Irp->IoStatus.Information = 0LL;
            FxRequest::Complete(v52, -1073741436);
            v52->Release(
              v52,
              (void *)1886220099,
              2338,
              "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
            goto LABEL_112;
          }
          if ( FxVerboseOn )
          {
            v131 = (const void *)((unsigned __int64)m_DefaultQueueForCreates ^ 0xFFFFFFFFFFFFFFF8uLL);
            if ( !m_DefaultQueueForCreates->m_ObjectSize )
              v131 = 0LL;
            v132 = (const void *)((unsigned __int64)v52 ^ 0xFFFFFFFFFFFFFFF8uLL);
            if ( !v52->m_ObjectSize )
              v132 = 0LL;
            WPP_IFR_SF_qq(v76, 5u, 0xDu, 0x2Au, WPP_FxIoQueue_cpp_Traceguids, v132, v131);
          }
          if ( v52->m_Globals->FxVerifierIO )
          {
            FxNonPagedObject::Lock(v52, &v166);
            v133 = v52->m_Globals;
            if ( v133->FxVerifierOn )
              FxRequest::Vf_VerifyRequestIsNotCompleted(v52, v133);
            FxNonPagedObject::Unlock(v52, v166);
          }
          v52->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
          if ( v52->m_Reserved )
          {
            if ( m_DefaultQueueForCreates->m_Dispatching )
            {
              FxIoQueue::InsertNewRequestLocked(m_DefaultQueueForCreates, &Request, v181);
              FxNonPagedObject::Unlock(m_DefaultQueueForCreates, v181);
              v25 = pFxFO;
              goto LABEL_111;
            }
            v25 = pFxFO;
            v74 = v181;
          }
          FxIoQueue::DispatchEvents(m_DefaultQueueForCreates, v74, v52);
LABEL_111:
          v36 = 259;
LABEL_112:
          v78 = this->m_DefaultQueueForCreates;
          if ( v36 < 0 )
          {
            v134 = v78->m_ObjectSize;
            v135 = 27;
            v136 = (const void *)((unsigned __int64)v78 ^ 0xFFFFFFFFFFFFFFF8uLL);
            if ( !v134 )
              v136 = 0LL;
            goto LABEL_278;
          }
          if ( FxIoQueue::GetRequest(v78, FileObject, 0LL, &outputRequest) < 0 )
            goto LABEL_127;
          m_Flags = this->m_Flags;
          v70 = &this->m_FileObjectInfoHeadList;
          v79 = 1;
          v183 = 1;
LABEL_115:
          v80 = v172;
          if ( (m_Flags & 4) == 0 || (v139 = this->m_FileObjectInfoHeadList.Blink, v139 == v70) )
          {
            v81 = v169;
          }
          else
          {
            while ( 1 )
            {
              v30 = BYTE4(v139[9].Flink) == 0;
              v81 = v139;
              v169 = v139;
              if ( v30 )
                break;
              if ( v25 )
                v25->m_PkgContext = v139->Blink;
              v140 = this->m_DeviceBase;
              v141 = (unsigned __int64)v52 ^ 0xFFFFFFFFFFFFFFF8uLL;
              v142 = v140->m_ObjectSize;
              if ( !v52->m_ObjectSize )
                v141 = 0LL;
              v143 = (unsigned __int64)v140 ^ 0xFFFFFFFFFFFFFFF8uLL;
              v30 = v142 == 0;
              v144 = v139[2].Blink;
              if ( v30 )
                v143 = 0LL;
              if ( v144 )
              {
                v145 = v139[2].Flink;
                LOBYTE(v184) = 0;
                if ( v145 )
                {
                  ((void (__fastcall *)(_LIST_ENTRY *, _IRP **, _QWORD))v145->Flink[1].Flink)(v145, &v184, 0LL);
                  v144 = v139[2].Blink;
                }
                v146 = ((__int64 (__fastcall *)(unsigned __int64, unsigned __int64, unsigned __int64))v144)(
                         v143,
                         v141,
                         v80);
                v147 = v139[2].Flink;
                v148 = v146;
                if ( v147 )
                  ((void (__fastcall *)(_LIST_ENTRY *, _QWORD))v147->Flink[1].Blink)(v147, (unsigned __int8)v184);
                if ( v148 )
                  goto LABEL_127;
              }
              v139 = v139->Blink;
              if ( v139 == &this->m_FileObjectInfoHeadList )
              {
                v81 = v169;
                break;
              }
            }
            v79 = v183;
          }
          m_DriverCreatedQueue = this->m_DriverCreatedQueue;
          if ( !m_DriverCreatedQueue )
          {
            if ( (this->m_Flags & 8) != 0 )
            {
              if ( v52->m_ObjectSize )
                v83 = (unsigned __int64)v52 ^ 0xFFFFFFFFFFFFFFF8uLL;
              else
                v83 = 0LL;
              v84 = this->m_DeviceBase;
              if ( v84->m_ObjectSize )
                v85 = (unsigned __int64)v84 ^ 0xFFFFFFFFFFFFFFF8uLL;
              else
                v85 = 0LL;
              v86 = v81[1].Blink;
              if ( v86 )
              {
                v87 = v81[1].Flink;
                v163 = 0;
                if ( v87 )
                {
                  ((void (__fastcall *)(_LIST_ENTRY *, unsigned __int8 *, _QWORD))v87->Flink[1].Flink)(v87, &v163, 0LL);
                  ((void (__fastcall *)(unsigned __int64, unsigned __int64, unsigned __int64))v81[1].Blink)(
                    v85,
                    v83,
                    v80);
                }
                else
                {
                  ((void (__fastcall *)(unsigned __int64, unsigned __int64, unsigned __int64))v86)(v85, v83, v80);
                }
                v88 = v81[1].Flink;
                if ( v88 )
                {
                  ((void (__fastcall *)(_LIST_ENTRY *, _QWORD))v88->Flink[1].Blink)(v88, v163);
                  v36 = 259;
                  goto $RequestIsGone;
                }
              }
            }
            else
            {
              if ( !BYTE1(this->m_DeviceBase[1].m_ChildEntry.Blink) )
              {
                FxRequest::Complete(v52, 0);
                v36 = 259;
                goto $RequestIsGone;
              }
              FxPkgGeneral::ForwardCreateRequest(this, Irp, FxPkgGeneral::_CreateCompletionRoutine2, v52);
            }
LABEL_127:
            v36 = 259;
            goto $RequestIsGone;
          }
          if ( v79 )
          {
            v149 = FxIoQueue::ForwardRequest(this->m_DefaultQueueForCreates, this->m_DriverCreatedQueue, v52);
            v150 = v149;
            if ( v149 < 0 )
            {
              v151 = this->m_DriverCreatedQueue;
              v152 = v151->m_ObjectSize;
              v153 = (const void *)((unsigned __int64)v151 ^ 0xFFFFFFFFFFFFFFF8uLL);
              if ( !v152 )
                v153 = 0LL;
              WPP_IFR_SF_qL(globals, 2u, 0xDu, 0x1Cu, WPP_FxPkgGeneral_cpp_Traceguids, v153, v149);
              FxRequest::Complete(v52, v150);
              v36 = 259;
              goto $RequestIsGone;
            }
            goto LABEL_127;
          }
          v36 = FxIoQueue::QueueRequest(m_DriverCreatedQueue, v52);
          if ( v36 >= 0 )
            goto $RequestIsGone;
          v137 = this->m_DriverCreatedQueue;
          v138 = v137->m_ObjectSize;
          v135 = 29;
          v136 = (const void *)((unsigned __int64)v137 ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !v138 )
            v136 = 0LL;
LABEL_278:
          WPP_IFR_SF_qL(globals, 2u, 0xDu, v135, WPP_FxPkgGeneral_cpp_Traceguids, v136, v36);
          goto $RequestIsGone;
        }
        v36 = -1073741808;
        v124 = this->m_DeviceBase;
        v2 = Irp;
        v125 = v124->m_ObjectSize;
        v126 = (const void *)((unsigned __int64)v124 ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !v125 )
          v126 = 0LL;
        WPP_IFR_SF_qid(
          globals,
          2u,
          0xDu,
          0x1Au,
          WPP_FxPkgGeneral_cpp_Traceguids,
          v126,
          (__int64)Irp->m_Irp,
          -1073741808);
        goto LABEL_315;
      }
LABEL_311:
      v154 = this->m_DeviceBase;
      v155 = v154->m_ObjectSize;
      v156 = (const void *)((unsigned __int64)v154 ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !v155 )
        v156 = 0LL;
      WPP_IFR_SF_qL(globals, 2u, 0xDu, 0x18u, WPP_FxPkgGeneral_cpp_Traceguids, v156, v36);
LABEL_314:
      v2 = Irp;
LABEL_315:
      if ( v52 )
      {
        FxObject::ClearEvtCallbacks(v52);
        v52->DeleteObject(v52);
      }
      goto LABEL_317;
    }
    v63 = p_Pool[19];
    v64 = (unsigned __int8 *)v63[1].NonPagedHead.Blink;
    v65 = *v64;
    if ( *v64 < 3u )
    {
LABEL_76:
      v60 = 1;
      goto LABEL_77;
    }
    if ( v65 <= 4u )
    {
      if ( v48[1].m_Refcnt == 1 )
      {
        if ( v63->PagedLock.m_Lock.Event.Header.Type )
          goto LABEL_76;
        NonPagedBytes = (FX_POOL *)v63->NonPagedBytes;
      }
      else
      {
        if ( v48[1].m_Refcnt != 2 )
          goto LABEL_76;
        NonPagedBytes = (FX_POOL *)v63->NonPagedHead.Blink;
      }
      p_Pool[33] = NonPagedBytes;
      goto LABEL_219;
    }
    if ( (unsigned __int8)(v65 - 14) > 1u )
      goto LABEL_76;
    if ( (*((_DWORD *)v64 + 6) & 3) != 0 )
    {
      if ( (*((_DWORD *)v64 + 6) & 3) == 1 || (*((_DWORD *)v64 + 6) & 3) == 2 )
      {
        p_Pool[33] = (FX_POOL *)v63->NonPagedHead.Blink;
      }
      else if ( (*((_DWORD *)v64 + 6) & 3) == 3 )
      {
        if ( v65 != 15 && v63->PagedLock.m_Lock.Event.Header.Type )
          goto LABEL_76;
        p_Pool[33] = (FX_POOL *)*((_QWORD *)v64 + 4);
        v112 = (FX_POOL *)v63->NonPagedBytes;
        goto LABEL_211;
      }
LABEL_212:
      NonPagedBytes = p_Pool[33];
LABEL_219:
      if ( NonPagedBytes )
        *((_BYTE *)p_Pool + 235) |= 1u;
      v60 = 1;
      if ( p_Pool[35] )
        *((_BYTE *)p_Pool + 235) |= 2u;
      goto LABEL_77;
    }
    p_Pool[33] = (FX_POOL *)v63->NonPagedHead.Blink;
    v112 = (FX_POOL *)v63->NonPagedHead.Blink;
LABEL_211:
    p_Pool[35] = v112;
    goto LABEL_212;
  }
  while ( 1 )
  {
    v100 = *(__m128i *)&v47[5].Blink;
    v169 = v47;
    *(__m128i *)&attributes.Size = v100;
    *(_LIST_ENTRY *)&attributes.EvtDestroyCallback = *(_LIST_ENTRY *)((char *)v47 + 104);
    *(_LIST_ENTRY *)&attributes.ParentObject = *(_LIST_ENTRY *)((char *)v47 + 120);
    attributes.ContextTypeInfo = (const _WDF_OBJECT_CONTEXT_TYPE_INFO *)v47[8].Blink;
    if ( _mm_cvtsi128_si32(v100) )
    {
      attributes.ExecutionLevel = WdfExecutionLevelInheritFromParent;
      attributes.SynchronizationScope = WdfSynchronizationScopeInheritFromParent;
      attributes.ParentObject = 0LL;
      v36 = FxObjectAllocateContext(v25, &attributes, 1u, 0LL);
      if ( v36 < 0 )
        break;
    }
    v47 = v47->Blink;
    if ( v47 == p_m_FileObjectInfoHeadList )
      goto LABEL_53;
  }
  v101 = v47[9].Blink;
  v102 = this->m_DeviceBase;
  if ( v101 )
    v103 = (unsigned __int64)v101[1].Flink;
  else
    v103 = (unsigned __int64)v102->m_Driver;
  v104 = *(_WORD *)(v103 + 10);
  v105 = v103 ^ 0xFFFFFFFFFFFFFFF8uLL;
  v30 = v104 == 0;
  v106 = v102->m_ObjectSize;
  if ( v30 )
    v105 = 0LL;
  v107 = (const void *)((unsigned __int64)v102 ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !v106 )
    v107 = 0LL;
  WPP_IFR_SF_qqqd(globals, 2u, 0xDu, 0x17u, WPP_FxPkgGeneral_cpp_Traceguids, &v47[5].Blink, v107, v105, v36);
  v2 = Irp;
LABEL_317:
  if ( v25 )
  {
    FxNonPagedObject::Lock(v25->m_DeviceBase, v167);
    v157 = v25->m_Link.Flink;
    if ( v157->Blink == &v25->m_Link )
    {
      v158 = v25->m_Link.Blink;
      if ( v158->Flink == &v25->m_Link )
      {
        v158->Flink = v157;
        v157->Blink = v158;
        FxNonPagedObject::Unlock(v25->m_DeviceBase, v167[0]);
        FxObject::ClearEvtCallbacks(v25);
        ((void (*)(void))v25->DeleteObject)();
        goto LABEL_327;
      }
    }
LABEL_321:
    __fastfail(3u);
  }
LABEL_327:
  FxPkgGeneral::DecrementOpenHandleCount(this);
  v2->m_Irp->IoStatus.Status = v36;
  v2->m_Irp->IoStatus.Information = 0LL;
  IofCompleteRequest(v2->m_Irp, 0);
  v2->m_Irp = 0LL;
$RequestIsGone:
  if ( v164 )
    KeLeaveCriticalRegion();
  return (unsigned int)v36;
}
