/*
 * XREFs of RIMSendLatencyMgtRequest @ 0x1C009DC40
 * Callers:
 *     ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1C00A3044 (-xxxUserPowerStateCalloutWorker@@YAJXZ.c)
 *     ?SetInputModeWithCrit@@YAXW4_WIN32K_INPUT_MODE@@@Z @ 0x1C00E1B64 (-SetInputModeWithCrit@@YAXW4_WIN32K_INPUT_MODE@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0031320 (RIMLockExclusive.c)
 *     ?UnLockExclusive@CInpPushLock@@QEAAXXZ @ 0x1C00514E0 (-UnLockExclusive@CInpPushLock@@QEAAXXZ.c)
 *     EtwTraceLatencyModeSwitchStop @ 0x1C0095AC0 (EtwTraceLatencyModeSwitchStop.c)
 *     EtwTraceLatencyModeSwitchStart @ 0x1C0095AE0 (EtwTraceLatencyModeSwitchStart.c)
 *     RIMSendLatencyMgtDeviceRequest @ 0x1C011B7F4 (RIMSendLatencyMgtDeviceRequest.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMSendLatencyMgtRequest(unsigned int a1)
{
  struct _MCGEN_TRACE_CONTEXT *v2; // rcx
  struct _LIST_ENTRY *Flink; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  struct _LIST_ENTRY *v7; // rcx
  struct _LIST_ENTRY **p_Blink; // rax
  struct _MCGEN_TRACE_CONTEXT *v9; // rcx
  _QWORD *v10; // r14
  _QWORD *v11; // rbp
  _QWORD *v12; // r15
  __int64 i; // rsi
  _QWORD *v15; // [rsp+30h] [rbp-28h] BYREF
  struct _LIST_ENTRY *v16; // [rsp+38h] [rbp-20h]

  WPP_RECORDER_SF_(gRimLog, 3u, 0x15u, 0x10u, (__int64)&WPP_77fb14f46d7939977b038ac27e79c1db_Traceguids);
  EtwTraceLatencyModeSwitchStart(v2);
  RIMLockExclusive((__int64)&gObListLock);
  Flink = gObRimList.Flink;
  v16 = (struct _LIST_ENTRY *)&v15;
  v15 = &v15;
  while ( Flink != &gObRimList )
  {
    if ( !LOBYTE(Flink[4].Flink) && !BYTE1(Flink[4].Flink) )
    {
      if ( ObReferenceObjectByPointer(&Flink[-1], 3u, ExRawInputManagerObjectType, 0) < 0 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v4, v6);
      v7 = v16;
      p_Blink = &Flink[54].Blink;
      if ( v16->Flink != (struct _LIST_ENTRY *)&v15 )
        __fastfail(3u);
      Flink[55].Flink = v16;
      *p_Blink = (struct _LIST_ENTRY *)&v15;
      v7->Flink = (struct _LIST_ENTRY *)p_Blink;
      v16 = (struct _LIST_ENTRY *)((char *)Flink + 872);
    }
    Flink = Flink->Flink;
  }
  CInpPushLock::UnLockExclusive((CInpPushLock *)&gObListLock);
  v10 = v15;
  while ( v10 != &v15 )
  {
    v11 = v10 - 111;
    v12 = v10;
    for ( i = *(v10 - 58); i; i = *(_QWORD *)(i + 40) )
    {
      if ( (*(_DWORD *)(i + 200) & 0x80u) != 0 )
      {
        RIMLockExclusive((__int64)(v11 + 13));
        RIMLockExclusive((__int64)(v11 + 71));
        RIMSendLatencyMgtDeviceRequest(i, *(_QWORD *)(i + 464), a1);
        CInpPushLock::UnLockExclusive((CInpPushLock *)(v11 + 71));
        CInpPushLock::UnLockExclusive((CInpPushLock *)(v11 + 13));
      }
    }
    v10 = (_QWORD *)*v10;
    v12[1] = v12;
    *v12 = v12;
    ObfDereferenceObject(v11);
  }
  EtwTraceLatencyModeSwitchStop(v9);
  return WPP_RECORDER_SF_(gRimLog, 3u, 0x15u, 0x11u, (__int64)&WPP_77fb14f46d7939977b038ac27e79c1db_Traceguids);
}
