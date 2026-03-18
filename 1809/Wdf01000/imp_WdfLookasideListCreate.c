/*
 * XREFs of imp_WdfLookasideListCreate @ 0x1C004E470
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0004610 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     WPP_IFR_SF_d @ 0x1C0004F10 (WPP_IFR_SF_d.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C00079C0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C000B6F4 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C000DD0C (-FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C000E230 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxValidateObjectAttributesForParentHandle@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C000E4E4 (-FxValidateObjectAttributesForParentHandle@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTE.c)
 *     WPP_IFR_SF_qqqqd @ 0x1C004E2D8 (WPP_IFR_SF_qqqqd.c)
 *     ?_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C004F78C (-_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     ??0FxPagedLookasideListFromPool@@QEAA@PEAU_FX_DRIVER_GLOBALS@@KPEAVFxDeviceBase@@1@Z @ 0x1C0056CFC (--0FxPagedLookasideListFromPool@@QEAA@PEAU_FX_DRIVER_GLOBALS@@KPEAVFxDeviceBase@@1@Z.c)
 *     ??0FxLookasideList@@QEAA@PEAU_FX_DRIVER_GLOBALS@@GK@Z @ 0x1C0058608 (--0FxLookasideList@@QEAA@PEAU_FX_DRIVER_GLOBALS@@GK@Z.c)
 *     ?FxIsPagedPoolType@@YAEW4_POOL_TYPE@@@Z @ 0x1C005ADBC (-FxIsPagedPoolType@@YAEW4_POOL_TYPE@@@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C005B41C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?ClearEvtCallbacks@FxObject@@QEAAXXZ @ 0x1C005C030 (-ClearEvtCallbacks@FxObject@@QEAAXXZ.c)
 */

__int64 __fastcall imp_WdfLookasideListCreate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        _WDF_OBJECT_ATTRIBUTES *LookasideAttributes,
        unsigned __int64 BufferSize,
        _POOL_TYPE PoolType,
        _WDF_OBJECT_ATTRIBUTES *MemoryAttributes,
        unsigned int PoolTag,
        WDFLOOKASIDE__ **PLookaside)
{
  _FX_DRIVER_GLOBALS *DriverName; // rbx
  int v11; // eax
  _WDF_OBJECT_ATTRIBUTES *v12; // r15
  _FX_DRIVER_GLOBALS *v13; // rcx
  void *ParentObject; // rdx
  WDFLOOKASIDE__ **v15; // r12
  __int64 result; // rax
  void *v17; // r9
  unsigned int Tag; // ebp
  FxLookasideList *v19; // rax
  FxObject *v20; // rdi
  void (__fastcall *const *v21)(); // rax
  FxLookasideList *v22; // rax
  FxDeviceBase *v23; // r14
  FxDeviceBase *v24; // rax
  FxDeviceBase *v25; // rdi
  const void *_a4; // rdi
  bool v27; // zf
  unsigned __int16 m_ObjectSize; // ax
  const void *v29; // r14
  FxPagedLookasideListFromPool *v30; // rax
  FxObject *v31; // rax
  int v32; // ebx
  void *retaddr; // [rsp+78h] [rbp+0h]
  FxObject *pParent; // [rsp+80h] [rbp+8h] BYREF

  DriverName = (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName;
  pParent = 0LL;
  v11 = FxValidateObjectAttributesForParentHandle(
          (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
          LookasideAttributes,
          0);
  v12 = MemoryAttributes;
  v13 = DriverName;
  if ( v11 < 0 )
  {
    if ( (int)FxValidateObjectAttributesForParentHandle(DriverName, MemoryAttributes, 0) < 0 )
      goto LABEL_6;
    ParentObject = v12->ParentObject;
    v13 = DriverName;
  }
  else
  {
    ParentObject = LookasideAttributes->ParentObject;
  }
  FxObjectHandleGetPtr(v13, (unsigned __int64)ParentObject, 0x1000u, (void **)&pParent);
  DriverName = pParent->m_Globals;
LABEL_6:
  v15 = PLookaside;
  if ( !PLookaside )
    FxVerifierNullBugCheck(DriverName, retaddr);
  PLookaside = 0LL;
  *v15 = 0LL;
  if ( !BufferSize )
  {
    WPP_IFR_SF_d(DriverName, 2u, 0x12u, 0xAu, WPP_FxLookasideListAPI_cpp_Traceguids, -1073741811);
    return 3221225485LL;
  }
  result = FxValidateObjectAttributes(DriverName, LookasideAttributes, 0);
  if ( (int)result >= 0 )
  {
    result = FxValidateObjectAttributes(DriverName, v12, 0);
    if ( (int)result >= 0 )
    {
      Tag = PoolTag;
      if ( !PoolTag )
        Tag = DriverName->Tag;
      if ( DriverName->FxVerifierOn && WPP_GLOBAL_WDF_Control.Dpc.DeferredRoutine )
        WPP_GLOBAL_WDF_Control.Dpc.DeferredRoutine((_KDPC *)(unsigned int)PoolType, retaddr, (void *)Tag, v17);
      if ( FxIsPagedPoolType(PoolType) )
      {
        result = FxVerifierCheckIrqlLevel(DriverName, 0);
        if ( (int)result < 0 )
          return result;
        v23 = FxDeviceBase::_SearchForDevice(DriverName, LookasideAttributes);
        v24 = FxDeviceBase::_SearchForDevice(DriverName, v12);
        v25 = v24;
        if ( v23 && v24 && v23 != v24 )
        {
          _a4 = (const void *)((unsigned __int64)v24 ^ 0xFFFFFFFFFFFFFFF8uLL);
          v27 = v24->m_ObjectSize == 0;
          m_ObjectSize = v23->m_ObjectSize;
          if ( v27 )
            _a4 = 0LL;
          v29 = (const void *)((unsigned __int64)v23 ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !m_ObjectSize )
            v29 = 0LL;
          WPP_IFR_SF_qqqqd(
            DriverName,
            0,
            0x12u,
            0xBu,
            WPP_FxLookasideListAPI_cpp_Traceguids,
            v29,
            LookasideAttributes->ParentObject,
            _a4,
            v12->ParentObject,
            -1073741811);
          return 3221225485LL;
        }
        v30 = (FxPagedLookasideListFromPool *)FxObjectHandleAlloc(
                                                DriverName,
                                                ExDefaultNonPagedPoolType,
                                                0x200uLL,
                                                0,
                                                LookasideAttributes,
                                                0,
                                                FxObjectTypeExternal);
        if ( v30 )
        {
          FxPagedLookasideListFromPool::FxPagedLookasideListFromPool(v30, DriverName, Tag, v23, v25);
          v20 = v31;
          goto LABEL_37;
        }
      }
      else if ( BufferSize >= 0x1000 )
      {
        v22 = (FxLookasideList *)FxObjectHandleAlloc(
                                   DriverName,
                                   ExDefaultNonPagedPoolType,
                                   0x1C0uLL,
                                   0,
                                   LookasideAttributes,
                                   0,
                                   FxObjectTypeExternal);
        v20 = v22;
        if ( v22 )
        {
          FxLookasideList::FxLookasideList(v22, DriverName, 0x1C0u, Tag);
          v21 = FxNPagedLookasideListFromPool::`vftable';
          goto LABEL_22;
        }
      }
      else
      {
        v19 = (FxLookasideList *)FxObjectHandleAlloc(
                                   DriverName,
                                   ExDefaultNonPagedPoolType,
                                   0x140uLL,
                                   0,
                                   LookasideAttributes,
                                   0,
                                   FxObjectTypeExternal);
        v20 = v19;
        if ( v19 )
        {
          FxLookasideList::FxLookasideList(v19, DriverName, 0x140u, Tag);
          v21 = FxNPagedLookasideList::`vftable';
LABEL_22:
          v20->__vftable = (FxObject_vtbl *)v21;
          goto LABEL_37;
        }
      }
      v20 = 0LL;
LABEL_37:
      if ( v20 )
      {
        v32 = ((__int64 (__fastcall *)(FxObject *, unsigned __int64, _WDF_OBJECT_ATTRIBUTES *))v20->__vftable[1].SelfDestruct)(
                v20,
                BufferSize,
                v12);
        if ( v32 < 0
          || (v32 = FxObject::Commit(v20, (_FX_DRIVER_GLOBALS *)LookasideAttributes, (void **)&PLookaside, 0LL, 1u),
              v32 < 0) )
        {
          FxObject::ClearEvtCallbacks(v20);
          v20->DeleteObject(v20);
        }
        else
        {
          *v15 = (WDFLOOKASIDE__ *)PLookaside;
        }
        return (unsigned int)v32;
      }
      else
      {
        return 3221225626LL;
      }
    }
  }
  return result;
}
