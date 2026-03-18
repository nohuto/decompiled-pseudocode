/*
 * XREFs of ?FxStubDriverUnloadCommon@@YAXXZ @ 0x1C0007C3C
 * Callers:
 *     FxDriverEntryWorker @ 0x1C0007CB4 (FxDriverEntryWorker.c)
 *     FxStubDriverUnload @ 0x1C0007DB0 (FxStubDriverUnload.c)
 * Callees:
 *     ?FxStubUnbindClasses@@YAXPEAU_WDF_BIND_INFO@@@Z @ 0x1C0007EA0 (-FxStubUnbindClasses@@YAXPEAU_WDF_BIND_INFO@@@Z.c)
 */

void __fastcall FxStubDriverUnloadCommon(struct _WDF_BIND_INFO *a1)
{
  FxStubUnbindClasses(a1);
  WdfVersionUnbind(&WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink, &WdfBindInfo, WPP_MAIN_CB.Dpc.ProcessorHistory);
}
