/*
 * XREFs of ?FxContextHeaderInit@@YAXPEAUFxContextHeader@@PEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C000E0D4
 * Callers:
 *     ?FxObjectAndHandleHeaderInit@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAU_WDF_OBJECT_ATTRIBUTES@@W4FxObjectType@@@Z @ 0x1C000DCB4 (-FxObjectAndHandleHeaderInit@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAU_WDF_OBJECT_ATTRIBUTES@@W4F.c)
 *     ?FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C000DD0C (-FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     imp_WdfDriverOpenParametersRegistryKey @ 0x1C000DE30 (imp_WdfDriverOpenParametersRegistryKey.c)
 *     ?FxObjectAllocateContext@@YAJPEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@EPEAPEAX@Z @ 0x1C0058A20 (-FxObjectAllocateContext@@YAJPEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@EPEAPEAX@Z.c)
 *     VfAddContextToHandle @ 0x1C00C00A8 (VfAddContextToHandle.c)
 * Callees:
 *     memset @ 0x1C001C1C0 (memset.c)
 */

void __fastcall FxContextHeaderInit(FxContextHeader *Header, FxObject *Object, _WDF_OBJECT_ATTRIBUTES *Attributes)
{
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *ContextTypeInfo; // rax
  unsigned __int64 ContextSizeOverride; // r8

  memset(Header, 0, 0x30uLL);
  Header->Object = Object;
  if ( Attributes )
  {
    ContextTypeInfo = Attributes->ContextTypeInfo;
    if ( ContextTypeInfo )
    {
      ContextSizeOverride = Attributes->ContextSizeOverride;
      if ( !ContextSizeOverride )
        ContextSizeOverride = ContextTypeInfo->ContextSize;
      memset(Header->Context, 0, (ContextSizeOverride + 7) & 0xFFFFFFFFFFFFFFF8uLL);
      ContextTypeInfo = Attributes->ContextTypeInfo;
    }
    Header->ContextTypeInfo = ContextTypeInfo;
  }
}
