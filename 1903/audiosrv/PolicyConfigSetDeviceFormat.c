/*
 * XREFs of PolicyConfigSetDeviceFormat @ 0x1800E2DC0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x18000FFE0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     _TlgWrite @ 0x18001AD10 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x18001C6E0 (_TlgCreateWsz.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x18002B0F0 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18004F6E0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180063BD0 (__security_check_cookie.c)
 *     atexit @ 0x1800642B4 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PolicyConfigSetDeviceFormat(__int64 a1, const WCHAR *a2, unsigned __int16 *a3)
{
  __int64 v6; // r8
  void *v7; // r8
  unsigned int v8; // eax
  void *v9; // r8
  const struct _TlgProvider_t *v10; // rdi
  WINBOOL v11; // eax
  LPCGUID v12; // r8
  LPCGUID v13; // r9
  void *v14; // r8
  const struct _TlgProvider_t *v15; // rdi
  LPCGUID v16; // r8
  LPCGUID v17; // r9
  unsigned int v18; // ebx
  WINBOOL fPending; // [rsp+30h] [rbp-D0h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-C8h] BYREF
  WINBOOL v22; // [rsp+40h] [rbp-C0h] BYREF
  LPVOID v23; // [rsp+48h] [rbp-B8h] BYREF
  struct _TP_TIMER *pv[7]; // [rsp+50h] [rbp-B0h] BYREF
  GUID v25; // [rsp+88h] [rbp-78h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+A0h] [rbp-60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+C0h] [rbp-40h] BYREF
  WINBOOL *v28; // [rsp+D0h] [rbp-30h]
  __int64 v29; // [rsp+D8h] [rbp-28h]
  struct _EVENT_DATA_DESCRIPTOR v30; // [rsp+E0h] [rbp-20h] BYREF
  unsigned __int16 *v31; // [rsp+F0h] [rbp-10h]
  __int64 v32; // [rsp+F8h] [rbp-8h]
  unsigned __int16 *v33; // [rsp+100h] [rbp+0h]
  __int64 v34; // [rsp+108h] [rbp+8h]
  unsigned __int16 *v35; // [rsp+110h] [rbp+10h]
  __int64 v36; // [rsp+118h] [rbp+18h]
  GUID *v37; // [rsp+120h] [rbp+20h]
  __int64 v38; // [rsp+128h] [rbp+28h]
  EVENT_DATA_DESCRIPTOR v39; // [rsp+130h] [rbp+30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v40; // [rsp+150h] [rbp+50h] BYREF
  WINBOOL *p_fPending; // [rsp+160h] [rbp+60h]
  __int64 v42; // [rsp+168h] [rbp+68h]

  Context = 0LL;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = &qword_1801B8588;
    qword_1801B8588 = &AudioSrvTelemetryProvider::`vftable';
    qword_1801B85A0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1801B8588, qword_1801B85A0, v7);
    InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &qword_1801B8588);
  }
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    pv,
    *((struct _TP_TIMER **)Context + 1),
    v6,
    (struct _TP_TIMER *)L"PolicyConfigSetDeviceFormat");
  Context = 0LL;
  if ( (*(int (__fastcall **)(struct IAudioPolicyManager *, __int64, LPVOID *))(*(_QWORD *)g_PolicyManager + 32LL))(
         g_PolicyManager,
         a1,
         &Context) >= 0 )
  {
    v23 = 0LL;
    if ( a3 )
    {
      v8 = *a3;
      v25 = GUID_00000000_0000_0010_8000_00aa00389b71;
      v25.Data1 = v8;
      if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &v23) && fPending )
      {
        v23 = &qword_1801B8588;
        qword_1801B8588 = &AudioSrvTelemetryProvider::`vftable';
        qword_1801B85A0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
        atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
        wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1801B8588, qword_1801B85A0, v9);
        InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &qword_1801B8588);
      }
      v10 = (const struct _TlgProvider_t *)*((_QWORD *)v23 + 1);
      if ( *(_DWORD *)v10 > 4u )
      {
        TlgCreateWsz(&pDesc, a2);
        v11 = (*(__int64 (__fastcall **)(LPVOID))(*(_QWORD *)Context + 40LL))(Context);
        v29 = 4LL;
        v22 = v11;
        v28 = &v22;
        TlgCreateWsz(&v30, L"WFEX");
        v32 = 2LL;
        v33 = a3 + 2;
        v31 = a3 + 1;
        v35 = a3 + 4;
        v37 = &v25;
        v34 = 4LL;
        v36 = 4LL;
        v38 = 16LL;
        TlgWrite(v10, &unk_180178165, v12, v13, 9u, &pData);
      }
    }
    else
    {
      if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &v22, &v23) && v22 )
      {
        v23 = &qword_1801B8588;
        qword_1801B8588 = &AudioSrvTelemetryProvider::`vftable';
        qword_1801B85A0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
        atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
        wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1801B8588, qword_1801B85A0, v14);
        InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &qword_1801B8588);
      }
      v15 = (const struct _TlgProvider_t *)*((_QWORD *)v23 + 1);
      if ( *(_DWORD *)v15 > 4u )
      {
        TlgCreateWsz(&v40, a2);
        fPending = (*(__int64 (__fastcall **)(LPVOID))(*(_QWORD *)Context + 40LL))(Context);
        p_fPending = &fPending;
        v42 = 4LL;
        TlgWrite(v15, &unk_180178129, v16, v17, 4u, &v39);
      }
    }
  }
  if ( Context )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)Context + 16LL))(Context);
  v18 = (*(__int64 (__fastcall **)(CPolicyConfig *, const WCHAR *, unsigned __int16 *, _QWORD))(*(_QWORD *)g_PolicyConfig
                                                                                              + 48LL))(
          g_PolicyConfig,
          a2,
          a3,
          0LL);
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return v18;
}
