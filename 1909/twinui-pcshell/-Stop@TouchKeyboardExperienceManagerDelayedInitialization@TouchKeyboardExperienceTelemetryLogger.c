/*
 * XREFs of ?Stop@TouchKeyboardExperienceManagerDelayedInitialization@TouchKeyboardExperienceTelemetryLogger@@QEAAX_N0@Z @ 0x1800ABF54
 * Callers:
 *     ?PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x180331F00 (-PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 * Callees:
 *     _TlgCreateWsz @ 0x180027E20 (_TlgCreateWsz.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800319B4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _TlgWrite @ 0x180039540 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x1800800E8 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ?zInternalStop@?$ActivityBase@VAppUsageTelemetry@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18009B1A4 (-zInternalStop@-$ActivityBase@VAppUsageTelemetry@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorT.c)
 *     ?Provider@TouchKeyboardExperienceTraceLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x180332E58 (-Provider@TouchKeyboardExperienceTraceLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 */

void __fastcall TouchKeyboardExperienceTelemetryLogger::TouchKeyboardExperienceManagerDelayedInitialization::Stop(
        TouchKeyboardExperienceTelemetryLogger::TouchKeyboardExperienceManagerDelayedInitialization *this,
        unsigned __int8 a2,
        unsigned __int8 a3)
{
  int *v3; // rdi
  int v7; // eax
  int *v8; // rdi
  const struct _TlgProvider_t *v9; // rax
  const struct _TlgProvider_t *v10; // r14
  const CHAR *v11; // rdx
  const CHAR *v12; // rdx
  const WCHAR *v13; // rdx
  const CHAR *v14; // rdx
  const CHAR *v15; // rdx
  const CHAR *v16; // rdx
  int v17; // ecx
  const CHAR *v18; // rdx
  int v19; // ecx
  DWORD CurrentThreadId; // eax
  int v21; // [rsp+38h] [rbp-D0h] BYREF
  int v22; // [rsp+3Ch] [rbp-CCh] BYREF
  DWORD v23; // [rsp+40h] [rbp-C8h] BYREF
  int v24; // [rsp+44h] [rbp-C4h] BYREF
  int v25; // [rsp+48h] [rbp-C0h] BYREF
  int v26; // [rsp+4Ch] [rbp-BCh] BYREF
  int v27; // [rsp+50h] [rbp-B8h] BYREF
  int v28; // [rsp+54h] [rbp-B4h] BYREF
  __int64 v29; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v30; // [rsp+60h] [rbp-A8h] BYREF
  EVENT_DATA_DESCRIPTOR v31; // [rsp+68h] [rbp-A0h] BYREF
  void *v32; // [rsp+88h] [rbp-80h]
  __int64 v33; // [rsp+90h] [rbp-78h]
  int *v34; // [rsp+98h] [rbp-70h]
  __int64 v35; // [rsp+A0h] [rbp-68h]
  DWORD *v36; // [rsp+A8h] [rbp-60h]
  __int64 v37; // [rsp+B0h] [rbp-58h]
  int *v38; // [rsp+B8h] [rbp-50h]
  __int64 v39; // [rsp+C0h] [rbp-48h]
  int *v40; // [rsp+C8h] [rbp-40h]
  __int64 v41; // [rsp+D0h] [rbp-38h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+D8h] [rbp-30h] BYREF
  void *v43; // [rsp+F8h] [rbp-10h]
  __int64 v44; // [rsp+100h] [rbp-8h]
  __int64 *v45; // [rsp+108h] [rbp+0h]
  __int64 v46; // [rsp+110h] [rbp+8h]
  int *v47; // [rsp+118h] [rbp+10h]
  __int64 v48; // [rsp+120h] [rbp+18h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+128h] [rbp+20h] BYREF
  int *v50; // [rsp+138h] [rbp+30h]
  __int64 v51; // [rsp+140h] [rbp+38h]
  struct _EVENT_DATA_DESCRIPTOR v52; // [rsp+148h] [rbp+40h] BYREF
  int *v53; // [rsp+158h] [rbp+50h]
  __int64 v54; // [rsp+160h] [rbp+58h]
  struct _EVENT_DATA_DESCRIPTOR v55; // [rsp+168h] [rbp+60h] BYREF
  int *v56; // [rsp+178h] [rbp+70h]
  __int64 v57; // [rsp+180h] [rbp+78h]
  struct _EVENT_DATA_DESCRIPTOR v58; // [rsp+188h] [rbp+80h] BYREF
  int *v59; // [rsp+198h] [rbp+90h]
  __int64 v60; // [rsp+1A0h] [rbp+98h]
  struct _EVENT_DATA_DESCRIPTOR v61; // [rsp+1A8h] [rbp+A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v62; // [rsp+1B8h] [rbp+B0h] BYREF
  __int64 *v63; // [rsp+1C8h] [rbp+C0h]
  __int64 v64; // [rsp+1D0h] [rbp+C8h]
  struct _EVENT_DATA_DESCRIPTOR v65; // [rsp+1D8h] [rbp+D0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v66; // [rsp+1E8h] [rbp+E0h] BYREF
  int *v67; // [rsp+1F8h] [rbp+F0h]
  __int64 v68; // [rsp+200h] [rbp+F8h]
  int *v69; // [rsp+208h] [rbp+100h]
  __int64 v70; // [rsp+210h] [rbp+108h]
  struct _EVENT_DATA_DESCRIPTOR v71; // [rsp+218h] [rbp+110h] BYREF
  DWORD *v72; // [rsp+228h] [rbp+120h]
  __int64 v73; // [rsp+230h] [rbp+128h]
  int *v74; // [rsp+238h] [rbp+130h]
  __int64 v75; // [rsp+240h] [rbp+138h]

  v3 = (int *)*((_QWORD *)this + 6);
  v7 = v3[19];
  if ( v7 < 0 && v7 == v3[21] )
    v8 = v3 + 20;
  else
    v8 = 0LL;
  wil::ActivityBase<AppUsageTelemetry,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
  v9 = TouchKeyboardExperienceTraceLogging::Provider();
  v10 = v9;
  if ( v8 )
  {
    if ( *(_DWORD *)v9 > 5u )
    {
      v11 = (const CHAR *)*((_QWORD *)v8 + 6);
      v43 = &`TouchKeyboardExperienceTelemetryLogger::TouchKeyboardExperienceManagerDelayedInitialization::Stop'::`19'::_TlgActivityPrivacyTag;
      v44 = 8LL;
      v45 = &v30;
      v25 = v8[1];
      v47 = &v25;
      v30 = 0x1000000LL;
      v46 = 8LL;
      v48 = 4LL;
      TlgCreateSz(&pDesc, v11);
      v12 = (const CHAR *)*((_QWORD *)v8 + 15);
      v50 = v8 + 14;
      v51 = 4LL;
      TlgCreateSz(&v52, v12);
      v13 = (const WCHAR *)*((_QWORD *)v8 + 2);
      v26 = *v8;
      v53 = &v26;
      v54 = 4LL;
      TlgCreateWsz(&v55, v13);
      v14 = (const CHAR *)*((_QWORD *)v8 + 8);
      v27 = v8[6];
      v56 = &v27;
      v57 = 4LL;
      TlgCreateSz(&v58, v14);
      v15 = (const CHAR *)*((_QWORD *)v8 + 10);
      v28 = v8[18];
      v59 = &v28;
      v60 = 4LL;
      TlgCreateSz(&v61, v15);
      TlgCreateWsz(&v62, *((LPCWSTR *)v8 + 11));
      v16 = (const CHAR *)*((_QWORD *)v8 + 13);
      LODWORD(v29) = v8[24];
      v63 = &v29;
      v64 = 4LL;
      TlgCreateSz(&v65, v16);
      TlgCreateWsz(&v66, *((LPCWSTR *)v8 + 14));
      v17 = v8[2];
      v18 = (const CHAR *)*((_QWORD *)v8 + 5);
      v67 = &v21;
      v22 = v8[15];
      v21 = v17;
      v69 = &v22;
      v68 = 4LL;
      v70 = 4LL;
      TlgCreateSz(&v71, v18);
      v72 = &v23;
      v24 = a3;
      v74 = &v24;
      v23 = a2;
      v73 = 4LL;
      v75 = 4LL;
      TlgWrite(v10, &unk_1805005B7, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 0x17u, &pData);
    }
  }
  else if ( *(_DWORD *)v9 > 5u )
  {
    v33 = 8LL;
    v32 = &`TouchKeyboardExperienceTelemetryLogger::TouchKeyboardExperienceManagerDelayedInitialization::Stop'::`19'::_TlgActivityPrivacyTag;
    v19 = *(_DWORD *)(*((_QWORD *)this + 6) + 76LL);
    v34 = &v24;
    v24 = v19;
    v35 = 4LL;
    CurrentThreadId = GetCurrentThreadId();
    v37 = 4LL;
    v23 = CurrentThreadId;
    v36 = &v23;
    v22 = a2;
    v38 = &v22;
    v21 = a3;
    v40 = &v21;
    v39 = 4LL;
    v41 = 4LL;
    TlgWrite(v10, &unk_180500501, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 7u, &v31);
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((TouchKeyboardExperienceTelemetryLogger::TouchKeyboardExperienceManagerDelayedInitialization *)((char *)this + 8));
}
