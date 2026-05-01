/*
 * XREFs of ?StartActivity@ShowJumpViewActivity@JumpViewProvider@@QEAAXPEBG0W4JumpViewInvocationSurfaceType@JumpView@Shell@Internal@Windows@@W4JumpViewInvocationMethod@4567@@Z @ 0x18016F39C
 * Callers:
 *     ?BeginTelemetryActivity@CJumpViewExperienceManager@@AEAA?AVShowJumpViewActivity@JumpViewProvider@@PEAUIJumpViewParams@JumpView@Shell@Internal@Windows@@@Z @ 0x18016CD3C (-BeginTelemetryActivity@CJumpViewExperienceManager@@AEAA-AVShowJumpViewActivity@JumpViewProvider.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180015F5C (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180017494 (_TlgWrite.c)
 *     TraceLoggingProviderEnabled @ 0x18002F6C0 (TraceLoggingProviderEnabled.c)
 *     _TlgCreateWsz @ 0x180033780 (_TlgCreateWsz.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18003EB90 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?zInternalRelatedId@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x1800834E0 (-zInternalRelatedId@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ?LockExclusive@?$ActivityBase@VTaskbarLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18010B090 (-LockExclusive@-$ActivityBase@VTaskbarLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?CensorPath@JumpViewTelemetryHelper@@YAPEBGPEBG@Z @ 0x18016D058 (-CensorPath@JumpViewTelemetryHelper@@YAPEBGPEBG@Z.c)
 *     ?get@?$static_lazy@VJumpViewProvider@@@details@wil@@QEAAPEAVJumpViewProvider@@P6AXXZ@Z @ 0x18016FA0C (-get@-$static_lazy@VJumpViewProvider@@@details@wil@@QEAAPEAVJumpViewProvider@@P6AXXZ@Z.c)
 */

void __fastcall JumpViewProvider::ShowJumpViewActivity::StartActivity(
        __int64 a1,
        const WCHAR *a2,
        const WCHAR *a3,
        int a4,
        int a5)
{
  unsigned __int64 v9; // rax
  const WCHAR *v10; // rsi
  const WCHAR *v11; // r14
  const unsigned __int16 *v12; // rdx
  __int64 v13; // rbx
  __int64 v14; // rcx
  __int64 v15; // rax
  RTL_SRWLOCK *v16; // rcx
  __int64 v17; // rax
  const struct _TlgProvider_t *v18; // rbx
  DWORD CurrentThreadId; // eax
  const GUID *v20; // rax
  DWORD v21; // [rsp+30h] [rbp-71h] BYREF
  int v22; // [rsp+34h] [rbp-6Dh] BYREF
  PSRWLOCK SRWLock; // [rsp+38h] [rbp-69h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-61h] BYREF
  DWORD *v25; // [rsp+60h] [rbp-41h]
  __int64 v26; // [rsp+68h] [rbp-39h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+70h] [rbp-31h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v28; // [rsp+80h] [rbp-21h] BYREF
  int *v29; // [rsp+90h] [rbp-11h]
  __int64 v30; // [rsp+98h] [rbp-9h]
  PSRWLOCK *p_SRWLock; // [rsp+A0h] [rbp-1h]
  __int64 v32; // [rsp+A8h] [rbp+7h]

  if ( a2 )
  {
    v9 = -1LL;
    do
      ++v9;
    while ( a2[v9] );
  }
  else
  {
    v9 = 0LL;
  }
  if ( v9 >= 0x10 && (v10 = L"Microsoft.Edge.?", CompareStringOrdinal(L"Microsoft.Edge.?", 16, a2, 16, 1) == 2) )
  {
    v11 = &word_180411F30;
  }
  else
  {
    v10 = JumpViewTelemetryHelper::CensorPath(a2, a2);
    v11 = JumpViewTelemetryHelper::CensorPath(a3, v12);
  }
  wil::ActivityBase<TaskbarLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(a1, &SRWLock);
  v13 = *(_QWORD *)(a1 + 48);
  v15 = wil::details::static_lazy<JumpViewProvider>::get(
          v14,
          lambda_98d309e3731f67b600e39960160efe32_::_lambda_invoker_cdecl_);
  if ( TraceLoggingProviderEnabled(*(TraceLoggingHProvider *)(v15 + 8), 5u, 0x400000000000uLL) )
    EventActivityIdControl(3u, (LPGUID)(v13 + 8));
  else
    *(_QWORD *)(v13 + 8) = 0LL;
  v16 = SRWLock;
  *(_DWORD *)v13 = 1;
  if ( v16 )
    ReleaseSRWLockExclusive(v16);
  v17 = wil::details::static_lazy<JumpViewProvider>::get(
          v16,
          lambda_98d309e3731f67b600e39960160efe32_::_lambda_invoker_cdecl_);
  v18 = *(const struct _TlgProvider_t **)(v17 + 8);
  if ( *(_DWORD *)v18 > 5u && TlgKeywordOn(*(TraceLoggingHProvider *)(v17 + 8), 0x400000000000uLL) )
  {
    CurrentThreadId = GetCurrentThreadId();
    v26 = 4LL;
    v21 = CurrentThreadId;
    v25 = &v21;
    TlgCreateWsz(&pDesc, v10);
    TlgCreateWsz(&v28, v11);
    v22 = a4;
    v29 = &v22;
    LODWORD(SRWLock) = a5;
    p_SRWLock = &SRWLock;
    v30 = 4LL;
    v32 = 4LL;
    v20 = (const GUID *)wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId(a1);
    TlgWrite(v18, &unk_180450426, (LPCGUID)(*(_QWORD *)(a1 + 48) + 8LL), v20, 7u, &pData);
  }
  if ( !*(_DWORD *)(a1 + 32) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
}
