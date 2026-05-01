/*
 * XREFs of ?StopActivity@SetViewPosition@CImmersiveAppTelemetry@@MEAAXXZ @ 0x18005F8E0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgCreateWsz @ 0x18001D97C (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x180030B18 (_TlgWrite.c)
 *     ?zInternalStop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18007AEB0 (-zInternalStop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProv.c)
 *     _TlgCreateSz @ 0x18007DC38 (_TlgCreateSz.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x1800828D0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     atexit @ 0x18008753C (atexit.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180114568 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 */

void __fastcall CImmersiveAppTelemetry::SetViewPosition::StopActivity(CImmersiveAppTelemetry::SetViewPosition *this)
{
  int *v2; // rsi
  int v3; // eax
  int *v4; // rsi
  RTL_SRWLOCK *v5; // rsi
  char v6; // di
  RTL_SRWLOCK *v7; // rsi
  PSRWLOCK *p_SRWLock; // rax
  __int64 v9; // rdi
  char *v10; // rbx
  __int64 *v11; // rcx
  __int64 v12; // rax
  int v13; // ecx
  __int64 v14; // r8
  REGHANDLE v15; // rcx
  const CHAR *v16; // rdx
  const CHAR *v17; // rdx
  const WCHAR *v18; // rdx
  const CHAR *v19; // rdx
  const CHAR *v20; // rdx
  const CHAR *v21; // rdx
  int v22; // ecx
  const CHAR *v23; // rdx
  TraceLoggingHProvider v24; // r10
  int UserDataCount; // [rsp+28h] [rbp-E0h]
  unsigned int v26; // [rsp+38h] [rbp-D0h] BYREF
  DWORD CurrentThreadId; // [rsp+3Ch] [rbp-CCh] BYREF
  WINBOOL v28; // [rsp+40h] [rbp-C8h] BYREF
  int v29; // [rsp+44h] [rbp-C4h] BYREF
  int v30; // [rsp+48h] [rbp-C0h] BYREF
  int v31; // [rsp+4Ch] [rbp-BCh] BYREF
  int v32; // [rsp+50h] [rbp-B8h] BYREF
  int v33; // [rsp+54h] [rbp-B4h] BYREF
  int v34; // [rsp+58h] [rbp-B0h] BYREF
  WINBOOL fPending; // [rsp+5Ch] [rbp-ACh] BYREF
  __int64 v36; // [rsp+60h] [rbp-A8h] BYREF
  LPVOID v37; // [rsp+68h] [rbp-A0h] BYREF
  LPVOID Context; // [rsp+70h] [rbp-98h] BYREF
  __int64 v39; // [rsp+78h] [rbp-90h] BYREF
  PSRWLOCK SRWLock; // [rsp+80h] [rbp-88h] BYREF
  PSRWLOCK v41; // [rsp+88h] [rbp-80h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+90h] [rbp-78h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+A8h] [rbp-60h] BYREF
  void *v44; // [rsp+B8h] [rbp-50h]
  int v45; // [rsp+C0h] [rbp-48h]
  int v46; // [rsp+C4h] [rbp-44h]
  void *v47; // [rsp+C8h] [rbp-40h]
  __int64 v48; // [rsp+D0h] [rbp-38h]
  __int64 *v49; // [rsp+D8h] [rbp-30h]
  __int64 v50; // [rsp+E0h] [rbp-28h]
  DWORD *p_CurrentThreadId; // [rsp+E8h] [rbp-20h]
  __int64 v52; // [rsp+F0h] [rbp-18h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+F8h] [rbp-10h] BYREF
  __int64 *v54; // [rsp+118h] [rbp+10h]
  __int64 v55; // [rsp+120h] [rbp+18h]
  __int64 *v56; // [rsp+128h] [rbp+20h]
  __int64 v57; // [rsp+130h] [rbp+28h]
  int *v58; // [rsp+138h] [rbp+30h]
  __int64 v59; // [rsp+140h] [rbp+38h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+148h] [rbp+40h] BYREF
  int *v61; // [rsp+158h] [rbp+50h]
  __int64 v62; // [rsp+160h] [rbp+58h]
  struct _EVENT_DATA_DESCRIPTOR v63; // [rsp+168h] [rbp+60h] BYREF
  int *v64; // [rsp+178h] [rbp+70h]
  __int64 v65; // [rsp+180h] [rbp+78h]
  struct _EVENT_DATA_DESCRIPTOR v66; // [rsp+188h] [rbp+80h] BYREF
  int *v67; // [rsp+198h] [rbp+90h]
  __int64 v68; // [rsp+1A0h] [rbp+98h]
  struct _EVENT_DATA_DESCRIPTOR v69; // [rsp+1A8h] [rbp+A0h] BYREF
  int *v70; // [rsp+1B8h] [rbp+B0h]
  __int64 v71; // [rsp+1C0h] [rbp+B8h]
  struct _EVENT_DATA_DESCRIPTOR v72; // [rsp+1C8h] [rbp+C0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v73; // [rsp+1D8h] [rbp+D0h] BYREF
  int *v74; // [rsp+1E8h] [rbp+E0h]
  __int64 v75; // [rsp+1F0h] [rbp+E8h]
  struct _EVENT_DATA_DESCRIPTOR v76; // [rsp+1F8h] [rbp+F0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v77; // [rsp+208h] [rbp+100h] BYREF
  int *v78; // [rsp+218h] [rbp+110h]
  __int64 v79; // [rsp+220h] [rbp+118h]
  unsigned int *v80; // [rsp+228h] [rbp+120h]
  __int64 v81; // [rsp+230h] [rbp+128h]
  struct _EVENT_DATA_DESCRIPTOR v82; // [rsp+238h] [rbp+130h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+270h] [rbp+168h]

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
    v37 = 0LL;
    if ( InitOnceBeginInitialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &v28, &v37) && v28 )
    {
      v37 = &qword_180599AE8;
      qword_180599AE8 = &ShellScreenClippingLogging::`vftable';
      qword_180599B00 = (struct _TlgProvider_t *)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_180599AE8, qword_180599B00);
      InitOnceComplete(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &qword_180599AE8);
    }
    if ( **((_DWORD **)v37 + 1) > 5u )
    {
      v16 = (const CHAR *)*((_QWORD *)v4 + 6);
      v54 = &`NotificationCenterUITelemetry::NotificationCenterTelemetry::LaunchActionCenter::StartActivity'::`4'::_TlgActivityPrivacyTag;
      v55 = 8LL;
      v56 = &v39;
      v29 = v4[1];
      v58 = &v29;
      v39 = 0x1000000LL;
      v57 = 8LL;
      v59 = 4LL;
      TlgCreateSz(&pDesc, v16);
      v17 = (const CHAR *)*((_QWORD *)v4 + 15);
      v61 = v4 + 14;
      v62 = 4LL;
      TlgCreateSz(&v63, v17);
      v18 = (const WCHAR *)*((_QWORD *)v4 + 2);
      v30 = *v4;
      v64 = &v30;
      v65 = 4LL;
      TlgCreateWsz(&v66, v18);
      v19 = (const CHAR *)*((_QWORD *)v4 + 8);
      v31 = v4[6];
      v67 = &v31;
      v68 = 4LL;
      TlgCreateSz(&v69, v19);
      v20 = (const CHAR *)*((_QWORD *)v4 + 10);
      v32 = v4[18];
      v70 = &v32;
      v71 = 4LL;
      TlgCreateSz(&v72, v20);
      TlgCreateWsz(&v73, *((LPCWSTR *)v4 + 11));
      v21 = (const CHAR *)*((_QWORD *)v4 + 13);
      v33 = v4[24];
      v74 = &v33;
      v75 = 4LL;
      TlgCreateSz(&v76, v21);
      TlgCreateWsz(&v77, *((LPCWSTR *)v4 + 14));
      v22 = v4[2];
      v23 = (const CHAR *)*((_QWORD *)v4 + 5);
      v78 = &v34;
      v26 = v4[15];
      v34 = v22;
      v80 = &v26;
      v79 = 4LL;
      v81 = 4LL;
      TlgCreateSz(&v82, v23);
      TlgWrite(v24, &unk_1804BA3DF, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 0x15u, &pData);
    }
  }
  else
  {
    v5 = (RTL_SRWLOCK *)*((_QWORD *)this + 38);
    if ( v5 )
    {
      v7 = v5 + 31;
      AcquireSRWLockExclusive(v7);
      p_SRWLock = &v41;
      v6 = 1;
    }
    else
    {
      v6 = 2;
      v7 = 0LL;
      p_SRWLock = &SRWLock;
    }
    *p_SRWLock = 0LL;
    if ( (v6 & 2) != 0 )
    {
      v6 &= ~2u;
      if ( SRWLock )
        ReleaseSRWLockExclusive(SRWLock);
    }
    if ( (v6 & 1) != 0 && v41 )
      ReleaseSRWLockExclusive(v41);
    **((_DWORD **)this + 6) = 2;
    if ( v7 )
      ReleaseSRWLockExclusive(v7);
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
    {
      Context = &qword_180599AE8;
      qword_180599AE8 = &ShellScreenClippingLogging::`vftable';
      qword_180599B00 = (struct _TlgProvider_t *)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_180599AE8, qword_180599B00);
      InitOnceComplete(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &qword_180599AE8);
    }
    v9 = *((_QWORD *)Context + 1);
    if ( *(_DWORD *)v9 > 5u )
    {
      v48 = 8LL;
      v47 = &`CFramePresentationTelemetry::SetSystemVisual::StartActivity'::`4'::_TlgActivityPrivacyTag;
      v13 = *(_DWORD *)(*((_QWORD *)this + 6) + 76LL);
      v49 = &v36;
      LODWORD(v36) = v13;
      v50 = 4LL;
      CurrentThreadId = GetCurrentThreadId();
      p_CurrentThreadId = &CurrentThreadId;
      v52 = 4LL;
      v14 = *((_QWORD *)this + 6);
      *(_DWORD *)&EventDescriptor.Level = 517;
      UserData.Ptr = *(_QWORD *)(v9 + 8);
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      EventDescriptor.Keyword = 0LL;
      UserData.Size = *(unsigned __int16 *)UserData.Ptr;
      v44 = &unk_1804BA534;
      UserData.Reserved = 2;
      v15 = *(_QWORD *)(v9 + 32);
      v45 = 68;
      v46 = 1;
      v26 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      EventWriteTransfer(v15, &EventDescriptor, (LPCGUID)(v14 + 8), 0LL, 5u, &UserData);
    }
  }
  if ( *((_DWORD *)this + 8) )
  {
    v10 = (char *)this + 8;
    if ( *((_DWORD *)v10 + 6) != GetCurrentThreadId() )
      wil::details::in1diag3::Log_Hr(
        retaddr,
        (void *)0x3A9,
        (unsigned int)"internal\\sdk\\inc\\wil\\opensource\\wil\\result.h",
        (const char *)0x8007029CLL,
        UserDataCount);
    v11 = *(__int64 **)v10;
    *((_DWORD *)v10 + 6) = 0;
    while ( 1 )
    {
      v12 = *v11;
      if ( !*v11 )
        break;
      if ( (char *)v12 == v10 )
      {
        *v11 = *((_QWORD *)v10 + 2);
        break;
      }
      v11 = (__int64 *)(v12 + 16);
      *(_QWORD *)v10 = v12 + 16;
    }
    *(_QWORD *)v10 = 0LL;
  }
}
