/*
 * XREFs of ?StartActivity@ActivationRequested@ShellPositionerTelemetry@@QEAAXXZ @ 0x180048144
 * Callers:
 *     ?ActivationRequested@ShellPositionerManager@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x180047D40 (-ActivationRequested@ShellPositionerManager@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18002E740 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?LockExclusive@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180048420 (-LockExclusive@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0I.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180048488 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     TraceLoggingProviderEnabled @ 0x1800484B4 (TraceLoggingProviderEnabled.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x1800828D0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     atexit @ 0x18008753C (atexit.c)
 *     ?zInternalRelatedId@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x18008D338 (-zInternalRelatedId@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Pa.c)
 *     ??2@YAPEAX_KPEAX@Z @ 0x1801002A4 (--2@YAPEAX_KPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ShellPositionerTelemetry::ActivationRequested::StartActivity(
        ShellPositionerTelemetry::ActivationRequested *this)
{
  __int64 v2; // rdi
  unsigned __int64 v3; // rcx
  __int64 v4; // rdi
  const GUID *v5; // rax
  const GUID *v6; // r8
  ULONG UserDataCount; // edx
  _QWORD *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  _QWORD *v11; // rax
  WINBOOL fPending; // [rsp+38h] [rbp-49h] BYREF
  WINBOOL v13; // [rsp+3Ch] [rbp-45h] BYREF
  DWORD CurrentThreadId; // [rsp+40h] [rbp-41h] BYREF
  LPVOID Context; // [rsp+48h] [rbp-39h] BYREF
  LPVOID v16; // [rsp+50h] [rbp-31h] BYREF
  _BYTE v17[8]; // [rsp+58h] [rbp-29h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+60h] [rbp-21h] BYREF
  __int64 v19; // [rsp+70h] [rbp-11h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+78h] [rbp-9h] BYREF
  void *v21; // [rsp+88h] [rbp+7h]
  int v22; // [rsp+90h] [rbp+Fh]
  int v23; // [rsp+94h] [rbp+13h]
  void *v24; // [rsp+98h] [rbp+17h]
  int v25; // [rsp+A0h] [rbp+1Fh]
  int v26; // [rsp+A4h] [rbp+23h]
  DWORD *p_CurrentThreadId; // [rsp+A8h] [rbp+27h]
  int v28; // [rsp+B0h] [rbp+2Fh]
  int v29; // [rsp+B4h] [rbp+33h]

  v19 = -2LL;
  wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(this, v17);
  v2 = *((_QWORD *)this + 6);
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = &unk_180599C78;
    v8 = operator new((unsigned __int64)&ImmersiveIconsLogging::`vftable', &unk_180599C78);
    *v8 = &Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::`vftable'{for `ObjectWithClassName'};
    *v8 = v9;
    v8[3] = v10;
    atexit(lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&unk_180599C78, qword_180599C90);
    InitOnceComplete(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &unk_180599C78);
  }
  if ( TraceLoggingProviderEnabled(*((TraceLoggingHProvider *)Context + 1), 5u, 0LL) )
  {
    EventActivityIdControl(3u, (LPGUID)(v2 + 8));
  }
  else
  {
    *(_QWORD *)(v2 + 8) = 0LL;
    *(_QWORD *)(v2 + 16) = 0LL;
  }
  *(_DWORD *)v2 = 1;
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(v17);
  v16 = 0LL;
  if ( InitOnceBeginInitialize(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &v13, &v16) && v13 )
  {
    v16 = &unk_180599C78;
    v11 = operator new(v3, &unk_180599C78);
    *v11 = &Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::`vftable'{for `ObjectWithClassName'};
    *v11 = &ImmersiveIconsLogging::`vftable';
    v11[3] = &`WindowManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&unk_180599C78, qword_180599C90);
    InitOnceComplete(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &unk_180599C78);
  }
  v4 = *((_QWORD *)v16 + 1);
  if ( *(_DWORD *)v4 > 5u )
  {
    v24 = &`CFramePresentationTelemetry::SetSystemVisual::StartActivity'::`4'::_TlgActivityPrivacyTag;
    v25 = 8;
    v26 = 0;
    CurrentThreadId = GetCurrentThreadId();
    p_CurrentThreadId = &CurrentThreadId;
    v28 = 4;
    v29 = 0;
    v5 = (const GUID *)wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId(this);
    v6 = (const GUID *)(*((_QWORD *)this + 6) + 8LL);
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    *(_DWORD *)&EventDescriptor.Level = 261;
    EventDescriptor.Keyword = 0LL;
    UserData.Ptr = *(_QWORD *)(v4 + 8);
    UserData.Size = *(unsigned __int16 *)UserData.Ptr;
    UserData.Reserved = 2;
    v21 = &unk_1804DE0F9;
    v22 = 63;
    v23 = 1;
    fPending = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(*(_QWORD *)(v4 + 32), &EventDescriptor, v6, v5, UserDataCount, &UserData);
  }
  if ( !*((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((ShellPositionerTelemetry::ActivationRequested *)((char *)this + 8));
}
