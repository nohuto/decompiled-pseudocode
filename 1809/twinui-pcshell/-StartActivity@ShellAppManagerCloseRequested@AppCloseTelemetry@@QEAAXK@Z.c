/*
 * XREFs of ?StartActivity@ShellAppManagerCloseRequested@AppCloseTelemetry@@QEAAXK@Z @ 0x180115FE4
 * Callers:
 *     ?OnCommand@CApplicationFrameService@@UEAAJPEAUIApplicationFrame@@PEBU_GUID@@K@Z @ 0x1800499E0 (-OnCommand@CApplicationFrameService@@UEAAJPEAUIApplicationFrame@@PEBU_GUID@@K@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180015F5C (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180017494 (_TlgWrite.c)
 *     TraceLoggingProviderEnabled @ 0x18002F6C0 (TraceLoggingProviderEnabled.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18003EB90 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?zInternalRelatedId@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x1800834E0 (-zInternalRelatedId@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ?get@?$static_lazy@VAppCloselogging@@@details@wil@@QEAAPEAVAppCloselogging@@P6AXXZ@Z @ 0x1800FA9A4 (-get@-$static_lazy@VAppCloselogging@@@details@wil@@QEAAPEAVAppCloselogging@@P6AXXZ@Z.c)
 *     ?LockExclusive@?$ActivityBase@VTaskbarLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18010B090 (-LockExclusive@-$ActivityBase@VTaskbarLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@.c)
 */

void __fastcall AppCloseTelemetry::ShellAppManagerCloseRequested::StartActivity(
        AppCloseTelemetry::ShellAppManagerCloseRequested *this,
        int a2)
{
  __int64 v4; // rdi
  __int64 v5; // rcx
  TraceLoggingHProvider *v6; // rax
  RTL_SRWLOCK *v7; // rcx
  LPVOID v8; // rax
  const struct _TlgProvider_t *v9; // rdi
  DWORD CurrentThreadId; // eax
  const GUID *v11; // rax
  UINT32 cData; // edx
  DWORD v13; // [rsp+38h] [rbp-9h] BYREF
  PSRWLOCK SRWLock; // [rsp+40h] [rbp-1h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp+7h] BYREF
  DWORD *v16; // [rsp+68h] [rbp+27h]
  int v17; // [rsp+70h] [rbp+2Fh]
  int v18; // [rsp+74h] [rbp+33h]
  PSRWLOCK *p_SRWLock; // [rsp+78h] [rbp+37h]
  int v20; // [rsp+80h] [rbp+3Fh]
  int v21; // [rsp+84h] [rbp+43h]

  wil::ActivityBase<TaskbarLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive((__int64)this, &SRWLock);
  v4 = *((_QWORD *)this + 6);
  v6 = (TraceLoggingHProvider *)wil::details::static_lazy<AppCloselogging>::get(
                                  v5,
                                  (void (__cdecl *)())lambda_3e26dcec44775d43d9dfc79dea49f939_::_lambda_invoker_cdecl_);
  if ( TraceLoggingProviderEnabled(v6[1], 5u, 0x400000000000uLL) )
    EventActivityIdControl(3u, (LPGUID)(v4 + 8));
  else
    *(_QWORD *)(v4 + 8) = 0LL;
  v7 = SRWLock;
  *(_DWORD *)v4 = 1;
  if ( v7 )
    ReleaseSRWLockExclusive(v7);
  v8 = wil::details::static_lazy<AppCloselogging>::get(
         (__int64)v7,
         (void (__cdecl *)())lambda_3e26dcec44775d43d9dfc79dea49f939_::_lambda_invoker_cdecl_);
  v9 = (const struct _TlgProvider_t *)*((_QWORD *)v8 + 1);
  if ( *(_DWORD *)v9 > 5u && TlgKeywordOn(*((TraceLoggingHProvider *)v8 + 1), 0x400000000000uLL) )
  {
    CurrentThreadId = GetCurrentThreadId();
    v18 = 0;
    v21 = 0;
    v13 = CurrentThreadId;
    v16 = &v13;
    p_SRWLock = &SRWLock;
    v17 = 4;
    LODWORD(SRWLock) = a2;
    v20 = 4;
    v11 = (const GUID *)wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId((__int64)this);
    TlgWrite(v9, &unk_1804498B8, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), v11, cData, &pData);
  }
  if ( !*((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((AppCloseTelemetry::ShellAppManagerCloseRequested *)((char *)this + 8));
}
