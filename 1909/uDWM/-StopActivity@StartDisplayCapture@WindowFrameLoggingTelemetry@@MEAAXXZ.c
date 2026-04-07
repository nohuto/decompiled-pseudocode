/*
 * XREFs of ?StopActivity@StartDisplayCapture@WindowFrameLoggingTelemetry@@MEAAXXZ @ 0x1800875E0
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VWindowFrameLogging@@@details@wil@@QEAAPEAVWindowFrameLogging@@P6AXXZ@Z @ 0x1800081E0 (-get@-$static_lazy@VWindowFrameLogging@@@details@wil@@QEAAPEAVWindowFrameLogging@@P6AXXZ@Z.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180008AA0 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _TlgWrite @ 0x180008F5C (_TlgWrite.c)
 *     __security_check_cookie @ 0x18004E0C0 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x18007A4C8 (_TlgCreateSz.c)
 *     _TlgCreateWsz @ 0x18007A500 (_TlgCreateWsz.c)
 *     ?zInternalStop@?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18008A7F4 (-zInternalStop@-$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Pa.c)
 */

void __fastcall WindowFrameLoggingTelemetry::StartDisplayCapture::StopActivity(
        WindowFrameLoggingTelemetry::StartDisplayCapture *this)
{
  int *v1; // rdi
  int v3; // eax
  int *v4; // rdi
  __int64 v5; // rcx
  _QWORD *v6; // rax
  __int64 v7; // r10
  const CHAR *v8; // rdx
  const CHAR *v9; // rdx
  const WCHAR *v10; // rdx
  const CHAR *v11; // rdx
  const CHAR *v12; // rdx
  const CHAR *v13; // rdx
  TraceLoggingHProvider v14; // r10
  const struct _TlgProvider_t *v15; // rdi
  int v16; // ecx
  DWORD CurrentThreadId; // eax
  DWORD v18; // [rsp+30h] [rbp-D0h] BYREF
  int v19; // [rsp+34h] [rbp-CCh] BYREF
  int v20; // [rsp+38h] [rbp-C8h] BYREF
  int v21; // [rsp+3Ch] [rbp-C4h] BYREF
  int v22; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v23; // [rsp+48h] [rbp-B8h] BYREF
  EVENT_DATA_DESCRIPTOR v24; // [rsp+50h] [rbp-B0h] BYREF
  void *v25; // [rsp+70h] [rbp-90h]
  __int64 v26; // [rsp+78h] [rbp-88h]
  int *v27; // [rsp+80h] [rbp-80h]
  __int64 v28; // [rsp+88h] [rbp-78h]
  DWORD *v29; // [rsp+90h] [rbp-70h]
  __int64 v30; // [rsp+98h] [rbp-68h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+A0h] [rbp-60h] BYREF
  void *v32; // [rsp+C0h] [rbp-40h]
  __int64 v33; // [rsp+C8h] [rbp-38h]
  __int64 *v34; // [rsp+D0h] [rbp-30h]
  __int64 v35; // [rsp+D8h] [rbp-28h]
  int *v36; // [rsp+E0h] [rbp-20h]
  __int64 v37; // [rsp+E8h] [rbp-18h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+F0h] [rbp-10h] BYREF
  int *v39; // [rsp+100h] [rbp+0h]
  __int64 v40; // [rsp+108h] [rbp+8h]
  struct _EVENT_DATA_DESCRIPTOR v41; // [rsp+110h] [rbp+10h] BYREF
  int *v42; // [rsp+120h] [rbp+20h]
  __int64 v43; // [rsp+128h] [rbp+28h]
  struct _EVENT_DATA_DESCRIPTOR v44; // [rsp+130h] [rbp+30h] BYREF
  int *v45; // [rsp+140h] [rbp+40h]
  __int64 v46; // [rsp+148h] [rbp+48h]
  struct _EVENT_DATA_DESCRIPTOR v47; // [rsp+150h] [rbp+50h] BYREF
  DWORD *v48; // [rsp+160h] [rbp+60h]
  __int64 v49; // [rsp+168h] [rbp+68h]
  struct _EVENT_DATA_DESCRIPTOR v50; // [rsp+170h] [rbp+70h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v51; // [rsp+180h] [rbp+80h] BYREF
  int *v52; // [rsp+190h] [rbp+90h]
  __int64 v53; // [rsp+198h] [rbp+98h]
  struct _EVENT_DATA_DESCRIPTOR v54; // [rsp+1A0h] [rbp+A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v55; // [rsp+1B0h] [rbp+B0h] BYREF

  v1 = (int *)*((_QWORD *)this + 6);
  v3 = v1[19];
  if ( v3 < 0 && v3 == v1[21] )
    v4 = v1 + 20;
  else
    v4 = 0LL;
  wil::ActivityBase<WindowFrameLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop();
  v6 = wil::details::static_lazy<WindowFrameLogging>::get(
         v5,
         (void (__cdecl *)())lambda_e6d4de8c865c86d40bfbebb968f8a12c_::_lambda_invoker_cdecl_);
  if ( v4 )
  {
    v7 = v6[1];
    if ( *(_DWORD *)v7 > 5u
      && (*(_QWORD *)(v7 + 16) & 0x200000000000LL) != 0
      && (*(_QWORD *)(v7 + 24) & 0x200000000000LL) == *(_QWORD *)(v7 + 24) )
    {
      v8 = (const CHAR *)*((_QWORD *)v4 + 6);
      v32 = &`AnimationClockLoggingTelemetry::TriggerClock::StopActivity'::`19'::_TlgActivityPrivacyTag;
      v33 = 8LL;
      v34 = &v23;
      v20 = v4[1];
      v36 = &v20;
      v23 = 0x1000000LL;
      v35 = 8LL;
      v37 = 4LL;
      TlgCreateSz(&pDesc, v8);
      v9 = (const CHAR *)*((_QWORD *)v4 + 15);
      v39 = v4 + 14;
      v40 = 4LL;
      TlgCreateSz(&v41, v9);
      v10 = (const WCHAR *)*((_QWORD *)v4 + 2);
      v21 = *v4;
      v42 = &v21;
      v43 = 4LL;
      TlgCreateWsz(&v44, v10);
      v11 = (const CHAR *)*((_QWORD *)v4 + 8);
      v22 = v4[6];
      v45 = &v22;
      v46 = 4LL;
      TlgCreateSz(&v47, v11);
      v12 = (const CHAR *)*((_QWORD *)v4 + 10);
      v18 = v4[18];
      v48 = &v18;
      v49 = 4LL;
      TlgCreateSz(&v50, v12);
      TlgCreateWsz(&v51, *((LPCWSTR *)v4 + 11));
      v13 = (const CHAR *)*((_QWORD *)v4 + 13);
      v19 = v4[24];
      v52 = &v19;
      v53 = 4LL;
      TlgCreateSz(&v54, v13);
      TlgCreateWsz(&v55, *((LPCWSTR *)v4 + 14));
      TlgWrite(v14, &unk_1800C8367, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 0x12u, &pData);
    }
  }
  else
  {
    v15 = (const struct _TlgProvider_t *)v6[1];
    if ( *(_DWORD *)v15 > 5u
      && (*((_QWORD *)v15 + 2) & 0x200000000000LL) != 0
      && (*((_QWORD *)v15 + 3) & 0x200000000000LL) == *((_QWORD *)v15 + 3) )
    {
      v26 = 8LL;
      v25 = &`AnimationClockLoggingTelemetry::TriggerClock::StopActivity'::`19'::_TlgActivityPrivacyTag;
      v16 = *(_DWORD *)(*((_QWORD *)this + 6) + 76LL);
      v27 = &v19;
      v19 = v16;
      v28 = 4LL;
      CurrentThreadId = GetCurrentThreadId();
      v30 = 4LL;
      v18 = CurrentThreadId;
      v29 = &v18;
      TlgWrite(v15, &unk_1800C8492, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 5u, &v24);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((WindowFrameLoggingTelemetry::StartDisplayCapture *)((char *)this + 8));
}
