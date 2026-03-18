/*
 * XREFs of ?_Create@FxWorkItem@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_WORKITEM_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxObject@@PEAPEAUWDFWORKITEM__@@@Z @ 0x1C000CCF8
 * Callers:
 *     imp_WdfWorkItemCreate @ 0x1C000CC30 (imp_WdfWorkItemCreate.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0007910 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ?FxCalculateObjectTotalSize2@@YAJPEAU_FX_DRIVER_GLOBALS@@GG_KPEA_K@Z @ 0x1C000A950 (-FxCalculateObjectTotalSize2@@YAJPEAU_FX_DRIVER_GLOBALS@@GG_KPEA_K@Z.c)
 *     ??0FxWorkItem@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C000CF90 (--0FxWorkItem@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Initialize@FxWorkItem@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_WORKITEM_CONFIG@@PEAVFxObject@@PEAPEAUWDFWORKITEM__@@@Z @ 0x1C000DB8C (-Initialize@FxWorkItem@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_WORKITEM_CONFIG@@PEAVFxObject@.c)
 *     ?FxObjectAndHandleHeaderInit@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAU_WDF_OBJECT_ATTRIBUTES@@W4FxObjectType@@@Z @ 0x1C000DCB4 (-FxObjectAndHandleHeaderInit@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAU_WDF_OBJECT_ATTRIBUTES@@W4F.c)
 *     ?FxGetContextSize@@YA_KPEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C000E208 (-FxGetContextSize@@YA_KPEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     ?ClearEvtCallbacks@FxObject@@QEAAXXZ @ 0x1C005C030 (-ClearEvtCallbacks@FxObject@@QEAAXXZ.c)
 */

__int64 __fastcall FxWorkItem::_Create(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _WDF_WORKITEM_CONFIG *Config,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        FxObject *ParentObject,
        WDFWORKITEM__ **WorkItem)
{
  ULONG Tag; // ebp
  _POOL_TYPE v7; // esi
  unsigned __int64 ContextSize; // rax
  void *Caller; // rax
  _QWORD *v13; // rax
  FxWorkItem *v14; // rax
  FxWorkItem *v15; // rax
  FxWorkItem *v16; // rbx
  int v17; // edi
  unsigned __int64 Size[5]; // [rsp+30h] [rbp-28h] BYREF
  void *retaddr; // [rsp+58h] [rbp+0h]

  Tag = FxDriverGlobals->Tag;
  v7 = ExDefaultNonPagedPoolType;
  ContextSize = FxGetContextSize(Attributes);
  if ( (int)FxCalculateObjectTotalSize2(FxDriverGlobals, 0xD0uLL, 0, ContextSize, Size) >= 0
    && (FxDriverGlobals->FxPoolTrackingOn ? (Caller = retaddr) : (Caller = 0LL),
        (v13 = FxPoolAllocator(FxDriverGlobals, &FxDriverGlobals->FxPoolFrameworks, v7, Size[0], Tag, Caller)) != 0LL
     && (v14 = (FxWorkItem *)FxObjectAndHandleHeaderInit(FxDriverGlobals, v13, 0xD0u, Attributes, FxObjectTypeExternal)) != 0LL) )
  {
    FxWorkItem::FxWorkItem(v14, FxDriverGlobals);
    v16 = v15;
  }
  else
  {
    v16 = 0LL;
  }
  if ( !v16 )
    return 3221225626LL;
  v17 = FxWorkItem::Initialize(v16, Attributes, Config, ParentObject, WorkItem);
  if ( v17 < 0 )
  {
    FxObject::ClearEvtCallbacks(v16);
    v16->DeleteObject(v16);
  }
  return (unsigned int)v17;
}
