/*
 * XREFs of PolicyConfigSetDeviceSpatialSettings @ 0x1800E2C80
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A58 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800132C0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     _TlgWrite @ 0x18001DFF0 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x18001F9C0 (_TlgCreateWsz.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x18002DF80 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x1800505A0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180064BC0 (__security_check_cookie.c)
 *     atexit @ 0x1800652A4 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PolicyConfigSetDeviceSpatialSettings(__int64 a1, const WCHAR *a2, __int64 a3, unsigned __int16 *a4)
{
  __int64 v8; // r8
  void *v9; // r8
  unsigned int v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // r9
  unsigned int v13; // eax
  void *v14; // r8
  const struct _TlgProvider_t *v15; // rsi
  WINBOOL v16; // eax
  LPCGUID v17; // r8
  LPCGUID v18; // r9
  void *v19; // r8
  const struct _TlgProvider_t *v20; // rsi
  LPCGUID v21; // r8
  LPCGUID v22; // r9
  int v23; // eax
  _BYTE v25[4]; // [rsp+30h] [rbp-D0h] BYREF
  WINBOOL fPending; // [rsp+34h] [rbp-CCh] BYREF
  LPVOID Context; // [rsp+38h] [rbp-C8h] BYREF
  WINBOOL v28; // [rsp+40h] [rbp-C0h] BYREF
  WINBOOL v29; // [rsp+44h] [rbp-BCh] BYREF
  LPVOID v30; // [rsp+48h] [rbp-B8h] BYREF
  struct _TP_TIMER *pv[7]; // [rsp+50h] [rbp-B0h] BYREF
  GUID v32; // [rsp+88h] [rbp-78h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+A0h] [rbp-60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+C0h] [rbp-40h] BYREF
  WINBOOL *v35; // [rsp+D0h] [rbp-30h]
  __int64 v36; // [rsp+D8h] [rbp-28h]
  _BYTE *v37; // [rsp+E0h] [rbp-20h]
  __int64 v38; // [rsp+E8h] [rbp-18h]
  __int64 v39; // [rsp+F0h] [rbp-10h]
  __int64 v40; // [rsp+F8h] [rbp-8h]
  WINBOOL *p_fPending; // [rsp+100h] [rbp+0h]
  __int64 v42; // [rsp+108h] [rbp+8h]
  struct _EVENT_DATA_DESCRIPTOR v43; // [rsp+110h] [rbp+10h] BYREF
  unsigned __int16 *v44; // [rsp+120h] [rbp+20h]
  __int64 v45; // [rsp+128h] [rbp+28h]
  unsigned __int16 *v46; // [rsp+130h] [rbp+30h]
  __int64 v47; // [rsp+138h] [rbp+38h]
  unsigned __int16 *v48; // [rsp+140h] [rbp+40h]
  __int64 v49; // [rsp+148h] [rbp+48h]
  GUID *v50; // [rsp+150h] [rbp+50h]
  __int64 v51; // [rsp+158h] [rbp+58h]
  wil::details::in1diag3 *retaddr; // [rsp+1B8h] [rbp+B8h]

  Context = 0LL;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
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
    (struct _TP_TIMER *)L"PolicyConfigSetDeviceSpatialSettings");
  if ( a3 )
  {
    Context = 0LL;
    if ( (*(int (__fastcall **)(struct IAudioPolicyManager *, __int64, LPVOID *))(*(_QWORD *)g_PolicyManager + 32LL))(
           g_PolicyManager,
           a1,
           &Context) >= 0 )
    {
      v30 = 0LL;
      if ( a4 )
      {
        v13 = *a4;
        v32 = GUID_00000000_0000_0010_8000_00aa00389b71;
        v32.Data1 = v13;
        if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &v28, &v30) && v28 )
        {
          v30 = &qword_1801B7588;
          qword_1801B7588 = &AudioSrvTelemetryProvider::`vftable';
          qword_1801B75A0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
          atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
          wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1801B7588, qword_1801B75A0, v14);
          InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &qword_1801B7588);
        }
        v15 = (const struct _TlgProvider_t *)*((_QWORD *)v30 + 1);
        if ( *(_DWORD *)v15 > 4u )
        {
          TlgCreateWsz(&pDesc, a2);
          v16 = (*(__int64 (__fastcall **)(LPVOID))(*(_QWORD *)Context + 40LL))(Context);
          v36 = 4LL;
          v29 = v16;
          v38 = 1LL;
          v35 = &v29;
          v25[0] = *(_BYTE *)a3;
          v37 = v25;
          v39 = a3 + 12;
          LOWORD(fPending) = *(_WORD *)(a3 + 68);
          p_fPending = &fPending;
          v40 = 16LL;
          v42 = 2LL;
          TlgCreateWsz(&v43, L"WFEX");
          v45 = 2LL;
          v46 = a4 + 2;
          v44 = a4 + 1;
          v48 = a4 + 4;
          v50 = &v32;
          v47 = 4LL;
          v49 = 4LL;
          v51 = 16LL;
          TlgWrite(v15, &unk_18017702B, v17, v18, 0xCu, &pData);
        }
      }
      else
      {
        if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &v29, &v30) && v29 )
        {
          v30 = &qword_1801B7588;
          qword_1801B7588 = &AudioSrvTelemetryProvider::`vftable';
          qword_1801B75A0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
          atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
          wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1801B7588, qword_1801B75A0, v19);
          InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &qword_1801B7588);
        }
        v20 = (const struct _TlgProvider_t *)*((_QWORD *)v30 + 1);
        if ( *(_DWORD *)v20 > 4u )
        {
          TlgCreateWsz(&pDesc, a2);
          v28 = (*(__int64 (__fastcall **)(LPVOID))(*(_QWORD *)Context + 40LL))(Context);
          v35 = &v28;
          v25[0] = *(_BYTE *)a3;
          v37 = v25;
          v39 = a3 + 12;
          LOWORD(fPending) = *(_WORD *)(a3 + 68);
          p_fPending = &fPending;
          v36 = 4LL;
          v38 = 1LL;
          v40 = 16LL;
          v42 = 2LL;
          TlgWrite(v20, &unk_180176FBB, v21, v22, 7u, &pData);
        }
      }
    }
    if ( Context )
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)Context + 16LL))(Context);
    v23 = (*(__int64 (__fastcall **)(CPolicyConfig *, const WCHAR *, __int64, unsigned __int16 *))(*(_QWORD *)g_PolicyConfig
                                                                                                 + 280LL))(
            g_PolicyConfig,
            a2,
            a3,
            a4);
    v10 = v23;
    if ( v23 >= 0 )
    {
      v10 = 0;
      goto LABEL_24;
    }
    v12 = (unsigned int)v23;
    v11 = 5602LL;
  }
  else
  {
    v10 = -2147467261;
    v11 = 5568LL;
    v12 = 2147500035LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
    (const char *)v12);
LABEL_24:
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return v10;
}
