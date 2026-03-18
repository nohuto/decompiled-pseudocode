/*
 * XREFs of ?InitializeWppLogging@@YAJPEAU_DRIVER_OBJECT@@@Z @ 0x1C009F154
 * Callers:
 *     DriverEntry @ 0x1C0263740 (DriverEntry.c)
 * Callees:
 *     ?InitializeWppRecorder@@YAJPEAPEAURECORDER_LOG__@@PEADK@Z @ 0x1C009F274 (-InitializeWppRecorder@@YAJPEAPEAURECORDER_LOG__@@PEADK@Z.c)
 *     ApiSetEditionInitializeWppLogging @ 0x1C009F350 (ApiSetEditionInitializeWppLogging.c)
 *     ?UninitializeBaseWppLog@@YAXXZ @ 0x1C00B4DBC (-UninitializeBaseWppLog@@YAXXZ.c)
 *     WppInitKm @ 0x1C0246314 (WppInitKm.c)
 *     WppLoadTracingSupport @ 0x1C02463C8 (WppLoadTracingSupport.c)
 */

__int64 __fastcall InitializeWppLogging(struct _DRIVER_OBJECT *a1)
{
  PDRIVER_OBJECT v1; // rdi
  unsigned int v2; // r8d
  int v3; // ebx
  unsigned int v4; // r8d
  struct _UNICODE_STRING v6; // [rsp+20h] [rbp-18h] BYREF
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  v7 = (__int64)a1;
  v1 = gpWin32kDriverObject;
  *(_QWORD *)&v6.Length = 0LL;
  v6.Buffer = 0LL;
  RtlInitUnicodeString(&v6, L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Windows\\Win32kWPP");
  WPP_MAIN_CB.Timer = (PIO_TIMER)1;
  *(_QWORD *)&WPP_MAIN_CB.Type = 0LL;
  WPP_MAIN_CB.DriverObject = (struct _DRIVER_OBJECT *)&WPP_ThisDir_CTLGUID_Win32kbaseTraceGuid;
  WPP_MAIN_CB.NextDevice = 0LL;
  WPP_MAIN_CB.CurrentIrp = 0LL;
  WPP_MAIN_CB.DeviceExtension = 0LL;
  WPP_MAIN_CB.DeviceType = 0;
  WppLoadTracingSupport();
  WPP_MAIN_CB.CurrentIrp = 0LL;
  WppInitKm(v1, &v6);
  v7 = 8LL;
  imp_WppRecorderConfigure(WPP_GLOBAL_Control, &v7);
  v3 = InitializeWppRecorder(&gBaseLog, "win32kbase", v2);
  if ( v3 < 0
    || (v3 = InitializeWppRecorder(&gRimLog, "win32kbase_rim", v4), v3 < 0)
    || (v3 = ApiSetEditionInitializeWppLogging(v1, &v6), v3 < 0) )
  {
    UninitializeBaseWppLog();
  }
  return (unsigned int)v3;
}
