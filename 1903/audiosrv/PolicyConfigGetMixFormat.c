/*
 * XREFs of PolicyConfigGetMixFormat @ 0x1800E2360
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x18000FFE0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x180018560 (-GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18002A780 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x18002B0F0 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     MIDL_user_allocate @ 0x180042BF0 (MIDL_user_allocate.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18004F6E0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     atexit @ 0x1800642B4 (atexit.c)
 *     memcpy_0 @ 0x18006B903 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PolicyConfigGetMixFormat(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v5; // r8
  void *v6; // r8
  int v7; // ebx
  int MixFormat; // eax
  unsigned __int16 *v9; // rdi
  void *v10; // rax
  CEndpointCharacteristics *v12; // [rsp+30h] [rbp-19h] BYREF
  void *Src; // [rsp+38h] [rbp-11h] BYREF
  struct _GUID v14; // [rsp+40h] [rbp-9h] BYREF
  struct _TP_TIMER *pv[10]; // [rsp+50h] [rbp+7h] BYREF
  WINBOOL fPending; // [rsp+C0h] [rbp+77h] BYREF
  LPVOID Context; // [rsp+C8h] [rbp+7Fh] BYREF

  Src = 0LL;
  v12 = 0LL;
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = &qword_1801B8588;
    qword_1801B8588 = &AudioSrvTelemetryProvider::`vftable';
    qword_1801B85A0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1801B8588, qword_1801B85A0, v6);
    InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &qword_1801B8588);
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
         &v12);
  if ( v7 < 0 )
    goto LABEL_12;
  v14 = GUID_00000000_0000_0000_0000_000000000000;
  MixFormat = CEndpointCharacteristics::GetMixFormat(v12, eHostProcessConnector, &v14, (struct tWAVEFORMATEX **)&Src);
  v9 = (unsigned __int16 *)Src;
  v7 = MixFormat;
  if ( MixFormat >= 0 )
  {
    v10 = MIDL_user_allocate(*((unsigned __int16 *)Src + 8) + 18LL);
    *a3 = v10;
    if ( v10 )
      memcpy_0(v10, v9, v9[8] + 18LL);
    else
      v7 = -2147024882;
  }
  if ( v9 )
    CoTaskMemFree(v9);
  if ( v7 < 0 )
LABEL_12:
    AudSrvTraceLoggingErrorHelper("PolicyConfigGetMixFormat", 4876, v7);
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  if ( v12 )
    (*(void (__fastcall **)(CEndpointCharacteristics *))(*(_QWORD *)v12 + 16LL))(v12);
  return (unsigned int)v7;
}
