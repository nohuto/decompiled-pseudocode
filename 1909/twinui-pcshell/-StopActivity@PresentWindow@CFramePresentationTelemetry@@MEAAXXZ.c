/*
 * XREFs of ?StopActivity@PresentWindow@CFramePresentationTelemetry@@MEAAXXZ @ 0x180065370
 * Callers:
 *     <none>
 * Callees:
 *     _TlgCreateWsz @ 0x180027E20 (_TlgCreateWsz.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800319B4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _TlgWrite @ 0x180039540 (_TlgWrite.c)
 *     ?zInternalStop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18007D800 (-zInternalStop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProv.c)
 *     _TlgCreateSz @ 0x1800800E8 (_TlgCreateSz.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180085500 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     atexit @ 0x18008A080 (atexit.c)
 */

void __fastcall CFramePresentationTelemetry::PresentWindow::StopActivity(
        CFramePresentationTelemetry::PresentWindow *this)
{
  int *v2; // rsi
  int v3; // eax
  int *v4; // rsi
  RTL_SRWLOCK *v5; // rsi
  RTL_SRWLOCK *v6; // rsi
  PSRWLOCK *p_SRWLock; // rax
  char v8; // di
  __int64 v9; // rdi
  int v10; // ecx
  __int64 v11; // r8
  REGHANDLE v12; // rcx
  const CHAR *v13; // rdx
  const CHAR *v14; // rdx
  const WCHAR *v15; // rdx
  const CHAR *v16; // rdx
  const CHAR *v17; // rdx
  const CHAR *v18; // rdx
  int v19; // ecx
  const CHAR *v20; // rdx
  TraceLoggingHProvider v21; // r10
  unsigned int v22; // [rsp+38h] [rbp-D0h] BYREF
  DWORD CurrentThreadId; // [rsp+3Ch] [rbp-CCh] BYREF
  WINBOOL v24; // [rsp+40h] [rbp-C8h] BYREF
  int v25; // [rsp+44h] [rbp-C4h] BYREF
  int v26; // [rsp+48h] [rbp-C0h] BYREF
  int v27; // [rsp+4Ch] [rbp-BCh] BYREF
  int v28; // [rsp+50h] [rbp-B8h] BYREF
  int v29; // [rsp+54h] [rbp-B4h] BYREF
  int v30; // [rsp+58h] [rbp-B0h] BYREF
  WINBOOL fPending; // [rsp+5Ch] [rbp-ACh] BYREF
  __int64 v32; // [rsp+60h] [rbp-A8h] BYREF
  LPVOID v33; // [rsp+68h] [rbp-A0h] BYREF
  LPVOID Context; // [rsp+70h] [rbp-98h] BYREF
  __int64 v35; // [rsp+78h] [rbp-90h] BYREF
  PSRWLOCK SRWLock; // [rsp+80h] [rbp-88h] BYREF
  PSRWLOCK v37; // [rsp+88h] [rbp-80h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+90h] [rbp-78h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+A8h] [rbp-60h] BYREF
  void *v40; // [rsp+B8h] [rbp-50h]
  int v41; // [rsp+C0h] [rbp-48h]
  int v42; // [rsp+C4h] [rbp-44h]
  void *v43; // [rsp+C8h] [rbp-40h]
  __int64 v44; // [rsp+D0h] [rbp-38h]
  __int64 *v45; // [rsp+D8h] [rbp-30h]
  __int64 v46; // [rsp+E0h] [rbp-28h]
  DWORD *p_CurrentThreadId; // [rsp+E8h] [rbp-20h]
  __int64 v48; // [rsp+F0h] [rbp-18h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+F8h] [rbp-10h] BYREF
  __int64 *v50; // [rsp+118h] [rbp+10h]
  __int64 v51; // [rsp+120h] [rbp+18h]
  __int64 *v52; // [rsp+128h] [rbp+20h]
  __int64 v53; // [rsp+130h] [rbp+28h]
  int *v54; // [rsp+138h] [rbp+30h]
  __int64 v55; // [rsp+140h] [rbp+38h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+148h] [rbp+40h] BYREF
  int *v57; // [rsp+158h] [rbp+50h]
  __int64 v58; // [rsp+160h] [rbp+58h]
  struct _EVENT_DATA_DESCRIPTOR v59; // [rsp+168h] [rbp+60h] BYREF
  int *v60; // [rsp+178h] [rbp+70h]
  __int64 v61; // [rsp+180h] [rbp+78h]
  struct _EVENT_DATA_DESCRIPTOR v62; // [rsp+188h] [rbp+80h] BYREF
  int *v63; // [rsp+198h] [rbp+90h]
  __int64 v64; // [rsp+1A0h] [rbp+98h]
  struct _EVENT_DATA_DESCRIPTOR v65; // [rsp+1A8h] [rbp+A0h] BYREF
  int *v66; // [rsp+1B8h] [rbp+B0h]
  __int64 v67; // [rsp+1C0h] [rbp+B8h]
  struct _EVENT_DATA_DESCRIPTOR v68; // [rsp+1C8h] [rbp+C0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v69; // [rsp+1D8h] [rbp+D0h] BYREF
  int *v70; // [rsp+1E8h] [rbp+E0h]
  __int64 v71; // [rsp+1F0h] [rbp+E8h]
  struct _EVENT_DATA_DESCRIPTOR v72; // [rsp+1F8h] [rbp+F0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v73; // [rsp+208h] [rbp+100h] BYREF
  int *v74; // [rsp+218h] [rbp+110h]
  __int64 v75; // [rsp+220h] [rbp+118h]
  unsigned int *v76; // [rsp+228h] [rbp+120h]
  __int64 v77; // [rsp+230h] [rbp+128h]
  struct _EVENT_DATA_DESCRIPTOR v78; // [rsp+238h] [rbp+130h] BYREF

  CurrentThreadId = 0;
  v2 = (int *)*((_QWORD *)this + 6);
  v3 = v2[19];
  if ( v3 < 0 && v3 == v2[21] )
    v4 = v2 + 20;
  else
    v4 = 0LL;
  if ( v4 )
  {
    wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop(this);
    v33 = 0LL;
    if ( InitOnceBeginInitialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &v24, &v33) && v24 )
    {
      v33 = &qword_1805C1F08;
      qword_1805C1F08 = &ShellScreenClippingLogging::`vftable';
      qword_1805C1F20 = (struct _TlgProvider_t *)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1805C1F08, qword_1805C1F20);
      InitOnceComplete(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &qword_1805C1F08);
    }
    if ( **((_DWORD **)v33 + 1) > 5u )
    {
      v13 = (const CHAR *)*((_QWORD *)v4 + 6);
      v50 = &`NotificationCenterUITelemetry::NotificationCenterTelemetry::LaunchActionCenter::StartActivity'::`4'::_TlgActivityPrivacyTag;
      v51 = 8LL;
      v52 = &v35;
      v25 = v4[1];
      v54 = &v25;
      v35 = 0x1000000LL;
      v53 = 8LL;
      v55 = 4LL;
      TlgCreateSz(&pDesc, v13);
      v14 = (const CHAR *)*((_QWORD *)v4 + 15);
      v57 = v4 + 14;
      v58 = 4LL;
      TlgCreateSz(&v59, v14);
      v15 = (const WCHAR *)*((_QWORD *)v4 + 2);
      v26 = *v4;
      v60 = &v26;
      v61 = 4LL;
      TlgCreateWsz(&v62, v15);
      v16 = (const CHAR *)*((_QWORD *)v4 + 8);
      v27 = v4[6];
      v63 = &v27;
      v64 = 4LL;
      TlgCreateSz(&v65, v16);
      v17 = (const CHAR *)*((_QWORD *)v4 + 10);
      v28 = v4[18];
      v66 = &v28;
      v67 = 4LL;
      TlgCreateSz(&v68, v17);
      TlgCreateWsz(&v69, *((LPCWSTR *)v4 + 11));
      v18 = (const CHAR *)*((_QWORD *)v4 + 13);
      v29 = v4[24];
      v70 = &v29;
      v71 = 4LL;
      TlgCreateSz(&v72, v18);
      TlgCreateWsz(&v73, *((LPCWSTR *)v4 + 14));
      v19 = v4[2];
      v20 = (const CHAR *)*((_QWORD *)v4 + 5);
      v74 = &v30;
      v22 = v4[15];
      v30 = v19;
      v76 = &v22;
      v75 = 4LL;
      v77 = 4LL;
      TlgCreateSz(&v78, v20);
      TlgWrite(v21, &unk_1804E056F, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 0x15u, &pData);
    }
  }
  else
  {
    v5 = (RTL_SRWLOCK *)*((_QWORD *)this + 38);
    if ( v5 )
    {
      v6 = v5 + 31;
      AcquireSRWLockExclusive(v6);
      p_SRWLock = &v37;
      v8 = 1;
    }
    else
    {
      p_SRWLock = &SRWLock;
      v8 = 2;
      v6 = 0LL;
    }
    *p_SRWLock = 0LL;
    if ( (v8 & 2) != 0 )
    {
      v8 &= ~2u;
      if ( SRWLock )
        ReleaseSRWLockExclusive(SRWLock);
    }
    if ( (v8 & 1) != 0 && v37 )
      ReleaseSRWLockExclusive(v37);
    **((_DWORD **)this + 6) = 2;
    if ( v6 )
      ReleaseSRWLockExclusive(v6);
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
    {
      Context = &qword_1805C1F08;
      qword_1805C1F08 = &ShellScreenClippingLogging::`vftable';
      qword_1805C1F20 = (struct _TlgProvider_t *)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1805C1F08, qword_1805C1F20);
      InitOnceComplete(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &qword_1805C1F08);
    }
    v9 = *((_QWORD *)Context + 1);
    if ( *(_DWORD *)v9 > 5u )
    {
      v44 = 8LL;
      v43 = &`CFramePresentationTelemetry::SetSystemVisual::StartActivity'::`4'::_TlgActivityPrivacyTag;
      v10 = *(_DWORD *)(*((_QWORD *)this + 6) + 76LL);
      v45 = &v32;
      LODWORD(v32) = v10;
      v46 = 4LL;
      CurrentThreadId = GetCurrentThreadId();
      p_CurrentThreadId = &CurrentThreadId;
      v48 = 4LL;
      v11 = *((_QWORD *)this + 6);
      *(_DWORD *)&EventDescriptor.Level = 517;
      UserData.Ptr = *(_QWORD *)(v9 + 8);
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      EventDescriptor.Keyword = 0LL;
      UserData.Size = *(unsigned __int16 *)UserData.Ptr;
      v40 = &unk_1804E06C2;
      UserData.Reserved = 2;
      v12 = *(_QWORD *)(v9 + 32);
      v41 = 66;
      v42 = 1;
      v22 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      EventWriteTransfer(v12, &EventDescriptor, (LPCGUID)(v11 + 8), 0LL, 5u, &UserData);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((CFramePresentationTelemetry::PresentWindow *)((char *)this + 8));
}
