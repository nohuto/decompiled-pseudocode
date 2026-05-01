/*
 * XREFs of ?StopActivity@ActivationRequested@ShellPositionerTelemetry@@MEAAXXZ @ 0x180047F80
 * Callers:
 *     <none>
 * Callees:
 *     _TlgCreateWsz @ 0x18001D97C (_TlgCreateWsz.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180028AD4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _TlgWrite @ 0x180030B18 (_TlgWrite.c)
 *     ?LockExclusive@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180048420 (-LockExclusive@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0I.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180048488 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     _TlgCreateSz @ 0x18007DC38 (_TlgCreateSz.c)
 *     ?zInternalStop@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180080858 (-zInternalStop@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0I.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x1800828D0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     atexit @ 0x18008753C (atexit.c)
 *     ??2@YAPEAX_KPEAX@Z @ 0x1801002A4 (--2@YAPEAX_KPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ShellPositionerTelemetry::ActivationRequested::StopActivity(
        ShellPositionerTelemetry::ActivationRequested *this)
{
  int *v2; // rsi
  int v3; // eax
  int *v4; // rsi
  unsigned __int64 v5; // rcx
  __int64 v6; // rdi
  const GUID *v7; // r8
  unsigned __int64 v8; // rcx
  _QWORD *v9; // rax
  TraceLoggingHProvider v10; // r10
  _QWORD *v11; // rax
  unsigned int v12; // [rsp+38h] [rbp-D0h] BYREF
  WINBOOL v13; // [rsp+3Ch] [rbp-CCh] BYREF
  int v14; // [rsp+40h] [rbp-C8h] BYREF
  int v15; // [rsp+44h] [rbp-C4h] BYREF
  int v16; // [rsp+48h] [rbp-C0h] BYREF
  int v17; // [rsp+4Ch] [rbp-BCh] BYREF
  int v18; // [rsp+50h] [rbp-B8h] BYREF
  int v19; // [rsp+54h] [rbp-B4h] BYREF
  WINBOOL fPending; // [rsp+58h] [rbp-B0h] BYREF
  int v21; // [rsp+5Ch] [rbp-ACh] BYREF
  __int64 v22; // [rsp+60h] [rbp-A8h] BYREF
  LPVOID v23; // [rsp+68h] [rbp-A0h] BYREF
  LPVOID Context; // [rsp+70h] [rbp-98h] BYREF
  __int64 v25; // [rsp+78h] [rbp-90h] BYREF
  _BYTE v26[8]; // [rsp+80h] [rbp-88h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+88h] [rbp-80h] BYREF
  __int64 v28; // [rsp+98h] [rbp-70h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+A8h] [rbp-60h] BYREF
  void *v30; // [rsp+B8h] [rbp-50h]
  int v31; // [rsp+C0h] [rbp-48h]
  int v32; // [rsp+C4h] [rbp-44h]
  void *v33; // [rsp+C8h] [rbp-40h]
  __int64 v34; // [rsp+D0h] [rbp-38h]
  int *v35; // [rsp+D8h] [rbp-30h]
  __int64 v36; // [rsp+E0h] [rbp-28h]
  __int64 *v37; // [rsp+E8h] [rbp-20h]
  __int64 v38; // [rsp+F0h] [rbp-18h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+F8h] [rbp-10h] BYREF
  __int64 *v40; // [rsp+118h] [rbp+10h]
  __int64 v41; // [rsp+120h] [rbp+18h]
  __int64 *v42; // [rsp+128h] [rbp+20h]
  __int64 v43; // [rsp+130h] [rbp+28h]
  int *v44; // [rsp+138h] [rbp+30h]
  __int64 v45; // [rsp+140h] [rbp+38h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+148h] [rbp+40h] BYREF
  int *v47; // [rsp+158h] [rbp+50h]
  __int64 v48; // [rsp+160h] [rbp+58h]
  struct _EVENT_DATA_DESCRIPTOR v49; // [rsp+168h] [rbp+60h] BYREF
  int *v50; // [rsp+178h] [rbp+70h]
  __int64 v51; // [rsp+180h] [rbp+78h]
  struct _EVENT_DATA_DESCRIPTOR v52; // [rsp+188h] [rbp+80h] BYREF
  int *v53; // [rsp+198h] [rbp+90h]
  __int64 v54; // [rsp+1A0h] [rbp+98h]
  struct _EVENT_DATA_DESCRIPTOR v55; // [rsp+1A8h] [rbp+A0h] BYREF
  int *v56; // [rsp+1B8h] [rbp+B0h]
  __int64 v57; // [rsp+1C0h] [rbp+B8h]
  struct _EVENT_DATA_DESCRIPTOR v58; // [rsp+1C8h] [rbp+C0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v59; // [rsp+1D8h] [rbp+D0h] BYREF
  int *v60; // [rsp+1E8h] [rbp+E0h]
  __int64 v61; // [rsp+1F0h] [rbp+E8h]
  struct _EVENT_DATA_DESCRIPTOR v62; // [rsp+1F8h] [rbp+F0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v63; // [rsp+208h] [rbp+100h] BYREF
  int *v64; // [rsp+218h] [rbp+110h]
  __int64 v65; // [rsp+220h] [rbp+118h]
  unsigned int *v66; // [rsp+228h] [rbp+120h]
  __int64 v67; // [rsp+230h] [rbp+128h]
  struct _EVENT_DATA_DESCRIPTOR v68; // [rsp+238h] [rbp+130h] BYREF

  v28 = -2LL;
  v2 = (int *)*((_QWORD *)this + 6);
  v3 = v2[19];
  if ( v3 < 0 && v3 == v2[21] )
    v4 = v2 + 20;
  else
    v4 = 0LL;
  if ( v4 )
  {
    wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop();
    v23 = 0LL;
    if ( InitOnceBeginInitialize(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &v13, &v23) && v13 )
    {
      v23 = &unk_180599C78;
      v9 = operator new(v8, &unk_180599C78);
      *v9 = &Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::`vftable'{for `ObjectWithClassName'};
      *v9 = &ImmersiveIconsLogging::`vftable';
      v9[3] = &`WindowManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&unk_180599C78, qword_180599C90);
      InitOnceComplete(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &unk_180599C78);
    }
    if ( **((_DWORD **)v23 + 1) > 5u )
    {
      v40 = &`NotificationCenterUITelemetry::NotificationCenterTelemetry::LaunchActionCenter::StartActivity'::`4'::_TlgActivityPrivacyTag;
      v41 = 8LL;
      v25 = 0x1000000LL;
      v42 = &v25;
      v43 = 8LL;
      v14 = v4[1];
      v44 = &v14;
      v45 = 4LL;
      TlgCreateSz(&pDesc, *((LPCSTR *)v4 + 6));
      v47 = v4 + 14;
      v48 = 4LL;
      TlgCreateSz(&v49, *((LPCSTR *)v4 + 15));
      v15 = *v4;
      v50 = &v15;
      v51 = 4LL;
      TlgCreateWsz(&v52, *((LPCWSTR *)v4 + 2));
      v16 = v4[6];
      v53 = &v16;
      v54 = 4LL;
      TlgCreateSz(&v55, *((LPCSTR *)v4 + 8));
      v17 = v4[18];
      v56 = &v17;
      v57 = 4LL;
      TlgCreateSz(&v58, *((LPCSTR *)v4 + 10));
      TlgCreateWsz(&v59, *((LPCWSTR *)v4 + 11));
      v18 = v4[24];
      v60 = &v18;
      v61 = 4LL;
      TlgCreateSz(&v62, *((LPCSTR *)v4 + 13));
      TlgCreateWsz(&v63, *((LPCWSTR *)v4 + 14));
      v19 = v4[2];
      v64 = &v19;
      v65 = 4LL;
      v12 = v4[15];
      v66 = &v12;
      v67 = 4LL;
      TlgCreateSz(&v68, *((LPCSTR *)v4 + 5));
      TlgWrite(v10, &unk_1804DE5D9, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 0x15u, &pData);
    }
  }
  else
  {
    wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(this, v26);
    **((_DWORD **)this + 6) = 2;
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(v26);
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
    {
      Context = &unk_180599C78;
      v11 = operator new(v5, &unk_180599C78);
      *v11 = &Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::`vftable'{for `ObjectWithClassName'};
      *v11 = &ImmersiveIconsLogging::`vftable';
      v11[3] = &`WindowManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&unk_180599C78, qword_180599C90);
      InitOnceComplete(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &unk_180599C78);
    }
    v6 = *((_QWORD *)Context + 1);
    if ( *(_DWORD *)v6 > 5u )
    {
      v33 = &`CFramePresentationTelemetry::SetSystemVisual::StartActivity'::`4'::_TlgActivityPrivacyTag;
      v34 = 8LL;
      v21 = *(_DWORD *)(*((_QWORD *)this + 6) + 76LL);
      v35 = &v21;
      v36 = 4LL;
      LODWORD(v22) = GetCurrentThreadId();
      v37 = &v22;
      v38 = 4LL;
      v7 = (const GUID *)(*((_QWORD *)this + 6) + 8LL);
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      *(_DWORD *)&EventDescriptor.Level = 517;
      EventDescriptor.Keyword = 0LL;
      UserData.Ptr = *(_QWORD *)(v6 + 8);
      UserData.Size = *(unsigned __int16 *)UserData.Ptr;
      UserData.Reserved = 2;
      v30 = &unk_1804DE590;
      v31 = 72;
      v32 = 1;
      v12 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      EventWriteTransfer(*(_QWORD *)(v6 + 32), &EventDescriptor, v7, 0LL, 5u, &UserData);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((ShellPositionerTelemetry::ActivationRequested *)((char *)this + 8));
}
