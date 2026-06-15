/*
 * XREFs of PolicyConfigSetDeviceSpatialSettings @ 0x1800D7A60
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180010050 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     _TlgWrite @ 0x180025550 (_TlgWrite.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x180032F40 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     _TlgCreateWsz @ 0x18004148C (_TlgCreateWsz.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180048F7C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     atexit @ 0x180060C74 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PolicyConfigSetDeviceSpatialSettings(__int64 a1, const WCHAR *a2, char *a3, unsigned __int16 *a4)
{
  __int64 v8; // r8
  void *v9; // r8
  unsigned int v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // r9
  unsigned int v13; // eax
  void *v14; // r8
  const struct _TlgProvider_t *v15; // rsi
  int v16; // eax
  LPCGUID v17; // r8
  LPCGUID v18; // r9
  void *v19; // r8
  const struct _TlgProvider_t *v20; // rsi
  LPCGUID v21; // r8
  LPCGUID v22; // r9
  int v23; // eax
  char v25; // [rsp+30h] [rbp-D0h] BYREF
  char v26; // [rsp+31h] [rbp-CFh] BYREF
  __int16 v27; // [rsp+32h] [rbp-CEh] BYREF
  WINBOOL fPending; // [rsp+34h] [rbp-CCh] BYREF
  LPVOID Context; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v30; // [rsp+40h] [rbp-C0h] BYREF
  WINBOOL v31; // [rsp+48h] [rbp-B8h] BYREF
  int v32; // [rsp+4Ch] [rbp-B4h] BYREF
  WINBOOL v33; // [rsp+50h] [rbp-B0h] BYREF
  LPVOID v34; // [rsp+58h] [rbp-A8h] BYREF
  LPVOID v35; // [rsp+60h] [rbp-A0h] BYREF
  struct _TP_TIMER *pv[7]; // [rsp+68h] [rbp-98h] BYREF
  GUID v37; // [rsp+A0h] [rbp-60h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+B0h] [rbp-50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+D0h] [rbp-30h] BYREF
  int *v40; // [rsp+E0h] [rbp-20h]
  __int64 v41; // [rsp+E8h] [rbp-18h]
  char *v42; // [rsp+F0h] [rbp-10h]
  __int64 v43; // [rsp+F8h] [rbp-8h]
  char *v44; // [rsp+100h] [rbp+0h]
  __int64 v45; // [rsp+108h] [rbp+8h]
  __int16 *v46; // [rsp+110h] [rbp+10h]
  __int64 v47; // [rsp+118h] [rbp+18h]
  struct _EVENT_DATA_DESCRIPTOR v48; // [rsp+120h] [rbp+20h] BYREF
  unsigned __int16 *v49; // [rsp+130h] [rbp+30h]
  __int64 v50; // [rsp+138h] [rbp+38h]
  unsigned __int16 *v51; // [rsp+140h] [rbp+40h]
  __int64 v52; // [rsp+148h] [rbp+48h]
  unsigned __int16 *v53; // [rsp+150h] [rbp+50h]
  __int64 v54; // [rsp+158h] [rbp+58h]
  GUID *v55; // [rsp+160h] [rbp+60h]
  __int64 v56; // [rsp+168h] [rbp+68h]
  EVENT_DATA_DESCRIPTOR v57; // [rsp+170h] [rbp+70h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v58; // [rsp+190h] [rbp+90h] BYREF
  LPVOID *p_Context; // [rsp+1A0h] [rbp+A0h]
  __int64 v60; // [rsp+1A8h] [rbp+A8h]
  char *v61; // [rsp+1B0h] [rbp+B0h]
  __int64 v62; // [rsp+1B8h] [rbp+B8h]
  char *v63; // [rsp+1C0h] [rbp+C0h]
  __int64 v64; // [rsp+1C8h] [rbp+C8h]
  WINBOOL *p_fPending; // [rsp+1D0h] [rbp+D0h]
  __int64 v66; // [rsp+1D8h] [rbp+D8h]
  wil::details::in1diag3 *retaddr; // [rsp+238h] [rbp+138h]

  Context = 0LL;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = qword_1801B3518;
    qword_1801B3518[0] = &AudioSrvTelemetryProvider::`vftable';
    qword_1801B3530 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1801B3518, qword_1801B3530, v9);
    InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_1801B3518);
  }
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    pv,
    *((struct _TP_TIMER **)Context + 1),
    v8,
    (struct _TP_TIMER *)L"PolicyConfigSetDeviceSpatialSettings");
  if ( a3 )
  {
    v30 = 0LL;
    if ( (*(int (__fastcall **)(struct IAudioPolicyManager *, __int64, __int64 *))(*(_QWORD *)g_PolicyManager + 32LL))(
           g_PolicyManager,
           a1,
           &v30) >= 0 )
    {
      if ( a4 )
      {
        v13 = *a4;
        v34 = 0LL;
        v37 = GUID_00000000_0000_0010_8000_00aa00389b71;
        v37.Data1 = v13;
        if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &v31, &v34) && v31 )
        {
          v34 = qword_1801B3518;
          qword_1801B3518[0] = &AudioSrvTelemetryProvider::`vftable';
          qword_1801B3530 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
          atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
          wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1801B3518, qword_1801B3530, v14);
          InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_1801B3518);
        }
        v15 = (const struct _TlgProvider_t *)*((_QWORD *)v34 + 1);
        if ( *(_DWORD *)v15 > 4u )
        {
          TlgCreateWsz(&pDesc, a2);
          v16 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v30 + 40LL))(v30);
          v41 = 4LL;
          v32 = v16;
          v43 = 1LL;
          v40 = &v32;
          v25 = *a3;
          v42 = &v25;
          v44 = a3 + 12;
          v27 = *((_WORD *)a3 + 34);
          v46 = &v27;
          v45 = 16LL;
          v47 = 2LL;
          TlgCreateWsz(&v48, L"WFEX");
          v50 = 2LL;
          v51 = a4 + 2;
          v49 = a4 + 1;
          v53 = a4 + 4;
          v55 = &v37;
          v52 = 4LL;
          v54 = 4LL;
          v56 = 16LL;
          TlgWrite(v15, &unk_180172CFD, v17, v18, 0xCu, &pData);
        }
      }
      else
      {
        v35 = 0LL;
        if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &v33, &v35) && v33 )
        {
          v35 = qword_1801B3518;
          qword_1801B3518[0] = &AudioSrvTelemetryProvider::`vftable';
          qword_1801B3530 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
          atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
          wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1801B3518, qword_1801B3530, v19);
          InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_1801B3518);
        }
        v20 = (const struct _TlgProvider_t *)*((_QWORD *)v35 + 1);
        if ( *(_DWORD *)v20 > 4u )
        {
          TlgCreateWsz(&v58, a2);
          LODWORD(Context) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v30 + 40LL))(v30);
          p_Context = &Context;
          v26 = *a3;
          v61 = &v26;
          v63 = a3 + 12;
          LOWORD(fPending) = *((_WORD *)a3 + 34);
          p_fPending = &fPending;
          v60 = 4LL;
          v62 = 1LL;
          v64 = 16LL;
          v66 = 2LL;
          TlgWrite(v20, &unk_180172C8D, v21, v22, 7u, &v57);
        }
      }
    }
    if ( v30 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
    v23 = (*(__int64 (__fastcall **)(struct IPolicyConfig *, const WCHAR *, char *, unsigned __int16 *))(*(_QWORD *)g_PolicyConfig + 280LL))(
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
    v11 = 7561LL;
  }
  else
  {
    v10 = -2147467261;
    v11 = 7527LL;
    v12 = 2147500035LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    v11,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
    (const char *)v12);
LABEL_24:
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return v10;
}
