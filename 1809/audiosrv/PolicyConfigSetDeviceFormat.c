/*
 * XREFs of PolicyConfigSetDeviceFormat @ 0x1800D76F0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180010050 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     _TlgWrite @ 0x180025550 (_TlgWrite.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x180032F40 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     _TlgCreateWsz @ 0x18004148C (_TlgCreateWsz.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180048F7C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     atexit @ 0x180060C74 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PolicyConfigSetDeviceFormat(__int64 a1, const WCHAR *a2, unsigned __int16 *a3)
{
  __int64 v6; // r8
  void *v7; // r8
  unsigned int v8; // eax
  void *v9; // r8
  const struct _TlgProvider_t *v10; // rdi
  int v11; // eax
  LPCGUID v12; // r8
  LPCGUID v13; // r9
  void *v14; // r8
  const struct _TlgProvider_t *v15; // rdi
  LPCGUID v16; // r8
  LPCGUID v17; // r9
  unsigned int v18; // ebx
  WINBOOL fPending; // [rsp+30h] [rbp-D0h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v22; // [rsp+40h] [rbp-C0h] BYREF
  int v23; // [rsp+48h] [rbp-B8h] BYREF
  WINBOOL v24; // [rsp+4Ch] [rbp-B4h] BYREF
  LPVOID v25; // [rsp+50h] [rbp-B0h] BYREF
  LPVOID v26; // [rsp+58h] [rbp-A8h] BYREF
  struct _TP_TIMER *pv[7]; // [rsp+60h] [rbp-A0h] BYREF
  GUID v28; // [rsp+98h] [rbp-68h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+B0h] [rbp-50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+D0h] [rbp-30h] BYREF
  int *v31; // [rsp+E0h] [rbp-20h]
  __int64 v32; // [rsp+E8h] [rbp-18h]
  struct _EVENT_DATA_DESCRIPTOR v33; // [rsp+F0h] [rbp-10h] BYREF
  unsigned __int16 *v34; // [rsp+100h] [rbp+0h]
  __int64 v35; // [rsp+108h] [rbp+8h]
  unsigned __int16 *v36; // [rsp+110h] [rbp+10h]
  __int64 v37; // [rsp+118h] [rbp+18h]
  unsigned __int16 *v38; // [rsp+120h] [rbp+20h]
  __int64 v39; // [rsp+128h] [rbp+28h]
  GUID *v40; // [rsp+130h] [rbp+30h]
  __int64 v41; // [rsp+138h] [rbp+38h]
  EVENT_DATA_DESCRIPTOR v42; // [rsp+140h] [rbp+40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v43; // [rsp+160h] [rbp+60h] BYREF
  LPVOID *p_Context; // [rsp+170h] [rbp+70h]
  __int64 v45; // [rsp+178h] [rbp+78h]

  Context = 0LL;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = qword_1801B3518;
    qword_1801B3518[0] = &AudioSrvTelemetryProvider::`vftable';
    qword_1801B3530 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1801B3518, qword_1801B3530, v7);
    InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_1801B3518);
  }
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    pv,
    *((struct _TP_TIMER **)Context + 1),
    v6,
    (struct _TP_TIMER *)L"PolicyConfigSetDeviceFormat");
  v22 = 0LL;
  if ( (*(int (__fastcall **)(struct IAudioPolicyManager *, __int64, __int64 *))(*(_QWORD *)g_PolicyManager + 32LL))(
         g_PolicyManager,
         a1,
         &v22) >= 0 )
  {
    if ( a3 )
    {
      v8 = *a3;
      v25 = 0LL;
      v28 = GUID_00000000_0000_0010_8000_00aa00389b71;
      v28.Data1 = v8;
      if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &v25) && fPending )
      {
        v25 = qword_1801B3518;
        qword_1801B3518[0] = &AudioSrvTelemetryProvider::`vftable';
        qword_1801B3530 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
        atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
        wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1801B3518, qword_1801B3530, v9);
        InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_1801B3518);
      }
      v10 = (const struct _TlgProvider_t *)*((_QWORD *)v25 + 1);
      if ( *(_DWORD *)v10 > 4u )
      {
        TlgCreateWsz(&pDesc, a2);
        v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v22 + 40LL))(v22);
        v32 = 4LL;
        v23 = v11;
        v31 = &v23;
        TlgCreateWsz(&v33, L"WFEX");
        v35 = 2LL;
        v36 = a3 + 2;
        v34 = a3 + 1;
        v38 = a3 + 4;
        v40 = &v28;
        v37 = 4LL;
        v39 = 4LL;
        v41 = 16LL;
        TlgWrite(v10, &unk_180172E5C, v12, v13, 9u, &pData);
      }
    }
    else
    {
      v26 = 0LL;
      if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &v24, &v26) && v24 )
      {
        v26 = qword_1801B3518;
        qword_1801B3518[0] = &AudioSrvTelemetryProvider::`vftable';
        qword_1801B3530 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
        atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
        wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1801B3518, qword_1801B3530, v14);
        InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_1801B3518);
      }
      v15 = (const struct _TlgProvider_t *)*((_QWORD *)v26 + 1);
      if ( *(_DWORD *)v15 > 4u )
      {
        TlgCreateWsz(&v43, a2);
        LODWORD(Context) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v22 + 40LL))(v22);
        p_Context = &Context;
        v45 = 4LL;
        TlgWrite(v15, &unk_180172E20, v16, v17, 4u, &v42);
      }
    }
  }
  if ( v22 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  v18 = (*(__int64 (__fastcall **)(struct IPolicyConfig *, const WCHAR *, unsigned __int16 *, _QWORD))(*(_QWORD *)g_PolicyConfig + 48LL))(
          g_PolicyConfig,
          a2,
          a3,
          0LL);
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return v18;
}
