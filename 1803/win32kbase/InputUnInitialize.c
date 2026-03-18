/*
 * XREFs of InputUnInitialize @ 0x1C0131764
 * Callers:
 *     ?Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C00A90D0 (-Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 * Callees:
 *     ??0ApiSetEditionCrit@@QEAA@HH@Z @ 0x1C000F3BC (--0ApiSetEditionCrit@@QEAA@HH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 *     UnInitializeInputComponents @ 0x1C012EBF8 (UnInitializeInputComponents.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void InputUnInitialize()
{
  void (**v0)(void); // rbx
  __int64 v1; // rdi
  __int64 v2; // rdx
  __int64 v3; // rcx
  CDeviceAcceleration **v4; // rbx
  __int64 v5; // rdi
  int v6; // [rsp+30h] [rbp+8h] BYREF
  int v7; // [rsp+34h] [rbp+Ch]

  if ( gbInputInitialized )
  {
    ApiSetEditionCrit::ApiSetEditionCrit((ApiSetEditionCrit *)&v6, 1, 0);
    UnInitializeInputComponents();
    v0 = (void (**)(void))&off_1C019A598;
    v1 = 3LL;
    do
    {
      (*v0)();
      v0 += 6;
      --v1;
    }
    while ( v1 );
    CBaseInput::_sessionInitialized = 0;
    if ( qword_1C01A1658 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v2);
    imp_WppRecorderLogDelete(WPP_GLOBAL_Control);
    v4 = &qword_1C019AA88;
    v5 = 2LL;
    do
    {
      if ( *v4 )
        (*(void (__fastcall **)(CDeviceAcceleration *, __int64))(*(_QWORD *)*v4 + 16LL))(*v4, 1LL);
      *v4 = 0LL;
      v4 += 3;
      --v5;
    }
    while ( v5 );
    if ( v6 && !v7 && (int)IsLeaveEditionCritSupported() >= 0 )
      LeaveEditionCrit();
  }
}
