/*
 * XREFs of ?InitializeSilenceMonitorInterface@CPipeInstance@@AEAAJPEAVCProcessNode@@PEAUIAudioProcessingObject@@@Z @ 0x14000A938
 * Callers:
 *     ?InitializeAPOInterfaces@CPipeInstance@@AEAAJXZ @ 0x14000A520 (-InitializeAPOInterfaces@CPipeInstance@@AEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x140015A80 (__security_check_cookie.c)
 *     atexit @ 0x140016148 (atexit.c)
 *     memset_0 @ 0x1400168B6 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x140017DA0 (_guard_dispatch_icall_nop.c)
 *     ??1Completer@?$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAA@XZ @ 0x140029E0C (--1Completer@-$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAA@XZ.c)
 *     WPP_SF_D @ 0x14002BF24 (WPP_SF_D.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14003CB48 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CPipeInstance::InitializeSilenceMonitorInterface(
        CPipeInstance *this,
        struct CProcessNode *a2,
        struct IAudioProcessingObject *a3)
{
  int v5; // ebx
  LPVOID pv; // [rsp+28h] [rbp-29h] BYREF
  WINBOOL fPending; // [rsp+30h] [rbp-21h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-19h] BYREF
  __int64 v10; // [rsp+40h] [rbp-11h] BYREF
  union _RTL_RUN_ONCE *v11; // [rsp+48h] [rbp-9h] BYREF
  int v12; // [rsp+50h] [rbp-1h]
  __int64 v13; // [rsp+58h] [rbp+7h]
  int v14; // [rsp+60h] [rbp+Fh] BYREF
  GUID v15; // [rsp+64h] [rbp+13h]
  LPVOID v16; // [rsp+78h] [rbp+27h]
  __int128 v17; // [rsp+80h] [rbp+2Fh]
  __int64 v18; // [rsp+90h] [rbp+3Fh]

  v13 = -2LL;
  v10 = 0LL;
  memset_0(&v14, 0, 0x38uLL);
  pv = 0LL;
  if ( ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, __int64 *))a3->lpVtbl->QueryInterface)(
         a3,
         &GUID_22150b0d_ab8e_4f85_bd9a_8580e3b290f1,
         &v10) >= 0 )
  {
    v14 = 56;
    v15 = GUID_693badea_1eb1_4013_b799_285f624a55bd;
    mmdDevGetInstanceIdFromMMDeviceId(*((_QWORD *)this + 24), &pv);
    v16 = pv;
    v17 = *(_OWORD *)((char *)this + 296);
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`AudioDgTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context)
      && fPending )
    {
      v11 = &`AudioDgTelemetryProvider::Instance'::`2'::wrapper;
      Context = &qword_140086EE8;
      qword_140086EE8 = (__int64)&AudioDgTelemetryProvider::`vftable';
      qword_140086F00 = (TraceLoggingHProvider)&`AudioDgTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_5306e8013c9084f1ba6b78d0c08c093f_::_lambda_invoker_cdecl_);
      v12 = 0;
      wil::details::static_lazy<AudioDgTelemetryProvider>::Completer::~Completer(&v11);
    }
    v18 = *((_QWORD *)Context + 1);
    v5 = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, __int64, int *))a3->lpVtbl->Initialize)(
           a3,
           56LL,
           &v14);
    if ( v5 < 0 )
    {
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_D(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          51LL,
          &WPP_d4b18a9a07fa3bd0098f681e5ce2fb5d_Traceguids,
          (unsigned int)v5);
      }
      AudDGTraceLoggingErrorHelper("CPipeInstance::InitializeSilenceMonitorInterface", 0xF1Cu, v5);
    }
  }
  else
  {
    v5 = 0;
  }
  CoTaskMemFree(pv);
  pv = 0LL;
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  return (unsigned int)v5;
}
