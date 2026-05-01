/*
 * XREFs of ?StartActivity@ApplyLayoutOperationHelper@TabletModeTraceLogging@@QEAAXPEAUIAppLayoutOperation@@@Z @ 0x18034BA24
 * Callers:
 *     ?ApplyLayoutOperationHelper@TabletModePositioner@@AEAAJPEAUIUnknown@@@Z @ 0x180344260 (-ApplyLayoutOperationHelper@TabletModePositioner@@AEAAJPEAUIUnknown@@@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180015F5C (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180017494 (_TlgWrite.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18002D674 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     _TlgCreateWsz @ 0x180033780 (_TlgCreateWsz.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18003EB90 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18007FF10 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?zInternalRelatedId@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x1800834E0 (-zInternalRelatedId@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     atexit @ 0x1800848AC (atexit.c)
 *     ??0TraceLoggingProvider@wil@@IEAA@XZ @ 0x1800EB014 (--0TraceLoggingProvider@wil@@IEAA@XZ.c)
 *     ?zInternalStart@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180307308 (-zInternalStart@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsPr.c)
 *     ?GetAppLayoutOperationData@TabletModeTraceLogging@@CAJPEAUIAppLayoutOperation@@PEAUAppLayoutOperationData@1@@Z @ 0x180346D40 (-GetAppLayoutOperationData@TabletModeTraceLogging@@CAJPEAUIAppLayoutOperation@@PEAUAppLayoutOper.c)
 */

void __fastcall TabletModeTraceLogging::ApplyLayoutOperationHelper::StartActivity(
        TabletModeTraceLogging::ApplyLayoutOperationHelper *this,
        struct IAppLayoutOperation *a2)
{
  int AppLayoutOperationData; // eax
  const struct _TlgProvider_t *v4; // rdi
  const GUID *v5; // rax
  WINBOOL fPending; // [rsp+30h] [rbp-D0h] BYREF
  DWORD CurrentThreadId; // [rsp+34h] [rbp-CCh] BYREF
  LPVOID Context; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v9[4]; // [rsp+40h] [rbp-C0h] BYREF
  char v10; // [rsp+44h] [rbp-BCh] BYREF
  char v11; // [rsp+48h] [rbp-B8h] BYREF
  char v12; // [rsp+4Ch] [rbp-B4h] BYREF
  LPCWSTR pwsz; // [rsp+68h] [rbp-98h] BYREF
  __int128 v14; // [rsp+70h] [rbp-90h]
  __int128 v15; // [rsp+80h] [rbp-80h] BYREF
  LPCWSTR v16[2]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v17; // [rsp+A0h] [rbp-60h]
  __int64 v18; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v19; // [rsp+B0h] [rbp-50h] BYREF
  char v20; // [rsp+B8h] [rbp-48h] BYREF
  char v21; // [rsp+BCh] [rbp-44h] BYREF
  char v22; // [rsp+C0h] [rbp-40h] BYREF
  char v23; // [rsp+C4h] [rbp-3Ch] BYREF
  LPCWSTR v24[2]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v25; // [rsp+F0h] [rbp-10h]
  __int64 v26; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v27; // [rsp+100h] [rbp+0h] BYREF
  LPCWSTR v28; // [rsp+108h] [rbp+8h] BYREF
  __int128 v29; // [rsp+110h] [rbp+10h]
  __int128 v30; // [rsp+120h] [rbp+20h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+130h] [rbp+30h] BYREF
  DWORD *p_CurrentThreadId; // [rsp+150h] [rbp+50h]
  __int64 v33; // [rsp+158h] [rbp+58h]
  _BYTE *v34; // [rsp+160h] [rbp+60h]
  __int64 v35; // [rsp+168h] [rbp+68h]
  char *v36; // [rsp+170h] [rbp+70h]
  __int64 v37; // [rsp+178h] [rbp+78h]
  char *v38; // [rsp+180h] [rbp+80h]
  __int64 v39; // [rsp+188h] [rbp+88h]
  char *v40; // [rsp+190h] [rbp+90h]
  __int64 v41; // [rsp+198h] [rbp+98h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+1A0h] [rbp+A0h] BYREF
  __int128 *v43; // [rsp+1B0h] [rbp+B0h]
  __int64 v44; // [rsp+1B8h] [rbp+B8h]
  char *v45; // [rsp+1C0h] [rbp+C0h]
  __int64 v46; // [rsp+1C8h] [rbp+C8h]
  char *v47; // [rsp+1D0h] [rbp+D0h]
  __int64 v48; // [rsp+1D8h] [rbp+D8h]
  char *v49; // [rsp+1E0h] [rbp+E0h]
  __int64 v50; // [rsp+1E8h] [rbp+E8h]
  struct _EVENT_DATA_DESCRIPTOR v51; // [rsp+1F0h] [rbp+F0h] BYREF
  __int64 *v52; // [rsp+200h] [rbp+100h]
  __int64 v53; // [rsp+208h] [rbp+108h]
  char *v54; // [rsp+210h] [rbp+110h]
  __int64 v55; // [rsp+218h] [rbp+118h]
  __int64 *v56; // [rsp+220h] [rbp+120h]
  __int64 v57; // [rsp+228h] [rbp+128h]
  char *v58; // [rsp+230h] [rbp+130h]
  __int64 v59; // [rsp+238h] [rbp+138h]
  char *v60; // [rsp+240h] [rbp+140h]
  __int64 v61; // [rsp+248h] [rbp+148h]
  char *v62; // [rsp+250h] [rbp+150h]
  __int64 v63; // [rsp+258h] [rbp+158h]
  char *v64; // [rsp+260h] [rbp+160h]
  __int64 v65; // [rsp+268h] [rbp+168h]
  char *v66; // [rsp+270h] [rbp+170h]
  __int64 v67; // [rsp+278h] [rbp+178h]
  struct _EVENT_DATA_DESCRIPTOR v68; // [rsp+280h] [rbp+180h] BYREF
  __int64 *v69; // [rsp+290h] [rbp+190h]
  __int64 v70; // [rsp+298h] [rbp+198h]
  char *v71; // [rsp+2A0h] [rbp+1A0h]
  __int64 v72; // [rsp+2A8h] [rbp+1A8h]
  __int64 *v73; // [rsp+2B0h] [rbp+1B0h]
  __int64 v74; // [rsp+2B8h] [rbp+1B8h]
  char *v75; // [rsp+2C0h] [rbp+1C0h]
  __int64 v76; // [rsp+2C8h] [rbp+1C8h]
  struct _EVENT_DATA_DESCRIPTOR v77; // [rsp+2D0h] [rbp+1D0h] BYREF
  __int128 *v78; // [rsp+2E0h] [rbp+1E0h]
  __int64 v79; // [rsp+2E8h] [rbp+1E8h]
  char *v80; // [rsp+2F0h] [rbp+1F0h]
  __int64 v81; // [rsp+2F8h] [rbp+1F8h]
  char *v82; // [rsp+300h] [rbp+200h]
  __int64 v83; // [rsp+308h] [rbp+208h]
  char *v84; // [rsp+310h] [rbp+210h]
  __int64 v85; // [rsp+318h] [rbp+218h]
  wil::details::in1diag3 *retaddr; // [rsp+348h] [rbp+248h]

  pwsz = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  *(_OWORD *)v16 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  *(_OWORD *)v24 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  AppLayoutOperationData = TabletModeTraceLogging::GetAppLayoutOperationData(
                             a2,
                             (struct TabletModeTraceLogging::AppLayoutOperationData *)v9);
  if ( AppLayoutOperationData >= 0 )
  {
    wil::ActivityBase<WindowManagementLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::zInternalStart((__int64)this);
    Context = 0LL;
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
    v4 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
    if ( *(_DWORD *)v4 > 5u && TlgKeywordOn(*((TraceLoggingHProvider *)Context + 1), 0LL) )
    {
      CurrentThreadId = GetCurrentThreadId();
      p_CurrentThreadId = &CurrentThreadId;
      v34 = v9;
      v36 = &v10;
      v38 = &v11;
      v40 = &v12;
      v33 = 4LL;
      v35 = 4LL;
      v37 = 4LL;
      v39 = 4LL;
      v41 = 4LL;
      TlgCreateWsz(&pDesc, pwsz);
      v45 = (char *)&v15 + 4;
      v43 = &v15;
      v47 = (char *)&v15 + 8;
      v44 = 4LL;
      v49 = (char *)&v15 + 12;
      v46 = 4LL;
      v48 = 4LL;
      v50 = 4LL;
      TlgCreateWsz(&v51, v16[0]);
      v54 = (char *)&v18 + 4;
      v52 = &v18;
      v56 = &v19;
      v53 = 4LL;
      v58 = (char *)&v19 + 4;
      v60 = &v20;
      v62 = &v21;
      v64 = &v22;
      v66 = &v23;
      v55 = 4LL;
      v57 = 4LL;
      v59 = 4LL;
      v61 = 4LL;
      v63 = 4LL;
      v65 = 4LL;
      v67 = 4LL;
      TlgCreateWsz(&v68, v24[0]);
      v71 = (char *)&v26 + 4;
      v69 = &v26;
      v73 = &v27;
      v70 = 4LL;
      v75 = (char *)&v27 + 4;
      v72 = 4LL;
      v74 = 4LL;
      v76 = 4LL;
      TlgCreateWsz(&v77, v28);
      v79 = 4LL;
      v78 = &v30;
      v80 = (char *)&v30 + 4;
      v82 = (char *)&v30 + 8;
      v84 = (char *)&v30 + 12;
      v81 = 4LL;
      v83 = 4LL;
      v85 = 4LL;
      v5 = (const GUID *)wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId((__int64)this);
      TlgWrite(v4, &unk_18046617B, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), v5, 0x1Fu, &pData);
    }
    if ( !*((_DWORD *)this + 8) )
      wil::details::ThreadFailureCallbackHolder::StartWatching((TabletModeTraceLogging::ApplyLayoutOperationHelper *)((char *)this + 8));
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      198LL,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\Telemetry.h",
      (const char *)(unsigned int)AppLayoutOperationData);
  }
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v28);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v24);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v16);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&pwsz);
}
