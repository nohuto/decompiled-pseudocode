/*
 * XREFs of imp_WdfMemoryCreate @ 0x1C0002710
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_d @ 0x1C0004F10 (WPP_IFR_SF_d.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0007910 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C00079C0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ?MarkPassiveCallbacks@FxObject@@QEAAXW4FxObjectLockState@@@Z @ 0x1C000C6C4 (-MarkPassiveCallbacks@FxObject@@QEAAXW4FxObjectLockState@@@Z.c)
 *     memset @ 0x1C001C1C0 (memset.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0030430 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_dd @ 0x1C00305C0 (WPP_IFR_SF_dd.c)
 *     WPP_IFR_SF_qddd @ 0x1C00315F4 (WPP_IFR_SF_qddd.c)
 *     ?_Create@FxMemoryBufferFromPool@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@W4_POOL_TYPE@@K_KPEAPEAVFxMemoryObject@@@Z @ 0x1C0058000 (-_Create@FxMemoryBufferFromPool@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@W4_POOL_.c)
 *     WPP_IFR_SF_DDid @ 0x1C0058B9C (WPP_IFR_SF_DDid.c)
 *     WPP_IFR_SF_qDqD @ 0x1C0058CA8 (WPP_IFR_SF_qDqD.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C005B3B8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C005B41C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?AllocateTagTracker@FxObject@@IEAAXG@Z @ 0x1C005BE98 (-AllocateTagTracker@FxObject@@IEAAXG@Z.c)
 *     ?ClearEvtCallbacks@FxObject@@QEAAXXZ @ 0x1C005C030 (-ClearEvtCallbacks@FxObject@@QEAAXXZ.c)
 *     ?TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z @ 0x1C005C384 (-TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z.c)
 *     ?Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00C2C7C (-Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?Vf_VerifyLeakDetectionConsiderObject@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00C2CBC (-Vf_VerifyLeakDetectionConsiderObject@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
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
  _FX_DRIVER_GLOBALS *DriverName; // rbp
  unsigned __int64 ParentObject; // rdi
  __int64 v12; // rcx
  FxObject *v13; // rbx
  FxObject_vtbl *v14; // rax
  unsigned __int8 v15; // dl
  unsigned int v16; // r8d
  unsigned __int16 v17; // r9
  unsigned __int8 v18; // al
  unsigned __int64 v19; // r14
  int result; // eax
  __int64 v21; // r9
  unsigned __int64 v22; // rdx
  unsigned __int64 ContextSizeOverride; // r8
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *ContextTypeInfo; // rax
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rdi
  void *Caller; // rax
  int v28; // ebx
  FxMemoryObject *v29; // rax
  FxMemoryObject *v30; // rdi
  _QWORD *v31; // rbx
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *v32; // rax
  _FX_DRIVER_GLOBALS *m_Globals; // rax
  bool v34; // zf
  FxObject *Driver; // rbx
  unsigned __int64 v36; // rbp
  __int64 v37; // rcx
  FxObject_vtbl *v38; // rax
  unsigned int v39; // r8d
  unsigned __int16 v40; // r9
  KIRQL v41; // al
  KIRQL v42; // r15
  KIRQL v43; // r12
  _LIST_ENTRY *Blink; // rdx
  _LIST_ENTRY *p_m_ChildEntry; // rcx
  int v46; // ebp
  unsigned __int16 m_ObjectSize; // ax
  char *v48; // rax
  void (__fastcall *EvtDestroyCallback)(void *); // rcx
  void (__fastcall *EvtCleanupCallback)(void *); // rcx
  WDFMEMORY__ *v51; // rbx
  void **v52; // rbx
  unsigned __int8 CurrentIrql; // cl
  unsigned __int64 v54; // rax
  unsigned __int64 v55; // rcx
  bool v56; // cf
  __int64 v57; // rax
  unsigned __int64 v58; // rax
  unsigned __int64 v59; // rcx
  unsigned __int64 ContextSize; // r8
  _FX_DRIVER_GLOBALS *v61; // rax
  const _GUID *Tag; // [rsp+20h] [rbp-78h]
  FxObject **p_pParent; // [rsp+50h] [rbp-48h] BYREF
  __int16 v64; // [rsp+58h] [rbp-40h]
  __int16 v65; // [rsp+5Ah] [rbp-3Eh]
  void *retaddr; // [rsp+98h] [rbp+0h]
  FxObject *pParent; // [rsp+A0h] [rbp+8h] BYREF
  FxMemoryObject *pBuffer; // [rsp+A8h] [rbp+10h] BYREF

  DriverName = (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName;
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
          v14 = v13->__vftable;
          v65 = v12;
          v64 = 4096;
          if ( v14->QueryInterface(v13, (FxQueryInterfaceParams *)&p_pParent) < 0 )
          {
            WPP_IFR_SF_qDqD(v13->m_Globals, v15, v16, v17, Tag, (const void *)ParentObject, 0x1000u, v13, v13->m_Type);
            FxVerifierBugCheckWorker(v13->m_Globals, WDF_INVALID_HANDLE, ParentObject, 0x1000uLL);
          }
          v13 = pParent;
        }
        DriverName = v13->m_Globals;
      }
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
    if ( !PoolTag )
      PoolTag = DriverName->Tag;
    if ( DriverName->FxVerifierOn && WPP_GLOBAL_WDF_Control.Dpc.DeferredRoutine )
      WPP_GLOBAL_WDF_Control.Dpc.DeferredRoutine((_KDPC *)(unsigned int)PoolType, retaddr, (void *)PoolTag, (void *)v21);
    v22 = 1LL;
    if ( v19 >= 0x1000
      || DriverName->FxVerifierOn && DriverName->FxPoolTrackingOn
      || (PoolType & 0xFFFFFEFF) == 1
      || (PoolType & 0xFFFFFEFF) == 5 )
    {
      result = FxMemoryBufferFromPool::_Create(DriverName, Attributes, PoolType, PoolTag, v19, &pBuffer);
      v22 = 1LL;
LABEL_96:
      v30 = pBuffer;
      goto LABEL_48;
    }
    if ( PoolType <= NonPagedPoolCacheAlignedMustS
      && (PoolType == NonPagedPoolMustSucceed
       || PoolType == NonPagedPoolCacheAligned
       || PoolType == NonPagedPoolCacheAlignedMustS) )
    {
      PoolType = ExDefaultNonPagedPoolType;
    }
    if ( !PoolTag )
      PoolTag = DriverName->Tag;
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
    v25 = ((((int)v19 + 15) & 0xFFF0LL) + 128) & 0xFFFFFFFFFFFFFFF0uLL;
    v26 = v25 + 48;
    if ( v25 + 48 < v25 )
    {
      v28 = -1073741675;
    }
    else
    {
      Caller = 0LL;
      v28 = 0;
      v21 = -1LL;
      if ( ContextSizeOverride )
      {
        v54 = (ContextSizeOverride + 7) & 0xFFFFFFFFFFFFFFF8uLL;
        if ( v54 < ContextSizeOverride )
        {
LABEL_116:
          result = -1073741670;
          goto LABEL_96;
        }
        v55 = v54 + v26;
        v22 = v26;
        v56 = v54 + v26 < v26;
        v57 = -1LL;
        if ( !v56 )
          v57 = v55;
        v26 = v57;
        v28 = v55 < v22 ? 0xC0000095 : 0;
        Caller = 0LL;
      }
      if ( v28 >= 0 )
      {
        if ( DriverName->FxVerifierHandle )
        {
          v58 = v26 + 48;
          v59 = v26;
          if ( v26 + 48 >= v26 )
            v21 = v26 + 48;
          v26 = v21;
          v28 = v58 < v59 ? 0xC0000095 : 0;
          Caller = 0LL;
        }
        if ( v28 >= 0 )
        {
          if ( DriverName->FxPoolTrackingOn )
            Caller = retaddr;
          v29 = (FxMemoryObject *)FxPoolAllocator(
                                    DriverName,
                                    &DriverName->FxPoolFrameworks,
                                    PoolType,
                                    v26,
                                    PoolTag,
                                    Caller);
          v30 = v29;
          if ( v29 )
          {
            if ( DriverName->FxVerifierHandle )
            {
              memset(v29, 0, 0x30uLL);
              LODWORD(v30->m_ChildListHead.Flink) = 1146058822;
              v30 = (FxMemoryObject *)((char *)v30 + 48);
            }
            v31 = (FxMemoryObject_vtbl **)((char *)&v30->FxObject::__vftable
                                         + (unsigned __int16)(((v19 + 15) & 0xFFF0) + 128));
            memset(v31, 0, 0x30uLL);
            *v31 = v30;
            if ( Attributes )
            {
              v32 = Attributes->ContextTypeInfo;
              if ( v32 )
              {
                ContextSize = Attributes->ContextSizeOverride;
                if ( !ContextSize )
                  ContextSize = v32->ContextSize;
                memset(v31 + 6, 0, (ContextSize + 7) & 0xFFFFFFFFFFFFFFF8uLL);
                v32 = Attributes->ContextTypeInfo;
              }
              v31[4] = v32;
            }
          }
          v22 = 1LL;
          if ( v30 )
          {
            v30->m_Globals = DriverName;
            v30->FxObject::__vftable = (FxMemoryObject_vtbl *)FxObject::`vftable';
            v30->m_Type = 4096;
            v30->m_ObjectSize = ((v19 + 15) & 0xFFF0) + 128;
            v30->m_SpinLock.m_DbgFlagIsInitialized = 1;
            v30->m_SpinLock.m_Lock = 0LL;
            v30->m_Refcnt = 1;
            *(_DWORD *)&v30->m_ObjectFlags = 0x10000;
            v30->m_ParentObject = 0LL;
            v30->m_ChildListHead.Blink = &v30->m_ChildListHead;
            v30->m_ChildListHead.Flink = &v30->m_ChildListHead;
            v30->m_ChildEntry.Blink = &v30->m_ChildEntry;
            v30->m_ChildEntry.Flink = &v30->m_ChildEntry;
            m_Globals = v30->m_Globals;
            v30->m_DisposeSingleEntry.Next = 0LL;
            v30->m_DeviceBase = 0LL;
            if ( m_Globals->FxVerifierOn )
            {
              FxObject::Vf_VerifyConstruct(v30, (_FX_DRIVER_GLOBALS *)1, 0);
              v22 = 1LL;
            }
            v30->m_BufferSize = v19;
            v30->FxObject::__vftable = (FxMemoryObject_vtbl *)FxMemoryObject::`vftable'{for `FxObject'};
            v30->IFxMemory::__vftable = (IFxMemory_vtbl *)FxMemoryObject::`vftable'{for `IFxMemory'};
            if ( SLOBYTE(v30->m_ObjectFlags) < 0 )
            {
              FxObject::AllocateTagTracker(v30, 0x100Au);
              v22 = 1LL;
            }
            v30->FxObject::__vftable = (FxMemoryObject_vtbl *)FxMemoryBuffer::`vftable'{for `FxObject'};
            v30->IFxMemory::__vftable = (IFxMemory_vtbl *)FxMemoryBufferFromLookaside::`vftable'{for `IFxMemory'};
            result = 0;
LABEL_48:
            if ( result < 0 )
              return result;
            v34 = v30->m_ObjectSize == 0;
            Driver = 0LL;
            pParent = 0LL;
            if ( v34 )
            {
              v46 = -1073741816;
              goto LABEL_118;
            }
            if ( !Attributes )
              goto LABEL_131;
            if ( Attributes->ExecutionLevel == WdfExecutionLevelPassive )
            {
              FxObject::MarkPassiveCallbacks(v30, ObjectLock);
              Driver = pParent;
            }
            v36 = (unsigned __int64)Attributes->ParentObject;
            if ( v36 )
            {
              LOWORD(v37) = 0;
              Driver = (FxObject *)(~v36 & 0xFFFFFFFFFFFFFFF8uLL);
              if ( (v36 & 1) != 0 )
              {
                v37 = LOWORD(Driver->__vftable);
                Driver = (FxObject *)((char *)Driver - v37);
              }
              if ( Driver->m_Type != 4096 )
              {
                pParent = 0LL;
                p_pParent = &pParent;
                v38 = Driver->__vftable;
                v65 = v37;
                v64 = 4096;
                if ( v38->QueryInterface(Driver, (FxQueryInterfaceParams *)&p_pParent) < 0 )
                {
                  WPP_IFR_SF_qDqD(
                    Driver->m_Globals,
                    v22,
                    v39,
                    v40,
                    Tag,
                    (const void *)v36,
                    0x1000u,
                    Driver,
                    Driver->m_Type);
                  FxVerifierBugCheckWorker(Driver->m_Globals, WDF_INVALID_HANDLE, v36, 0x1000uLL);
                }
                Driver = pParent;
                goto LABEL_59;
              }
            }
            else
            {
LABEL_131:
              if ( v30->m_ParentObject )
              {
LABEL_59:
                if ( !Driver )
                {
LABEL_68:
                  if ( Attributes )
                  {
                    m_ObjectSize = v30->m_ObjectSize;
                    if ( m_ObjectSize )
                      v48 = (char *)v30 + m_ObjectSize;
                    else
                      v48 = 0LL;
                    EvtDestroyCallback = Attributes->EvtDestroyCallback;
                    if ( EvtDestroyCallback )
                      *((_QWORD *)v48 + 3) = EvtDestroyCallback;
                    EvtCleanupCallback = Attributes->EvtCleanupCallback;
                    if ( EvtCleanupCallback )
                    {
                      *((_QWORD *)v48 + 2) = EvtCleanupCallback;
                      v30->m_ObjectFlags |= 0x400u;
                    }
                  }
                  v30->m_ObjectFlags |= 8u;
                  if ( v30->m_ObjectSize )
                    v51 = (WDFMEMORY__ *)((unsigned __int64)v30 ^ 0xFFFFFFFFFFFFFFF8uLL);
                  else
                    v51 = 0LL;
                  if ( v30->m_Globals->FxVerifierOn )
                    FxObject::Vf_VerifyLeakDetectionConsiderObject(v30, (_FX_DRIVER_GLOBALS *)v22);
                  v46 = 0;
                  *Memory = v51;
                  v52 = Buffer;
                  if ( Buffer )
                    *v52 = (void *)v30->GetBuffer(&v30->IFxMemory);
                  return v46;
                }
                v41 = KeAcquireSpinLockRaiseToDpc(&v30->m_SpinLock.m_Lock);
                v42 = v41;
                if ( v30->m_ObjectState == 1 )
                {
                  if ( v30->m_ParentObject )
                  {
                    KeReleaseSpinLock(&v30->m_SpinLock.m_Lock, v41);
                    v46 = -1071644147;
                  }
                  else
                  {
                    v43 = KeAcquireSpinLockRaiseToDpc(&Driver->m_SpinLock.m_Lock);
                    if ( Driver->m_ObjectState == 1 )
                    {
                      Blink = Driver->m_ChildListHead.Blink;
                      p_m_ChildEntry = &v30->m_ChildEntry;
                      if ( Blink->Flink != &Driver->m_ChildListHead )
                        __fastfail(3u);
                      p_m_ChildEntry->Flink = &Driver->m_ChildListHead;
                      v30->m_ChildEntry.Blink = Blink;
                      Blink->Flink = p_m_ChildEntry;
                      Driver->m_ChildListHead.Blink = p_m_ChildEntry;
                      if ( !v30->m_DeviceBase )
                        v30->m_DeviceBase = Driver->m_DeviceBase;
                      KeReleaseSpinLock(&Driver->m_SpinLock.m_Lock, v43);
                      v46 = 0;
                      v30->m_ParentObject = Driver;
                    }
                    else
                    {
                      FxObject::TraceDroppedEvent(Driver, FxObjectDroppedEventAddChildObjectInternal);
                      KeReleaseSpinLock(&Driver->m_SpinLock.m_Lock, v43);
                      v46 = -1073741738;
                    }
                    KeReleaseSpinLock(&v30->m_SpinLock.m_Lock, v42);
                    if ( v46 >= 0 )
                      goto LABEL_68;
                  }
                }
                else
                {
                  FxObject::TraceDroppedEvent(v30, FxObjectDroppedEventAssignParentObject);
                  KeReleaseSpinLock(&v30->m_SpinLock.m_Lock, v42);
                  v46 = -1073741738;
                }
LABEL_118:
                FxObject::ClearEvtCallbacks(v30);
                ((void (*)(void))v30->DeleteObject)();
                return v46;
              }
              v61 = v30->m_Globals;
              if ( (FxMemoryObject *)v61->Driver != v30 )
                Driver = v61->Driver;
            }
            pParent = Driver;
            goto LABEL_59;
          }
          goto LABEL_116;
        }
      }
    }
    WPP_IFR_SF_DDid(
      DriverName,
      v22,
      ContextSizeOverride,
      v21,
      Tag,
      0x78u,
      (unsigned __int16)v19,
      ContextSizeOverride,
      v28);
    v22 = 1LL;
    goto LABEL_116;
  }
  return result;
}
