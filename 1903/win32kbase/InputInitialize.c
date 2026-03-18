/*
 * XREFs of InputInitialize @ 0x1C0060B14
 * Callers:
 *     DriverEntry @ 0x1C0266500 (DriverEntry.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C0014870 (Win32AllocPoolZInit.c)
 *     ??0CTouchProcessor@@QEAA@XZ @ 0x1C005CCC4 (--0CTouchProcessor@@QEAA@XZ.c)
 *     InitializeInputComponents @ 0x1C0060348 (InitializeInputComponents.c)
 *     ApiSetGetInputSensorThreadingModel @ 0x1C0060C84 (ApiSetGetInputSensorThreadingModel.c)
 *     ShouldEnableInputVirtualization @ 0x1C0060D40 (ShouldEnableInputVirtualization.c)
 *     ApiSetEditionGetDefaultMouseSensitivity @ 0x1C0060DC8 (ApiSetEditionGetDefaultMouseSensitivity.c)
 *     ??1ApiSetEditionCrit@@QEAA@XZ @ 0x1C006B5CC (--1ApiSetEditionCrit@@QEAA@XZ.c)
 *     ??0ApiSetEditionCrit@@QEAA@HH@Z @ 0x1C006BA34 (--0ApiSetEditionCrit@@QEAA@HH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 *     ?ivrInitAllwin32knsDelayLoads@@YAXPEAX@Z @ 0x1C018DE98 (-ivrInitAllwin32knsDelayLoads@@YAXPEAX@Z.c)
 *     ivrLoadImage @ 0x1C018E49C (ivrLoadImage.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 InputInitialize()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  unsigned int v3; // ebx
  __int64 (**v4)(void); // rdi
  unsigned int v5; // esi
  __int64 v6; // rax
  int InputSensorThreadingModel; // eax
  CTouchProcessor *v8; // rax
  CTouchProcessor *v9; // rax
  unsigned int v10; // esi
  CDeviceAcceleration **v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned int DefaultMouseSensitivity; // ebp
  __int64 v15; // r8
  __int64 v16; // rax
  void *v18; // rcx
  char v19; // [rsp+30h] [rbp+8h] BYREF

  ApiSetEditionCrit::ApiSetEditionCrit((ApiSetEditionCrit *)&v19, 1, 0);
  v3 = 0;
  gbInputInitialized = 1;
  gInputLock = 0LL;
  v4 = (__int64 (**)(void))&unk_1C020B020;
  qword_1C0218308 = 0LL;
  v5 = 0;
  gQueueLock = 0LL;
  qword_1C02182F8 = 0LL;
  gWndLock = 0LL;
  qword_1C0218318 = 0LL;
  CBaseInput::_sLock = 0LL;
  qword_1C02182E8 = 0LL;
  CBaseInput::_sessionInitialized = 1;
  do
  {
    if ( v5 != *(_DWORD *)v4 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v1, v0, v2);
    v6 = (*(v4 - 4))();
    *(v4 - 1) = (__int64 (*)(void))v6;
    if ( !v6 )
    {
      v3 = -1073741823;
      goto LABEL_20;
    }
    InputSensorThreadingModel = ApiSetGetInputSensorThreadingModel(*(unsigned int *)v4);
    *((_DWORD *)v4 - 4) = InputSensorThreadingModel;
    if ( !InputSensorThreadingModel )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v1, v0, v2);
    ++v5;
    v4 += 6;
  }
  while ( v5 < 3 );
  v8 = (CTouchProcessor *)Win32AllocPoolZInit(0xC8uLL, 1919964227LL);
  if ( v8 )
    v9 = CTouchProcessor::CTouchProcessor(v8);
  else
    v9 = 0LL;
  gpTouchProcessor = v9;
  if ( v9 )
  {
    v10 = 0;
    v11 = &qword_1C020B0A8;
    do
    {
      DefaultMouseSensitivity = ApiSetEditionGetDefaultMouseSensitivity(v10);
      if ( *((_DWORD *)v11 + 2) != v10 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v12, v15);
      if ( *v11 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v12, v15);
      v16 = ((__int64 (__fastcall *)(_QWORD))*(v11 - 1))(DefaultMouseSensitivity);
      *v11 = (CDeviceAcceleration *)v16;
      if ( !v16 )
      {
        v3 = -1073741823;
        goto LABEL_19;
      }
      ++v10;
      v11 += 3;
    }
    while ( v10 < 2 );
    if ( (unsigned __int8)ShouldEnableInputVirtualization() )
    {
      gInputVirtualizationSessionId = gSessionId;
      gbInputVirtualizationEnabled = 1;
      ghModwin32kns = (void *)ivrLoadImage();
      if ( ghModwin32kns )
      {
        ivrInitAllwin32knsDelayLoads(v18);
        if ( gpfnIVInitialize )
          v3 = gpfnIVInitialize(&gbRootPartition);
        else
          v3 = -1073741637;
      }
      else
      {
        v3 = -1073741204;
      }
    }
  }
  else
  {
    v3 = -1073741801;
  }
LABEL_19:
  InitializeInputComponents();
LABEL_20:
  ApiSetEditionCrit::~ApiSetEditionCrit((ApiSetEditionCrit *)&v19);
  return v3;
}
