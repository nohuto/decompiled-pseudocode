/*
 * XREFs of ?Stop@?$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18028151C
 * Callers:
 *     _lambda_33af26c9d846f3b9c507d9b825ceee74_::operator() @ 0x18027E88C (_lambda_33af26c9d846f3b9c507d9b825ceee74_--operator().c)
 *     _lambda_a3ced70d1476e93ea420f346718bf2f6_::operator() @ 0x18027F080 (_lambda_a3ced70d1476e93ea420f346718bf2f6_--operator().c)
 *     _lambda_bb329e9869818a924204dbfd8ac58224_::operator() @ 0x18027F22C (_lambda_bb329e9869818a924204dbfd8ac58224_--operator().c)
 *     ?Navigate@XamlAltTabViewHost@@UEAAJI@Z @ 0x180280340 (-Navigate@XamlAltTabViewHost@@UEAAJI@Z.c)
 *     ?SwitchToSelectedItemAndDismiss@XamlAltTabViewHost@@UEAAJXZ @ 0x1802822C0 (-SwitchToSelectedItemAndDismiss@XamlAltTabViewHost@@UEAAJXZ.c)
 *     ?OnAltKeyUp@XamlAltTabViewController@@QE$AAAXXZ @ 0x18028F35C (-OnAltKeyUp@XamlAltTabViewController@@QE$AAAXXZ.c)
 * Callees:
 *     _TlgWrite @ 0x180017494 (_TlgWrite.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18003CC14 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?SetStopResult@?$ActivityData@VTrayNotificationAreaLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VTrayNotificationAreaLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA_NJPEAJ@Z @ 0x1800F3074 (-SetStopResult@-$ActivityData@VTrayNotificationAreaLogging@@U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?LockExclusive@?$ActivityBase@VTaskbarLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18010B090 (-LockExclusive@-$ActivityBase@VTaskbarLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?get@?$static_lazy@VXamlSwitcherLogging@@@details@wil@@QEAAPEAVXamlSwitcherLogging@@P6AXXZ@Z @ 0x18027C31C (-get@-$static_lazy@VXamlSwitcherLogging@@@details@wil@@QEAAPEAVXamlSwitcherLogging@@P6AXXZ@Z.c)
 */

void __fastcall wil::ActivityBase<XamlSwitcherLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop(__int64 a1)
{
  bool v2; // al
  PSRWLOCK v3; // rcx
  bool v4; // di
  const struct _TlgProvider_t *v5; // rdi
  DWORD CurrentThreadId; // eax
  DWORD v7; // [rsp+30h] [rbp-9h] BYREF
  PSRWLOCK SRWLock; // [rsp+38h] [rbp-1h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp+7h] BYREF
  PSRWLOCK *p_SRWLock; // [rsp+60h] [rbp+27h]
  int v11; // [rsp+68h] [rbp+2Fh]
  int v12; // [rsp+6Ch] [rbp+33h]
  int *v13; // [rsp+70h] [rbp+37h]
  int v14; // [rsp+78h] [rbp+3Fh]
  int v15; // [rsp+7Ch] [rbp+43h]

  wil::ActivityBase<TaskbarLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(a1, &SRWLock);
  v2 = wil::ActivityBase<TrayNotificationAreaLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<TrayNotificationAreaLogging,_TlgReflectorTag_Param0IsProviderType>::SetStopResult(
         *(_QWORD *)(a1 + 48),
         0,
         (int *)&v7);
  v3 = SRWLock;
  v4 = v2;
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  }
  else
  {
    v5 = (const struct _TlgProvider_t *)wil::details::static_lazy<XamlSwitcherLogging>::get(
                                          (__int64)v3,
                                          (void (__cdecl *)())lambda_6341f906d56bba57ec18edd8305f3a60_::_lambda_invoker_cdecl_)[1];
    if ( *(_DWORD *)v5 > 5u )
    {
      LODWORD(SRWLock) = 0;
      v12 = 0;
      p_SRWLock = &SRWLock;
      v11 = 4;
      CurrentThreadId = GetCurrentThreadId();
      v15 = 0;
      v7 = CurrentThreadId;
      v13 = (int *)&v7;
      v14 = 4;
      TlgWrite(v5, &unk_180447A4F, (LPCGUID)(*(_QWORD *)(a1 + 48) + 8LL), 0LL, 4u, &pData);
    }
  }
  if ( *(_DWORD *)(a1 + 32) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
}
