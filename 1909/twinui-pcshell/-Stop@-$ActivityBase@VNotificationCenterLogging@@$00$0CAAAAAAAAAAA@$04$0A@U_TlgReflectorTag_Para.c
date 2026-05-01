/*
 * XREFs of ?Stop@?$ActivityBase@VNotificationCenterLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1801A9D9C
 * Callers:
 *     ?HideInHolographic@CToastCenterExperienceManager@@AEAAJXZ @ 0x1801A4F94 (-HideInHolographic@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     ?RegisterHolographicExecutor@CToastCenterExperienceManager@@UEAAJPEAUIHolographicCoreExperienceExecutor@Holographic@Shell@Internal@Windows@@@Z @ 0x1801A7E00 (-RegisterHolographicExecutor@CToastCenterExperienceManager@@UEAAJPEAUIHolographicCoreExperienceE.c)
 *     ?ShowInHolographic@CToastCenterExperienceManager@@AEAAJXZ @ 0x1801A8D54 (-ShowInHolographic@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     ?UnregisterHolographicExecutor@CToastCenterExperienceManager@@UEAAJXZ @ 0x1801AC7E0 (-UnregisterHolographicExecutor@CToastCenterExperienceManager@@UEAAJXZ.c)
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800319B4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _TlgKeywordOn @ 0x180039514 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180039540 (_TlgWrite.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180085500 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     atexit @ 0x18008A080 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?SetStopResult@?$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA_NJPEAJ@Z @ 0x180137504 (-SetStopResult@-$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@.c)
 *     ?LockExclusive@?$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180150C54 (-LockExclusive@-$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflecto.c)
 */

void __fastcall wil::ActivityBase<NotificationCenterLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(
        __int64 a1)
{
  bool v2; // di
  const struct _TlgProvider_t *Ptr; // rdi
  DWORD CurrentThreadId; // eax
  DWORD v5; // [rsp+30h] [rbp-29h] BYREF
  PSRWLOCK SRWLock; // [rsp+38h] [rbp-21h] BYREF
  WINBOOL fPending; // [rsp+40h] [rbp-19h] BYREF
  int v8; // [rsp+44h] [rbp-15h] BYREF
  __int64 v9; // [rsp+48h] [rbp-11h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-9h] BYREF
  __int64 *v11; // [rsp+70h] [rbp+17h]
  int v12; // [rsp+78h] [rbp+1Fh]
  int v13; // [rsp+7Ch] [rbp+23h]
  int *v14; // [rsp+80h] [rbp+27h]
  int v15; // [rsp+88h] [rbp+2Fh]
  int v16; // [rsp+8Ch] [rbp+33h]
  int *v17; // [rsp+90h] [rbp+37h]
  int v18; // [rsp+98h] [rbp+3Fh]
  int v19; // [rsp+9Ch] [rbp+43h]

  wil::ActivityBase<NotificationCenterLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    a1,
    &SRWLock);
  v2 = wil::ActivityBase<WindowManagementLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WindowManagementLogging,_TlgReflectorTag_Param0IsProviderType>::SetStopResult(
         *(_QWORD *)(a1 + 48),
         0,
         (int *)&v5);
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  }
  else
  {
    SRWLock = 0LL;
    if ( InitOnceBeginInitialize(&`NotificationCenterLogging::Instance'::`2'::wrapper, 0, &fPending, (LPVOID *)&SRWLock)
      && fPending )
    {
      SRWLock = (PSRWLOCK)qword_1805C20C0;
      qword_1805C20C0[0] = &ShellScreenClippingLogging::`vftable';
      qword_1805C20D8 = (struct _TlgProvider_t *)&`NotificationCenterLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_f4c52185d8a4a8e42bb1421645a7adf9_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1805C20C0, qword_1805C20D8);
      InitOnceComplete(&`NotificationCenterLogging::Instance'::`2'::wrapper, 0, qword_1805C20C0);
    }
    Ptr = (const struct _TlgProvider_t *)SRWLock[1].Ptr;
    if ( *(_DWORD *)Ptr > 5u && TlgKeywordOn((TraceLoggingHProvider)SRWLock[1].Ptr, 0x200000000000uLL) )
    {
      v13 = 0;
      v8 = 0;
      v16 = 0;
      v11 = &v9;
      v14 = &v8;
      v9 = 0x1000000LL;
      v12 = 8;
      v15 = 4;
      CurrentThreadId = GetCurrentThreadId();
      v19 = 0;
      v5 = CurrentThreadId;
      v17 = (int *)&v5;
      v18 = 4;
      TlgWrite(Ptr, &unk_1804DC895, (LPCGUID)(*(_QWORD *)(a1 + 48) + 8LL), 0LL, 5u, &pData);
    }
  }
  if ( *(_DWORD *)(a1 + 32) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
}
