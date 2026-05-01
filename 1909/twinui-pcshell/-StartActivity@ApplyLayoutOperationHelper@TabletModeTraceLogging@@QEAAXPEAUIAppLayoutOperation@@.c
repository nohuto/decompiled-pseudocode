/*
 * XREFs of ?StartActivity@ApplyLayoutOperationHelper@TabletModeTraceLogging@@QEAAXPEAUIAppLayoutOperation@@@Z @ 0x1803D084C
 * Callers:
 *     ?ApplyLayoutOperationHelper@TabletModePositioner@@AEAAJPEAUIUnknown@@@Z @ 0x1803C9220 (-ApplyLayoutOperationHelper@TabletModePositioner@@AEAAJPEAUIUnknown@@@Z.c)
 * Callees:
 *     _TlgCreateWsz @ 0x180027E20 (_TlgCreateWsz.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x180034EE0 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180037490 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _TlgKeywordOn @ 0x180039514 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180039540 (_TlgWrite.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?zInternalStart@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18007E0A8 (-zInternalStart@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180085500 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     atexit @ 0x18008A080 (atexit.c)
 *     ?zInternalRelatedId@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x18008FB54 (-zInternalRelatedId@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Pa.c)
 *     ??0TraceLoggingProvider@wil@@IEAA@XZ @ 0x18011EF44 (--0TraceLoggingProvider@wil@@IEAA@XZ.c)
 *     ??2@YAPEAX_KPEAX@Z @ 0x18011F2C4 (--2@YAPEAX_KPEAX@Z.c)
 *     ?GetAppLayoutOperationData@TabletModeTraceLogging@@CAJPEAUIAppLayoutOperation@@PEAUAppLayoutOperationData@1@@Z @ 0x1803CBD30 (-GetAppLayoutOperationData@TabletModeTraceLogging@@CAJPEAUIAppLayoutOperation@@PEAUAppLayoutOper.c)
 */

void __fastcall TabletModeTraceLogging::ApplyLayoutOperationHelper::StartActivity(
        TabletModeTraceLogging::ApplyLayoutOperationHelper *this,
        struct IAppLayoutOperation *a2)
{
  int AppLayoutOperationData; // eax
  __int64 v4; // rcx
  wil::TraceLoggingProvider *v5; // rax
  _QWORD *v6; // rcx
  const struct _TlgProvider_t *v7; // rdi
  const GUID *v8; // rax
  WINBOOL fPending; // [rsp+30h] [rbp-D0h] BYREF
  DWORD CurrentThreadId; // [rsp+34h] [rbp-CCh] BYREF
  LPVOID Context; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v12[4]; // [rsp+40h] [rbp-C0h] BYREF
  char v13; // [rsp+44h] [rbp-BCh] BYREF
  char v14; // [rsp+48h] [rbp-B8h] BYREF
  char v15; // [rsp+4Ch] [rbp-B4h] BYREF
  LPCWSTR pwsz; // [rsp+68h] [rbp-98h] BYREF
  __int128 v17; // [rsp+70h] [rbp-90h]
  __int128 v18; // [rsp+80h] [rbp-80h] BYREF
  LPCWSTR v19[2]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v20; // [rsp+A0h] [rbp-60h]
  __int64 v21; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v22; // [rsp+B0h] [rbp-50h] BYREF
  char v23; // [rsp+B8h] [rbp-48h] BYREF
  char v24; // [rsp+BCh] [rbp-44h] BYREF
  char v25; // [rsp+C0h] [rbp-40h] BYREF
  char v26; // [rsp+C4h] [rbp-3Ch] BYREF
  LPCWSTR v27[2]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v28; // [rsp+F0h] [rbp-10h]
  __int64 v29; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v30; // [rsp+100h] [rbp+0h] BYREF
  LPCWSTR v31; // [rsp+108h] [rbp+8h] BYREF
  __int128 v32; // [rsp+110h] [rbp+10h]
  __int128 v33; // [rsp+120h] [rbp+20h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+130h] [rbp+30h] BYREF
  __int64 *v35; // [rsp+150h] [rbp+50h]
  __int64 v36; // [rsp+158h] [rbp+58h]
  DWORD *p_CurrentThreadId; // [rsp+160h] [rbp+60h]
  __int64 v38; // [rsp+168h] [rbp+68h]
  _BYTE *v39; // [rsp+170h] [rbp+70h]
  __int64 v40; // [rsp+178h] [rbp+78h]
  char *v41; // [rsp+180h] [rbp+80h]
  __int64 v42; // [rsp+188h] [rbp+88h]
  char *v43; // [rsp+190h] [rbp+90h]
  __int64 v44; // [rsp+198h] [rbp+98h]
  char *v45; // [rsp+1A0h] [rbp+A0h]
  __int64 v46; // [rsp+1A8h] [rbp+A8h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+1B0h] [rbp+B0h] BYREF
  __int128 *v48; // [rsp+1C0h] [rbp+C0h]
  __int64 v49; // [rsp+1C8h] [rbp+C8h]
  char *v50; // [rsp+1D0h] [rbp+D0h]
  __int64 v51; // [rsp+1D8h] [rbp+D8h]
  char *v52; // [rsp+1E0h] [rbp+E0h]
  __int64 v53; // [rsp+1E8h] [rbp+E8h]
  char *v54; // [rsp+1F0h] [rbp+F0h]
  __int64 v55; // [rsp+1F8h] [rbp+F8h]
  struct _EVENT_DATA_DESCRIPTOR v56; // [rsp+200h] [rbp+100h] BYREF
  __int64 *v57; // [rsp+210h] [rbp+110h]
  __int64 v58; // [rsp+218h] [rbp+118h]
  char *v59; // [rsp+220h] [rbp+120h]
  __int64 v60; // [rsp+228h] [rbp+128h]
  __int64 *v61; // [rsp+230h] [rbp+130h]
  __int64 v62; // [rsp+238h] [rbp+138h]
  char *v63; // [rsp+240h] [rbp+140h]
  __int64 v64; // [rsp+248h] [rbp+148h]
  char *v65; // [rsp+250h] [rbp+150h]
  __int64 v66; // [rsp+258h] [rbp+158h]
  char *v67; // [rsp+260h] [rbp+160h]
  __int64 v68; // [rsp+268h] [rbp+168h]
  char *v69; // [rsp+270h] [rbp+170h]
  __int64 v70; // [rsp+278h] [rbp+178h]
  char *v71; // [rsp+280h] [rbp+180h]
  __int64 v72; // [rsp+288h] [rbp+188h]
  struct _EVENT_DATA_DESCRIPTOR v73; // [rsp+290h] [rbp+190h] BYREF
  __int64 *v74; // [rsp+2A0h] [rbp+1A0h]
  __int64 v75; // [rsp+2A8h] [rbp+1A8h]
  char *v76; // [rsp+2B0h] [rbp+1B0h]
  __int64 v77; // [rsp+2B8h] [rbp+1B8h]
  __int64 *v78; // [rsp+2C0h] [rbp+1C0h]
  __int64 v79; // [rsp+2C8h] [rbp+1C8h]
  char *v80; // [rsp+2D0h] [rbp+1D0h]
  __int64 v81; // [rsp+2D8h] [rbp+1D8h]
  struct _EVENT_DATA_DESCRIPTOR v82; // [rsp+2E0h] [rbp+1E0h] BYREF
  __int128 *v83; // [rsp+2F0h] [rbp+1F0h]
  __int64 v84; // [rsp+2F8h] [rbp+1F8h]
  char *v85; // [rsp+300h] [rbp+200h]
  __int64 v86; // [rsp+308h] [rbp+208h]
  char *v87; // [rsp+310h] [rbp+210h]
  __int64 v88; // [rsp+318h] [rbp+218h]
  char *v89; // [rsp+320h] [rbp+220h]
  __int64 v90; // [rsp+328h] [rbp+228h]
  wil::details::in1diag3 *retaddr; // [rsp+358h] [rbp+258h]

  pwsz = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  *(_OWORD *)v19 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  *(_OWORD *)v27 = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  AppLayoutOperationData = TabletModeTraceLogging::GetAppLayoutOperationData(
                             a2,
                             (struct TabletModeTraceLogging::AppLayoutOperationData *)v12);
  if ( AppLayoutOperationData >= 0 )
  {
    wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStart((__int64)this);
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
    {
      Context = &unk_1805C2098;
      v5 = (wil::TraceLoggingProvider *)operator new(v4, &unk_1805C2098);
      wil::TraceLoggingProvider::TraceLoggingProvider(v5);
      *v6 = &ImmersiveIconsLogging::`vftable';
      v6[3] = &`WindowManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&unk_1805C2098, qword_1805C20B0);
      InitOnceComplete(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &unk_1805C2098);
    }
    v7 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
    if ( *(_DWORD *)v7 > 5u && TlgKeywordOn(*((TraceLoggingHProvider *)Context + 1), 0LL) )
    {
      v36 = 8LL;
      v35 = &`NotificationCenterUITelemetry::NotificationCenterTelemetry::LaunchActionCenter::StartActivity'::`4'::_TlgActivityPrivacyTag;
      CurrentThreadId = GetCurrentThreadId();
      p_CurrentThreadId = &CurrentThreadId;
      v39 = v12;
      v41 = &v13;
      v43 = &v14;
      v45 = &v15;
      v38 = 4LL;
      v40 = 4LL;
      v42 = 4LL;
      v44 = 4LL;
      v46 = 4LL;
      TlgCreateWsz(&pDesc, pwsz);
      v50 = (char *)&v18 + 4;
      v48 = &v18;
      v52 = (char *)&v18 + 8;
      v49 = 4LL;
      v54 = (char *)&v18 + 12;
      v51 = 4LL;
      v53 = 4LL;
      v55 = 4LL;
      TlgCreateWsz(&v56, v19[0]);
      v59 = (char *)&v21 + 4;
      v57 = &v21;
      v61 = &v22;
      v58 = 4LL;
      v63 = (char *)&v22 + 4;
      v65 = &v23;
      v67 = &v24;
      v69 = &v25;
      v71 = &v26;
      v60 = 4LL;
      v62 = 4LL;
      v64 = 4LL;
      v66 = 4LL;
      v68 = 4LL;
      v70 = 4LL;
      v72 = 4LL;
      TlgCreateWsz(&v73, v27[0]);
      v76 = (char *)&v29 + 4;
      v74 = &v29;
      v78 = &v30;
      v75 = 4LL;
      v80 = (char *)&v30 + 4;
      v77 = 4LL;
      v79 = 4LL;
      v81 = 4LL;
      TlgCreateWsz(&v82, v31);
      v83 = &v33;
      v85 = (char *)&v33 + 4;
      v87 = (char *)&v33 + 8;
      v89 = (char *)&v33 + 12;
      v84 = 4LL;
      v86 = 4LL;
      v88 = 4LL;
      v90 = 4LL;
      v8 = (const GUID *)wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId((__int64)this);
      TlgWrite(v7, &unk_18050576E, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), v8, 0x20u, &pData);
    }
    if ( !*((_DWORD *)this + 8) )
      wil::details::ThreadFailureCallbackHolder::StartWatching((TabletModeTraceLogging::ApplyLayoutOperationHelper *)((char *)this + 8));
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xC6,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\Telemetry.h",
      (const char *)(unsigned int)AppLayoutOperationData);
  }
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v31);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v27);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v19);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&pwsz);
}
