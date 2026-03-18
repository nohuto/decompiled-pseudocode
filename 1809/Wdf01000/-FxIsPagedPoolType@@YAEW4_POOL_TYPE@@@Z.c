/*
 * XREFs of ?FxIsPagedPoolType@@YAEW4_POOL_TYPE@@@Z @ 0x1C005ADBC
 * Callers:
 *     ??_GFxMemoryBuffer@@MEAAPEAXI@Z @ 0x1C0002C40 (--_GFxMemoryBuffer@@MEAAPEAXI@Z.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C00054C8 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??_EFxFileObject@@UEAAPEAXI@Z @ 0x1C0005520 (--_EFxFileObject@@UEAAPEAXI@Z.c)
 *     ??_GFxIoContext@@UEAAPEAXI@Z @ 0x1C00058C0 (--_GFxIoContext@@UEAAPEAXI@Z.c)
 *     ??_GFxRegKey@@UEAAPEAXI@Z @ 0x1C0006F40 (--_GFxRegKey@@UEAAPEAXI@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0007910 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ??_GFxRequest@@UEAAPEAXI@Z @ 0x1C000A240 (--_GFxRequest@@UEAAPEAXI@Z.c)
 *     imp_WdfLookasideListCreate @ 0x1C004E470 (imp_WdfLookasideListCreate.c)
 *     ?_Create@FxMemoryObject@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@W4_POOL_TYPE@@K_KPEAPEAV1@@Z @ 0x1C00551BC (-_Create@FxMemoryObject@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@W4_POOL_TYPE@@K_.c)
 *     ?_Create@FxMemoryBufferFromPool@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@W4_POOL_TYPE@@K_KPEAPEAVFxMemoryObject@@@Z @ 0x1C0058000 (-_Create@FxMemoryBufferFromPool@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@W4_POOL_.c)
 * Callees:
 *     <none>
 */

bool __fastcall FxIsPagedPoolType(_POOL_TYPE Type)
{
  unsigned __int32 v1; // ecx

  v1 = (Type & 0xFFFFFEFF) - 1;
  return !v1 || v1 == 4;
}
