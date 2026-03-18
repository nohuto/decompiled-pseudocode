/*
 * XREFs of InputUnInitialize @ 0x1C00B44E4
 * Callers:
 *     ?Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C00B4B70 (-Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 * Callees:
 *     isInputVirtualizationEnabled @ 0x1C0032A18 (isInputVirtualizationEnabled.c)
 *     ??1ApiSetEditionCrit@@QEAA@XZ @ 0x1C006B5CC (--1ApiSetEditionCrit@@QEAA@XZ.c)
 *     ??0ApiSetEditionCrit@@QEAA@HH@Z @ 0x1C006BA34 (--0ApiSetEditionCrit@@QEAA@HH@Z.c)
 *     UnInitializeInputComponents @ 0x1C00B45A4 (UnInitializeInputComponents.c)
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void InputUnInitialize()
{
  void (**v0)(void); // rbx
  __int64 v1; // rdi
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  CDeviceAcceleration **v5; // rbx
  __int64 v6; // rdi
  char v7; // [rsp+30h] [rbp+8h] BYREF

  if ( gbInputInitialized )
  {
    ApiSetEditionCrit::ApiSetEditionCrit((ApiSetEditionCrit *)&v7, 1, 0);
    UnInitializeInputComponents();
    if ( isInputVirtualizationEnabled() )
    {
      if ( gpfnIVUninitialize )
        gpfnIVUninitialize();
      if ( ghModwin32kns && *((_QWORD *)ghModwin32kns + 3) )
        ZwSetSystemInformation(SystemUnloadGdiDriverInformation, (char *)ghModwin32kns + 24, 8uLL);
    }
    v0 = (void (**)(void))&off_1C020B008;
    v1 = 3LL;
    do
    {
      (*v0)();
      v0 += 6;
      --v1;
    }
    while ( v1 );
    CBaseInput::_sessionInitialized = 0;
    if ( qword_1C02182E8 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v2, v4);
    v5 = &qword_1C020B0A8;
    v6 = 2LL;
    do
    {
      if ( *v5 )
        (*(void (__fastcall **)(CDeviceAcceleration *, __int64))(*(_QWORD *)*v5 + 16LL))(*v5, 1LL);
      *v5 = 0LL;
      v5 += 3;
      --v6;
    }
    while ( v6 );
    ApiSetEditionCrit::~ApiSetEditionCrit((ApiSetEditionCrit *)&v7);
  }
}
