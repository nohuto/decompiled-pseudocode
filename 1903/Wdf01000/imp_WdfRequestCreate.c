/*
 * XREFs of imp_WdfRequestCreate @ 0x1C0009C70
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_d @ 0x1C0003FF0 (WPP_IFR_SF_d.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C0004F20 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C00055A0 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ??0FxRequest@@IEAA@PEAU_FX_DRIVER_GLOBALS@@PEAU_IRP@@W4FxRequestIrpOwnership@@W4FxRequestConstructorCaller@@G@Z @ 0x1C0009A10 (--0FxRequest@@IEAA@PEAU_FX_DRIVER_GLOBALS@@PEAU_IRP@@W4FxRequestIrpOwnership@@W4FxRequestConstru.c)
 *     ?FxCalculateObjectTotalSize2@@YAJPEAU_FX_DRIVER_GLOBALS@@GG_KPEA_K@Z @ 0x1C000A040 (-FxCalculateObjectTotalSize2@@YAJPEAU_FX_DRIVER_GLOBALS@@GG_KPEA_K@Z.c)
 *     ?ValidateTarget@FxRequestBase@@QEAAJPEAVFxIoTarget@@@Z @ 0x1C000A110 (-ValidateTarget@FxRequestBase@@QEAAJPEAVFxIoTarget@@@Z.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C000BDA0 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?MarkPassiveCallbacks@FxObject@@QEAAXW4FxObjectLockState@@@Z @ 0x1C001A234 (-MarkPassiveCallbacks@FxObject@@QEAAXW4FxObjectLockState@@@Z.c)
 *     memset @ 0x1C001B300 (memset.c)
 *     WPP_IFR_SF_qLqd @ 0x1C0050D18 (WPP_IFR_SF_qLqd.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C0058664 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     WPP_IFR_SF_qDqD @ 0x1C005880C (WPP_IFR_SF_qDqD.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C005B7E4 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C005B850 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?ClearEvtCallbacks@FxObject@@QEAAXXZ @ 0x1C005C490 (-ClearEvtCallbacks@FxObject@@QEAAXXZ.c)
 *     ?TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z @ 0x1C005C720 (-TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z.c)
 *     ?Vf_VerifyLeakDetectionConsiderObject@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00C6CEC (-Vf_VerifyLeakDetectionConsiderObject@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall imp_WdfRequestCreate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        _WDF_OBJECT_ATTRIBUTES *RequestAttributes,
        unsigned __int64 Target,
        WDFREQUEST__ **Request)
{
  unsigned __int64 v4; // rbx
  _FX_DRIVER_GLOBALS *DriverName; // r15
  __int64 v8; // rcx
  FxIoTarget *v9; // rsi
  FxObject *v10; // r13
  int v11; // r14d
  _POOL_TYPE v12; // edi
  unsigned __int64 ContextSizeOverride; // r9
  ULONG Tag; // r12d
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *ContextTypeInfo; // rax
  void *Caller; // rax
  FxRequest *v17; // rax
  FxRequest *v18; // rdi
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *v19; // rax
  FxRequestBase *v20; // rax
  _FX_DRIVER_GLOBALS *v21; // rdx
  FxObject *v22; // rdi
  bool v23; // zf
  FxObject *flags; // rsi
  unsigned __int64 v25; // r14
  __int64 v26; // rcx
  unsigned int v27; // r8d
  unsigned __int16 v28; // r9
  KIRQL v29; // al
  KIRQL v30; // r14
  KIRQL v31; // r13
  _LIST_ENTRY *Blink; // rdx
  _LIST_ENTRY *p_m_ChildEntry; // rcx
  unsigned __int16 m_ObjectSize; // ax
  char *v35; // rax
  void (__fastcall *EvtDestroyCallback)(void *); // rcx
  void (__fastcall *EvtCleanupCallback)(void *); // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rax
  void *ParentObject; // rdx
  unsigned __int64 ContextSize; // r8
  _FX_DRIVER_GLOBALS *v42; // rax
  unsigned __int64 *Total; // [rsp+20h] [rbp-88h]
  FxIoTarget *pTarget; // [rsp+50h] [rbp-58h] BYREF
  void *PPObject; // [rsp+58h] [rbp-50h] BYREF
  FxObject **v46; // [rsp+60h] [rbp-48h] BYREF
  __int16 v47; // [rsp+68h] [rbp-40h]
  __int16 v48; // [rsp+6Ah] [rbp-3Eh]
  int v49; // [rsp+6Ch] [rbp-3Ch]
  void *retaddr; // [rsp+A8h] [rbp+0h]
  unsigned __int64 Size; // [rsp+B0h] [rbp+8h] BYREF
  FxObject *v52; // [rsp+C0h] [rbp+18h] BYREF
  WDFREQUEST__ **v53; // [rsp+C8h] [rbp+20h]

  v53 = Request;
  v4 = 0LL;
  DriverName = (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName;
  if ( Target )
  {
    LOWORD(v8) = 0;
    v9 = (FxIoTarget *)(~Target & 0xFFFFFFFFFFFFFFF8uLL);
    if ( (Target & 1) != 0 )
    {
      v8 = LOWORD(v9->__vftable);
      v9 = (FxIoTarget *)((char *)v9 - v8);
    }
    if ( v9->m_Type == 4608 )
    {
      pTarget = v9;
    }
    else
    {
      FxObjectHandleGetPtrQI(v9, (void **)&pTarget, (void *)Target, 0x1200u, v8);
      v9 = pTarget;
    }
    DriverName = v9->m_Globals;
  }
  else
  {
    pTarget = 0LL;
    v9 = 0LL;
    if ( RequestAttributes )
    {
      ParentObject = RequestAttributes->ParentObject;
      if ( ParentObject )
      {
        FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName, ParentObject, 0x1000u, &PPObject);
        v9 = pTarget;
        DriverName = (_FX_DRIVER_GLOBALS *)*((_QWORD *)PPObject + 2);
      }
    }
  }
  if ( !Request )
    FxVerifierNullBugCheck(DriverName, retaddr);
  v10 = 0LL;
  *Request = 0LL;
  v11 = FxValidateObjectAttributes(DriverName, RequestAttributes, 0);
  if ( v11 >= 0 )
  {
    v12 = ExDefaultNonPagedPoolType;
    ContextSizeOverride = 0LL;
    Tag = DriverName->Tag;
    if ( RequestAttributes )
    {
      ContextTypeInfo = RequestAttributes->ContextTypeInfo;
      if ( ContextTypeInfo )
      {
        ContextSizeOverride = RequestAttributes->ContextSizeOverride;
        if ( !ContextSizeOverride )
          ContextSizeOverride = ContextTypeInfo->ContextSize;
      }
    }
    if ( FxCalculateObjectTotalSize2(DriverName, 0x168u, 0, ContextSizeOverride, &Size) < 0 )
      goto LABEL_85;
    if ( DriverName->FxPoolTrackingOn )
      Caller = retaddr;
    else
      Caller = 0LL;
    v17 = (FxRequest *)FxPoolAllocator(DriverName, &DriverName->FxPoolFrameworks, v12, Size, Tag, Caller);
    v18 = v17;
    if ( v17 )
    {
      if ( DriverName->FxVerifierHandle )
      {
        memset(v17, 0, 0x30uLL);
        LODWORD(v18->m_ChildListHead.Flink) = 1146058822;
        v18 = (FxRequest *)((char *)v18 + 48);
      }
      v18[1].m_Globals = 0LL;
      *(_QWORD *)&v18[1].m_ObjectFlags = 0LL;
      v18[1].m_ChildListHead.Flink = 0LL;
      v18[1].m_ChildListHead.Blink = 0LL;
      *(_QWORD *)&v18[1].m_SpinLock.m_DbgFlagIsInitialized = 0LL;
      *(_QWORD *)&v18[1].m_Type = v18;
      if ( RequestAttributes )
      {
        v19 = RequestAttributes->ContextTypeInfo;
        if ( v19 )
        {
          ContextSize = RequestAttributes->ContextSizeOverride;
          if ( !ContextSize )
            ContextSize = v19->ContextSize;
          memset(&v18[1].m_SpinLock.m_Lock, 0, (ContextSize + 7) & 0xFFFFFFFFFFFFFFF8uLL);
          v19 = RequestAttributes->ContextTypeInfo;
        }
        v18[1].m_ChildListHead.Blink = (_LIST_ENTRY *)v19;
      }
    }
    if ( !v18
      || (FxRequest::FxRequest(v18, DriverName, 0LL, FxRequestOwnsIrp, FxRequestConstructorCallerIsDriver),
          (v22 = v20) == 0LL) )
    {
LABEL_85:
      v11 = -1073741670;
      goto LABEL_54;
    }
    if ( v9 )
      v11 = FxRequestBase::ValidateTarget(v20, v9);
    if ( v11 >= 0 )
    {
      v23 = v22->m_ObjectSize == 0;
      flags = 0LL;
      v52 = 0LL;
      if ( !v23 )
      {
        if ( !RequestAttributes )
          goto LABEL_88;
        if ( RequestAttributes->ExecutionLevel == WdfExecutionLevelPassive )
        {
          FxObject::MarkPassiveCallbacks(v22, ObjectLock);
          flags = v52;
        }
        v25 = (unsigned __int64)RequestAttributes->ParentObject;
        if ( v25 )
        {
          LOWORD(v26) = 0;
          flags = (FxObject *)(~v25 & 0xFFFFFFFFFFFFFFF8uLL);
          if ( (v25 & 1) != 0 )
          {
            v26 = LOWORD(flags->__vftable);
            flags = (FxObject *)((char *)flags - v26);
          }
          if ( flags->m_Type != 4096 )
          {
            v48 = v26;
            v46 = &v52;
            v47 = 4096;
            v49 = 0;
            if ( flags->QueryInterface(flags, (FxQueryInterfaceParams *)&v46) < 0 )
            {
              WPP_IFR_SF_qDqD(
                flags->m_Globals,
                (unsigned __int8)v21,
                v27,
                v28,
                (const _GUID *)Total,
                (const void *)v25,
                0x1000u,
                flags,
                flags->m_Type);
              FxVerifierBugCheckWorker(flags->m_Globals, WDF_INVALID_HANDLE, v25, 0x1000uLL);
            }
            flags = v52;
            goto LABEL_35;
          }
        }
        else
        {
LABEL_88:
          if ( v22->m_ParentObject )
          {
LABEL_35:
            if ( !flags )
            {
LABEL_44:
              if ( RequestAttributes )
              {
                m_ObjectSize = v22->m_ObjectSize;
                if ( m_ObjectSize )
                  v35 = (char *)v22 + m_ObjectSize;
                else
                  v35 = 0LL;
                EvtDestroyCallback = RequestAttributes->EvtDestroyCallback;
                if ( EvtDestroyCallback )
                  *((_QWORD *)v35 + 3) = EvtDestroyCallback;
                EvtCleanupCallback = RequestAttributes->EvtCleanupCallback;
                if ( EvtCleanupCallback )
                {
                  *((_QWORD *)v35 + 2) = EvtCleanupCallback;
                  v22->m_ObjectFlags |= 0x400u;
                }
              }
              m_Globals = v22->m_Globals;
              v22->m_ObjectFlags |= 8u;
              if ( m_Globals->FxVerifierOn )
                FxObject::Vf_VerifyLeakDetectionConsiderObject(v22, v21);
              v11 = 0;
              v10 = v22;
              goto LABEL_54;
            }
            v29 = KeAcquireSpinLockRaiseToDpc(&v22->m_SpinLock.m_Lock);
            v23 = v22->m_ObjectState == 1;
            v30 = v29;
            LOBYTE(Size) = v29;
            if ( v23 )
            {
              if ( v22->m_ParentObject )
              {
                KeReleaseSpinLock(&v22->m_SpinLock.m_Lock, v29);
                v11 = -1071644147;
              }
              else
              {
                v31 = KeAcquireSpinLockRaiseToDpc(&flags->m_SpinLock.m_Lock);
                if ( flags->m_ObjectState == 1 )
                {
                  Blink = flags->m_ChildListHead.Blink;
                  p_m_ChildEntry = &v22->m_ChildEntry;
                  if ( Blink->Flink != &flags->m_ChildListHead )
                    __fastfail(3u);
                  p_m_ChildEntry->Flink = &flags->m_ChildListHead;
                  v22->m_ChildEntry.Blink = Blink;
                  Blink->Flink = p_m_ChildEntry;
                  flags->m_ChildListHead.Blink = p_m_ChildEntry;
                  if ( !v22->m_DeviceBase )
                    v22->m_DeviceBase = flags->m_DeviceBase;
                  KeReleaseSpinLock(&flags->m_SpinLock.m_Lock, v31);
                  v11 = 0;
                  v22->m_ParentObject = flags;
                }
                else
                {
                  FxObject::TraceDroppedEvent(flags, FxObjectDroppedEventAddChildObjectInternal);
                  KeReleaseSpinLock(&flags->m_SpinLock.m_Lock, v31);
                  v11 = -1073741738;
                }
                KeReleaseSpinLock(&v22->m_SpinLock.m_Lock, Size);
                if ( v11 >= 0 )
                  goto LABEL_44;
                v10 = 0LL;
              }
            }
            else
            {
              FxObject::TraceDroppedEvent(v22, FxObjectDroppedEventAssignParentObject);
              KeReleaseSpinLock(&v22->m_SpinLock.m_Lock, v30);
              v11 = -1073741738;
            }
            goto LABEL_73;
          }
          v42 = v22->m_Globals;
          if ( v42->Driver != v22 )
            flags = v42->Driver;
        }
        v52 = flags;
        goto LABEL_35;
      }
      v11 = -1073741816;
    }
LABEL_73:
    WPP_IFR_SF_d(DriverName, 2u, 0x10u, 0xCu, WPP_FxRequest_cpp_Traceguids, v11);
    FxObject::ClearEvtCallbacks(v22);
    v22->DeleteObject(v22);
LABEL_54:
    if ( DriverName->FxVerboseOn )
      WPP_IFR_SF_qLqd(DriverName, 5u, 0x10u, 0xDu, WPP_FxRequest_cpp_Traceguids, 0LL, 1u, v10, v11);
    if ( v11 >= 0 )
    {
      if ( v10->m_ObjectSize )
        v4 = (unsigned __int64)v10 ^ 0xFFFFFFFFFFFFFFF8uLL;
      *v53 = (WDFREQUEST__ *)v4;
    }
  }
  return (unsigned int)v11;
}
