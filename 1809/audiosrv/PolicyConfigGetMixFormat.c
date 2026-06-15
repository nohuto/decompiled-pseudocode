/*
 * XREFs of PolicyConfigGetMixFormat @ 0x1800D6D80
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180009C58 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180010050 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     MIDL_user_allocate @ 0x180014480 (MIDL_user_allocate.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x180032F40 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@P6AJPEAV1@0@ZPEAPEAUtWAVEFORMATEX@@@Z @ 0x180035460 (-GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180048F7C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     atexit @ 0x180060C74 (atexit.c)
 *     memcpy_0 @ 0x1800688A3 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PolicyConfigGetMixFormat(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v5; // r8
  void *v6; // r8
  int v7; // ebx
  int (*v8)(struct CEndpointCharacteristics *, enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001); // r9
  int MixFormat; // eax
  unsigned __int16 *v10; // rdi
  void *v11; // rax
  CEndpointCharacteristics *v13; // [rsp+30h] [rbp-19h] BYREF
  void *Src; // [rsp+38h] [rbp-11h] BYREF
  struct _GUID v15; // [rsp+40h] [rbp-9h] BYREF
  struct _TP_TIMER *pv[10]; // [rsp+50h] [rbp+7h] BYREF
  WINBOOL fPending; // [rsp+C0h] [rbp+77h] BYREF
  LPVOID Context; // [rsp+C8h] [rbp+7Fh] BYREF

  Src = 0LL;
  v13 = 0LL;
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = qword_1801B3518;
    qword_1801B3518[0] = &AudioSrvTelemetryProvider::`vftable';
    qword_1801B3530 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1801B3518, qword_1801B3530, v6);
    InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_1801B3518);
  }
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    pv,
    *((struct _TP_TIMER **)Context + 1),
    v5,
    (struct _TP_TIMER *)L"PolicyConfigGetMixFormat");
  *a3 = 0LL;
  v7 = (*(__int64 (__fastcall **)(PVOID, __int64, _QWORD, _QWORD, CEndpointCharacteristics **))(*(_QWORD *)g_pEndpointCharacteristicsCache
                                                                                              + 24LL))(
         g_pEndpointCharacteristicsCache,
         a2,
         0LL,
         0LL,
         &v13);
  if ( v7 < 0 )
    goto LABEL_12;
  v15 = GUID_00000000_0000_0000_0000_000000000000;
  MixFormat = CEndpointCharacteristics::GetMixFormat(
                v13,
                eHostProcessConnector,
                &v15,
                v8,
                (struct tWAVEFORMATEX **)&Src);
  v10 = (unsigned __int16 *)Src;
  v7 = MixFormat;
  if ( MixFormat >= 0 )
  {
    v11 = MIDL_user_allocate(*((unsigned __int16 *)Src + 8) + 18LL);
    *a3 = v11;
    if ( v11 )
      memcpy_0(v11, v10, v10[8] + 18LL);
    else
      v7 = -2147024882;
  }
  if ( v10 )
    CoTaskMemFree(v10);
  if ( v7 < 0 )
LABEL_12:
    AudSrvTraceLoggingErrorHelper("PolicyConfigGetMixFormat", 6874, v7);
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  if ( v13 )
    (*(void (__fastcall **)(CEndpointCharacteristics *))(*(_QWORD *)v13 + 16LL))(v13);
  return (unsigned int)v7;
}
