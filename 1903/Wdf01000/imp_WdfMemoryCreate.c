/*
 * XREFs of imp_WdfMemoryCreate @ 0x1C00045F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_d @ 0x1C0003FF0 (WPP_IFR_SF_d.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C0004F20 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C00055A0 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ?MarkPassiveCallbacks@FxObject@@QEAAXW4FxObjectLockState@@@Z @ 0x1C001A234 (-MarkPassiveCallbacks@FxObject@@QEAAXW4FxObjectLockState@@@Z.c)
 *     memset @ 0x1C001B300 (memset.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002F850 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_dd @ 0x1C002F9E8 (WPP_IFR_SF_dd.c)
 *     WPP_IFR_SF_qddd @ 0x1C0030A24 (WPP_IFR_SF_qddd.c)
 *     ?_Create@FxMemoryBufferFromPool@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@W4_POOL_TYPE@@K_KPEAPEAVFxMemoryObject@@@Z @ 0x1C0057A50 (-_Create@FxMemoryBufferFromPool@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@W4_POOL_.c)
 *     WPP_IFR_SF_DDid @ 0x1C0058700 (WPP_IFR_SF_DDid.c)
 *     WPP_IFR_SF_qDqD @ 0x1C005880C (WPP_IFR_SF_qDqD.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C005B7E4 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C005B850 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?AllocateTagTracker@FxObject@@IEAAXG@Z @ 0x1C005C2F8 (-AllocateTagTracker@FxObject@@IEAAXG@Z.c)
 *     ?ClearEvtCallbacks@FxObject@@QEAAXXZ @ 0x1C005C490 (-ClearEvtCallbacks@FxObject@@QEAAXXZ.c)
 *     ?TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z @ 0x1C005C720 (-TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z.c)
 *     ?Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00C6CAC (-Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?Vf_VerifyLeakDetectionConsiderObject@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00C6CEC (-Vf_VerifyLeakDetectionConsiderObject@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

int __fastcall imp_WdfMemoryCreate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        _POOL_TYPE PoolType,
        unsigned int PoolTag,
        unsigned __int64 BufferSize,
        WDFMEMORY__ **Memory,
        void **Buffer)
{
  _FX_DRIVER_GLOBALS *DriverName; // r14
  unsigned int v8; // edi
  unsigned __int64 ParentObject; // rdi
  __int64 v12; // rcx
  FxObject *v13; // rbx
  FxObject_vtbl *v14; // rax
  unsigned __int8 v15; // dl
  unsigned int v16; // r8d
  unsigned __int16 v17; // r9
  unsigned __int8 v18; // al
  unsigned __int64 v19; // r15
  int result; // eax
  void *v21; // r9
  unsigned __int64 v22; // rdx
  unsigned __int64 ContextSizeOverride; // r8
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *ContextTypeInfo; // rax
  __int16 v25; // r12
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // r9
  void *Caller; // rax
  int v29; // ebx
  __int64 v30; // r10
  FxMemoryObject *v31; // rax
  FxMemoryObject *v32; // rdi
  _QWORD *v33; // rbx
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *v34; // rax
  _FX_DRIVER_GLOBALS *m_Globals; // rax
  bool v36; // zf
  FxMemoryObject *Driver; // rbx
  unsigned __int64 v38; // r14
  __int64 v39; // rcx
  unsigned int v40; // r8d
  unsigned __int16 v41; // r9
  KIRQL v42; // al
  KIRQL v43; // r12
  KIRQL v44; // r13
  _LIST_ENTRY *Blink; // rdx
  _LIST_ENTRY *p_m_ChildEntry; // rcx
  int v47; // r14d
  unsigned __int16 m_ObjectSize; // ax
  char *v49; // rax
  void (__fastcall *EvtDestroyCallback)(void *); // rcx
  void (__fastcall *EvtCleanupCallback)(void *); // rcx
  WDFMEMORY__ *v52; // rbx
  void **v53; // rbx
  unsigned __int8 CurrentIrql; // cl
  unsigned __int64 v55; // rax
  unsigned __int64 v56; // rcx
  bool v57; // cf
  __int64 v58; // rax
  unsigned __int64 v59; // rax
  unsigned __int64 v60; // rcx
  unsigned __int64 ContextSize; // r8
  _FX_DRIVER_GLOBALS *v62; // rax
  const _GUID *Tag; // [rsp+20h] [rbp-40h]
  void *p_pParent; // [rsp+50h] [rbp-10h] BYREF
  __int16 v65; // [rsp+58h] [rbp-8h]
  __int16 v66; // [rsp+5Ah] [rbp-6h]
  int v67; // [rsp+5Ch] [rbp-4h]
  void *retaddr; // [rsp+98h] [rbp+38h]
  FxMemoryObject *pBuffer; // [rsp+A0h] [rbp+40h] BYREF
  FxObject *pParent; // [rsp+A8h] [rbp+48h] BYREF
  unsigned int v71; // [rsp+B8h] [rbp+58h]

  v71 = PoolTag;
  DriverName = (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName;
  v8 = PoolTag;
  if ( Attributes )
  {
    if ( Attributes->Size == 56 )
    {
      ParentObject = (unsigned __int64)Attributes->ParentObject;
      if ( ParentObject )
      {
        LOWORD(v12) = 0;
        v13 = (FxObject *)(~ParentObject & 0xFFFFFFFFFFFFFFF8uLL);
        if ( (ParentObject & 1) != 0 )
        {
          v12 = LOWORD(v13->__vftable);
          v13 = (FxObject *)((char *)v13 - v12);
        }
        if ( v13->m_Type == 4096 )
        {
          pParent = v13;
        }
        else
        {
          pParent = 0LL;
          p_pParent = &pParent;
          v66 = v12;
          v67 = 0;
          v14 = v13->__vftable;
          v65 = 4096;
          if ( v14->QueryInterface(v13, (FxQueryInterfaceParams *)&p_pParent) < 0 )
          {
            WPP_IFR_SF_qDqD(v13->m_Globals, v15, v16, v17, Tag, (const void *)ParentObject, 0x1000u, v13, v13->m_Type);
            FxVerifierBugCheckWorker(v13->m_Globals, WDF_INVALID_HANDLE, ParentObject, 0x1000uLL);
          }
          v13 = pParent;
        }
        DriverName = v13->m_Globals;
      }
      v8 = v71;
    }
    else
    {
      WPP_IFR_SF_qddd(
        (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
        (unsigned __int8)Attributes,
        6u,
        0xBu,
        WPP_FxValidateFunctions_hpp_Traceguids,
        Attributes,
        56,
        Attributes->Size,
        -1073741820);
    }
  }
  if ( !Memory )
    FxVerifierNullBugCheck(DriverName, retaddr);
  if ( (PoolType & 0xFFFFFEFF) == 1 || (PoolType & 0xFFFFFEFF) == 5 )
    v18 = 1;
  else
    v18 = 2;
  if ( DriverName->FxVerifierOn )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql > v18 )
    {
      WPP_IFR_SF_dd(DriverName, 2u, 0x12u, 0xAu, WPP_fxverifier_h_Traceguids, CurrentIrql, v18);
      FxVerifierDbgBreakPoint(DriverName);
      return -1073741808;
    }
  }
  v19 = BufferSize;
  if ( !BufferSize )
  {
    WPP_IFR_SF_d(DriverName, 2u, 0x12u, 0xAu, WPP_FxMemoryBufferApi_cpp_Traceguids, -1073741811);
    return -1073741811;
  }
  *Memory = 0LL;
  result = FxValidateObjectAttributes(DriverName, Attributes, 0);
  if ( result >= 0 )
  {
    if ( !v8 )
      v8 = DriverName->Tag;
    if ( DriverName->FxVerifierOn && WPP_GLOBAL_WDF_Control.Dpc.DeferredRoutine )
      WPP_GLOBAL_WDF_Control.Dpc.DeferredRoutine((_KDPC *)(unsigned int)PoolType, retaddr, (void *)v8, v21);
    v22 = 1LL;
    if ( v19 >= 0x1000
      || DriverName->FxVerifierOn && DriverName->FxPoolTrackingOn
      || (PoolType & 0xFFFFFEFF) == 1
      || (PoolType & 0xFFFFFEFF) == 5 )
    {
      result = FxMemoryBufferFromPool::_Create(DriverName, Attributes, PoolType, v8, v19, &pBuffer);
      v22 = 1LL;
LABEL_97:
      v32 = pBuffer;
      goto LABEL_49;
    }
    if ( PoolType <= NonPagedPoolCacheAlignedMustS
      && (PoolType == NonPagedPoolMustSucceed
       || PoolType == NonPagedPoolCacheAligned
       || PoolType == NonPagedPoolCacheAlignedMustS) )
    {
      PoolType = ExDefaultNonPagedPoolType;
    }
    if ( !v8 )
      v8 = DriverName->Tag;
    ContextSizeOverride = 0LL;
    if ( Attributes )
    {
      ContextTypeInfo = Attributes->ContextTypeInfo;
      if ( ContextTypeInfo )
      {
        ContextSizeOverride = Attributes->ContextSizeOverride;
        if ( !ContextSizeOverride )
          ContextSizeOverride = ContextTypeInfo->ContextSize;
      }
    }
    v25 = v19 + 15;
    v26 = ((((int)v19 + 15) & 0xFFF0LL) + 128) & 0xFFFFFFFFFFFFFFF0uLL;
    v27 = v26 + 48;
    pBuffer = (FxMemoryObject *)(v26 + 48);
    if ( v26 + 48 < v26 )
    {
      pBuffer = (FxMemoryObject *)-1LL;
      v29 = -1073741675;
    }
    else
    {
      Caller = 0LL;
      v29 = 0;
      v30 = -1LL;
      if ( ContextSizeOverride )
      {
        v55 = (ContextSizeOverride + 7) & 0xFFFFFFFFFFFFFFF8uLL;
        if ( v55 < ContextSizeOverride )
        {
LABEL_118:
          result = -1073741670;
          goto LABEL_97;
        }
        v56 = v55 + v27;
        v22 = v27;
        v57 = v55 + v27 < v27;
        v58 = -1LL;
        if ( !v57 )
          v58 = v56;
        v27 = v58;
        pBuffer = (FxMemoryObject *)v58;
        v29 = v56 < v22 ? 0xC0000095 : 0;
        Caller = 0LL;
      }
      if ( v29 >= 0 )
      {
        if ( DriverName->FxVerifierHandle )
        {
          v59 = v27 + 48;
          v60 = v27;
          if ( v27 + 48 >= v27 )
            v30 = v27 + 48;
          v27 = v30;
          pBuffer = (FxMemoryObject *)v30;
          v29 = v59 < v60 ? 0xC0000095 : 0;
          Caller = 0LL;
        }
        if ( v29 >= 0 )
        {
          if ( DriverName->FxPoolTrackingOn )
            Caller = retaddr;
          v31 = (FxMemoryObject *)FxPoolAllocator(DriverName, &DriverName->FxPoolFrameworks, PoolType, v27, v8, Caller);
          v32 = v31;
          if ( v31 )
          {
            if ( DriverName->FxVerifierHandle )
            {
              memset(v31, 0, 0x30uLL);
              LODWORD(v32->m_ChildListHead.Flink) = 1146058822;
              v32 = (FxMemoryObject *)((char *)v32 + 48);
            }
            v33 = (FxMemoryObject_vtbl **)((char *)&v32->FxObject::__vftable + (unsigned __int16)((v25 & 0xFFF0) + 128));
            v33[1] = 0LL;
            v33[2] = 0LL;
            v33[3] = 0LL;
            v33[4] = 0LL;
            v33[5] = 0LL;
            *v33 = v32;
            if ( Attributes )
            {
              v34 = Attributes->ContextTypeInfo;
              if ( v34 )
              {
                ContextSize = Attributes->ContextSizeOverride;
                if ( !ContextSize )
                  ContextSize = v34->ContextSize;
                memset(v33 + 6, 0, (ContextSize + 7) & 0xFFFFFFFFFFFFFFF8uLL);
                v34 = Attributes->ContextTypeInfo;
              }
              v33[4] = v34;
            }
          }
          if ( v32 )
          {
            v32->m_Globals = DriverName;
            v32->FxObject::__vftable = (FxMemoryObject_vtbl *)FxObject::`vftable';
            v32->m_ObjectSize = (v25 & 0xFFF0) + 128;
            v32->m_Type = 4096;
            v32->m_SpinLock.m_Lock = 0LL;
            v22 = 1LL;
            v32->m_SpinLock.m_DbgFlagIsInitialized = 1;
            v32->m_Refcnt = 1;
            *(_DWORD *)&v32->m_ObjectFlags = 0x10000;
            v32->m_ParentObject = 0LL;
            v32->m_ChildListHead.Blink = &v32->m_ChildListHead;
            v32->m_ChildListHead.Flink = &v32->m_ChildListHead;
            v32->m_ChildEntry.Blink = &v32->m_ChildEntry;
            v32->m_ChildEntry.Flink = &v32->m_ChildEntry;
            m_Globals = v32->m_Globals;
            v32->m_DisposeSingleEntry.Next = 0LL;
            v32->m_DeviceBase = 0LL;
            if ( m_Globals->FxVerifierOn )
            {
              FxObject::Vf_VerifyConstruct(v32, (_FX_DRIVER_GLOBALS *)1, 0);
              v22 = 1LL;
            }
            v32->m_BufferSize = v19;
            v32->FxObject::__vftable = (FxMemoryObject_vtbl *)FxMemoryObject::`vftable'{for `FxObject'};
            v32->IFxMemory::__vftable = (IFxMemory_vtbl *)FxMemoryObject::`vftable'{for `IFxMemory'};
            if ( SLOBYTE(v32->m_ObjectFlags) < 0 )
            {
              FxObject::AllocateTagTracker(v32, 0x100Au);
              v22 = 1LL;
            }
            v32->FxObject::__vftable = (FxMemoryObject_vtbl *)FxMemoryBuffer::`vftable'{for `FxObject'};
            v32->IFxMemory::__vftable = (IFxMemory_vtbl *)FxMemoryBufferFromLookaside::`vftable'{for `IFxMemory'};
            result = 0;
LABEL_49:
            if ( result < 0 )
              return result;
            v36 = v32->m_ObjectSize == 0;
            Driver = 0LL;
            pBuffer = 0LL;
            if ( v36 )
            {
              v47 = -1073741816;
              goto LABEL_120;
            }
            if ( !Attributes )
              goto LABEL_133;
            if ( Attributes->ExecutionLevel == WdfExecutionLevelPassive )
            {
              FxObject::MarkPassiveCallbacks(v32, ObjectLock);
              Driver = pBuffer;
            }
            v38 = (unsigned __int64)Attributes->ParentObject;
            if ( v38 )
            {
              LOWORD(v39) = 0;
              Driver = (FxMemoryObject *)(~v38 & 0xFFFFFFFFFFFFFFF8uLL);
              if ( (v38 & 1) != 0 )
              {
                v39 = LOWORD(Driver->FxObject::__vftable);
                Driver = (FxMemoryObject *)((char *)Driver - v39);
              }
              if ( Driver->m_Type != 4096 )
              {
                v66 = v39;
                p_pParent = &pBuffer;
                v65 = 4096;
                v67 = 0;
                if ( Driver->QueryInterface(Driver, (FxQueryInterfaceParams *)&p_pParent) < 0 )
                {
                  WPP_IFR_SF_qDqD(
                    Driver->m_Globals,
                    v22,
                    v40,
                    v41,
                    Tag,
                    (const void *)v38,
                    0x1000u,
                    Driver,
                    Driver->m_Type);
                  FxVerifierBugCheckWorker(Driver->m_Globals, WDF_INVALID_HANDLE, v38, 0x1000uLL);
                }
                Driver = pBuffer;
                goto LABEL_60;
              }
            }
            else
            {
LABEL_133:
              if ( v32->m_ParentObject )
              {
LABEL_60:
                if ( !Driver )
                {
LABEL_69:
                  if ( Attributes )
                  {
                    m_ObjectSize = v32->m_ObjectSize;
                    if ( m_ObjectSize )
                      v49 = (char *)v32 + m_ObjectSize;
                    else
                      v49 = 0LL;
                    EvtDestroyCallback = Attributes->EvtDestroyCallback;
                    if ( EvtDestroyCallback )
                      *((_QWORD *)v49 + 3) = EvtDestroyCallback;
                    EvtCleanupCallback = Attributes->EvtCleanupCallback;
                    if ( EvtCleanupCallback )
                    {
                      *((_QWORD *)v49 + 2) = EvtCleanupCallback;
                      v32->m_ObjectFlags |= 0x400u;
                    }
                  }
                  v32->m_ObjectFlags |= 8u;
                  if ( v32->m_ObjectSize )
                    v52 = (WDFMEMORY__ *)((unsigned __int64)v32 ^ 0xFFFFFFFFFFFFFFF8uLL);
                  else
                    v52 = 0LL;
                  if ( v32->m_Globals->FxVerifierOn )
                    FxObject::Vf_VerifyLeakDetectionConsiderObject(v32, (_FX_DRIVER_GLOBALS *)v22);
                  v47 = 0;
                  *Memory = v52;
                  v53 = Buffer;
                  if ( Buffer )
                    *v53 = (void *)v32->GetBuffer(&v32->IFxMemory);
                  return v47;
                }
                v42 = KeAcquireSpinLockRaiseToDpc(&v32->m_SpinLock.m_Lock);
                v43 = v42;
                if ( v32->m_ObjectState == 1 )
                {
                  if ( v32->m_ParentObject )
                  {
                    KeReleaseSpinLock(&v32->m_SpinLock.m_Lock, v42);
                    v47 = -1071644147;
                  }
                  else
                  {
                    v44 = KeAcquireSpinLockRaiseToDpc(&Driver->m_SpinLock.m_Lock);
                    if ( Driver->m_ObjectState == 1 )
                    {
                      Blink = Driver->m_ChildListHead.Blink;
                      p_m_ChildEntry = &v32->m_ChildEntry;
                      if ( Blink->Flink != &Driver->m_ChildListHead )
                        __fastfail(3u);
                      p_m_ChildEntry->Flink = &Driver->m_ChildListHead;
                      v32->m_ChildEntry.Blink = Blink;
                      Blink->Flink = p_m_ChildEntry;
                      Driver->m_ChildListHead.Blink = p_m_ChildEntry;
                      if ( !v32->m_DeviceBase )
                        v32->m_DeviceBase = Driver->m_DeviceBase;
                      KeReleaseSpinLock(&Driver->m_SpinLock.m_Lock, v44);
                      v47 = 0;
                      v32->m_ParentObject = Driver;
                    }
                    else
                    {
                      FxObject::TraceDroppedEvent(Driver, FxObjectDroppedEventAddChildObjectInternal);
                      KeReleaseSpinLock(&Driver->m_SpinLock.m_Lock, v44);
                      v47 = -1073741738;
                    }
                    KeReleaseSpinLock(&v32->m_SpinLock.m_Lock, v43);
                    if ( v47 >= 0 )
                      goto LABEL_69;
                  }
                }
                else
                {
                  FxObject::TraceDroppedEvent(v32, FxObjectDroppedEventAssignParentObject);
                  KeReleaseSpinLock(&v32->m_SpinLock.m_Lock, v43);
                  v47 = -1073741738;
                }
LABEL_120:
                FxObject::ClearEvtCallbacks(v32);
                ((void (*)(void))v32->DeleteObject)();
                return v47;
              }
              v62 = v32->m_Globals;
              if ( (FxMemoryObject *)v62->Driver != v32 )
                Driver = (FxMemoryObject *)v62->Driver;
            }
            pBuffer = Driver;
            goto LABEL_60;
          }
          goto LABEL_117;
        }
      }
    }
    WPP_IFR_SF_DDid(
      DriverName,
      v22,
      ContextSizeOverride,
      v27,
      Tag,
      0x78u,
      (unsigned __int16)v19,
      ContextSizeOverride,
      v29);
LABEL_117:
    v22 = 1LL;
    goto LABEL_118;
  }
  return result;
}
