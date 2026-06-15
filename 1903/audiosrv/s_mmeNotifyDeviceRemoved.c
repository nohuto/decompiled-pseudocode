/*
 * XREFs of s_mmeNotifyDeviceRemoved @ 0x180104EE0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x18000FFE0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x18002B0F0 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18004F6E0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     atexit @ 0x1800642B4 (atexit.c)
 *     ?CheckRpcClientTokenMembershipsDisjunctive@@YAHPEAX0PEAH@Z @ 0x1801047A4 (-CheckRpcClientTokenMembershipsDisjunctive@@YAHPEAX0PEAH@Z.c)
 *     ?MmeOnDeviceRemoved@@YAJPEBG@Z @ 0x180104AA4 (-MmeOnDeviceRemoved@@YAJPEBG@Z.c)
 */

__int64 __fastcall s_mmeNotifyDeviceRemoved(__int64 a1, const unsigned __int16 *a2)
{
  DWORD v3; // ebx
  __int64 v4; // r8
  void *v5; // r8
  void *v6; // rdx
  void *v7; // rcx
  DWORD LastError; // eax
  LPVOID Context; // [rsp+30h] [rbp-48h] BYREF
  struct _TP_TIMER *pv[7]; // [rsp+38h] [rbp-40h] BYREF
  int v12; // [rsp+90h] [rbp+18h] BYREF
  WINBOOL fPending; // [rsp+98h] [rbp+20h] BYREF

  v3 = 0;
  if ( (unsigned int)IsMmeNotifyDeviceRemovedSupported() )
  {
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context)
      && fPending )
    {
      Context = &qword_1801B8588;
      qword_1801B8588 = &AudioSrvTelemetryProvider::`vftable';
      qword_1801B85A0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1801B8588, qword_1801B85A0, v5);
      InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &qword_1801B8588);
    }
    CWatchdogTimer<1>::CWatchdogTimer<1>(
      pv,
      *((struct _TP_TIMER **)Context + 1),
      v4,
      (struct _TP_TIMER *)L"s_mmeNotifyDeviceRemoved");
    if ( (unsigned int)CheckRpcClientTokenMembershipsDisjunctive(v7, v6, &v12) )
    {
      if ( v12 )
      {
        MmeOnDeviceRemoved(a2);
        if ( v12 )
          goto LABEL_11;
      }
      LastError = 5;
    }
    else
    {
      LastError = GetLastError();
    }
    v3 = LastError;
LABEL_11:
    CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
    return v3;
  }
  return 1LL;
}
