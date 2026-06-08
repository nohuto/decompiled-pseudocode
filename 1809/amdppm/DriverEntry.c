/*
 * XREFs of DriverEntry @ 0x1C0032168
 * Callers:
 *     FxDriverEntryWorker @ 0x1C00014A4 (FxDriverEntryWorker.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C00016A8 (WPP_RECORDER_SF_D.c)
 *     _guard_dispatch_icall_nop @ 0x1C000CB40 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C000CEC0 (memset.c)
 *     WppLoadTracingSupport @ 0x1C001B99C (WppLoadTracingSupport.c)
 *     WppInitKm @ 0x1C001BD34 (WppInitKm.c)
 *     WppCleanupKm @ 0x1C001BDFC (WppCleanupKm.c)
 *     ProcLibDriverCleanup @ 0x1C001C454 (ProcLibDriverCleanup.c)
 *     ProcLibGlobalInit @ 0x1C003241C (ProcLibGlobalInit.c)
 */

NTSTATUS __stdcall DriverEntry(_DRIVER_OBJECT *DriverObject, PUNICODE_STRING RegistryPath)
{
  int v4; // eax
  NTSTATUS v5; // ebx
  unsigned __int16 v6; // r9
  unsigned int v7; // r8d
  __int64 v9; // [rsp+28h] [rbp-40h]
  _QWORD v10[5]; // [rsp+40h] [rbp-28h] BYREF

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
  memset(v10, 0, 0x20uLL);
  LODWORD(v10[0]) = 32;
  v10[1] = EvtDriverDeviceAdd;
  v10[2] = EvtDriverUnload;
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _DRIVER_OBJECT *, PUNICODE_STRING, _QWORD, _QWORD *, _QWORD))(WdfFunctions_01015 + 928))(
         WdfDriverGlobals,
         DriverObject,
         RegistryPath,
         0LL,
         v10,
         0LL);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = 10;
    v7 = 4;
LABEL_3:
    LODWORD(v9) = v4;
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      v7,
      v6,
      (__int64)&WPP_aa9d9c6c8741343c67d4469f91515e40_Traceguids,
      v9);
    goto LABEL_7;
  }
  dword_1C00113E4 = KeQueryActiveProcessorAffinity(&unk_1C0011448);
  KeInitializeAffinityEx(&unk_1C00116F0);
  v4 = ProcLibGlobalInit((PDEVICE_OBJECT)DriverObject);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = 11;
    v7 = 3;
    goto LABEL_3;
  }
  v5 = 0;
LABEL_7:
  if ( v5 < 0 )
  {
    ProcLibDriverCleanup();
    WppCleanupKm((__int64)DriverObject);
  }
  return v5;
}
