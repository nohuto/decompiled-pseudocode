/*
 * XREFs of ?DxgkFreeMemoryTracker@@YAXQEAXPEAUDXG_DRIVER_MEMORY_TRACKER@@@Z @ 0x1C0037DBC
 * Callers:
 *     DxgkFreePagesFromMdlCB @ 0x1C0038560 (DxgkFreePagesFromMdlCB.c)
 *     DxgkUnmapMdlFromIoMmuCB @ 0x1C0038BA0 (DxgkUnmapMdlFromIoMmuCB.c)
 * Callees:
 *     DpiRemoveMemoryTracker @ 0x1C004966C (DpiRemoveMemoryTracker.c)
 */

void __fastcall DxgkFreeMemoryTracker(void *const a1, struct DXG_DRIVER_MEMORY_TRACKER *a2)
{
  DpiRemoveMemoryTracker(a1);
  if ( a2 )
    ExFreePoolWithTag(a2, 0);
}
