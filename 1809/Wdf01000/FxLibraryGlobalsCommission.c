/*
 * XREFs of FxLibraryGlobalsCommission @ 0x1C00594FC
 * Callers:
 *     FxLibraryCommonCommission @ 0x1C0043830 (FxLibraryCommonCommission.c)
 * Callees:
 *     strcmp_0 @ 0x1C001BE26 (strcmp_0.c)
 *     memset @ 0x1C001C1C0 (memset.c)
 *     FxLibraryGlobalsQueryRegistrySettings @ 0x1C0059A14 (FxLibraryGlobalsQueryRegistrySettings.c)
 *     FxLibraryGlobalsVerifyVersion @ 0x1C0059BFC (FxLibraryGlobalsVerifyVersion.c)
 *     FxInitializeBugCheckDriverInfo @ 0x1C00927B8 (FxInitializeBugCheckDriverInfo.c)
 */

NTSTATUS __fastcall FxLibraryGlobalsCommission()
{
  PVOID SystemRoutineAddress; // rax
  void (__fastcall *v1)(void **); // rax
  NTSTATUS result; // eax
  _UNICODE_STRING funcName; // [rsp+30h] [rbp-20h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-10h] BYREF

  unk_1C00ABE7A = strcmp_0("Wdf01000", "WdfStatic") == 0;
  unk_1C00ABE79 = 0;
  unk_1C00ABEC0 = 0;
  FxLibraryGlobalsQueryRegistrySettings();
  RtlInitUnicodeString(&funcName, L"IoConnectInterruptEx");
  WPP_GLOBAL_WDF_Control.Queue.ListEntry.Flink = (_LIST_ENTRY *)MmGetSystemRoutineAddress(&funcName);
  RtlInitUnicodeString(&funcName, L"IoDisconnectInterruptEx");
  WPP_GLOBAL_WDF_Control.Queue.ListEntry.Blink = (_LIST_ENTRY *)MmGetSystemRoutineAddress(&funcName);
  RtlInitUnicodeString(&funcName, L"KeQueryActiveProcessors");
  *(_QWORD *)&WPP_GLOBAL_WDF_Control.Queue.Wcb.NumberOfChannels = MmGetSystemRoutineAddress(&funcName);
  RtlInitUnicodeString(&funcName, L"KeSetTargetProcessorDpc");
  WPP_GLOBAL_WDF_Control.Queue.Wcb.DeviceRoutine = (_IO_ALLOCATION_ACTION (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *, void *))MmGetSystemRoutineAddress(&funcName);
  RtlInitUnicodeString(&funcName, L"KeQueryActiveGroupCount");
  if ( MmGetSystemRoutineAddress(&funcName) )
    unk_1C00ABE50 = 1;
  RtlInitUnicodeString(&funcName, L"KeSetCoalescableTimer");
  WPP_GLOBAL_WDF_Control.Queue.Wcb.DeviceContext = MmGetSystemRoutineAddress(&funcName);
  RtlInitUnicodeString(&funcName, L"IoUnregisterPlugPlayNotificationEx");
  *(_QWORD *)&WPP_GLOBAL_WDF_Control.Queue.Wcb.NumberOfMapRegisters = MmGetSystemRoutineAddress(&funcName);
  RtlInitUnicodeString(&funcName, L"PoFxRegisterDevice");
  WPP_GLOBAL_WDF_Control.Queue.Wcb.DeviceObject = MmGetSystemRoutineAddress(&funcName);
  RtlInitUnicodeString(&funcName, L"PoFxStartDevicePowerManagement");
  WPP_GLOBAL_WDF_Control.Queue.Wcb.CurrentIrp = MmGetSystemRoutineAddress(&funcName);
  RtlInitUnicodeString(&funcName, L"PoFxUnregisterDevice");
  WPP_GLOBAL_WDF_Control.Queue.Wcb.BufferChainingDpc = (_KDPC *)MmGetSystemRoutineAddress(&funcName);
  RtlInitUnicodeString(&funcName, L"PoFxActivateComponent");
  *(_QWORD *)&WPP_GLOBAL_WDF_Control.AlignmentRequirement = MmGetSystemRoutineAddress(&funcName);
  RtlInitUnicodeString(&funcName, L"PoFxIdleComponent");
  *(_QWORD *)&WPP_GLOBAL_WDF_Control.DeviceQueue.Type = MmGetSystemRoutineAddress(&funcName);
  RtlInitUnicodeString(&funcName, L"PoFxReportDevicePoweredOn");
  WPP_GLOBAL_WDF_Control.DeviceQueue.DeviceListHead.Flink = (_LIST_ENTRY *)MmGetSystemRoutineAddress(&funcName);
  RtlInitUnicodeString(&funcName, L"PoFxCompleteIdleState");
  WPP_GLOBAL_WDF_Control.DeviceQueue.DeviceListHead.Blink = (_LIST_ENTRY *)MmGetSystemRoutineAddress(&funcName);
  RtlInitUnicodeString(&funcName, L"PoFxCompleteIdleCondition");
  WPP_GLOBAL_WDF_Control.DeviceQueue.Lock = (unsigned __int64)MmGetSystemRoutineAddress(&funcName);
  RtlInitUnicodeString(&funcName, L"PoFxCompleteDevicePowerNotRequired");
  WPP_GLOBAL_WDF_Control.DeviceQueue.1 = ($18E3EACC1E717291AA7C720ECCD5C45C)MmGetSystemRoutineAddress(&funcName);
  RtlInitUnicodeString(&funcName, L"PoFxSetDeviceIdleTimeout");
  *(_QWORD *)&WPP_GLOBAL_WDF_Control.Dpc.TargetInfoAsUlong = MmGetSystemRoutineAddress(&funcName);
  RtlInitUnicodeString(&funcName, L"IoReportInterruptActive");
  WPP_GLOBAL_WDF_Control.Dpc.DpcListEntry.Next = (_SINGLE_LIST_ENTRY *)MmGetSystemRoutineAddress(&funcName);
  RtlInitUnicodeString(&funcName, L"IoReportInterruptInactive");
  WPP_GLOBAL_WDF_Control.Dpc.ProcessorHistory = (unsigned __int64)MmGetSystemRoutineAddress(&funcName);
  RtlInitUnicodeString(&funcName, L"VfCheckNxPoolType");
  WPP_GLOBAL_WDF_Control.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))MmGetSystemRoutineAddress(&funcName);
  RtlInitUnicodeString(&funcName, L"VfIsRuleClassEnabled");
  SystemRoutineAddress = MmGetSystemRoutineAddress(&funcName);
  LODWORD(WPP_GLOBAL_WDF_Control.Dpc.SystemArgument1) = 284;
  WPP_GLOBAL_WDF_Control.Dpc.DeferredContext = SystemRoutineAddress;
  RtlInitUnicodeString(&DestinationString, L"RtlGetVersion");
  v1 = (void (__fastcall *)(void **))MmGetSystemRoutineAddress(&DestinationString);
  v1(&WPP_GLOBAL_WDF_Control.Dpc.SystemArgument1);
  FxLibraryGlobalsVerifyVersion();
  SpinLock = 0LL;
  unk_1C00ABE7B = 0;
  unk_1C00ABE7D = 0;
  unk_1C00ABE08 = &FxDriverGlobals;
  FxDriverGlobals = (_FX_DRIVER_GLOBALS *)&FxDriverGlobals;
  unk_1C00ABDF0 = 1;
  FxInitializeBugCheckDriverInfo();
  stru_1C00ABE58.m_DriverUsage = 0LL;
  stru_1C00ABE58.m_PoolToFree = 0LL;
  *(_QWORD *)&stru_1C00ABE58.m_EntrySize = 0LL;
  ImageSectionHandle = 0LL;
  unk_1C00ABE88 = 0;
  result = WmiQueryTraceInformation(WdfNotifyRoutinesClass, &qword_1C00ABE90, 8u, 0LL, 0LL);
  if ( result < 0 )
  {
    memset(dword_1C00ABE98, 0, sizeof(dword_1C00ABE98));
    result = 0;
    dword_1C00ABE98[0] = 32;
    qword_1C00ABE90 = dword_1C00ABE98;
  }
  return result;
}
