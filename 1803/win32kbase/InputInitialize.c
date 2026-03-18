/*
 * XREFs of InputInitialize @ 0x1C01315F8
 * Callers:
 *     DriverEntry @ 0x1C01F1490 (DriverEntry.c)
 * Callees:
 *     ??0ApiSetEditionCrit@@QEAA@HH@Z @ 0x1C000F3BC (--0ApiSetEditionCrit@@QEAA@HH@Z.c)
 *     Win32AllocPoolZInit @ 0x1C004DA00 (Win32AllocPoolZInit.c)
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 *     ??0CTouchProcessor@@QEAA@XZ @ 0x1C010C7C4 (--0CTouchProcessor@@QEAA@XZ.c)
 *     intializeGlobalRecorder @ 0x1C01247E0 (intializeGlobalRecorder.c)
 *     InitializeInputComponents @ 0x1C012E614 (InitializeInputComponents.c)
 *     ?DeviceAcceleratorInitialize@@YAJXZ @ 0x1C0131570 (-DeviceAcceleratorInitialize@@YAJXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 InputInitialize()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 (**v2)(void); // rbx
  unsigned int i; // edi
  __int64 v4; // rax
  unsigned int v5; // esi
  __int64 v6; // rdx
  __int64 v7; // rcx
  int InputSensorThreadingModel; // eax
  CTouchProcessor *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  CTouchProcessor *v12; // rax
  unsigned int v13; // ebx
  int v15; // [rsp+30h] [rbp+8h] BYREF
  int v16; // [rsp+34h] [rbp+Ch]

  ApiSetEditionCrit::ApiSetEditionCrit((ApiSetEditionCrit *)&v15, 1, 0);
  gbInputInitialized = 1;
  gInputLock = 0LL;
  qword_1C01A1668 = 0LL;
  *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement = 0LL;
  *(_QWORD *)&WPP_MAIN_CB.DeviceQueue.Type = 0LL;
  *(_OWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters = 0uLL;
  *(_OWORD *)&WPP_MAIN_CB.Queue.Wcb.CurrentIrp = 0uLL;
  CBaseInput::_sLock = 0LL;
  qword_1C01A1658 = 0LL;
  intializeGlobalRecorder();
  CBaseInput::_sessionInitialized = 1;
  v2 = (__int64 (**)(void))&unk_1C019A5B0;
  for ( i = 0; i < 3; ++i )
  {
    if ( i != *(_DWORD *)v2 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v1, v0);
    v4 = (*(v2 - 4))();
    *(v2 - 1) = (__int64 (*)(void))v4;
    if ( !v4 )
    {
      v13 = -1073741823;
      goto LABEL_21;
    }
    v5 = *(_DWORD *)v2;
    if ( (int)IsGetInputSensorThreadingModelSupported() < 0 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6);
    if ( (int)IsGetInputSensorThreadingModelSupported() < 0 )
      InputSensorThreadingModel = 0;
    else
      InputSensorThreadingModel = GetInputSensorThreadingModel(v5);
    *((_DWORD *)v2 - 4) = InputSensorThreadingModel;
    if ( !InputSensorThreadingModel )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v1, v0);
    v2 += 6;
  }
  v9 = (CTouchProcessor *)Win32AllocPoolZInit(0xD8uLL, 0x72705443u);
  if ( v9 )
    v12 = CTouchProcessor::CTouchProcessor(v9);
  else
    v12 = 0LL;
  gpTouchProcessor = v12;
  if ( v12 )
    v13 = DeviceAcceleratorInitialize();
  else
    v13 = -1073741801;
  InitializeInputComponents(v11, v10);
LABEL_21:
  if ( v15 && !v16 && (int)IsLeaveEditionCritSupported() >= 0 )
    LeaveEditionCrit();
  return v13;
}
