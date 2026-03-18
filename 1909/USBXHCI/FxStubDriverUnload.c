/*
 * XREFs of FxStubDriverUnload @ 0x1C0007DB0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxStubDriverUnloadCommon@@YAXXZ @ 0x1C0007C3C (-FxStubDriverUnloadCommon@@YAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 */

void __fastcall FxStubDriverUnload(struct _WDF_BIND_INFO *a1)
{
  if ( WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink
    && (__int64 (__fastcall *)())WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink != FxStubDriverUnload )
  {
    ((void (*)(void))WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink)();
  }
  FxStubDriverUnloadCommon(a1);
}
