/*
 * XREFs of imp_WdfRegistryOpenKey @ 0x1C0005650
 * Callers:
 *     <none>
 * Callees:
 *     ?_VerifyStateSeparationRegistryPolicy@FxRegKey@@SAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C000386C (-_VerifyStateSeparationRegistryPolicy@FxRegKey@@SAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     WPP_IFR_SF_d @ 0x1C0003FF0 (WPP_IFR_SF_d.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C0004F20 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C00055A0 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C000BDA0 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?MarkPassiveCallbacks@FxObject@@QEAAXW4FxObjectLockState@@@Z @ 0x1C001A234 (-MarkPassiveCallbacks@FxObject@@QEAAXW4FxObjectLockState@@@Z.c)
 *     memset @ 0x1C001B300 (memset.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002F850 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_dd @ 0x1C002F9E8 (WPP_IFR_SF_dd.c)
 *     WPP_IFR_SF_qddd @ 0x1C0030A24 (WPP_IFR_SF_qddd.c)
 *     WPP_IFR_SF_qdd @ 0x1C003DAD8 (WPP_IFR_SF_qdd.c)
 *     WPP_IFR_SF_DDid @ 0x1C0058700 (WPP_IFR_SF_DDid.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C005B850 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z @ 0x1C005C720 (-TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z.c)
 *     ?Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00C6CAC (-Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?Vf_VerifyLeakDetectionConsiderObject@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00C6CEC (-Vf_VerifyLeakDetectionConsiderObject@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall imp_WdfRegistryOpenKey(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFKEY__ *ParentKey,
        _UNICODE_STRING *KeyName,
        ACCESS_MASK DesiredAccess,
        _WDF_OBJECT_ATTRIBUTES *KeyAttributes,
        WDFKEY__ **Key)
{
  _WDF_OBJECT_ATTRIBUTES *v6; // r14
  _FX_DRIVER_GLOBALS *DriverName; // rsi
  __int64 result; // rax
  unsigned __int16 v10; // r9
  unsigned __int16 Length; // dx
  int v12; // eax
  unsigned __int64 ContextSizeOverride; // rdx
  ULONG v14; // ebp
  _POOL_TYPE v15; // edi
  unsigned __int64 v16; // r13
  signed int v17; // ebx
  __int64 v18; // r8
  void *Caller; // rax
  _QWORD *v20; // rax
  _FX_DRIVER_GLOBALS *v21; // rdx
  unsigned __int64 v22; // rbx
  _LIST_ENTRY *v23; // rdi
  __int64 v24; // rax
  void **v25; // r12
  FxObject *v26; // rbp
  __int64 v27; // rax
  KIRQL v28; // r13
  KIRQL v29; // r13
  _LIST_ENTRY *Blink; // rcx
  int v31; // edi
  WDFKEY__ *v32; // rbp
  ACCESS_MASK v33; // r14d
  NTSTATUS v34; // eax
  unsigned __int16 v35; // ax
  _QWORD *i; // rax
  void *ParentObject; // rdx
  unsigned __int8 CurrentIrql; // al
  unsigned __int16 v39; // r9
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *ContextTypeInfo; // rax
  unsigned __int64 v41; // rax
  unsigned __int64 v42; // rax
  bool v43; // cf
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *v44; // rax
  unsigned __int64 ContextSize; // r8
  unsigned __int16 v46; // ax
  char *v47; // rax
  void (__fastcall *EvtDestroyCallback)(void *); // rcx
  void (__fastcall *EvtCleanupCallback)(void *); // rcx
  const _GUID *Tag; // [rsp+20h] [rbp-B8h]
  FxRegKey *pParent; // [rsp+50h] [rbp-88h] BYREF
  void *PPObject; // [rsp+58h] [rbp-80h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-78h] BYREF
  void *retaddr; // [rsp+D8h] [rbp+0h]
  KIRQL v55; // [rsp+E0h] [rbp+8h]
  void *v56; // [rsp+E8h] [rbp+10h] BYREF
  void *m_Key; // [rsp+F0h] [rbp+18h]
  ACCESS_MASK v58; // [rsp+F8h] [rbp+20h]

  v58 = DesiredAccess;
  v6 = KeyAttributes;
  DriverName = (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName;
  if ( ParentKey )
  {
    FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName, ParentKey, 0x1006u, (void **)&pParent);
    DriverName = pParent->FxPagedObject::FxObject::m_Globals;
    m_Key = pParent->m_Key;
  }
  else
  {
    m_Key = 0LL;
    if ( KeyAttributes )
    {
      if ( KeyAttributes->Size == 56 )
      {
        ParentObject = KeyAttributes->ParentObject;
        if ( ParentObject )
        {
          FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName, ParentObject, 0x1000u, &PPObject);
          DriverName = (_FX_DRIVER_GLOBALS *)*((_QWORD *)PPObject + 2);
        }
      }
      else
      {
        WPP_IFR_SF_qddd(
          (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
          0,
          6u,
          0xBu,
          WPP_FxValidateFunctions_hpp_Traceguids,
          KeyAttributes,
          56,
          KeyAttributes->Size,
          -1073741820);
      }
    }
  }
  if ( !KeyName )
    FxVerifierNullBugCheck(DriverName, retaddr);
  if ( !Key )
    FxVerifierNullBugCheck(DriverName, retaddr);
  *Key = 0LL;
  if ( DriverName->FxVerifierOn )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql )
    {
      WPP_IFR_SF_dd(DriverName, 2u, 0x12u, 0xAu, WPP_fxverifier_h_Traceguids, CurrentIrql, 0);
      FxVerifierDbgBreakPoint(DriverName);
      return 3221225488LL;
    }
  }
  result = FxValidateObjectAttributes(DriverName, v6, 0);
  if ( (int)result >= 0 )
  {
    Length = KeyName->Length;
    if ( (KeyName->Length & 1) != 0 )
    {
      v12 = Length;
      v39 = 13;
    }
    else
    {
      LOWORD(v12) = KeyName->MaximumLength;
      if ( (v12 & 1) != 0 )
      {
        v12 = (unsigned __int16)v12;
        v39 = 14;
      }
      else
      {
        if ( !(_WORD)v12 || KeyName->Buffer )
        {
          if ( Length <= (unsigned __int16)v12 )
          {
            ContextSizeOverride = 0LL;
            v14 = DriverName->Tag;
            v15 = ExDefaultNonPagedPoolType;
            if ( v6 )
            {
              ContextTypeInfo = v6->ContextTypeInfo;
              if ( ContextTypeInfo )
              {
                ContextSizeOverride = v6->ContextSizeOverride;
                if ( !ContextSizeOverride )
                  ContextSizeOverride = ContextTypeInfo->ContextSize;
              }
            }
            v16 = 176LL;
            v17 = 0;
            v18 = -1LL;
            if ( ContextSizeOverride )
            {
              v41 = (ContextSizeOverride + 7) & 0xFFFFFFFFFFFFFFF8uLL;
              if ( v41 < ContextSizeOverride )
                goto LABEL_80;
              v42 = v41 + 176;
              v16 = -1LL;
              if ( v42 >= 0xB0 )
                v16 = v42;
              v17 = v42 < 0xB0 ? 0xC0000095 : 0;
              if ( v42 < 0xB0 )
                goto LABEL_79;
            }
            if ( DriverName->FxVerifierHandle )
            {
              if ( v16 + 48 >= v16 )
                v18 = v16 + 48;
              v43 = v16 + 48 < v16;
              v16 = v18;
              v17 = v43 ? 0xC0000095 : 0;
            }
            if ( v17 < 0 )
            {
LABEL_79:
              WPP_IFR_SF_DDid(DriverName, ContextSizeOverride, v18, v10, Tag, 0x80u, 0, ContextSizeOverride, v17);
              if ( v17 < 0 )
                goto LABEL_80;
            }
            if ( DriverName->FxPoolTrackingOn )
              Caller = retaddr;
            else
              Caller = 0LL;
            v20 = FxPoolAllocator(DriverName, &DriverName->FxPoolFrameworks, v15, v16, v14, Caller);
            v22 = (unsigned __int64)v20;
            if ( v20 )
            {
              if ( DriverName->FxVerifierHandle )
              {
                memset(v20, 0, 0x30uLL);
                *(_DWORD *)(v22 + 32) = 1146058822;
                v22 += 48LL;
              }
              *(_QWORD *)(v22 + 136) = 0LL;
              *(_QWORD *)(v22 + 144) = 0LL;
              *(_QWORD *)(v22 + 152) = 0LL;
              *(_QWORD *)(v22 + 160) = 0LL;
              *(_QWORD *)(v22 + 168) = 0LL;
              *(_QWORD *)(v22 + 128) = v22;
              if ( v6 )
              {
                v44 = v6->ContextTypeInfo;
                if ( v44 )
                {
                  ContextSize = v6->ContextSizeOverride;
                  if ( !ContextSize )
                    ContextSize = v44->ContextSize;
                  memset((void *)(v22 + 176), 0, (ContextSize + 7) & 0xFFFFFFFFFFFFFFF8uLL);
                  v44 = v6->ContextTypeInfo;
                }
                *(_QWORD *)(v22 + 160) = v44;
              }
            }
            if ( v22 )
            {
              *(_QWORD *)(v22 + 16) = DriverName;
              *(_QWORD *)v22 = FxObject::`vftable';
              v23 = (_LIST_ENTRY *)(v22 + 72);
              *(_DWORD *)(v22 + 8) = 8392710;
              *(_QWORD *)(v22 + 56) = 0LL;
              *(_BYTE *)(v22 + 48) = 1;
              *(_DWORD *)(v22 + 12) = 1;
              *(_DWORD *)(v22 + 24) = 0x10000;
              *(_QWORD *)(v22 + 64) = 0LL;
              *(_QWORD *)(v22 + 40) = v22 + 32;
              *(_QWORD *)(v22 + 32) = v22 + 32;
              *(_QWORD *)(v22 + 80) = v22 + 72;
              *(_QWORD *)(v22 + 72) = v22 + 72;
              v24 = *(_QWORD *)(v22 + 16);
              *(_QWORD *)(v22 + 88) = 0LL;
              *(_QWORD *)(v22 + 96) = 0LL;
              if ( *(_BYTE *)(v24 + 316) )
                FxObject::Vf_VerifyConstruct((FxObject *)v22, v21, 0);
              *(_WORD *)(v22 + 24) |= 0x11u;
              *(_QWORD *)(v22 + 104) = 0LL;
              v25 = (void **)(v22 + 112);
              *(_QWORD *)v22 = FxRegKey::`vftable';
              *(_QWORD *)(v22 + 112) = 0LL;
              v26 = 0LL;
              *(_QWORD *)(v22 + 120) = DriverName;
              v56 = 0LL;
              if ( *(_WORD *)(v22 + 10) )
              {
                if ( !v6 )
                  goto LABEL_108;
                if ( v6->ExecutionLevel == WdfExecutionLevelPassive )
                {
                  FxObject::MarkPassiveCallbacks((FxObject *)v22, ObjectLock);
                  v26 = (FxObject *)v56;
                }
                v21 = (_FX_DRIVER_GLOBALS *)v6->ParentObject;
                if ( v21 )
                {
                  FxObjectHandleGetPtr(*(_FX_DRIVER_GLOBALS **)(v22 + 16), v21, 0x1000u, &v56);
                  v26 = (FxObject *)v56;
                }
                else
                {
LABEL_108:
                  if ( !*(_QWORD *)(v22 + 64) )
                  {
                    v27 = *(_QWORD *)(v22 + 16);
                    if ( *(_QWORD *)(v27 + 72) != v22 )
                    {
                      v26 = *(FxObject **)(v27 + 72);
                      v56 = v26;
                    }
                  }
                }
                if ( !v26 )
                {
LABEL_40:
                  if ( v6 )
                  {
                    v46 = *(_WORD *)(v22 + 10);
                    if ( v46 )
                      v47 = (char *)(v22 + v46);
                    else
                      v47 = 0LL;
                    EvtDestroyCallback = v6->EvtDestroyCallback;
                    if ( EvtDestroyCallback )
                      *((_QWORD *)v47 + 3) = EvtDestroyCallback;
                    EvtCleanupCallback = v6->EvtCleanupCallback;
                    if ( EvtCleanupCallback )
                    {
                      *((_QWORD *)v47 + 2) = EvtCleanupCallback;
                      *(_WORD *)(v22 + 24) |= 0x400u;
                    }
                  }
                  *(_WORD *)(v22 + 24) |= 8u;
                  v32 = 0LL;
                  if ( *(_WORD *)(v22 + 10) )
                    v32 = (WDFKEY__ *)(v22 ^ 0xFFFFFFFFFFFFFFF8uLL);
                  if ( *(_BYTE *)(*(_QWORD *)(v22 + 16) + 316LL) )
                    FxObject::Vf_VerifyLeakDetectionConsiderObject((FxObject *)v22, v21);
                  v33 = v58;
                  ObjectAttributes.RootDirectory = m_Key;
                  *(_QWORD *)&ObjectAttributes.Length = 48LL;
                  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
                  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
                  ObjectAttributes.ObjectName = KeyName;
                  v34 = ZwOpenKey(v25, v58, &ObjectAttributes);
                  v31 = v34;
                  if ( v34 >= 0 )
                  {
                    if ( (v33 & 0x50030006) != 0 )
                      FxRegKey::_VerifyStateSeparationRegistryPolicy(*(_FX_DRIVER_GLOBALS **)(v22 + 120), *v25);
                    *Key = v32;
                  }
                  else
                  {
                    WPP_IFR_SF_d(DriverName, 2u, 2u, 0xBu, WPP_FxRegistryAPI_cpp_Traceguids, v34);
                  }
                  if ( v31 >= 0 )
                    return (unsigned int)v31;
                  goto LABEL_48;
                }
                v28 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v22 + 56));
                v55 = v28;
                if ( *(_WORD *)(v22 + 26) == 1 )
                {
                  if ( *(_QWORD *)(v22 + 64) )
                  {
                    KeReleaseSpinLock((PKSPIN_LOCK)(v22 + 56), v28);
                    v31 = -1071644147;
                  }
                  else
                  {
                    v29 = KeAcquireSpinLockRaiseToDpc(&v26->m_SpinLock.m_Lock);
                    if ( v26->m_ObjectState == 1 )
                    {
                      Blink = v26->m_ChildListHead.Blink;
                      if ( Blink->Flink != &v26->m_ChildListHead )
                        __fastfail(3u);
                      v23->Flink = &v26->m_ChildListHead;
                      *(_QWORD *)(v22 + 80) = Blink;
                      Blink->Flink = v23;
                      v26->m_ChildListHead.Blink = v23;
                      if ( !*(_QWORD *)(v22 + 96) )
                        *(_QWORD *)(v22 + 96) = v26->m_DeviceBase;
                      KeReleaseSpinLock(&v26->m_SpinLock.m_Lock, v29);
                      *(_QWORD *)(v22 + 64) = v26;
                      v31 = 0;
                    }
                    else
                    {
                      FxObject::TraceDroppedEvent(v26, FxObjectDroppedEventAddChildObjectInternal);
                      KeReleaseSpinLock(&v26->m_SpinLock.m_Lock, v29);
                      v31 = -1073741738;
                    }
                    KeReleaseSpinLock((PKSPIN_LOCK)(v22 + 56), v55);
                    if ( v31 >= 0 )
                    {
                      v25 = (void **)(v22 + 112);
                      goto LABEL_40;
                    }
                  }
                }
                else
                {
                  FxObject::TraceDroppedEvent((FxObject *)v22, FxObjectDroppedEventAssignParentObject);
                  KeReleaseSpinLock((PKSPIN_LOCK)(v22 + 56), v28);
                  v31 = -1073741738;
                }
              }
              else
              {
                v31 = -1073741816;
              }
LABEL_48:
              v35 = *(_WORD *)(v22 + 10);
              if ( v35 )
              {
                for ( i = (_QWORD *)(v22 + v35); i; i = (_QWORD *)i[1] )
                {
                  i[3] = 0LL;
                  i[2] = 0LL;
                }
              }
              *(_WORD *)(v22 + 24) &= ~0x400u;
              (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v22 + 48LL))(v22);
              return (unsigned int)v31;
            }
LABEL_80:
            WPP_IFR_SF_d(DriverName, 2u, 2u, 0xAu, WPP_FxRegistryAPI_cpp_Traceguids, -1073741670);
            return 3221225626LL;
          }
          WPP_IFR_SF_qddd(
            DriverName,
            Length,
            6u,
            0x10u,
            WPP_FxValidateFunctions_hpp_Traceguids_0,
            KeyName,
            Length,
            (unsigned __int16)v12,
            -1073741811);
          return 3221225485LL;
        }
        v12 = (unsigned __int16)v12;
        v39 = 15;
      }
    }
    WPP_IFR_SF_qdd(DriverName, 2u, 6u, v39, WPP_FxValidateFunctions_hpp_Traceguids_0, KeyName, v12, 0xC000000D);
    return 3221225485LL;
  }
  return result;
}
