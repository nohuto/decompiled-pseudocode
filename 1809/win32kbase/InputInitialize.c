/*
 * XREFs of InputInitialize @ 0x1C0005874
 * Callers:
 *     DriverEntry @ 0x1C021CE90 (DriverEntry.c)
 * Callees:
 *     ?DeviceAcceleratorInitialize@@YAJXZ @ 0x1C00057EC (-DeviceAcceleratorInitialize@@YAJXZ.c)
 *     ??0CTouchProcessor@@QEAA@XZ @ 0x1C00064AC (--0CTouchProcessor@@QEAA@XZ.c)
 *     intializeGlobalRecorder @ 0x1C00068BC (intializeGlobalRecorder.c)
 *     InitializeInputComponents @ 0x1C0007964 (InitializeInputComponents.c)
 *     Win32AllocPoolZInit @ 0x1C002EB70 (Win32AllocPoolZInit.c)
 *     ??0ApiSetEditionCrit@@QEAA@HH@Z @ 0x1C0050484 (--0ApiSetEditionCrit@@QEAA@HH@Z.c)
 *     wil_details_FeaturePropertyCache_ReportUsageToService @ 0x1C00A84A4 (wil_details_FeaturePropertyCache_ReportUsageToService.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredMsgKM @ 0x1C0186064 (MicrosoftTelemetryAssertTriggeredMsgKM.c)
 */

__int64 InputInitialize()
{
  __int64 (**v0)(void); // rbx
  unsigned int i; // edi
  __int64 v2; // rax
  unsigned int v3; // esi
  int InputSensorThreadingModel; // eax
  CTouchProcessor *v5; // rax
  struct _LIST_ENTRY *v6; // rax
  unsigned int v7; // ebx
  int v9; // [rsp+40h] [rbp+8h] BYREF
  int v10; // [rsp+44h] [rbp+Ch]

  ApiSetEditionCrit::ApiSetEditionCrit((ApiSetEditionCrit *)&v9, 1, 0);
  gbInputInitialized = 1;
  gInputLock = 0LL;
  qword_1C01D0C90 = 0LL;
  gQueueLock = 0LL;
  qword_1C01D0C80 = 0LL;
  gWndLock = 0LL;
  qword_1C01D0CA0 = 0LL;
  gHmLock = 0LL;
  qword_1C01D0CB0 = 0LL;
  CBaseInput::_sLock = 0LL;
  qword_1C01D0C68 = 0LL;
  intializeGlobalRecorder();
  CBaseInput::_sessionInitialized = 1;
  v0 = (__int64 (**)(void))&unk_1C01C3020;
  for ( i = 0; i < 3; ++i )
  {
    if ( i != *(_DWORD *)v0 )
      MicrosoftTelemetryAssertTriggeredMsgKM("Table formatting error");
    v2 = (*(v0 - 4))();
    *(v0 - 1) = (__int64 (*)(void))v2;
    if ( !v2 )
    {
      v7 = -1073741823;
      goto LABEL_17;
    }
    v3 = *(_DWORD *)v0;
    if ( (int)IsGetInputSensorThreadingModelSupported() < 0 )
      MicrosoftTelemetryAssertTriggeredMsgKM("Must be implemented");
    if ( (int)IsGetInputSensorThreadingModelSupported() < 0 )
      InputSensorThreadingModel = 0;
    else
      InputSensorThreadingModel = GetInputSensorThreadingModel(v3);
    *((_DWORD *)v0 - 4) = InputSensorThreadingModel;
    if ( !InputSensorThreadingModel )
      MicrosoftTelemetryAssertTriggeredMsgKM("Driver must return a valid threading model");
    v0 += 6;
  }
  v5 = (CTouchProcessor *)Win32AllocPoolZInit(0xA8uLL);
  if ( v5 )
    v6 = (struct _LIST_ENTRY *)CTouchProcessor::CTouchProcessor(v5);
  else
    v6 = 0LL;
  WPP_MAIN_CB.Queue.ListEntry.Blink = v6;
  if ( v6 )
    v7 = DeviceAcceleratorInitialize();
  else
    v7 = -1073741801;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    (unsigned int)&Feature_InputVirtualization__private_propertyCache,
    16291462,
    (unsigned int)&unk_1C01933C8,
    0,
    3);
  InitializeInputComponents();
LABEL_17:
  if ( v9 && !v10 && (int)IsLeaveEditionCritSupported() >= 0 )
    LeaveEditionCrit();
  return v7;
}
