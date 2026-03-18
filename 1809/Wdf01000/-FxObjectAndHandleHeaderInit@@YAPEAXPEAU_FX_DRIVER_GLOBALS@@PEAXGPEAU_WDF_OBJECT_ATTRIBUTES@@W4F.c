/*
 * XREFs of ?FxObjectAndHandleHeaderInit@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAU_WDF_OBJECT_ATTRIBUTES@@W4FxObjectType@@@Z @ 0x1C000DCB4
 * Callers:
 *     ?_Create@FxWorkItem@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_WORKITEM_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxObject@@PEAPEAUWDFWORKITEM__@@@Z @ 0x1C000CCF8 (-_Create@FxWorkItem@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_WORKITEM_CONFIG@@PEAU_WDF_OBJECT_ATTRIB.c)
 *     ?AllocateRequestMemory@FxDevice@@QEAAPEAXPEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C0053544 (-AllocateRequestMemory@FxDevice@@QEAAPEAXPEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     ?Allocate@FxNPagedLookasideList@@UEAAJPEAPEAVFxMemoryObject@@@Z @ 0x1C00569C0 (-Allocate@FxNPagedLookasideList@@UEAAJPEAPEAVFxMemoryObject@@@Z.c)
 *     ?Allocate@FxNPagedLookasideListFromPool@@UEAAJPEAPEAVFxMemoryObject@@@Z @ 0x1C0056A80 (-Allocate@FxNPagedLookasideListFromPool@@UEAAJPEAPEAVFxMemoryObject@@@Z.c)
 *     ?Allocate@FxPagedLookasideListFromPool@@UEAAJPEAPEAVFxMemoryObject@@@Z @ 0x1C0056E50 (-Allocate@FxPagedLookasideListFromPool@@UEAAJPEAPEAVFxMemoryObject@@@Z.c)
 * Callees:
 *     ?FxContextHeaderInit@@YAXPEAUFxContextHeader@@PEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C000E0D4 (-FxContextHeaderInit@@YAXPEAUFxContextHeader@@PEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     memset @ 0x1C001C1C0 (memset.c)
 */

FxObject *__fastcall FxObjectAndHandleHeaderInit(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        FxObject *AllocationStart,
        unsigned __int16 ObjectSize,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        FxObjectType ObjectType)
{
  FxObject *v7; // rbx

  v7 = AllocationStart;
  if ( FxDriverGlobals->FxVerifierHandle )
  {
    memset(AllocationStart, 0, 0x30uLL);
    LODWORD(v7->m_ChildListHead.Flink) = 1146058822;
    v7 = (FxObject *)((char *)v7 + 48);
  }
  if ( ObjectType == FxObjectTypeExternal )
    FxContextHeaderInit((FxContextHeader *)((char *)v7 + ObjectSize), v7, Attributes);
  return v7;
}
