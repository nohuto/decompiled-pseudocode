/*
 * XREFs of Controller_InUseByDebugger @ 0x1C000EB20
 * Callers:
 *     Controller_LPEEnterExitCallback @ 0x1C000F430 (Controller_LPEEnterExitCallback.c)
 *     Controller_WdfEvtDeviceD0Entry @ 0x1C0012B90 (Controller_WdfEvtDeviceD0Entry.c)
 *     Controller_WdfEvtDeviceD0Exit @ 0x1C00134B0 (Controller_WdfEvtDeviceD0Exit.c)
 *     Controller_WdfEvtDeviceSelfManagedIoInit @ 0x1C0013B50 (Controller_WdfEvtDeviceSelfManagedIoInit.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall Controller_InUseByDebugger(_QWORD *a1)
{
  return (*(_DWORD *)((*(__int64 (__fastcall **)(unsigned __int64, _QWORD))(WdfFunctions_01023 + 264))(
                        WPP_MAIN_CB.Dpc.ProcessorHistory,
                        *a1)
                    + 48) & 0x2000000) != 0;
}
