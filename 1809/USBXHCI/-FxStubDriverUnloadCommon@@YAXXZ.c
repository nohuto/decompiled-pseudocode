/*
 * XREFs of ?FxStubDriverUnloadCommon@@YAXXZ @ 0x1C0005EA0
 * Callers:
 *     FxDriverEntryWorker @ 0x1C0005F14 (FxDriverEntryWorker.c)
 *     FxStubDriverUnload @ 0x1C0006010 (FxStubDriverUnload.c)
 * Callees:
 *     ?FxStubUnbindClasses@@YAXPEAU_WDF_BIND_INFO@@@Z @ 0x1C0006100 (-FxStubUnbindClasses@@YAXPEAU_WDF_BIND_INFO@@@Z.c)
 */

void __fastcall FxStubDriverUnloadCommon(struct _WDF_BIND_INFO *a1)
{
  FxStubUnbindClasses(a1);
  WdfVersionUnbind(&WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink, &WdfBindInfo, WPP_MAIN_CB.Dpc.ProcessorHistory);
}
