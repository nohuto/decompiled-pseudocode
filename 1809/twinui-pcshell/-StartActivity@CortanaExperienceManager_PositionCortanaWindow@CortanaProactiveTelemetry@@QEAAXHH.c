/*
 * XREFs of ?StartActivity@CortanaExperienceManager_PositionCortanaWindow@CortanaProactiveTelemetry@@QEAAXHH@Z @ 0x180015678
 * Callers:
 *     ?PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z @ 0x180014D04 (-PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z.c)
 * Callees:
 *     ?LockExclusive@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180013B04 (-LockExclusive@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsP.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18003EB90 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18007FF10 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     ?zInternalRelatedId@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x1800834E0 (-zInternalRelatedId@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     atexit @ 0x1800848AC (atexit.c)
 */

void __fastcall CortanaProactiveTelemetry::CortanaExperienceManager_PositionCortanaWindow::StartActivity(
        CortanaProactiveTelemetry::CortanaExperienceManager_PositionCortanaWindow *this,
        int a2,
        int a3)
{
  __int64 v4; // rdi
  RTL_SRWLOCK *v5; // rcx
  __int64 v6; // rdi
  DWORD CurrentThreadId; // eax
  const GUID *v8; // rax
  __int64 v9; // r8
  REGHANDLE v10; // rcx
  WINBOOL fPending; // [rsp+30h] [rbp-69h] BYREF
  WINBOOL v12; // [rsp+34h] [rbp-65h] BYREF
  DWORD v13; // [rsp+38h] [rbp-61h] BYREF
  LPVOID Context; // [rsp+40h] [rbp-59h] BYREF
  LPVOID v15; // [rsp+48h] [rbp-51h] BYREF
  PSRWLOCK SRWLock; // [rsp+50h] [rbp-49h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+58h] [rbp-41h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+70h] [rbp-29h] BYREF
  void *v19; // [rsp+80h] [rbp-19h]
  int v20; // [rsp+88h] [rbp-11h]
  int v21; // [rsp+8Ch] [rbp-Dh]
  DWORD *v22; // [rsp+90h] [rbp-9h]
  int v23; // [rsp+98h] [rbp-1h]
  int v24; // [rsp+9Ch] [rbp+3h]
  int *v25; // [rsp+A0h] [rbp+7h]
  int v26; // [rsp+A8h] [rbp+Fh]
  int v27; // [rsp+ACh] [rbp+13h]
  int *v28; // [rsp+B0h] [rbp+17h]
  int v29; // [rsp+B8h] [rbp+1Fh]
  int v30; // [rsp+BCh] [rbp+23h]
  int v31; // [rsp+108h] [rbp+6Fh] BYREF
  int v32; // [rsp+110h] [rbp+77h] BYREF

  v32 = a3;
  v31 = a2;
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)this,
    &SRWLock);
  v4 = *((_QWORD *)this + 6);
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`CortanaProactiveLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = qword_18050F960;
    qword_18050F960[0] = &ShellScreenClippingLogging::`vftable';
    qword_18050F978 = (struct _TlgProvider_t *)&`CortanaProactiveLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_0a4c5659e8368aeb314f53434332ab54_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18050F960, qword_18050F978);
    InitOnceComplete(&`CortanaProactiveLogging::Instance'::`2'::wrapper, 0, qword_18050F960);
  }
  if ( **((_DWORD **)Context + 1) <= 5u )
    *(_QWORD *)(v4 + 8) = 0LL;
  else
    EventActivityIdControl(3u, (LPGUID)(v4 + 8));
  v5 = SRWLock;
  *(_DWORD *)v4 = 1;
  if ( v5 )
    ReleaseSRWLockExclusive(v5);
  v15 = 0LL;
  if ( InitOnceBeginInitialize(&`CortanaProactiveLogging::Instance'::`2'::wrapper, 0, &v12, &v15) && v12 )
  {
    v15 = qword_18050F960;
    qword_18050F960[0] = &ShellScreenClippingLogging::`vftable';
    qword_18050F978 = (struct _TlgProvider_t *)&`CortanaProactiveLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_0a4c5659e8368aeb314f53434332ab54_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18050F960, qword_18050F978);
    InitOnceComplete(&`CortanaProactiveLogging::Instance'::`2'::wrapper, 0, qword_18050F960);
  }
  v6 = *((_QWORD *)v15 + 1);
  if ( *(_DWORD *)v6 > 5u )
  {
    CurrentThreadId = GetCurrentThreadId();
    v24 = 0;
    v27 = 0;
    v30 = 0;
    v13 = CurrentThreadId;
    v22 = &v13;
    v25 = &v31;
    v28 = &v32;
    v23 = 4;
    v26 = 4;
    v29 = 4;
    v8 = (const GUID *)wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId(this);
    EventDescriptor.Keyword = 0LL;
    v9 = *((_QWORD *)this + 6);
    UserData.Ptr = *(_QWORD *)(v6 + 8);
    *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_1804542F6 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    *(_DWORD *)&EventDescriptor.Level = 261;
    v10 = *(_QWORD *)(v6 + 32);
    UserData.Size = *(unsigned __int16 *)UserData.Ptr;
    v19 = &unk_180454301;
    UserData.Reserved = 2;
    v20 = 89;
    v21 = 1;
    EventWriteTransfer(v10, &EventDescriptor, (LPCGUID)(v9 + 8), v8, 5u, &UserData);
  }
  if ( !*((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((CortanaProactiveTelemetry::CortanaExperienceManager_PositionCortanaWindow *)((char *)this + 8));
}
