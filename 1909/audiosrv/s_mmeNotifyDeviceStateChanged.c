/*
 * XREFs of s_mmeNotifyDeviceStateChanged @ 0x180104B10
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800132C0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x18002DF80 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x1800505A0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     atexit @ 0x1800652A4 (atexit.c)
 *     ?CheckRpcClientTokenMembershipsDisjunctive@@YAHPEAX0PEAH@Z @ 0x1801042A4 (-CheckRpcClientTokenMembershipsDisjunctive@@YAHPEAX0PEAH@Z.c)
 *     ?MmeOnDeviceStateChanged@@YAJPEBGK@Z @ 0x180104630 (-MmeOnDeviceStateChanged@@YAJPEBGK@Z.c)
 *     ?OnDeviceStateChanged@DynamicAudioEndpointManager@@QEAAXPEBGK@Z @ 0x18012AEEC (-OnDeviceStateChanged@DynamicAudioEndpointManager@@QEAAXPEBGK@Z.c)
 */

__int64 __fastcall s_mmeNotifyDeviceStateChanged(__int64 a1, const unsigned __int16 *a2, unsigned int a3)
{
  DWORD v5; // ebx
  __int64 v6; // r8
  void *v7; // r8
  void *v8; // rdx
  void *v9; // rcx
  DynamicAudioEndpointManager *v10; // rcx
  DWORD LastError; // eax
  WINBOOL fPending; // [rsp+30h] [rbp-58h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-50h] BYREF
  struct _TP_TIMER *pv[8]; // [rsp+40h] [rbp-48h] BYREF
  int v16; // [rsp+A8h] [rbp+20h] BYREF

  v5 = 0;
  if ( (unsigned int)IsMmeNotifyDeviceStateChangedSupported() )
  {
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context)
      && fPending )
    {
      Context = &qword_1801B7588;
      qword_1801B7588 = &AudioSrvTelemetryProvider::`vftable';
      qword_1801B75A0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1801B7588, qword_1801B75A0, v7);
      InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &qword_1801B7588);
    }
    CWatchdogTimer<1>::CWatchdogTimer<1>(
      pv,
      *((struct _TP_TIMER **)Context + 1),
      v6,
      (struct _TP_TIMER *)L"s_mmeNotifyDeviceStateChanged");
    if ( (unsigned int)CheckRpcClientTokenMembershipsDisjunctive(v9, v8, &v16) )
    {
      if ( v16 )
      {
        MmeOnDeviceStateChanged(a2);
        DynamicAudioEndpointManager::OnDeviceStateChanged(v10, a2, a3);
        if ( v16 )
          goto LABEL_11;
      }
      LastError = 5;
    }
    else
    {
      LastError = GetLastError();
    }
    v5 = LastError;
LABEL_11:
    CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
    return v5;
  }
  return 1LL;
}
