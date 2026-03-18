/*
 * XREFs of ?DxgkFreeMemoryTracker@@YAXQEAXPEAUDXG_DRIVER_MEMORY_TRACKER@@@Z @ 0x1C003E37C
 * Callers:
 *     DxgkFreePagesFromMdlCB @ 0x1C003EB20 (DxgkFreePagesFromMdlCB.c)
 *     DxgkUnmapMdlFromIoMmuCB @ 0x1C003F160 (DxgkUnmapMdlFromIoMmuCB.c)
 * Callees:
 *     DpiRemoveMemoryTracker @ 0x1C0050A08 (DpiRemoveMemoryTracker.c)
 */

void __fastcall DxgkFreeMemoryTracker(void *const a1, struct DXG_DRIVER_MEMORY_TRACKER *a2)
{
  DpiRemoveMemoryTracker(a1);
  if ( a2 )
    ExFreePoolWithTag(a2, 0);
}
