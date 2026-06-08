/*
 * XREFs of ?FxStubDriverUnloadCommon@@YAXXZ @ 0x1C0007B74
 * Callers:
 *     FxDriverEntryWorker @ 0x1C00033D4 (FxDriverEntryWorker.c)
 *     FxStubDriverUnload @ 0x1C0007BB0 (FxStubDriverUnload.c)
 * Callees:
 *     ?FxStubUnbindClasses@@YAXPEAU_WDF_BIND_INFO@@@Z @ 0x1C0007BE4 (-FxStubUnbindClasses@@YAXPEAU_WDF_BIND_INFO@@@Z.c)
 */

void __fastcall FxStubDriverUnloadCommon(struct _WDF_BIND_INFO *a1)
{
  FxStubUnbindClasses(a1);
  WdfVersionUnbind(&DestinationString, &WdfBindInfo, WdfDriverGlobals);
}
