/*
 * XREFs of ?StopActivity@ExternalDragDetected@MultitaskingViewTelemetry@@MEAAXXZ @ 0x1803207D0
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
 *     ?zInternalStop@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1803073FC (-zInternalStop@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsPro.c)
 */

void __fastcall MultitaskingViewTelemetry::ExternalDragDetected::StopActivity(
        MultitaskingViewTelemetry::ExternalDragDetected *this)
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
  int v11; // ecx
  const CHAR *v12; // rdx
  TraceLoggingHProvider v13; // r10
  const struct _TlgProvider_t *v14; // rsi
  int v15; // edx
  __int64 cData; // rdi
  int v17; // ecx
  DWORD CurrentThreadId; // eax
  DWORD v19; // [rsp+30h] [rbp-D0h] BYREF
  int v20; // [rsp+34h] [rbp-CCh] BYREF
  WINBOOL v21; // [rsp+38h] [rbp-C8h] BYREF
  LPVOID Context; // [rsp+40h] [rbp-C0h] BYREF
  WINBOOL fPending; // [rsp+48h] [rbp-B8h] BYREF
  int v24; // [rsp+4Ch] [rbp-B4h] BYREF
  int v25; // [rsp+50h] [rbp-B0h] BYREF
  int v26; // [rsp+54h] [rbp-ACh] BYREF
  int v27; // [rsp+58h] [rbp-A8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-A0h] BYREF
  int *v29; // [rsp+80h] [rbp-80h]
  __int64 v30; // [rsp+88h] [rbp-78h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+90h] [rbp-70h] BYREF
  int *v32; // [rsp+A0h] [rbp-60h]
  __int64 v33; // [rsp+A8h] [rbp-58h]
  struct _EVENT_DATA_DESCRIPTOR v34; // [rsp+B0h] [rbp-50h] BYREF
  int *v35; // [rsp+C0h] [rbp-40h]
  __int64 v36; // [rsp+C8h] [rbp-38h]
  struct _EVENT_DATA_DESCRIPTOR v37; // [rsp+D0h] [rbp-30h] BYREF
  int *v38; // [rsp+E0h] [rbp-20h]
  __int64 v39; // [rsp+E8h] [rbp-18h]
  struct _EVENT_DATA_DESCRIPTOR v40; // [rsp+F0h] [rbp-10h] BYREF
  int *v41; // [rsp+100h] [rbp+0h]
  __int64 v42; // [rsp+108h] [rbp+8h]
  struct _EVENT_DATA_DESCRIPTOR v43; // [rsp+110h] [rbp+10h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v44; // [rsp+120h] [rbp+20h] BYREF
  DWORD *v45; // [rsp+130h] [rbp+30h]
  __int64 v46; // [rsp+138h] [rbp+38h]
  struct _EVENT_DATA_DESCRIPTOR v47; // [rsp+140h] [rbp+40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v48; // [rsp+150h] [rbp+50h] BYREF
  int *v49; // [rsp+160h] [rbp+60h]
  __int64 v50; // [rsp+168h] [rbp+68h]
  WINBOOL *v51; // [rsp+170h] [rbp+70h]
  __int64 v52; // [rsp+178h] [rbp+78h]
  struct _EVENT_DATA_DESCRIPTOR v53; // [rsp+180h] [rbp+80h] BYREF
  EVENT_DATA_DESCRIPTOR v54; // [rsp+190h] [rbp+90h] BYREF
  int *v55; // [rsp+1B0h] [rbp+B0h]
  __int64 v56; // [rsp+1B8h] [rbp+B8h]
  DWORD *v57; // [rsp+1C0h] [rbp+C0h]
  __int64 v58; // [rsp+1C8h] [rbp+C8h]

  v1 = (int *)*((_QWORD *)this + 6);
  v3 = v1[19];
  if ( v3 < 0 && v3 == v1[21] )
    v4 = v1 + 20;
  else
    v4 = 0LL;
  wil::ActivityBase<WindowManagementLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
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
    if ( **((_DWORD **)Context + 1) > 5u && TlgKeywordOn(*((TraceLoggingHProvider *)Context + 1), 0LL) )
    {
      v5 = (const CHAR *)*((_QWORD *)v4 + 6);
      v24 = v4[1];
      v29 = &v24;
      v30 = 4LL;
      TlgCreateSz(&pDesc, v5);
      v6 = (const CHAR *)*((_QWORD *)v4 + 15);
      v32 = v4 + 14;
      v33 = 4LL;
      TlgCreateSz(&v34, v6);
      v7 = (const WCHAR *)*((_QWORD *)v4 + 2);
      v25 = *v4;
      v35 = &v25;
      v36 = 4LL;
      TlgCreateWsz(&v37, v7);
      v8 = (const CHAR *)*((_QWORD *)v4 + 8);
      v26 = v4[6];
      v38 = &v26;
      v39 = 4LL;
      TlgCreateSz(&v40, v8);
      v9 = (const CHAR *)*((_QWORD *)v4 + 10);
      v27 = v4[18];
      v41 = &v27;
      v42 = 4LL;
      TlgCreateSz(&v43, v9);
      TlgCreateWsz(&v44, *((LPCWSTR *)v4 + 11));
      v10 = (const CHAR *)*((_QWORD *)v4 + 13);
      v19 = v4[24];
      v45 = &v19;
      v46 = 4LL;
      TlgCreateSz(&v47, v10);
      TlgCreateWsz(&v48, *((LPCWSTR *)v4 + 14));
      v11 = v4[2];
      v12 = (const CHAR *)*((_QWORD *)v4 + 5);
      v49 = &v20;
      v21 = v4[15];
      v20 = v11;
      v51 = &v21;
      v50 = 4LL;
      v52 = 4LL;
      TlgCreateSz(&v53, v12);
      TlgWrite(v13, &unk_1804650E7, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 0x13u, &pData);
    }
  }
  else
  {
    if ( InitOnceBeginInitialize(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &v21, &Context) && v21 )
    {
      Context = &qword_18050F8E8;
      wil::TraceLoggingProvider::TraceLoggingProvider((wil::TraceLoggingProvider *)&qword_18050F8E8);
      qword_18050F8E8 = &ImmersiveIconsLogging::`vftable';
      qword_18050F900 = (struct _TlgProvider_t *)&`WindowManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_18050F8E8, qword_18050F900);
      InitOnceComplete(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &qword_18050F8E8);
    }
    v14 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
    if ( *(_DWORD *)v14 > 5u && TlgKeywordOn(*((TraceLoggingHProvider *)Context + 1), 0LL) )
    {
      cData = (unsigned int)(v15 + 4);
      v17 = *(_DWORD *)(*((_QWORD *)this + 6) + 76LL);
      v55 = &v20;
      v20 = v17;
      v56 = cData;
      CurrentThreadId = GetCurrentThreadId();
      v58 = cData;
      v19 = CurrentThreadId;
      v57 = &v19;
      TlgWrite(v14, &unk_180465216, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, cData, &v54);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((MultitaskingViewTelemetry::ExternalDragDetected *)((char *)this + 8));
}
