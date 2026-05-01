/*
 * XREFs of ?Stop@CortanaExperienceManager_PositionCortanaWindow@CortanaProactiveTelemetry@@QEAAXHHHH@Z @ 0x18004062C
 * Callers:
 *     ?PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z @ 0x18003DFD4 (-PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z.c)
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

void __fastcall CortanaProactiveTelemetry::CortanaExperienceManager_PositionCortanaWindow::Stop(
        CortanaProactiveTelemetry::CortanaExperienceManager_PositionCortanaWindow *this,
        int a2,
        int a3,
        int a4,
        char a5)
{
  int *v5; // rsi
  int v7; // eax
  int *v8; // rsi
  RTL_SRWLOCK *v9; // rcx
  const struct _TlgProvider_t *v10; // rsi
  const CHAR *v11; // rdx
  const CHAR *v12; // rdx
  const WCHAR *v13; // rdx
  const CHAR *v14; // rdx
  const CHAR *v15; // rdx
  const CHAR *v16; // rdx
  int v17; // ecx
  const CHAR *v18; // rdx
  TraceLoggingHProvider v19; // r10
  int v20; // ecx
  DWORD CurrentThreadId; // eax
  DWORD v22; // [rsp+38h] [rbp-D0h] BYREF
  int v23; // [rsp+3Ch] [rbp-CCh] BYREF
  WINBOOL fPending[2]; // [rsp+40h] [rbp-C8h] BYREF
  LPVOID Context; // [rsp+48h] [rbp-C0h] BYREF
  WINBOOL v26; // [rsp+50h] [rbp-B8h] BYREF
  int v27; // [rsp+54h] [rbp-B4h] BYREF
  int v28; // [rsp+58h] [rbp-B0h] BYREF
  int v29; // [rsp+5Ch] [rbp-ACh] BYREF
  __int64 v30; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v31; // [rsp+68h] [rbp-A0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+78h] [rbp-90h] BYREF
  __int64 *v33; // [rsp+98h] [rbp-70h]
  __int64 v34; // [rsp+A0h] [rbp-68h]
  __int64 *v35; // [rsp+A8h] [rbp-60h]
  __int64 v36; // [rsp+B0h] [rbp-58h]
  DWORD *v37; // [rsp+B8h] [rbp-50h]
  __int64 v38; // [rsp+C0h] [rbp-48h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+C8h] [rbp-40h] BYREF
  int *v40; // [rsp+D8h] [rbp-30h]
  __int64 v41; // [rsp+E0h] [rbp-28h]
  struct _EVENT_DATA_DESCRIPTOR v42; // [rsp+E8h] [rbp-20h] BYREF
  char *v43; // [rsp+F8h] [rbp-10h]
  __int64 v44; // [rsp+100h] [rbp-8h]
  struct _EVENT_DATA_DESCRIPTOR v45; // [rsp+108h] [rbp+0h] BYREF
  int *v46; // [rsp+118h] [rbp+10h]
  __int64 v47; // [rsp+120h] [rbp+18h]
  struct _EVENT_DATA_DESCRIPTOR v48; // [rsp+128h] [rbp+20h] BYREF
  __int64 *v49; // [rsp+138h] [rbp+30h]
  __int64 v50; // [rsp+140h] [rbp+38h]
  struct _EVENT_DATA_DESCRIPTOR v51; // [rsp+148h] [rbp+40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v52; // [rsp+158h] [rbp+50h] BYREF
  DWORD *v53; // [rsp+168h] [rbp+60h]
  __int64 v54; // [rsp+170h] [rbp+68h]
  struct _EVENT_DATA_DESCRIPTOR v55; // [rsp+178h] [rbp+70h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v56; // [rsp+188h] [rbp+80h] BYREF
  int *v57; // [rsp+198h] [rbp+90h]
  __int64 v58; // [rsp+1A0h] [rbp+98h]
  WINBOOL *v59; // [rsp+1A8h] [rbp+A0h]
  __int64 v60; // [rsp+1B0h] [rbp+A8h]
  struct _EVENT_DATA_DESCRIPTOR v61; // [rsp+1B8h] [rbp+B0h] BYREF
  int *v62; // [rsp+1C8h] [rbp+C0h]
  __int64 v63; // [rsp+1D0h] [rbp+C8h]
  int *v64; // [rsp+1D8h] [rbp+D0h]
  __int64 v65; // [rsp+1E0h] [rbp+D8h]
  int *v66; // [rsp+1E8h] [rbp+E0h]
  __int64 v67; // [rsp+1F0h] [rbp+E8h]
  char *v68; // [rsp+1F8h] [rbp+F0h]
  __int64 v69; // [rsp+200h] [rbp+F8h]
  int v70; // [rsp+250h] [rbp+148h] BYREF
  int v71; // [rsp+258h] [rbp+150h] BYREF
  int v72; // [rsp+260h] [rbp+158h] BYREF

  v72 = a4;
  v71 = a3;
  v70 = a2;
  v5 = (int *)*((_QWORD *)this + 6);
  v7 = v5[19];
  if ( v7 < 0 && v7 == v5[21] )
    v8 = v5 + 20;
  else
    v8 = 0LL;
  if ( v8 )
  {
    wil::ActivityBase<CAppManagerLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop();
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`CortanaProactiveLogging::Instance'::`2'::wrapper, 0, &v26, &Context) && v26 )
    {
      Context = qword_180599CF8;
      qword_180599CF8[0] = &ShellScreenClippingLogging::`vftable';
      qword_180599D10 = (struct _TlgProvider_t *)&`CortanaProactiveLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_0a4c5659e8368aeb314f53434332ab54_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180599CF8, qword_180599D10);
      InitOnceComplete(&`CortanaProactiveLogging::Instance'::`2'::wrapper, 0, qword_180599CF8);
    }
    if ( **((_DWORD **)Context + 1) > 5u )
    {
      v11 = (const CHAR *)*((_QWORD *)v8 + 6);
      v33 = &`NotificationCenterUITelemetry::NotificationCenterTelemetry::LaunchActionCenter::StartActivity'::`4'::_TlgActivityPrivacyTag;
      v34 = 8LL;
      v35 = &v31;
      v27 = v8[1];
      v37 = (DWORD *)&v27;
      v31 = 0x1000000LL;
      v36 = 8LL;
      v38 = 4LL;
      TlgCreateSz(&pDesc, v11);
      v12 = (const CHAR *)*((_QWORD *)v8 + 15);
      v40 = v8 + 14;
      v41 = 4LL;
      TlgCreateSz(&v42, v12);
      v13 = (const WCHAR *)*((_QWORD *)v8 + 2);
      v28 = *v8;
      v43 = (char *)&v28;
      v44 = 4LL;
      TlgCreateWsz(&v45, v13);
      v14 = (const CHAR *)*((_QWORD *)v8 + 8);
      v29 = v8[6];
      v46 = &v29;
      v47 = 4LL;
      TlgCreateSz(&v48, v14);
      v15 = (const CHAR *)*((_QWORD *)v8 + 10);
      LODWORD(v30) = v8[18];
      v49 = &v30;
      v50 = 4LL;
      TlgCreateSz(&v51, v15);
      TlgCreateWsz(&v52, *((LPCWSTR *)v8 + 11));
      v16 = (const CHAR *)*((_QWORD *)v8 + 13);
      v22 = v8[24];
      v53 = &v22;
      v54 = 4LL;
      TlgCreateSz(&v55, v16);
      TlgCreateWsz(&v56, *((LPCWSTR *)v8 + 14));
      v17 = v8[2];
      v18 = (const CHAR *)*((_QWORD *)v8 + 5);
      v57 = &v23;
      fPending[0] = v8[15];
      v23 = v17;
      v59 = fPending;
      v58 = 4LL;
      v60 = 4LL;
      TlgCreateSz(&v61, v18);
      v63 = 4LL;
      v64 = &v71;
      v62 = &v70;
      v66 = &v72;
      v65 = 4LL;
      v67 = 4LL;
      v69 = 4LL;
      v68 = &a5;
      TlgWrite(v19, &unk_1804C79AD, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 0x19u, &pData);
    }
  }
  else
  {
    wil::ActivityBase<StartMenuExperienceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
      (__int64)this,
      (RTL_SRWLOCK **)&v31);
    v9 = (RTL_SRWLOCK *)v31;
    **((_DWORD **)this + 6) = 2;
    if ( v9 )
      ReleaseSRWLockExclusive(v9);
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`CortanaProactiveLogging::Instance'::`2'::wrapper, 0, fPending, &Context)
      && fPending[0] )
    {
      Context = qword_180599CF8;
      qword_180599CF8[0] = &ShellScreenClippingLogging::`vftable';
      qword_180599D10 = (struct _TlgProvider_t *)&`CortanaProactiveLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_0a4c5659e8368aeb314f53434332ab54_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180599CF8, qword_180599D10);
      InitOnceComplete(&`CortanaProactiveLogging::Instance'::`2'::wrapper, 0, qword_180599CF8);
    }
    v10 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
    if ( *(_DWORD *)v10 > 5u )
    {
      v34 = 8LL;
      v33 = &`NotificationCenterUITelemetry::NotificationCenterTelemetry::LaunchActionCenter::StartActivity'::`4'::_TlgActivityPrivacyTag;
      v20 = *(_DWORD *)(*((_QWORD *)this + 6) + 76LL);
      v35 = (__int64 *)&v23;
      v23 = v20;
      v36 = 4LL;
      CurrentThreadId = GetCurrentThreadId();
      v38 = 4LL;
      v22 = CurrentThreadId;
      *(_QWORD *)&pDesc.Size = 4LL;
      v37 = &v22;
      pDesc.Ptr = (ULONGLONG)&v70;
      v40 = &v71;
      v42.Ptr = (ULONGLONG)&v72;
      v43 = &a5;
      v41 = 4LL;
      *(_QWORD *)&v42.Size = 4LL;
      v44 = 4LL;
      TlgWrite(v10, &unk_1804C7924, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 9u, &pData);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((CortanaProactiveTelemetry::CortanaExperienceManager_PositionCortanaWindow *)((char *)this + 8));
}
