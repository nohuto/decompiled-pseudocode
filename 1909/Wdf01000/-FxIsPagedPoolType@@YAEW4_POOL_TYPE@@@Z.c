/*
 * XREFs of ?FxIsPagedPoolType@@YAEW4_POOL_TYPE@@@Z @ 0x1C005B1E8
 * Callers:
 *     ??_EFxFileObject@@UEAAPEAXI@Z @ 0x1C0002F90 (--_EFxFileObject@@UEAAPEAXI@Z.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C000459C (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??_GFxMemoryBuffer@@MEAAPEAXI@Z @ 0x1C0004B00 (--_GFxMemoryBuffer@@MEAAPEAXI@Z.c)
 *     ??_GFxIoContext@@UEAAPEAXI@Z @ 0x1C0004E70 (--_GFxIoContext@@UEAAPEAXI@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C00055A0 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ??_GFxRegKey@@UEAAPEAXI@Z @ 0x1C0005EA0 (--_GFxRegKey@@UEAAPEAXI@Z.c)
 *     ??_GFxRequest@@UEAAPEAXI@Z @ 0x1C0009920 (--_GFxRequest@@UEAAPEAXI@Z.c)
 *     imp_WdfLookasideListCreate @ 0x1C004DD60 (imp_WdfLookasideListCreate.c)
 *     ?_Create@FxMemoryObject@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@W4_POOL_TYPE@@K_KPEAPEAV1@@Z @ 0x1C0054BDC (-_Create@FxMemoryObject@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@W4_POOL_TYPE@@K_.c)
 *     ?_Create@FxMemoryBufferFromPool@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@W4_POOL_TYPE@@K_KPEAPEAVFxMemoryObject@@@Z @ 0x1C0057A50 (-_Create@FxMemoryBufferFromPool@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@W4_POOL_.c)
 * Callees:
 *     <none>
 */

bool __fastcall FxIsPagedPoolType(_POOL_TYPE Type)
{
  unsigned __int32 v1; // ecx

  v1 = (Type & 0xFFFFFEFF) - 1;
  return !v1 || v1 == 4;
}
