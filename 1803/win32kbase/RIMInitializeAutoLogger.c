/*
 * XREFs of RIMInitializeAutoLogger @ 0x1C00DE190
 * Callers:
 *     DriverEntry @ 0x1C01F1490 (DriverEntry.c)
 * Callees:
 *     WppInitKm @ 0x1C01D72C4 (WppInitKm.c)
 *     WppLoadTracingSupport @ 0x1C01D737C (WppLoadTracingSupport.c)
 */

__int64 __fastcall RIMInitializeAutoLogger(__int64 a1, __int64 a2)
{
  PVOID v2; // rbx

  v2 = gpWin32kDriverObject;
  WPP_MAIN_CB.DriverObject = (struct _DRIVER_OBJECT *)&WPP_ThisDir_CTLGUID_Win32kbaseTraceGuid;
  *(_QWORD *)&WPP_MAIN_CB.Type = 0LL;
  WPP_MAIN_CB.NextDevice = 0LL;
  WPP_MAIN_CB.CurrentIrp = 0LL;
  WPP_MAIN_CB.DeviceExtension = 0LL;
  WPP_MAIN_CB.DeviceType = 0;
  WPP_MAIN_CB.Timer = (PIO_TIMER)1;
  WppLoadTracingSupport();
  WPP_MAIN_CB.CurrentIrp = 0LL;
  return WppInitKm(v2, a2);
}
