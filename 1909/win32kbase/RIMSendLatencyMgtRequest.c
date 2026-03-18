/*
 * XREFs of RIMSendLatencyMgtRequest @ 0x1C0058F60
 * Callers:
 *     ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1C0065F24 (-xxxUserPowerStateCalloutWorker@@YAJXZ.c)
 *     ?SetInputModeWithCrit@@YAXW4_WIN32K_INPUT_MODE@@@Z @ 0x1C0105008 (-SetInputModeWithCrit@@YAXW4_WIN32K_INPUT_MODE@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002D584 (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0031380 (RIMLockExclusive.c)
 *     EtwTraceLatencyModeSwitchStop @ 0x1C005B5B0 (EtwTraceLatencyModeSwitchStop.c)
 *     EtwTraceLatencyModeSwitchStart @ 0x1C005B5D0 (EtwTraceLatencyModeSwitchStart.c)
 *     RIMSendLatencyMgtDeviceRequest @ 0x1C0141A94 (RIMSendLatencyMgtDeviceRequest.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

_UNKNOWN **RIMSendLatencyMgtRequest()
{
  struct _LIST_ENTRY *Flink; // rbx
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  struct _LIST_ENTRY *v4; // rcx
  struct _LIST_ENTRY **p_Blink; // rax
  _QWORD *v6; // rbp
  _QWORD *v7; // r15
  __int64 j; // rsi
  _QWORD *v9; // r14
  _UNKNOWN **result; // rax
  _QWORD *i; // [rsp+30h] [rbp-28h] BYREF
  struct _LIST_ENTRY *v12; // [rsp+38h] [rbp-20h]

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_((_DWORD)gRimLog, 4, 1, 16, (__int64)&WPP_3dad3ee8f2c63b1dd75b8c8399438bb6_Traceguids);
  EtwTraceLatencyModeSwitchStart();
  RIMLockExclusive((__int64)&gObListLock);
  Flink = gObRimList.Flink;
  v12 = (struct _LIST_ENTRY *)&i;
  for ( i = &i; Flink != &gObRimList; Flink = Flink->Flink )
  {
    if ( ObReferenceObjectByPointer(&Flink[-1], 3u, ExRawInputManagerObjectType, 0) < 0 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v2, v1, v3);
    v4 = v12;
    p_Blink = &Flink[54].Blink;
    if ( v12->Flink != (struct _LIST_ENTRY *)&i )
      __fastfail(3u);
    Flink[55].Flink = v12;
    *p_Blink = (struct _LIST_ENTRY *)&i;
    v4->Flink = (struct _LIST_ENTRY *)p_Blink;
    v12 = (struct _LIST_ENTRY *)((char *)Flink + 872);
  }
  qword_1C0215788 = 0LL;
  ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
  KeLeaveCriticalRegion();
  v9 = i;
  while ( v9 != &i )
  {
    v6 = v9 - 111;
    v7 = v9;
    for ( j = *(v9 - 58); j; j = *(_QWORD *)(j + 40) )
    {
      if ( (*(_DWORD *)(j + 200) & 0x80u) != 0 )
      {
        RIMLockExclusive((__int64)(v6 + 13));
        RIMLockExclusive((__int64)(v6 + 71));
        RIMSendLatencyMgtDeviceRequest((struct RIMDEV *)j);
        v6[72] = 0LL;
        ExReleasePushLockExclusiveEx(v6 + 71, 0LL);
        KeLeaveCriticalRegion();
        v6[14] = 0LL;
        ExReleasePushLockExclusiveEx(v6 + 13, 0LL);
        KeLeaveCriticalRegion();
      }
    }
    v9 = (_QWORD *)*v9;
    v7[1] = v7;
    *v7 = v7;
    ObfDereferenceObject(v6);
  }
  EtwTraceLatencyModeSwitchStop();
  result = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    return (_UNKNOWN **)WPP_RECORDER_SF_(
                          (_DWORD)gRimLog,
                          4,
                          1,
                          17,
                          (__int64)&WPP_3dad3ee8f2c63b1dd75b8c8399438bb6_Traceguids);
  return result;
}
