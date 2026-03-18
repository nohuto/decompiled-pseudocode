/*
 * XREFs of VfAllocateContext @ 0x1C00C01FC
 * Callers:
 *     AddEventHooksWdfDeviceCreate @ 0x1C00BFA6C (AddEventHooksWdfDeviceCreate.c)
 *     AddEventHooksWdfIoQueueCreate @ 0x1C00BFE4C (AddEventHooksWdfIoQueueCreate.c)
 * Callees:
 *     WPP_IFR_SF_qL @ 0x1C0004E34 (WPP_IFR_SF_qL.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0007910 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C00079C0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ?FxCalculateObjectTotalSize@@YAJPEAU_FX_DRIVER_GLOBALS@@GGPEAU_WDF_OBJECT_ATTRIBUTES@@PEA_K@Z @ 0x1C00589DC (-FxCalculateObjectTotalSize@@YAJPEAU_FX_DRIVER_GLOBALS@@GGPEAU_WDF_OBJECT_ATTRIBUTES@@PEA_K@Z.c)
 */

__int64 __fastcall VfAllocateContext(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        void **ContextHeader)
{
  _FX_DRIVER_GLOBALS *DriverName; // rdi
  __int64 result; // rax
  unsigned int v7; // ebx
  _QWORD *v8; // rax
  void *retaddr; // [rsp+48h] [rbp+0h]
  unsigned __int64 size; // [rsp+50h] [rbp+8h] BYREF

  DriverName = (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName;
  result = FxValidateObjectAttributes((_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName, Attributes, 8);
  v7 = 0;
  if ( (int)result >= 0 )
  {
    if ( Attributes->ContextTypeInfo )
    {
      result = FxCalculateObjectTotalSize(DriverName, 0, 0, Attributes, &size);
      if ( (int)result < 0 )
        return result;
      v8 = FxPoolAllocator(
             DriverName,
             &DriverName->FxPoolFrameworks,
             ExDefaultNonPagedPoolType,
             size,
             DriverName->Tag,
             retaddr);
      if ( v8 )
        *ContextHeader = v8;
      else
        return (unsigned int)-1073741670;
    }
    else
    {
      v7 = -1073741773;
      WPP_IFR_SF_qL(DriverName, 3u, 0xBu, 0xBu, WPP_Verifier_cpp_Traceguids, Attributes, 0xC0000033);
    }
    return v7;
  }
  return result;
}
