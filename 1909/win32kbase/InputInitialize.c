/*
 * XREFs of InputInitialize @ 0x1C00A8EAC
 * Callers:
 *     DriverEntry @ 0x1C0263740 (DriverEntry.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C0012FC0 (Win32AllocPoolZInit.c)
 *     ??1ApiSetEditionCrit@@QEAA@XZ @ 0x1C005766C (--1ApiSetEditionCrit@@QEAA@XZ.c)
 *     ??0ApiSetEditionCrit@@QEAA@HH@Z @ 0x1C0057AD4 (--0ApiSetEditionCrit@@QEAA@HH@Z.c)
 *     ??0CTouchProcessor@@QEAA@XZ @ 0x1C005DE30 (--0CTouchProcessor@@QEAA@XZ.c)
 *     ApiSetGetInputSensorThreadingModel @ 0x1C00A901C (ApiSetGetInputSensorThreadingModel.c)
 *     InitializeInputComponents @ 0x1C00A90D8 (InitializeInputComponents.c)
 *     ShouldEnableInputVirtualization @ 0x1C00A9ED0 (ShouldEnableInputVirtualization.c)
 *     ApiSetEditionGetDefaultMouseSensitivity @ 0x1C00A9F58 (ApiSetEditionGetDefaultMouseSensitivity.c)
 *     _guard_dispatch_icall_nop @ 0x1C00BF5D0 (_guard_dispatch_icall_nop.c)
 *     ?ivrInitAllwin32knsDelayLoads@@YAXPEAX@Z @ 0x1C018BCA8 (-ivrInitAllwin32knsDelayLoads@@YAXPEAX@Z.c)
 *     ivrLoadImage @ 0x1C018C2AC (ivrLoadImage.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  v4 = (__int64 (**)(void))&unk_1C0208020;
  qword_1C0215308 = 0LL;
  v5 = 0;
  gQueueLock = 0LL;
  qword_1C02152F8 = 0LL;
  gWndLock = 0LL;
  qword_1C0215318 = 0LL;
  CBaseInput::_sLock = 0LL;
  qword_1C02152E8 = 0LL;
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
    v11 = &qword_1C02080A8;
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
