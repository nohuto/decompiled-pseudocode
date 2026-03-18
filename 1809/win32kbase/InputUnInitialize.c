/*
 * XREFs of InputUnInitialize @ 0x1C00059F8
 * Callers:
 *     ?Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C00E3170 (-Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 * Callees:
 *     UnInitializeInputComponents @ 0x1C0005BB4 (UnInitializeInputComponents.c)
 *     ??0ApiSetEditionCrit@@QEAA@HH@Z @ 0x1C0050484 (--0ApiSetEditionCrit@@QEAA@HH@Z.c)
 *     wil_details_FeaturePropertyCache_ReportUsageToService @ 0x1C00A84A4 (wil_details_FeaturePropertyCache_ReportUsageToService.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void InputUnInitialize()
{
  __int64 v0; // rdi
  void (**v1)(void); // rbx
  CDeviceAcceleration **v2; // rbx
  __int64 v3; // rdi
  int v4; // [rsp+40h] [rbp+8h] BYREF
  int v5; // [rsp+44h] [rbp+Ch]

  if ( gbInputInitialized )
  {
    ApiSetEditionCrit::ApiSetEditionCrit((ApiSetEditionCrit *)&v4, 1, 0);
    UnInitializeInputComponents();
    v0 = 3LL;
    wil_details_FeaturePropertyCache_ReportUsageToService(
      (unsigned int)&Feature_InputVirtualization__private_propertyCache,
      16291462,
      (unsigned int)&unk_1C01933C8,
      0,
      3);
    v1 = (void (**)(void))&off_1C01C3008;
    do
    {
      (*v1)();
      v1 += 6;
      --v0;
    }
    while ( v0 );
    CBaseInput::_sessionInitialized = 0;
    if ( qword_1C01D0C68 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM();
    imp_WppRecorderLogDelete(WPP_GLOBAL_Control, gBaseLog);
    v2 = &qword_1C01C3098;
    v3 = 2LL;
    do
    {
      if ( *v2 )
        (*(void (__fastcall **)(CDeviceAcceleration *, __int64))(*(_QWORD *)*v2 + 16LL))(*v2, 1LL);
      *v2 = 0LL;
      v2 += 3;
      --v3;
    }
    while ( v3 );
    if ( v4 && !v5 && (int)IsLeaveEditionCritSupported() >= 0 )
      LeaveEditionCrit();
  }
}
