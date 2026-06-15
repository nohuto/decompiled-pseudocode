/*
 * XREFs of s_mmeNotifyDefaultDeviceChanged @ 0x180104770
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800132C0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x18002DF80 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x1800505A0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     atexit @ 0x1800652A4 (atexit.c)
 *     ?CheckRpcClientTokenMembershipsDisjunctive@@YAHPEAX0PEAH@Z @ 0x1801042A4 (-CheckRpcClientTokenMembershipsDisjunctive@@YAHPEAX0PEAH@Z.c)
 *     ?MmeOnDefaultDeviceChanged@@YAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEBG@Z @ 0x1801044BC (-MmeOnDefaultDeviceChanged@@YAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_i.c)
 */

__int64 __fastcall s_mmeNotifyDefaultDeviceChanged(__int64 a1, int a2, char a3, __int64 a4)
{
  DWORD v7; // ebx
  __int64 v8; // r8
  void *v9; // r8
  void *v10; // rdx
  void *v11; // rcx
  DWORD LastError; // eax
  int v14; // [rsp+30h] [rbp-58h] BYREF
  WINBOOL fPending; // [rsp+34h] [rbp-54h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-50h] BYREF
  struct _TP_TIMER *pv[8]; // [rsp+40h] [rbp-48h] BYREF

  v7 = 0;
  if ( (unsigned int)IsMmeNotifyDefaultDeviceChangedSupported() )
  {
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context)
      && fPending )
    {
      Context = &qword_1801B7588;
      qword_1801B7588 = &AudioSrvTelemetryProvider::`vftable';
      qword_1801B75A0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1801B7588, qword_1801B75A0, v9);
      InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &qword_1801B7588);
    }
    CWatchdogTimer<1>::CWatchdogTimer<1>(
      pv,
      *((struct _TP_TIMER **)Context + 1),
      v8,
      (struct _TP_TIMER *)L"s_mmeNotifyDefaultDeviceChanged");
    if ( (unsigned int)CheckRpcClientTokenMembershipsDisjunctive(v11, v10, &v14) )
    {
      if ( v14 )
      {
        MmeOnDefaultDeviceChanged(a2, a3, a4);
        if ( v14 )
          goto LABEL_11;
      }
      LastError = 5;
    }
    else
    {
      LastError = GetLastError();
    }
    v7 = LastError;
LABEL_11:
    CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
    return v7;
  }
  return 1LL;
}
