/*
 * XREFs of imp_WdfRegistryQueryMemory @ 0x1C00608D0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qL @ 0x1C0003F1C (WPP_IFR_SF_qL.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C000459C (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C0004F20 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C00055A0 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C000B6A0 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C000BA00 (-FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C000BB38 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C000BDA0 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     memmove @ 0x1C001B400 (memmove.c)
 *     ?_Create@FxMemoryObject@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@W4_POOL_TYPE@@K_KPEAPEAV1@@Z @ 0x1C0054BDC (-_Create@FxMemoryObject@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@W4_POOL_TYPE@@K_.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C005B850 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?ClearEvtCallbacks@FxObject@@QEAAXXZ @ 0x1C005C490 (-ClearEvtCallbacks@FxObject@@QEAAXXZ.c)
 *     WPP_IFR_SF_qZd @ 0x1C005FC90 (WPP_IFR_SF_qZd.c)
 *     ?_QueryValue@FxRegKey@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEBU_UNICODE_STRING@@K1PEAK3@Z @ 0x1C0061EE0 (-_QueryValue@FxRegKey@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEBU_UNICODE_STRING@@K1PEAK3@Z.c)
 */

int __fastcall imp_WdfRegistryQueryMemory(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFKEY__ *Key,
        const _UNICODE_STRING *ValueName,
        _POOL_TYPE PoolType,
        _WDF_OBJECT_ATTRIBUTES *MemoryAttributes,
        WDFMEMORY__ **Memory,
        unsigned int *ValueType)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  void **v11; // r14
  int result; // eax
  void *v13; // r9
  unsigned int v14; // r8d
  unsigned int v15; // ebp
  FX_POOL_TRACKER *v16; // r15
  int v17; // edi
  signed int v18; // eax
  unsigned int v19; // ebp
  FxMemoryObject *v20; // rbx
  void *v21; // rax
  unsigned __int16 v22; // r9
  const _GUID *Value; // [rsp+20h] [rbp-48h]
  void *retaddr; // [rsp+68h] [rbp+0h]
  FxMemoryObject *pObject; // [rsp+70h] [rbp+8h] BYREF
  FxRegKey *pKey; // [rsp+80h] [rbp+18h] BYREF

  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
    (unsigned __int64)Key,
    0x1006u,
    (void **)&pKey);
  m_Globals = pKey->FxPagedObject::FxObject::m_Globals;
  if ( !ValueName )
    FxVerifierNullBugCheck(m_Globals, (ULONG_PTR)retaddr);
  v11 = (void **)Memory;
  if ( !Memory )
    FxVerifierNullBugCheck(m_Globals, (ULONG_PTR)retaddr);
  *Memory = 0LL;
  result = FxVerifierCheckIrqlLevel(m_Globals, 0);
  if ( result >= 0 )
  {
    if ( m_Globals->FxVerifierOn && WPP_GLOBAL_WDF_Control.Dpc.DeferredRoutine )
      WPP_GLOBAL_WDF_Control.Dpc.DeferredRoutine((_KDPC *)(unsigned int)PoolType, retaddr, (void *)m_Globals->Tag, v13);
    result = FxValidateObjectAttributes(m_Globals, MemoryAttributes, 0);
    if ( result >= 0 )
    {
      result = FxValidateUnicodeString(m_Globals, ValueName);
      if ( result >= 0 )
      {
        result = FxRegKey::_QueryValue(pKey->m_Globals, pKey->m_Key, ValueName, 0, 0LL, (unsigned int *)&pObject, 0LL);
        if ( (int)(result + 0x80000000) < 0 || result == -2147483643 )
        {
          v15 = (unsigned int)pObject;
          if ( !(_DWORD)pObject )
          {
            WPP_IFR_SF_qZd(m_Globals, 0, v14, 0xFu, Value, Key, ValueName);
            return -1073741687;
          }
          v16 = (FX_POOL_TRACKER *)FxPoolAllocator(
                                     m_Globals,
                                     &m_Globals->FxPoolFrameworks,
                                     1u,
                                     (unsigned int)pObject,
                                     m_Globals->Tag,
                                     retaddr);
          if ( !v16 )
          {
            v17 = -1073741670;
            WPP_IFR_SF_qL(m_Globals, 2u, 2u, 0x10u, WPP_FxRegistryAPI_cpp_Traceguids, Key, 0xC000009A);
            return v17;
          }
          v18 = FxRegKey::_QueryValue(
                  pKey->m_Globals,
                  pKey->m_Key,
                  ValueName,
                  v15,
                  v16,
                  (unsigned int *)&pObject,
                  ValueType);
          v17 = v18;
          if ( v18 < 0 )
          {
            v22 = 18;
          }
          else
          {
            v19 = (unsigned int)pObject;
            v18 = FxMemoryObject::_Create(
                    m_Globals,
                    MemoryAttributes,
                    PoolType,
                    m_Globals->Tag,
                    (unsigned int)pObject,
                    &pObject);
            v17 = v18;
            if ( v18 >= 0 )
            {
              v20 = pObject;
              v17 = FxObject::Commit(pObject, (_FX_DRIVER_GLOBALS *)MemoryAttributes, v11, 0LL, 1u);
              if ( v17 < 0 )
              {
                FxObject::ClearEvtCallbacks(v20);
                ((void (*)(void))v20->DeleteObject)();
              }
              else
              {
                v21 = (void *)v20->GetBuffer(&v20->IFxMemory);
                memmove(v21, v16, v19);
              }
              goto LABEL_25;
            }
            v22 = 17;
          }
          WPP_IFR_SF_qL(m_Globals, 2u, 2u, v22, WPP_FxRegistryAPI_cpp_Traceguids, Key, v18);
LABEL_25:
          FxPoolFree(v16);
          return v17;
        }
      }
    }
  }
  return result;
}
