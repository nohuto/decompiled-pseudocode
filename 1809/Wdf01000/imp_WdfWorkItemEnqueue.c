/*
 * XREFs of imp_WdfWorkItemEnqueue @ 0x1C000D9B0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0004610 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?Enqueue@FxWorkItem@@QEAAXXZ @ 0x1C000DAB8 (-Enqueue@FxWorkItem@@QEAAXXZ.c)
 */

void __fastcall imp_WdfWorkItemEnqueue(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFWORKITEM__ *WorkItem)
{
  FxWorkItem *pFxWorkItem; // [rsp+30h] [rbp+8h] BYREF

  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
    (unsigned __int64)WorkItem,
    0x1025u,
    (void **)&pFxWorkItem);
  FxWorkItem::Enqueue(pFxWorkItem);
}
