/*
 * XREFs of imp_WdfRegistryOpenKey @ 0x1C0006AD0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0004610 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     WPP_IFR_SF_d @ 0x1C0004F10 (WPP_IFR_SF_d.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0007910 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C00079C0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ?MarkPassiveCallbacks@FxObject@@QEAAXW4FxObjectLockState@@@Z @ 0x1C000C6C4 (-MarkPassiveCallbacks@FxObject@@QEAAXW4FxObjectLockState@@@Z.c)
 *     memset @ 0x1C001C1C0 (memset.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0030430 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_dd @ 0x1C00305C0 (WPP_IFR_SF_dd.c)
 *     WPP_IFR_SF_qddd @ 0x1C00315F4 (WPP_IFR_SF_qddd.c)
 *     WPP_IFR_SF_qdd @ 0x1C003E848 (WPP_IFR_SF_qdd.c)
 *     WPP_IFR_SF_DDid @ 0x1C0058B9C (WPP_IFR_SF_DDid.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C005B41C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z @ 0x1C005C384 (-TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z.c)
 *     ?Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00C2C7C (-Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?Vf_VerifyLeakDetectionConsiderObject@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00C2CBC (-Vf_VerifyLeakDetectionConsiderObject@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

int __fastcall imp_WdfRegistryOpenKey(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFKEY__ *ParentKey,
        _UNICODE_STRING *KeyName,
        ACCESS_MASK DesiredAccess,
        _WDF_OBJECT_ATTRIBUTES *KeyAttributes,
        WDFKEY__ **Key)
{
  _WDF_OBJECT_ATTRIBUTES *v6; // r14
  _FX_DRIVER_GLOBALS *DriverName; // rsi
  int result; // eax
  unsigned __int16 v10; // r9
  unsigned __int16 Length; // dx
  int v12; // eax
  unsigned __int64 ContextSizeOverride; // rdx
  unsigned int v14; // ebp
  _POOL_TYPE v15; // edi
  unsigned __int64 v16; // r13
  signed int v17; // ebx
  __int64 v18; // r8
  void *Caller; // rax
  void *v20; // rax
  _FX_DRIVER_GLOBALS *v21; // rdx
  unsigned __int64 v22; // rbx
  _LIST_ENTRY *v23; // rdi
  __int64 v24; // rax
  FxObject *v25; // rbp
  void **v26; // r12
  __int64 v27; // rax
  KIRQL v28; // r12
  KIRQL v29; // dl
  _LIST_ENTRY *Blink; // rcx
  int v31; // edi
  WDFKEY__ *v32; // rbp
  NTSTATUS v33; // eax
  unsigned __int16 v34; // ax
  _QWORD *i; // rax
  void *ParentObject; // rdx
  unsigned __int8 CurrentIrql; // al
  unsigned __int16 v38; // r9
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *ContextTypeInfo; // rax
  unsigned __int64 v40; // rax
  unsigned __int64 v41; // rax
  bool v42; // cf
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *v43; // rax
  unsigned __int64 ContextSize; // r8
  unsigned __int16 v45; // ax
  char *v46; // rax
  void (__fastcall *EvtDestroyCallback)(void *); // rcx
  void (__fastcall *EvtCleanupCallback)(void *); // rcx
  const _GUID *Tag; // [rsp+20h] [rbp-C8h]
  void *m_Key; // [rsp+50h] [rbp-98h]
  FxRegKey *pParent; // [rsp+58h] [rbp-90h] BYREF
  void *PPObject; // [rsp+60h] [rbp-88h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-80h] BYREF
  void *retaddr; // [rsp+E8h] [rbp+0h]
  KIRQL v55; // [rsp+F0h] [rbp+8h]
  void *v56; // [rsp+100h] [rbp+18h] BYREF
  ACCESS_MASK v57; // [rsp+108h] [rbp+20h]

  v57 = DesiredAccess;
  v6 = KeyAttributes;
  DriverName = (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName;
  if ( ParentKey )
  {
    FxObjectHandleGetPtr(
      (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
      (unsigned __int64)ParentKey,
      0x1006u,
      (void **)&pParent);
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
          FxObjectHandleGetPtr(
            (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
            (unsigned __int64)ParentObject,
            0x1000u,
            &PPObject);
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
      return -1073741808;
    }
  }
  result = FxValidateObjectAttributes(DriverName, v6, 0);
  if ( result >= 0 )
  {
    Length = KeyName->Length;
    if ( (KeyName->Length & 1) != 0 )
    {
      v12 = Length;
      v38 = 13;
    }
    else
    {
      LOWORD(v12) = KeyName->MaximumLength;
      if ( (v12 & 1) != 0 )
      {
        v12 = (unsigned __int16)v12;
        v38 = 14;
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
              v40 = (ContextSizeOverride + 7) & 0xFFFFFFFFFFFFFFF8uLL;
              if ( v40 < ContextSizeOverride )
                goto LABEL_78;
              v41 = v40 + 176;
              v16 = -1LL;
              if ( v41 >= 0xB0 )
                v16 = v41;
              v17 = v41 < 0xB0 ? 0xC0000095 : 0;
              if ( v41 < 0xB0 )
                goto LABEL_77;
            }
            if ( DriverName->FxVerifierHandle )
            {
              if ( v16 + 48 >= v16 )
                v18 = v16 + 48;
              v42 = v16 + 48 < v16;
              v16 = v18;
              v17 = v42 ? 0xC0000095 : 0;
            }
            if ( v17 < 0 )
            {
LABEL_77:
              WPP_IFR_SF_DDid(DriverName, ContextSizeOverride, v18, v10, Tag, 0x80u, 0, ContextSizeOverride, v17);
              if ( v17 < 0 )
                goto LABEL_78;
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
                v43 = v6->ContextTypeInfo;
                if ( v43 )
                {
                  ContextSize = v6->ContextSizeOverride;
                  if ( !ContextSize )
                    ContextSize = v43->ContextSize;
                  memset((void *)(v22 + 176), 0, (ContextSize + 7) & 0xFFFFFFFFFFFFFFF8uLL);
                  v43 = v6->ContextTypeInfo;
                }
                *(_QWORD *)(v22 + 160) = v43;
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
              v25 = 0LL;
              v26 = (void **)(v22 + 112);
              *(_QWORD *)v22 = FxRegKey::`vftable';
              *(_QWORD *)(v22 + 112) = 0LL;
              *(_QWORD *)(v22 + 120) = DriverName;
              v56 = 0LL;
              if ( *(_WORD *)(v22 + 10) )
              {
                if ( !v6 )
                  goto LABEL_106;
                if ( v6->ExecutionLevel == WdfExecutionLevelPassive )
                {
                  FxObject::MarkPassiveCallbacks((FxObject *)v22, ObjectLock);
                  v25 = (FxObject *)v56;
                }
                v21 = (_FX_DRIVER_GLOBALS *)v6->ParentObject;
                if ( v21 )
                {
                  FxObjectHandleGetPtr(*(_FX_DRIVER_GLOBALS **)(v22 + 16), (unsigned __int64)v21, 0x1000u, &v56);
                  v25 = (FxObject *)v56;
                }
                else
                {
LABEL_106:
                  if ( !*(_QWORD *)(v22 + 64) )
                  {
                    v27 = *(_QWORD *)(v22 + 16);
                    if ( *(_QWORD *)(v27 + 72) != v22 )
                    {
                      v25 = *(FxObject **)(v27 + 72);
                      v56 = v25;
                    }
                  }
                }
                if ( !v25 )
                {
LABEL_40:
                  if ( v6 )
                  {
                    v45 = *(_WORD *)(v22 + 10);
                    if ( v45 )
                      v46 = (char *)(v22 + v45);
                    else
                      v46 = 0LL;
                    EvtDestroyCallback = v6->EvtDestroyCallback;
                    if ( EvtDestroyCallback )
                      *((_QWORD *)v46 + 3) = EvtDestroyCallback;
                    EvtCleanupCallback = v6->EvtCleanupCallback;
                    if ( EvtCleanupCallback )
                    {
                      *((_QWORD *)v46 + 2) = EvtCleanupCallback;
                      *(_WORD *)(v22 + 24) |= 0x400u;
                    }
                  }
                  *(_WORD *)(v22 + 24) |= 8u;
                  v32 = 0LL;
                  if ( *(_WORD *)(v22 + 10) )
                    v32 = (WDFKEY__ *)(v22 ^ 0xFFFFFFFFFFFFFFF8uLL);
                  if ( *(_BYTE *)(*(_QWORD *)(v22 + 16) + 316LL) )
                    FxObject::Vf_VerifyLeakDetectionConsiderObject((FxObject *)v22, v21);
                  ObjectAttributes.RootDirectory = m_Key;
                  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
                  ObjectAttributes.Length = 48;
                  ObjectAttributes.Attributes = 576;
                  ObjectAttributes.ObjectName = KeyName;
                  v33 = ZwOpenKey(v26, v57, &ObjectAttributes);
                  v31 = v33;
                  if ( v33 >= 0 )
                    *Key = v32;
                  else
                    WPP_IFR_SF_d(DriverName, 2u, 2u, 0xBu, WPP_FxRegistryAPI_cpp_Traceguids, v33);
                  if ( v31 >= 0 )
                    return v31;
                  goto LABEL_48;
                }
                v28 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v22 + 56));
                if ( *(_WORD *)(v22 + 26) == 1 )
                {
                  if ( *(_QWORD *)(v22 + 64) )
                  {
                    KeReleaseSpinLock((PKSPIN_LOCK)(v22 + 56), v28);
                    v31 = -1071644147;
                  }
                  else
                  {
                    v29 = KeAcquireSpinLockRaiseToDpc(&v25->m_SpinLock.m_Lock);
                    v55 = v29;
                    if ( v25->m_ObjectState == 1 )
                    {
                      Blink = v25->m_ChildListHead.Blink;
                      if ( Blink->Flink != &v25->m_ChildListHead )
                        __fastfail(3u);
                      v23->Flink = &v25->m_ChildListHead;
                      *(_QWORD *)(v22 + 80) = Blink;
                      Blink->Flink = v23;
                      v25->m_ChildListHead.Blink = v23;
                      if ( !*(_QWORD *)(v22 + 96) )
                        *(_QWORD *)(v22 + 96) = v25->m_DeviceBase;
                      KeReleaseSpinLock(&v25->m_SpinLock.m_Lock, v29);
                      v31 = 0;
                      *(_QWORD *)(v22 + 64) = v25;
                    }
                    else
                    {
                      FxObject::TraceDroppedEvent(v25, FxObjectDroppedEventAddChildObjectInternal);
                      KeReleaseSpinLock(&v25->m_SpinLock.m_Lock, v55);
                      v31 = -1073741738;
                    }
                    KeReleaseSpinLock((PKSPIN_LOCK)(v22 + 56), v28);
                    if ( v31 >= 0 )
                    {
                      v26 = (void **)(v22 + 112);
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
              v34 = *(_WORD *)(v22 + 10);
              if ( v34 )
              {
                for ( i = (_QWORD *)(v22 + v34); i; i = (_QWORD *)i[1] )
                {
                  i[3] = 0LL;
                  i[2] = 0LL;
                }
              }
              *(_WORD *)(v22 + 24) &= ~0x400u;
              (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v22 + 48LL))(v22);
              return v31;
            }
LABEL_78:
            WPP_IFR_SF_d(DriverName, 2u, 2u, 0xAu, WPP_FxRegistryAPI_cpp_Traceguids, -1073741670);
            return -1073741670;
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
          return -1073741811;
        }
        v12 = (unsigned __int16)v12;
        v38 = 15;
      }
    }
    WPP_IFR_SF_qdd(DriverName, 2u, 6u, v38, WPP_FxValidateFunctions_hpp_Traceguids_0, KeyName, v12, 0xC000000D);
    return -1073741811;
  }
  return result;
}
