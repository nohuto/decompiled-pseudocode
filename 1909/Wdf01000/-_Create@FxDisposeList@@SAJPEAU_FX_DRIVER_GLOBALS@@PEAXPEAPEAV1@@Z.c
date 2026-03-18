/*
 * XREFs of ?_Create@FxDisposeList@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEAPEAV1@@Z @ 0x1C0056FCC
 * Callers:
 *     imp_WdfDeviceMiniportCreate @ 0x1C004E2D0 (imp_WdfDeviceMiniportCreate.c)
 *     ?_Create@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAV1@@Z @ 0x1C0054614 (-_Create@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     ?Initialize@FxDriver@@QEAAJPEBU_UNICODE_STRING@@PEAU_WDF_DRIVER_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C005565C (-Initialize@FxDriver@@QEAAJPEBU_UNICODE_STRING@@PEAU_WDF_DRIVER_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUT.c)
 * Callees:
 *     ?FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C0017908 (-FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     ??0FxDisposeList@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0056CD4 (--0FxDisposeList@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Initialize@FxDisposeList@@QEAAJPEAX@Z @ 0x1C0056EA4 (-Initialize@FxDisposeList@@QEAAJPEAX@Z.c)
 *     ?ClearEvtCallbacks@FxObject@@QEAAXXZ @ 0x1C005C490 (-ClearEvtCallbacks@FxObject@@QEAAXXZ.c)
 */

__int64 __fastcall FxDisposeList::_Create(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _DEVICE_OBJECT *WdmObject,
        FxDisposeList **pObject)
{
  FxDisposeList *v6; // rax
  FxDisposeList *v7; // rax
  FxDisposeList *v8; // rbx
  int v10; // edi

  *pObject = 0LL;
  v6 = (FxDisposeList *)FxObjectHandleAlloc(
                          FxDriverGlobals,
                          ExDefaultNonPagedPoolType,
                          0xA0uLL,
                          0,
                          0LL,
                          0,
                          FxObjectTypeInternal);
  if ( v6 )
  {
    FxDisposeList::FxDisposeList(v6, FxDriverGlobals);
    v8 = v7;
  }
  else
  {
    v8 = 0LL;
  }
  if ( !v8 )
    return 3221225626LL;
  v10 = FxDisposeList::Initialize(v8, WdmObject);
  if ( v10 < 0 )
  {
    FxObject::ClearEvtCallbacks(v8);
    v8->DeleteObject(v8);
  }
  else
  {
    *pObject = v8;
  }
  return (unsigned int)v10;
}
