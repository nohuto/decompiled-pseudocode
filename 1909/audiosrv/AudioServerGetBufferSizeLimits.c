/*
 * XREFs of AudioServerGetBufferSizeLimits @ 0x1800E6F90
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800132C0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18002D610 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x18002DF80 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ?CreateKSFormatFromWFXFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAUKSDATAFORMAT_WAVEFORMATEX@@@Z @ 0x180036FFC (-CreateKSFormatFromWFXFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAUKSDATAFORMAT_WAVEFORMATEX@@@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x1800505A0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     atexit @ 0x1800652A4 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AudioServerGetBufferSizeLimits(
        __int64 a1,
        __int64 a2,
        const struct tWAVEFORMATEX *a3,
        int a4,
        __int64 *a5,
        __int64 *a6)
{
  __int64 v6; // rbx
  __int64 v10; // r8
  void *v11; // r8
  int v12; // edi
  int KSFormatFromWFXFormat; // eax
  void *v14; // rsi
  WINBOOL fPending; // [rsp+38h] [rbp-39h] BYREF
  LPVOID Context; // [rsp+40h] [rbp-31h] BYREF
  _QWORD *v18; // [rsp+48h] [rbp-29h] BYREF
  __int64 v19; // [rsp+50h] [rbp-21h] BYREF
  __int64 v20; // [rsp+58h] [rbp-19h]
  LPVOID pv; // [rsp+60h] [rbp-11h] BYREF
  struct _TP_TIMER *v22[8]; // [rsp+68h] [rbp-9h] BYREF

  v6 = 0LL;
  v20 = 0LL;
  v19 = 0LL;
  pv = 0LL;
  v18 = 0LL;
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = &qword_1801B7588;
    qword_1801B7588 = &AudioSrvTelemetryProvider::`vftable';
    qword_1801B75A0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1801B7588, qword_1801B75A0, v11);
    InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &qword_1801B7588);
  }
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    v22,
    *((struct _TP_TIMER **)Context + 1),
    v10,
    (struct _TP_TIMER *)L"AudioServerGetBufferSizeLimits");
  v12 = (*(__int64 (__fastcall **)(PVOID, __int64, _QWORD, _QWORD, _QWORD **))(*(_QWORD *)g_pEndpointCharacteristicsCache
                                                                             + 24LL))(
          g_pEndpointCharacteristicsCache,
          a2,
          0LL,
          0LL,
          &v18);
  if ( v12 < 0 )
    goto LABEL_14;
  v6 = v18[2];
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
  v12 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64))(*(_QWORD *)v6 + 24LL))(
          v6,
          &GUID_e749ccff_bf18_4e45_9c2b_fbf8ee730029,
          1LL);
  if ( v12 < 0 )
    goto LABEL_14;
  v12 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v20 + 64LL))(v20, &v19);
  if ( v12 < 0 )
    goto LABEL_14;
  KSFormatFromWFXFormat = CreateKSFormatFromWFXFormat(a3, (struct KSDATAFORMAT_WAVEFORMATEX **)&pv);
  v14 = pv;
  v12 = KSFormatFromWFXFormat;
  if ( KSFormatFromWFXFormat >= 0 )
  {
    v12 = (*(__int64 (__fastcall **)(__int64, LPVOID, __int64 *, __int64 *))(*(_QWORD *)v19 + 80LL))(v19, pv, a5, a6);
    if ( v12 >= 0 )
    {
      if ( a4 )
      {
        *a5 /= 2LL;
        *a6 /= 2LL;
      }
    }
  }
  if ( v14 )
    CoTaskMemFree(v14);
  if ( v12 < 0 )
LABEL_14:
    AudSrvTraceLoggingErrorHelper("AudioServerGetBufferSizeLimits", 4563, v12);
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)v22);
  if ( v18 )
    (*(void (__fastcall **)(_QWORD *))(*v18 + 16LL))(v18);
  if ( v19 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  if ( v20 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  return (unsigned int)v12;
}
