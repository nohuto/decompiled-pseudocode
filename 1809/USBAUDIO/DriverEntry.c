/*
 * XREFs of DriverEntry @ 0x1C001FDDC
 * Callers:
 *     GsDriverEntry @ 0x1C0031010 (GsDriverEntry.c)
 * Callees:
 *     WPP_RECORDER_SF_qZ @ 0x1C000129C (WPP_RECORDER_SF_qZ.c)
 *     rbc_InitializeFeatureStaging @ 0x1C0001D58 (rbc_InitializeFeatureStaging.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010480 (_guard_dispatch_icall_nop.c)
 *     DriverCopyRegistryString @ 0x1C0020318 (DriverCopyRegistryString.c)
 */

NTSTATUS __stdcall DriverEntry(_DRIVER_OBJECT *DriverObject, PUNICODE_STRING RegistryPath)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  struct _DEVICE_OBJECT *v7; // rbx
  void (__fastcall *v8)(struct _DRIVER_OBJECT *, _QWORD, __int64 (__fastcall *)(__int64, unsigned __int8, __int64 *, __int64), struct _DEVICE_OBJECT *); // rax
  NTSTATUS v9; // eax
  NTSTATUS v10; // ecx
  int v12; // [rsp+20h] [rbp-30h]
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-10h] BYREF
  unsigned int v14; // [rsp+80h] [rbp+30h] BYREF

  rbc_InitializeFeatureStaging();
  KeInitializeSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters);
  WPP_MAIN_CB.Timer = (PIO_TIMER)1;
  WPP_MAIN_CB.Queue.Wcb.WaitQueueEntry.SortKey = 0;
  WPP_MAIN_CB.Queue.Wcb.DeviceContext = &WPP_MAIN_CB.Queue.Wcb.DeviceRoutine;
  WPP_MAIN_CB.Queue.Wcb.DeviceRoutine = (PDRIVER_CONTROL)&WPP_MAIN_CB.Queue.Wcb.DeviceRoutine;
  *(_QWORD *)&WPP_MAIN_CB.Type = 0LL;
  WPP_MAIN_CB.DriverObject = (struct _DRIVER_OBJECT *)&WPP_ThisDir_CTLGUID_EXBUSAUD;
  WPP_MAIN_CB.NextDevice = 0LL;
  WPP_MAIN_CB.CurrentIrp = 0LL;
  WPP_MAIN_CB.DeviceExtension = 0LL;
  WPP_MAIN_CB.DeviceType = 0;
  v14 = 0;
  RtlInitUnicodeString(&DestinationString, L"PsGetVersion");
  pfnWppGetVersion = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))MmGetSystemRoutineAddress(&DestinationString);
  RtlInitUnicodeString(&DestinationString, L"WmiTraceMessage");
  pfnWppTraceMessage = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))MmGetSystemRoutineAddress(&DestinationString);
  RtlInitUnicodeString(&DestinationString, L"WmiQueryTraceInformation");
  pfnWppQueryTraceInformation = (__int64)MmGetSystemRoutineAddress(&DestinationString);
  WPPTraceSuite = 2;
  if ( pfnWppGetVersion )
    pfnWppGetVersion(&v14, 0LL, 0LL, 0LL);
  if ( v14 >= 6 )
  {
    RtlInitUnicodeString(&DestinationString, L"EtwRegisterClassicProvider");
    pfnEtwRegisterClassicProvider = (__int64)MmGetSystemRoutineAddress(&DestinationString);
    if ( pfnEtwRegisterClassicProvider )
    {
      RtlInitUnicodeString(&DestinationString, L"EtwUnregister");
      pfnEtwUnregister = (__int64)MmGetSystemRoutineAddress(&DestinationString);
      WPPTraceSuite = 4;
    }
  }
  v7 = &WPP_MAIN_CB;
  WPP_MAIN_CB.CurrentIrp = 0LL;
  if ( WPP_GLOBAL_Control != &WPP_MAIN_CB )
  {
    WPP_GLOBAL_Control = &WPP_MAIN_CB;
    if ( WPPTraceSuite == 4 )
    {
      do
      {
        v8 = (void (__fastcall *)(struct _DRIVER_OBJECT *, _QWORD, __int64 (__fastcall *)(__int64, unsigned __int8, __int64 *, __int64), struct _DEVICE_OBJECT *))pfnEtwRegisterClassicProvider;
        v7->Vpb = 0LL;
        v12 = (_DWORD)v7 + 56;
        v8(v7->DriverObject, 0LL, WppClassicProviderCallback, v7);
        v7 = v7->NextDevice;
      }
      while ( v7 );
    }
    else if ( WPPTraceSuite == 2 )
    {
      *(_QWORD *)&WPP_MAIN_CB.Type = WppTraceCallback;
      IoWMIRegistrationControl(&WPP_MAIN_CB, 0x80010001);
    }
    WppAutoLogStart(WPP_GLOBAL_Control, DriverObject, RegistryPath);
  }
  WPP_RECORDER_SF_qZ(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    v4,
    v5,
    v6,
    v12,
    (char)DriverObject,
    &RegistryPath->Length);
  pExtBusDeviceDispatchTable = (__int64)USBDeviceDispatchTable;
  v9 = KsInitializeDriver(DriverObject, RegistryPath, &KsDeviceDescriptor);
  v10 = v9;
  if ( v9 >= 0 )
  {
    v10 = DriverCopyRegistryString((unsigned int)v9, RegistryPath);
    if ( v10 >= 0 )
    {
      PerfSystemControlDispatch = (__int64)DriverObject->MajorFunction[23];
      DriverObject->MajorFunction[23] = (PDRIVER_DISPATCH)WmiDispatchSystemControl;
      DriverObject->MajorFunction[14] = (PDRIVER_DISPATCH)UsbAudioIrpDispatcher;
      DriverObject->MajorFunction[15] = (PDRIVER_DISPATCH)UsbAudioIrpDispatcher;
      DriverObject->MajorFunction[0] = (PDRIVER_DISPATCH)UsbAudioIrpDispatcher;
      DriverObject->MajorFunction[2] = (PDRIVER_DISPATCH)UsbAudioIrpDispatcher;
      DriverObject->MajorFunction[27] = (PDRIVER_DISPATCH)UsbAudioIrpDispatcher;
      DriverObject->DriverUnload = (PDRIVER_UNLOAD)DriverUnload;
    }
  }
  return v10;
}
