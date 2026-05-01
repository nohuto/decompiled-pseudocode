/*
 * XREFs of ?StopActivity@InitializePositionWithShowCommand@ShellPositionerTelemetry@@MEAAXXZ @ 0x180336240
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180017494 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x180033780 (_TlgCreateWsz.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18003CC14 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _TlgCreateSz @ 0x18006C010 (_TlgCreateSz.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18007FF10 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     atexit @ 0x1800848AC (atexit.c)
 *     ?zInternalStop@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1803073FC (-zInternalStop@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsPro.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ShellPositionerTelemetry::InitializePositionWithShowCommand::StopActivity(
        ShellPositionerTelemetry::InitializePositionWithShowCommand *this)
{
  int *v2; // rsi
  int v3; // eax
  int *v4; // rsi
  TraceLoggingHProvider v5; // r10
  const struct _TlgProvider_t *v6; // rsi
  DWORD CurrentThreadId; // [rsp+38h] [rbp-D0h] BYREF
  int v8; // [rsp+3Ch] [rbp-CCh] BYREF
  WINBOOL v9[2]; // [rsp+40h] [rbp-C8h] BYREF
  LPVOID Context; // [rsp+48h] [rbp-C0h] BYREF
  WINBOOL fPending; // [rsp+50h] [rbp-B8h] BYREF
  int v12; // [rsp+54h] [rbp-B4h] BYREF
  int v13; // [rsp+58h] [rbp-B0h] BYREF
  int v14; // [rsp+5Ch] [rbp-ACh] BYREF
  _QWORD v15[3]; // [rsp+60h] [rbp-A8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+78h] [rbp-90h] BYREF
  int *v17; // [rsp+98h] [rbp-70h]
  __int64 v18; // [rsp+A0h] [rbp-68h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+A8h] [rbp-60h] BYREF
  int *v20; // [rsp+B8h] [rbp-50h]
  __int64 v21; // [rsp+C0h] [rbp-48h]
  struct _EVENT_DATA_DESCRIPTOR v22; // [rsp+C8h] [rbp-40h] BYREF
  int *v23; // [rsp+D8h] [rbp-30h]
  __int64 v24; // [rsp+E0h] [rbp-28h]
  struct _EVENT_DATA_DESCRIPTOR v25; // [rsp+E8h] [rbp-20h] BYREF
  int *v26; // [rsp+F8h] [rbp-10h]
  __int64 v27; // [rsp+100h] [rbp-8h]
  struct _EVENT_DATA_DESCRIPTOR v28; // [rsp+108h] [rbp+0h] BYREF
  _QWORD *v29; // [rsp+118h] [rbp+10h]
  __int64 v30; // [rsp+120h] [rbp+18h]
  struct _EVENT_DATA_DESCRIPTOR v31; // [rsp+128h] [rbp+20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v32; // [rsp+138h] [rbp+30h] BYREF
  DWORD *v33; // [rsp+148h] [rbp+40h]
  __int64 v34; // [rsp+150h] [rbp+48h]
  struct _EVENT_DATA_DESCRIPTOR v35; // [rsp+158h] [rbp+50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v36; // [rsp+168h] [rbp+60h] BYREF
  int *v37; // [rsp+178h] [rbp+70h]
  __int64 v38; // [rsp+180h] [rbp+78h]
  WINBOOL *v39; // [rsp+188h] [rbp+80h]
  __int64 v40; // [rsp+190h] [rbp+88h]
  struct _EVENT_DATA_DESCRIPTOR v41; // [rsp+198h] [rbp+90h] BYREF
  EVENT_DATA_DESCRIPTOR v42; // [rsp+1A8h] [rbp+A0h] BYREF
  int *v43; // [rsp+1C8h] [rbp+C0h]
  __int64 v44; // [rsp+1D0h] [rbp+C8h]
  DWORD *p_CurrentThreadId; // [rsp+1D8h] [rbp+D0h]
  __int64 v46; // [rsp+1E0h] [rbp+D8h]

  v15[1] = -2LL;
  v2 = (int *)*((_QWORD *)this + 6);
  v3 = v2[19];
  if ( v3 < 0 && v3 == v2[21] )
    v4 = v2 + 20;
  else
    v4 = 0LL;
  wil::ActivityBase<WindowManagementLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
  Context = 0LL;
  if ( v4 )
  {
    if ( InitOnceBeginInitialize(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
    {
      Context = &qword_18050F8E8;
      qword_18050F8E8 = &ImmersiveIconsLogging::`vftable';
      qword_18050F900 = (struct _TlgProvider_t *)&`WindowManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_18050F8E8, qword_18050F900);
      InitOnceComplete(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &qword_18050F8E8);
    }
    if ( **((_DWORD **)Context + 1) > 5u )
    {
      v12 = v4[1];
      v17 = &v12;
      v18 = 4LL;
      TlgCreateSz(&pDesc, *((LPCSTR *)v4 + 6));
      v20 = v4 + 14;
      v21 = 4LL;
      TlgCreateSz(&v22, *((LPCSTR *)v4 + 15));
      v13 = *v4;
      v23 = &v13;
      v24 = 4LL;
      TlgCreateWsz(&v25, *((LPCWSTR *)v4 + 2));
      v14 = v4[6];
      v26 = &v14;
      v27 = 4LL;
      TlgCreateSz(&v28, *((LPCSTR *)v4 + 8));
      LODWORD(v15[0]) = v4[18];
      v29 = v15;
      v30 = 4LL;
      TlgCreateSz(&v31, *((LPCSTR *)v4 + 10));
      TlgCreateWsz(&v32, *((LPCWSTR *)v4 + 11));
      CurrentThreadId = v4[24];
      v33 = &CurrentThreadId;
      v34 = 4LL;
      TlgCreateSz(&v35, *((LPCSTR *)v4 + 13));
      TlgCreateWsz(&v36, *((LPCWSTR *)v4 + 14));
      v8 = v4[2];
      v37 = &v8;
      v38 = 4LL;
      v9[0] = v4[15];
      v39 = v9;
      v40 = 4LL;
      TlgCreateSz(&v41, *((LPCSTR *)v4 + 5));
      TlgWrite(v5, &unk_180465C36, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 0x13u, &pData);
    }
  }
  else
  {
    if ( InitOnceBeginInitialize(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, v9, &Context) && v9[0] )
    {
      Context = &qword_18050F8E8;
      qword_18050F8E8 = &ImmersiveIconsLogging::`vftable';
      qword_18050F900 = (struct _TlgProvider_t *)&`WindowManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_18050F8E8, qword_18050F900);
      InitOnceComplete(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &qword_18050F8E8);
    }
    v6 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
    if ( *(_DWORD *)v6 > 5u )
    {
      v8 = *(_DWORD *)(*((_QWORD *)this + 6) + 76LL);
      v43 = &v8;
      v44 = 4LL;
      CurrentThreadId = GetCurrentThreadId();
      p_CurrentThreadId = &CurrentThreadId;
      v46 = 4LL;
      TlgWrite(v6, &unk_180465BE4, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 4u, &v42);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((ShellPositionerTelemetry::InitializePositionWithShowCommand *)((char *)this + 8));
}
