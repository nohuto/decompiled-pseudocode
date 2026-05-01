/*
 * XREFs of ?StopActivity@AppToAppSwitch@TabletModeTelemetry@@MEAAXXZ @ 0x18034CC10
 * Callers:
 *     <none>
 * Callees:
 *     _TlgKeywordOn @ 0x180015F5C (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180017494 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x180033780 (_TlgCreateWsz.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18003CC14 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _TlgCreateSz @ 0x18006C010 (_TlgCreateSz.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18007FF10 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     atexit @ 0x1800848AC (atexit.c)
 *     ??0TraceLoggingProvider@wil@@IEAA@XZ @ 0x1800EB014 (--0TraceLoggingProvider@wil@@IEAA@XZ.c)
 *     ?zInternalStop@?$ActivityBase@VImmersiveIconsLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180148140 (-zInternalStop@-$ActivityBase@VImmersiveIconsLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProvid.c)
 */

void __fastcall TabletModeTelemetry::AppToAppSwitch::StopActivity(TabletModeTelemetry::AppToAppSwitch *this)
{
  int *v1; // rsi
  int v3; // eax
  int *v4; // rsi
  const CHAR *v5; // rdx
  const CHAR *v6; // rdx
  const WCHAR *v7; // rdx
  const CHAR *v8; // rdx
  const CHAR *v9; // rdx
  const CHAR *v10; // rdx
  TraceLoggingHProvider v11; // r10
  const struct _TlgProvider_t *v12; // rdi
  int v13; // ecx
  DWORD CurrentThreadId; // eax
  DWORD v15; // [rsp+38h] [rbp-D0h] BYREF
  int v16; // [rsp+3Ch] [rbp-CCh] BYREF
  WINBOOL v17[2]; // [rsp+40h] [rbp-C8h] BYREF
  LPVOID Context; // [rsp+48h] [rbp-C0h] BYREF
  WINBOOL fPending; // [rsp+50h] [rbp-B8h] BYREF
  int v20; // [rsp+54h] [rbp-B4h] BYREF
  int v21; // [rsp+58h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR v22; // [rsp+68h] [rbp-A0h] BYREF
  int *v23; // [rsp+88h] [rbp-80h]
  __int64 v24; // [rsp+90h] [rbp-78h]
  DWORD *v25; // [rsp+98h] [rbp-70h]
  __int64 v26; // [rsp+A0h] [rbp-68h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+A8h] [rbp-60h] BYREF
  int *v28; // [rsp+C8h] [rbp-40h]
  __int64 v29; // [rsp+D0h] [rbp-38h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+D8h] [rbp-30h] BYREF
  int *v31; // [rsp+E8h] [rbp-20h]
  __int64 v32; // [rsp+F0h] [rbp-18h]
  struct _EVENT_DATA_DESCRIPTOR v33; // [rsp+F8h] [rbp-10h] BYREF
  int *v34; // [rsp+108h] [rbp+0h]
  __int64 v35; // [rsp+110h] [rbp+8h]
  struct _EVENT_DATA_DESCRIPTOR v36; // [rsp+118h] [rbp+10h] BYREF
  DWORD *v37; // [rsp+128h] [rbp+20h]
  __int64 v38; // [rsp+130h] [rbp+28h]
  struct _EVENT_DATA_DESCRIPTOR v39; // [rsp+138h] [rbp+30h] BYREF
  int *v40; // [rsp+148h] [rbp+40h]
  __int64 v41; // [rsp+150h] [rbp+48h]
  struct _EVENT_DATA_DESCRIPTOR v42; // [rsp+158h] [rbp+50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v43; // [rsp+168h] [rbp+60h] BYREF
  WINBOOL *v44; // [rsp+178h] [rbp+70h]
  __int64 v45; // [rsp+180h] [rbp+78h]
  struct _EVENT_DATA_DESCRIPTOR v46; // [rsp+188h] [rbp+80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v47; // [rsp+198h] [rbp+90h] BYREF

  v1 = (int *)*((_QWORD *)this + 6);
  v3 = v1[19];
  if ( v3 < 0 && v3 == v1[21] )
    v4 = v1 + 20;
  else
    v4 = 0LL;
  wil::ActivityBase<ImmersiveIconsLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
  Context = 0LL;
  if ( v4 )
  {
    if ( InitOnceBeginInitialize(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
    {
      Context = &qword_18050F8E8;
      wil::TraceLoggingProvider::TraceLoggingProvider((wil::TraceLoggingProvider *)&qword_18050F8E8);
      qword_18050F8E8 = &ImmersiveIconsLogging::`vftable';
      qword_18050F900 = (struct _TlgProvider_t *)&`WindowManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_18050F8E8, qword_18050F900);
      InitOnceComplete(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &qword_18050F8E8);
    }
    if ( **((_DWORD **)Context + 1) > 5u && TlgKeywordOn(*((TraceLoggingHProvider *)Context + 1), 0x400000000000uLL) )
    {
      v5 = (const CHAR *)*((_QWORD *)v4 + 6);
      v20 = v4[1];
      v28 = &v20;
      v29 = 4LL;
      TlgCreateSz(&pDesc, v5);
      v6 = (const CHAR *)*((_QWORD *)v4 + 15);
      v31 = v4 + 14;
      v32 = 4LL;
      TlgCreateSz(&v33, v6);
      v7 = (const WCHAR *)*((_QWORD *)v4 + 2);
      v21 = *v4;
      v34 = &v21;
      v35 = 4LL;
      TlgCreateWsz(&v36, v7);
      v8 = (const CHAR *)*((_QWORD *)v4 + 8);
      v15 = v4[6];
      v37 = &v15;
      v38 = 4LL;
      TlgCreateSz(&v39, v8);
      v9 = (const CHAR *)*((_QWORD *)v4 + 10);
      v16 = v4[18];
      v40 = &v16;
      v41 = 4LL;
      TlgCreateSz(&v42, v9);
      TlgCreateWsz(&v43, *((LPCWSTR *)v4 + 11));
      v10 = (const CHAR *)*((_QWORD *)v4 + 13);
      v17[0] = v4[24];
      v44 = v17;
      v45 = 4LL;
      TlgCreateSz(&v46, v10);
      TlgCreateWsz(&v47, *((LPCWSTR *)v4 + 14));
      TlgWrite(v11, &unk_18046661D, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 0x10u, &pData);
    }
  }
  else
  {
    if ( InitOnceBeginInitialize(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, v17, &Context) && v17[0] )
    {
      Context = &qword_18050F8E8;
      wil::TraceLoggingProvider::TraceLoggingProvider((wil::TraceLoggingProvider *)&qword_18050F8E8);
      qword_18050F8E8 = &ImmersiveIconsLogging::`vftable';
      qword_18050F900 = (struct _TlgProvider_t *)&`WindowManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_18050F8E8, qword_18050F900);
      InitOnceComplete(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &qword_18050F8E8);
    }
    v12 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
    if ( *(_DWORD *)v12 > 5u && TlgKeywordOn(*((TraceLoggingHProvider *)Context + 1), 0x400000000000uLL) )
    {
      v13 = *(_DWORD *)(*((_QWORD *)this + 6) + 76LL);
      v23 = &v16;
      v16 = v13;
      v24 = 4LL;
      CurrentThreadId = GetCurrentThreadId();
      v26 = 4LL;
      v15 = CurrentThreadId;
      v25 = &v15;
      TlgWrite(v12, &unk_180466723, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 4u, &v22);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((TabletModeTelemetry::AppToAppSwitch *)((char *)this + 8));
}
