/*
 * XREFs of ?StartActivity@ShellAppManagerCloseRequested@AppCloseTelemetry@@QEAAXK@Z @ 0x18015CD38
 * Callers:
 *     ?OnCommand@CApplicationFrameService@@UEAAJPEAUIApplicationFrame@@PEBU_GUID@@K@Z @ 0x180047460 (-OnCommand@CApplicationFrameService@@UEAAJPEAUIApplicationFrame@@PEBU_GUID@@K@Z.c)
 * Callees:
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180037490 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _TlgKeywordOn @ 0x180039514 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180039540 (_TlgWrite.c)
 *     TraceLoggingProviderEnabled @ 0x18003B260 (TraceLoggingProviderEnabled.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ?zInternalRelatedId@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x18008FB54 (-zInternalRelatedId@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Pa.c)
 *     ?get@?$static_lazy@VAppCloselogging@@@details@wil@@QEAAPEAVAppCloselogging@@P6AXXZ@Z @ 0x18013F9F0 (-get@-$static_lazy@VAppCloselogging@@@details@wil@@QEAAPEAVAppCloselogging@@P6AXXZ@Z.c)
 *     ?LockExclusive@?$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180150C54 (-LockExclusive@-$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflecto.c)
 */

void __fastcall AppCloseTelemetry::ShellAppManagerCloseRequested::StartActivity(
        AppCloseTelemetry::ShellAppManagerCloseRequested *this,
        int a2)
{
  __int64 v4; // rdi
  __int64 v5; // rcx
  _QWORD *v6; // rax
  RTL_SRWLOCK *v7; // rcx
  _QWORD *v8; // rax
  const struct _TlgProvider_t *v9; // rdi
  DWORD CurrentThreadId; // eax
  const GUID *v11; // rax
  DWORD v12; // [rsp+38h] [rbp-19h] BYREF
  PSRWLOCK SRWLock; // [rsp+40h] [rbp-11h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-9h] BYREF
  __int64 *v15; // [rsp+68h] [rbp+17h]
  int v16; // [rsp+70h] [rbp+1Fh]
  int v17; // [rsp+74h] [rbp+23h]
  DWORD *v18; // [rsp+78h] [rbp+27h]
  int v19; // [rsp+80h] [rbp+2Fh]
  int v20; // [rsp+84h] [rbp+33h]
  PSRWLOCK *p_SRWLock; // [rsp+88h] [rbp+37h]
  int v22; // [rsp+90h] [rbp+3Fh]
  int v23; // [rsp+94h] [rbp+43h]

  wil::ActivityBase<NotificationCenterLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)this,
    &SRWLock);
  v4 = *((_QWORD *)this + 6);
  v6 = wil::details::static_lazy<AppCloselogging>::get(
         v5,
         (void (__cdecl *)())lambda_3e26dcec44775d43d9dfc79dea49f939_::_lambda_invoker_cdecl_);
  if ( TraceLoggingProviderEnabled((TraceLoggingHProvider)v6[1], 5u, 0x400000000000uLL) )
  {
    EventActivityIdControl(3u, (LPGUID)(v4 + 8));
  }
  else
  {
    *(_QWORD *)(v4 + 8) = 0LL;
    *(_QWORD *)(v4 + 16) = 0LL;
  }
  v7 = SRWLock;
  *(_DWORD *)v4 = 1;
  if ( v7 )
    ReleaseSRWLockExclusive(v7);
  v8 = wil::details::static_lazy<AppCloselogging>::get(
         (__int64)v7,
         (void (__cdecl *)())lambda_3e26dcec44775d43d9dfc79dea49f939_::_lambda_invoker_cdecl_);
  v9 = (const struct _TlgProvider_t *)v8[1];
  if ( *(_DWORD *)v9 > 5u && TlgKeywordOn((TraceLoggingHProvider)v8[1], 0x400000000000uLL) )
  {
    v17 = 0;
    v15 = &`NotificationCenterUITelemetry::NotificationCenterTelemetry::LaunchActionCenter::StartActivity'::`4'::_TlgActivityPrivacyTag;
    v16 = 8;
    CurrentThreadId = GetCurrentThreadId();
    v20 = 0;
    v23 = 0;
    v12 = CurrentThreadId;
    v18 = &v12;
    p_SRWLock = &SRWLock;
    v19 = 4;
    LODWORD(SRWLock) = a2;
    v22 = 4;
    v11 = (const GUID *)wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId((__int64)this);
    TlgWrite(v9, &unk_1804DE878, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), v11, 5u, &pData);
  }
  if ( !*((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((AppCloseTelemetry::ShellAppManagerCloseRequested *)((char *)this + 8));
}
