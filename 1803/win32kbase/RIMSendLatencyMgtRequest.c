/*
 * XREFs of RIMSendLatencyMgtRequest @ 0x1C00F19F0
 * Callers:
 *     ?SetInputModeWithCrit@@YAXW4_WIN32K_INPUT_MODE@@@Z @ 0x1C00A2BD4 (-SetInputModeWithCrit@@YAXW4_WIN32K_INPUT_MODE@@@Z.c)
 *     ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1C00A3780 (-xxxUserPowerStateCalloutWorker@@YAJXZ.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C003B4E0 (RIMLockExclusive.c)
 *     EtwTraceLatencyModeSwitchStart @ 0x1C00AC050 (EtwTraceLatencyModeSwitchStart.c)
 *     EtwTraceLatencyModeSwitchStop @ 0x1C00AC080 (EtwTraceLatencyModeSwitchStop.c)
 *     RIMSendLatencyMgtDeviceRequest @ 0x1C00F0344 (RIMSendLatencyMgtDeviceRequest.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMSendLatencyMgtRequest(int a1)
{
  __int64 v2; // rcx
  struct _LIST_ENTRY *Flink; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct _LIST_ENTRY *v6; // rcx
  struct _LIST_ENTRY *v7; // rax
  __int64 v8; // rcx
  _QWORD *v9; // r14
  _QWORD *v10; // rbp
  _QWORD *v11; // r15
  __int64 i; // rsi
  _QWORD *v14; // [rsp+30h] [rbp-28h] BYREF
  struct _LIST_ENTRY *v15; // [rsp+38h] [rbp-20h]

  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x14u,
    0x10u,
    (__int64)&WPP_558ab43dada4395364e05253c1ca4677_Traceguids);
  EtwTraceLatencyModeSwitchStart(v2);
  RIMLockExclusive((__int64)&gObListLock);
  Flink = gObRimList.Flink;
  v15 = (struct _LIST_ENTRY *)&v14;
  v14 = &v14;
  while ( Flink != &gObRimList )
  {
    if ( ObReferenceObjectByPointer(&Flink[-1], 3u, ExRawInputManagerObjectType, 0) < 0 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v4);
    v6 = v15;
    v7 = Flink + 55;
    if ( v15->Flink != (struct _LIST_ENTRY *)&v14 )
      __fastfail(3u);
    Flink[55].Blink = v15;
    v7->Flink = (struct _LIST_ENTRY *)&v14;
    v6->Flink = v7;
    v15 = Flink + 55;
    Flink = Flink->Flink;
  }
  qword_1C01A1640 = 0LL;
  ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
  KeLeaveCriticalRegion();
  v9 = v14;
  while ( v9 != &v14 )
  {
    v10 = v9 - 112;
    v11 = v9;
    for ( i = *(v9 - 61); i; i = *(_QWORD *)(i + 40) )
    {
      if ( (*(_DWORD *)(i + 200) & 0x80u) != 0 )
      {
        RIMLockExclusive((__int64)(v10 + 12));
        RIMLockExclusive((__int64)(v10 + 69));
        RIMSendLatencyMgtDeviceRequest((struct _UNICODE_STRING *)i, *(_QWORD *)(i + 464), a1);
        v10[70] = 0LL;
        ExReleasePushLockExclusiveEx(v10 + 69, 0LL);
        KeLeaveCriticalRegion();
        v10[13] = 0LL;
        ExReleasePushLockExclusiveEx(v10 + 12, 0LL);
        KeLeaveCriticalRegion();
      }
    }
    v9 = (_QWORD *)*v9;
    v11[1] = v11;
    *v11 = v11;
    ObfDereferenceObject(v10);
  }
  EtwTraceLatencyModeSwitchStop(v8);
  return WPP_RECORDER_SF_(
           (__int64)WPP_GLOBAL_Control->DeviceExtension,
           3u,
           0x14u,
           0x11u,
           (__int64)&WPP_558ab43dada4395364e05253c1ca4677_Traceguids);
}
