/*
 * XREFs of ?_Create@FxMemoryBuffer@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K_KW4_POOL_TYPE@@PEAPEAVFxMemoryObject@@@Z @ 0x1C0057EC0
 * Callers:
 *     ?_Create@FxMemoryObject@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@W4_POOL_TYPE@@K_KPEAPEAV1@@Z @ 0x1C00551BC (-_Create@FxMemoryObject@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@W4_POOL_TYPE@@K_.c)
 * Callees:
 *     ?FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C000DD0C (-FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     ??0FxMemoryObject@@IEAA@PEAU_FX_DRIVER_GLOBALS@@G_K@Z @ 0x1C0054ED8 (--0FxMemoryObject@@IEAA@PEAU_FX_DRIVER_GLOBALS@@G_K@Z.c)
 */

__int64 __fastcall FxMemoryBuffer::_Create(
        _FX_DRIVER_GLOBALS *DriverGlobals,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        ULONG PoolTag,
        unsigned __int64 BufferSize,
        _POOL_TYPE PoolType,
        FxMemoryObject **Object)
{
  FxMemoryObject *v8; // rbx

  v8 = (FxMemoryObject *)FxObjectHandleAlloc(
                           DriverGlobals,
                           PoolType,
                           0x78uLL,
                           PoolTag,
                           Attributes,
                           BufferSize,
                           FxObjectTypeExternal);
  if ( v8 )
  {
    FxMemoryObject::FxMemoryObject(v8, DriverGlobals, ((BufferSize + 15) & 0xFFF0) + 128, BufferSize);
    v8->FxObject::__vftable = (FxMemoryObject_vtbl *)FxMemoryBuffer::`vftable'{for `FxObject'};
    v8->IFxMemory::__vftable = (IFxMemory_vtbl *)FxMemoryBufferFromLookaside::`vftable'{for `IFxMemory'};
  }
  else
  {
    v8 = 0LL;
  }
  if ( !v8 )
    return 3221225626LL;
  *Object = v8;
  return 0LL;
}
