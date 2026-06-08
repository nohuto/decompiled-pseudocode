/*
 * XREFs of DriverEntry @ 0x1C003903C
 * Callers:
 *     FxDriverEntryWorker @ 0x1C0001B54 (FxDriverEntryWorker.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C000360C (WPP_RECORDER_SF_D.c)
 *     _guard_dispatch_icall_nop @ 0x1C0004370 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00046C0 (memset.c)
 *     WppLoadTracingSupport @ 0x1C001F5B4 (WppLoadTracingSupport.c)
 *     WppInitKm @ 0x1C001F6FC (WppInitKm.c)
 *     EvtDriverUnload @ 0x1C002C300 (EvtDriverUnload.c)
 *     WppCleanupKm @ 0x1C002C354 (WppCleanupKm.c)
 *     ProcLibGlobalInit @ 0x1C00396F4 (ProcLibGlobalInit.c)
 */

NTSTATUS __stdcall DriverEntry(_DRIVER_OBJECT *DriverObject, PUNICODE_STRING RegistryPath)
{
  NTSTATUS v4; // ebx
  unsigned __int16 v6; // r9
  unsigned int v7; // r8d
  __int64 v8; // [rsp+28h] [rbp-40h]
  _QWORD v9[5]; // [rsp+40h] [rbp-28h] BYREF

  memset(v9, 0, 0x20uLL);
  WPP_MAIN_CB.Timer = (struct _IO_TIMER *)1;
  *(_QWORD *)&WPP_MAIN_CB.Type = 0LL;
  WPP_MAIN_CB.DriverObject = (_DRIVER_OBJECT *)&WPP_ThisDir_CTLGUID_ProcessorDriverTraceGuid;
  WPP_MAIN_CB.NextDevice = 0LL;
  WPP_MAIN_CB.CurrentIrp = 0LL;
  WPP_MAIN_CB.DeviceExtension = 0LL;
  WPP_MAIN_CB.DeviceType = 0;
  WppLoadTracingSupport();
  WPP_MAIN_CB.CurrentIrp = 0LL;
  WppInitKm((__int64)DriverObject, (__int64)RegistryPath);
  v9[0] = 32LL;
  v9[1] = EvtDriverDeviceAdd;
  v9[3] = 0LL;
  v9[2] = EvtDriverUnload;
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _DRIVER_OBJECT *, PUNICODE_STRING, _QWORD, _QWORD *, _QWORD))(WdfFunctions_01015 + 928))(
         WdfDriverGlobals,
         DriverObject,
         RegistryPath,
         0LL,
         v9,
         0LL);
  if ( v4 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_4;
    v6 = 10;
    v7 = 4;
    goto LABEL_9;
  }
  dword_1C001B394 = KeQueryActiveProcessorAffinity(&unk_1C001B3F8);
  KeInitializeAffinityEx(&unk_1C001B6B0);
  v4 = ProcLibGlobalInit((PDEVICE_OBJECT)DriverObject);
  if ( v4 >= 0 )
  {
    v4 = 0;
    goto LABEL_4;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v6 = 11;
    v7 = 3;
LABEL_9:
    LODWORD(v8) = v4;
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      v7,
      v6,
      (__int64)&WPP_aa9d9c6c8741343c67d4469f91515e40_Traceguids,
      v8);
  }
LABEL_4:
  if ( v4 < 0 )
  {
    EvtDriverUnload();
    WppCleanupKm((__int64)DriverObject);
  }
  return v4;
}
