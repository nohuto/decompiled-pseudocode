/*
 * XREFs of ?StopActivity@FrameworkViewTypeChanged@ShellPositionerTelemetry@@MEAAXXZ @ 0x1800796A0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgCreateWsz @ 0x180027E20 (_TlgCreateWsz.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800319B4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _TlgWrite @ 0x180039540 (_TlgWrite.c)
 *     ?LockExclusive@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18003B1B0 (-LockExclusive@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0I.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18003B218 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     _TlgCreateSz @ 0x1800800E8 (_TlgCreateSz.c)
 *     ?zInternalStop@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180082F68 (-zInternalStop@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0I.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180085500 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     atexit @ 0x18008A080 (atexit.c)
 *     ??2@YAPEAX_KPEAX@Z @ 0x18011F2C4 (--2@YAPEAX_KPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ShellPositionerTelemetry::FrameworkViewTypeChanged::StopActivity(
        ShellPositionerTelemetry::FrameworkViewTypeChanged *this)
{
  int *v2; // rsi
  int v3; // eax
  int *v4; // rsi
  unsigned __int64 v5; // rcx
  const struct _TlgProvider_t *v6; // rsi
  unsigned __int64 v7; // rcx
  _QWORD *v8; // rax
  TraceLoggingHProvider v9; // r10
  _QWORD *v10; // rax
  DWORD CurrentThreadId; // [rsp+38h] [rbp-D0h] BYREF
  int v12; // [rsp+3Ch] [rbp-CCh] BYREF
  WINBOOL fPending[2]; // [rsp+40h] [rbp-C8h] BYREF
  LPVOID Context; // [rsp+48h] [rbp-C0h] BYREF
  WINBOOL v15; // [rsp+50h] [rbp-B8h] BYREF
  int v16; // [rsp+54h] [rbp-B4h] BYREF
  int v17; // [rsp+58h] [rbp-B0h] BYREF
  int v18; // [rsp+5Ch] [rbp-ACh] BYREF
  __int64 v19; // [rsp+60h] [rbp-A8h] BYREF
  RTL_SRWLOCK *v20[2]; // [rsp+68h] [rbp-A0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+78h] [rbp-90h] BYREF
  void *v22; // [rsp+98h] [rbp-70h]
  __int64 v23; // [rsp+A0h] [rbp-68h]
  int *v24; // [rsp+A8h] [rbp-60h]
  __int64 v25; // [rsp+B0h] [rbp-58h]
  DWORD *p_CurrentThreadId; // [rsp+B8h] [rbp-50h]
  __int64 v27; // [rsp+C0h] [rbp-48h]
  EVENT_DATA_DESCRIPTOR v28; // [rsp+C8h] [rbp-40h] BYREF
  __int64 *v29; // [rsp+E8h] [rbp-20h]
  __int64 v30; // [rsp+F0h] [rbp-18h]
  RTL_SRWLOCK **v31; // [rsp+F8h] [rbp-10h]
  __int64 v32; // [rsp+100h] [rbp-8h]
  int *v33; // [rsp+108h] [rbp+0h]
  __int64 v34; // [rsp+110h] [rbp+8h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+118h] [rbp+10h] BYREF
  int *v36; // [rsp+128h] [rbp+20h]
  __int64 v37; // [rsp+130h] [rbp+28h]
  struct _EVENT_DATA_DESCRIPTOR v38; // [rsp+138h] [rbp+30h] BYREF
  int *v39; // [rsp+148h] [rbp+40h]
  __int64 v40; // [rsp+150h] [rbp+48h]
  struct _EVENT_DATA_DESCRIPTOR v41; // [rsp+158h] [rbp+50h] BYREF
  int *v42; // [rsp+168h] [rbp+60h]
  __int64 v43; // [rsp+170h] [rbp+68h]
  struct _EVENT_DATA_DESCRIPTOR v44; // [rsp+178h] [rbp+70h] BYREF
  __int64 *v45; // [rsp+188h] [rbp+80h]
  __int64 v46; // [rsp+190h] [rbp+88h]
  struct _EVENT_DATA_DESCRIPTOR v47; // [rsp+198h] [rbp+90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v48; // [rsp+1A8h] [rbp+A0h] BYREF
  DWORD *v49; // [rsp+1B8h] [rbp+B0h]
  __int64 v50; // [rsp+1C0h] [rbp+B8h]
  struct _EVENT_DATA_DESCRIPTOR v51; // [rsp+1C8h] [rbp+C0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v52; // [rsp+1D8h] [rbp+D0h] BYREF
  int *v53; // [rsp+1E8h] [rbp+E0h]
  __int64 v54; // [rsp+1F0h] [rbp+E8h]
  WINBOOL *v55; // [rsp+1F8h] [rbp+F0h]
  __int64 v56; // [rsp+200h] [rbp+F8h]
  struct _EVENT_DATA_DESCRIPTOR v57; // [rsp+208h] [rbp+100h] BYREF

  v20[1] = (RTL_SRWLOCK *)-2LL;
  v2 = (int *)*((_QWORD *)this + 6);
  v3 = v2[19];
  if ( v3 < 0 && v3 == v2[21] )
    v4 = v2 + 20;
  else
    v4 = 0LL;
  if ( v4 )
  {
    wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop();
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &v15, &Context) && v15 )
    {
      Context = &unk_1805C2098;
      v8 = operator new(v7, &unk_1805C2098);
      *v8 = &Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::`vftable'{for `ObjectWithClassName'};
      *v8 = &ImmersiveIconsLogging::`vftable';
      v8[3] = &`WindowManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&unk_1805C2098, qword_1805C20B0);
      InitOnceComplete(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &unk_1805C2098);
    }
    if ( **((_DWORD **)Context + 1) > 5u )
    {
      v29 = &`NotificationCenterUITelemetry::NotificationCenterTelemetry::LaunchActionCenter::StartActivity'::`4'::_TlgActivityPrivacyTag;
      v30 = 8LL;
      v20[0] = (RTL_SRWLOCK *)0x1000000;
      v31 = v20;
      v32 = 8LL;
      v16 = v4[1];
      v33 = &v16;
      v34 = 4LL;
      TlgCreateSz(&pDesc, *((LPCSTR *)v4 + 6));
      v36 = v4 + 14;
      v37 = 4LL;
      TlgCreateSz(&v38, *((LPCSTR *)v4 + 15));
      v17 = *v4;
      v39 = &v17;
      v40 = 4LL;
      TlgCreateWsz(&v41, *((LPCWSTR *)v4 + 2));
      v18 = v4[6];
      v42 = &v18;
      v43 = 4LL;
      TlgCreateSz(&v44, *((LPCSTR *)v4 + 8));
      LODWORD(v19) = v4[18];
      v45 = &v19;
      v46 = 4LL;
      TlgCreateSz(&v47, *((LPCSTR *)v4 + 10));
      TlgCreateWsz(&v48, *((LPCWSTR *)v4 + 11));
      CurrentThreadId = v4[24];
      v49 = &CurrentThreadId;
      v50 = 4LL;
      TlgCreateSz(&v51, *((LPCSTR *)v4 + 13));
      TlgCreateWsz(&v52, *((LPCWSTR *)v4 + 14));
      v12 = v4[2];
      v53 = &v12;
      v54 = 4LL;
      fPending[0] = v4[15];
      v55 = fPending;
      v56 = 4LL;
      TlgCreateSz(&v57, *((LPCSTR *)v4 + 5));
      TlgWrite(v9, &unk_180504C41, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 0x15u, &v28);
    }
  }
  else
  {
    wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
      (__int64)this,
      (__int64)v20);
    **((_DWORD **)this + 6) = 2;
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(v20);
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, fPending, &Context)
      && fPending[0] )
    {
      Context = &unk_1805C2098;
      v10 = operator new(v5, &unk_1805C2098);
      *v10 = &Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::`vftable'{for `ObjectWithClassName'};
      *v10 = &ImmersiveIconsLogging::`vftable';
      v10[3] = &`WindowManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&unk_1805C2098, qword_1805C20B0);
      InitOnceComplete(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &unk_1805C2098);
    }
    v6 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
    if ( *(_DWORD *)v6 > 5u )
    {
      v22 = &`CFramePresentationTelemetry::SetSystemVisual::StartActivity'::`4'::_TlgActivityPrivacyTag;
      v23 = 8LL;
      v12 = *(_DWORD *)(*((_QWORD *)this + 6) + 76LL);
      v24 = &v12;
      v25 = 4LL;
      CurrentThreadId = GetCurrentThreadId();
      p_CurrentThreadId = &CurrentThreadId;
      v27 = 4LL;
      TlgWrite(v6, &unk_180504BE8, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 5u, &pData);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((ShellPositionerTelemetry::FrameworkViewTypeChanged *)((char *)this + 8));
}
