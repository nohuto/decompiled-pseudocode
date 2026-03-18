/*
 * XREFs of ??2FxDeviceDescriptionEntry@@SAPEAX_KPEAU_FX_DRIVER_GLOBALS@@0@Z @ 0x1C003C8B4
 * Callers:
 *     ?Add@FxChildList@@QEAAJPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@PEAU_WDF_CHILD_ADDRESS_DESCRIPTION_HEADER@@PEAK@Z @ 0x1C003C918 (-Add@FxChildList@@QEAAJPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@PEAU_WDF_CHILD_ADDRESS_.c)
 *     ?Clone@FxDeviceDescriptionEntry@@QEAAPEAU1@PEAU_LIST_ENTRY@@@Z @ 0x1C003CB30 (-Clone@FxDeviceDescriptionEntry@@QEAAPEAU1@PEAU_LIST_ENTRY@@@Z.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0007910 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     memset @ 0x1C001C1C0 (memset.c)
 */

_QWORD *__fastcall FxDeviceDescriptionEntry::operator new(
        unsigned __int64 FxDriverGlobals,
        _FX_DRIVER_GLOBALS *TotalDescriptionSize,
        unsigned __int64 AllocatorBlock)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  void *Caller; // [rsp+38h] [rbp+0h]

  v4 = FxPoolAllocator(
         TotalDescriptionSize,
         &TotalDescriptionSize->FxPoolFrameworks,
         ExDefaultNonPagedPoolType,
         AllocatorBlock,
         TotalDescriptionSize->Tag,
         Caller);
  v5 = v4;
  if ( v4 )
    memset(v4, 0, AllocatorBlock);
  return v5;
}
