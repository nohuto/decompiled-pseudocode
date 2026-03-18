/*
 * XREFs of ?DxgkFreeMemoryTracker@@YAXQEAXPEAUDXG_DRIVER_MEMORY_TRACKER@@@Z @ 0x1C003E21C
 * Callers:
 *     DxgkFreePagesFromMdlCB @ 0x1C003E9C0 (DxgkFreePagesFromMdlCB.c)
 *     DxgkUnmapMdlFromIoMmuCB @ 0x1C003F000 (DxgkUnmapMdlFromIoMmuCB.c)
 * Callees:
 *     DpiRemoveMemoryTracker @ 0x1C00509C8 (DpiRemoveMemoryTracker.c)
 */

void __fastcall DxgkFreeMemoryTracker(void *const a1, struct DXG_DRIVER_MEMORY_TRACKER *a2)
{
  DpiRemoveMemoryTracker(a1);
  if ( a2 )
    ExFreePoolWithTag(a2, 0);
}
