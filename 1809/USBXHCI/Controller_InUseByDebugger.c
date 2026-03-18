/*
 * XREFs of Controller_InUseByDebugger @ 0x1C000C740
 * Callers:
 *     Controller_LPEEnterExitCallback @ 0x1C000CF80 (Controller_LPEEnterExitCallback.c)
 *     Controller_WdfEvtDeviceD0Entry @ 0x1C0010120 (Controller_WdfEvtDeviceD0Entry.c)
 *     Controller_WdfEvtDeviceD0Exit @ 0x1C0010910 (Controller_WdfEvtDeviceD0Exit.c)
 *     Controller_WdfEvtDeviceSelfManagedIoInit @ 0x1C0010F70 (Controller_WdfEvtDeviceSelfManagedIoInit.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0006C60 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall Controller_InUseByDebugger(_QWORD *a1)
{
  return (*(_DWORD *)((*(__int64 (__fastcall **)(unsigned __int64, _QWORD))(WdfFunctions_01023 + 264))(
                        WPP_MAIN_CB.Dpc.ProcessorHistory,
                        *a1)
                    + 48) & 0x2000000) != 0;
}
