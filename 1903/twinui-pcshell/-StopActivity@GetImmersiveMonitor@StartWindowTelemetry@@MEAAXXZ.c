/*
 * XREFs of ?StopActivity@GetImmersiveMonitor@StartWindowTelemetry@@MEAAXXZ @ 0x18002FF30
 * Callers:
 *     <none>
 * Callees:
 *     ?LockExclusive@?$ActivityBase@VStartMenuExperienceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18000C2D4 (-LockExclusive@-$ActivityBase@VStartMenuExperienceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param.c)
 *     _TlgCreateWsz @ 0x18001D97C (_TlgCreateWsz.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180028AD4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _TlgWrite @ 0x180030B18 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x18007DC38 (_TlgCreateSz.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x1800828D0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     atexit @ 0x18008753C (atexit.c)
 *     ?zInternalStop@?$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18013F700 (-zInternalStop@-$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Pa.c)
 */

void __fastcall StartWindowTelemetry::GetImmersiveMonitor::StopActivity(
        StartWindowTelemetry::GetImmersiveMonitor *this)
{
  int *v1; // rsi
  int v3; // eax
  int *v4; // rsi
  RTL_SRWLOCK *v5; // rcx
  __int64 v6; // rdi
  int v7; // ecx
  __int64 v8; // r8
  REGHANDLE v9; // rcx
  const CHAR *v10; // rdx
  const CHAR *v11; // rdx
  const WCHAR *v12; // rdx
  const CHAR *v13; // rdx
  const CHAR *v14; // rdx
  const CHAR *v15; // rdx
  int v16; // ecx
  const CHAR *v17; // rdx
  TraceLoggingHProvider v18; // r10
  unsigned int v19; // [rsp+38h] [rbp-D0h] BYREF
  WINBOOL v20; // [rsp+3Ch] [rbp-CCh] BYREF
  int v21; // [rsp+40h] [rbp-C8h] BYREF
  int v22; // [rsp+44h] [rbp-C4h] BYREF
  int v23; // [rsp+48h] [rbp-C0h] BYREF
  int v24; // [rsp+4Ch] [rbp-BCh] BYREF
  int v25; // [rsp+50h] [rbp-B8h] BYREF
  int v26; // [rsp+54h] [rbp-B4h] BYREF
  WINBOOL fPending; // [rsp+58h] [rbp-B0h] BYREF
  int v28; // [rsp+5Ch] [rbp-ACh] BYREF
  __int64 v29; // [rsp+60h] [rbp-A8h] BYREF
  LPVOID v30; // [rsp+68h] [rbp-A0h] BYREF
  LPVOID Context; // [rsp+70h] [rbp-98h] BYREF
  __int64 v32; // [rsp+78h] [rbp-90h] BYREF
  PSRWLOCK SRWLock; // [rsp+80h] [rbp-88h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+88h] [rbp-80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+98h] [rbp-70h] BYREF
  void *v36; // [rsp+A8h] [rbp-60h]
  int v37; // [rsp+B0h] [rbp-58h]
  int v38; // [rsp+B4h] [rbp-54h]
  void *v39; // [rsp+B8h] [rbp-50h]
  __int64 v40; // [rsp+C0h] [rbp-48h]
  int *v41; // [rsp+C8h] [rbp-40h]
  __int64 v42; // [rsp+D0h] [rbp-38h]
  __int64 *v43; // [rsp+D8h] [rbp-30h]
  __int64 v44; // [rsp+E0h] [rbp-28h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+E8h] [rbp-20h] BYREF
  __int64 *v46; // [rsp+108h] [rbp+0h]
  __int64 v47; // [rsp+110h] [rbp+8h]
  __int64 *v48; // [rsp+118h] [rbp+10h]
  __int64 v49; // [rsp+120h] [rbp+18h]
  int *v50; // [rsp+128h] [rbp+20h]
  __int64 v51; // [rsp+130h] [rbp+28h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+138h] [rbp+30h] BYREF
  int *v53; // [rsp+148h] [rbp+40h]
  __int64 v54; // [rsp+150h] [rbp+48h]
  struct _EVENT_DATA_DESCRIPTOR v55; // [rsp+158h] [rbp+50h] BYREF
  int *v56; // [rsp+168h] [rbp+60h]
  __int64 v57; // [rsp+170h] [rbp+68h]
  struct _EVENT_DATA_DESCRIPTOR v58; // [rsp+178h] [rbp+70h] BYREF
  int *v59; // [rsp+188h] [rbp+80h]
  __int64 v60; // [rsp+190h] [rbp+88h]
  struct _EVENT_DATA_DESCRIPTOR v61; // [rsp+198h] [rbp+90h] BYREF
  int *v62; // [rsp+1A8h] [rbp+A0h]
  __int64 v63; // [rsp+1B0h] [rbp+A8h]
  struct _EVENT_DATA_DESCRIPTOR v64; // [rsp+1B8h] [rbp+B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v65; // [rsp+1C8h] [rbp+C0h] BYREF
  int *v66; // [rsp+1D8h] [rbp+D0h]
  __int64 v67; // [rsp+1E0h] [rbp+D8h]
  struct _EVENT_DATA_DESCRIPTOR v68; // [rsp+1E8h] [rbp+E0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v69; // [rsp+1F8h] [rbp+F0h] BYREF
  int *v70; // [rsp+208h] [rbp+100h]
  __int64 v71; // [rsp+210h] [rbp+108h]
  unsigned int *v72; // [rsp+218h] [rbp+110h]
  __int64 v73; // [rsp+220h] [rbp+118h]
  struct _EVENT_DATA_DESCRIPTOR v74; // [rsp+228h] [rbp+120h] BYREF

  v1 = (int *)*((_QWORD *)this + 6);
  v3 = v1[19];
  if ( v3 < 0 && v3 == v1[21] )
    v4 = v1 + 20;
  else
    v4 = 0LL;
  if ( v4 )
  {
    wil::ActivityBase<CAppManagerLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop();
    v30 = 0LL;
    if ( InitOnceBeginInitialize(&`LauncherTelemetryLogging::Instance'::`2'::wrapper, 0, &v20, &v30) && v20 )
    {
      v30 = &qword_180599F68;
      qword_180599F68 = &ShellScreenClippingLogging::`vftable';
      qword_180599F80 = (struct _TlgProvider_t *)&`LauncherTelemetryLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_23ce349ad8b1303b9752fca832f8f7b0_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_180599F68, qword_180599F80);
      InitOnceComplete(&`LauncherTelemetryLogging::Instance'::`2'::wrapper, 0, &qword_180599F68);
    }
    if ( **((_DWORD **)v30 + 1) > 5u )
    {
      v10 = (const CHAR *)*((_QWORD *)v4 + 6);
      v46 = &`NotificationCenterUITelemetry::NotificationCenterTelemetry::LaunchActionCenter::StartActivity'::`4'::_TlgActivityPrivacyTag;
      v47 = 8LL;
      v48 = &v32;
      v21 = v4[1];
      v50 = &v21;
      v32 = 0x1000000LL;
      v49 = 8LL;
      v51 = 4LL;
      TlgCreateSz(&pDesc, v10);
      v11 = (const CHAR *)*((_QWORD *)v4 + 15);
      v53 = v4 + 14;
      v54 = 4LL;
      TlgCreateSz(&v55, v11);
      v12 = (const WCHAR *)*((_QWORD *)v4 + 2);
      v22 = *v4;
      v56 = &v22;
      v57 = 4LL;
      TlgCreateWsz(&v58, v12);
      v13 = (const CHAR *)*((_QWORD *)v4 + 8);
      v23 = v4[6];
      v59 = &v23;
      v60 = 4LL;
      TlgCreateSz(&v61, v13);
      v14 = (const CHAR *)*((_QWORD *)v4 + 10);
      v24 = v4[18];
      v62 = &v24;
      v63 = 4LL;
      TlgCreateSz(&v64, v14);
      TlgCreateWsz(&v65, *((LPCWSTR *)v4 + 11));
      v15 = (const CHAR *)*((_QWORD *)v4 + 13);
      v25 = v4[24];
      v66 = &v25;
      v67 = 4LL;
      TlgCreateSz(&v68, v15);
      TlgCreateWsz(&v69, *((LPCWSTR *)v4 + 14));
      v16 = v4[2];
      v17 = (const CHAR *)*((_QWORD *)v4 + 5);
      v70 = &v26;
      v19 = v4[15];
      v26 = v16;
      v72 = &v19;
      v71 = 4LL;
      v73 = 4LL;
      TlgCreateSz(&v74, v17);
      TlgWrite(v18, &unk_1804D6F60, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 0x15u, &pData);
    }
  }
  else
  {
    wil::ActivityBase<StartMenuExperienceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
      (__int64)this,
      &SRWLock);
    v5 = SRWLock;
    **((_DWORD **)this + 6) = 2;
    if ( v5 )
      ReleaseSRWLockExclusive(v5);
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`LauncherTelemetryLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
      && fPending )
    {
      Context = &qword_180599F68;
      qword_180599F68 = &ShellScreenClippingLogging::`vftable';
      qword_180599F80 = (struct _TlgProvider_t *)&`LauncherTelemetryLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_23ce349ad8b1303b9752fca832f8f7b0_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_180599F68, qword_180599F80);
      InitOnceComplete(&`LauncherTelemetryLogging::Instance'::`2'::wrapper, 0, &qword_180599F68);
    }
    v6 = *((_QWORD *)Context + 1);
    if ( *(_DWORD *)v6 > 5u )
    {
      v40 = 8LL;
      v39 = &`CFramePresentationTelemetry::SetSystemVisual::StartActivity'::`4'::_TlgActivityPrivacyTag;
      v7 = *(_DWORD *)(*((_QWORD *)this + 6) + 76LL);
      v41 = &v28;
      v28 = v7;
      v42 = 4LL;
      LODWORD(v29) = GetCurrentThreadId();
      v43 = &v29;
      v44 = 4LL;
      v8 = *((_QWORD *)this + 6);
      *(_DWORD *)&EventDescriptor.Level = 517;
      UserData.Ptr = *(_QWORD *)(v6 + 8);
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      EventDescriptor.Keyword = 0LL;
      UserData.Size = *(unsigned __int16 *)UserData.Ptr;
      v36 = &unk_1804D6F17;
      UserData.Reserved = 2;
      v9 = *(_QWORD *)(v6 + 32);
      v37 = 72;
      v38 = 1;
      v19 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      EventWriteTransfer(v9, &EventDescriptor, (LPCGUID)(v8 + 8), 0LL, 5u, &UserData);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((StartWindowTelemetry::GetImmersiveMonitor *)((char *)this + 8));
}
