/*
 * XREFs of ?RuntimeClassInitialize@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@QEAAJXZ @ 0x18003E738
 * Callers:
 *     ??$MakeAndInitialize@VSubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@UISubscriptionManager@234@$$V@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@UISubscriptionManager@Internal@TargetedContent@ContentManagement@@@WRL@Microsoft@@@012@@Z @ 0x180042768 (--$MakeAndInitialize@VSubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@UISubs.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003864 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$make_wnf_subscription_state@Uempty_wnf_state@details@wil@@@details@wil@@YAJAEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXXZ@wistd@@KPEAPEAU?$wnf_subscription_state@Uempty_wnf_state@details@wil@@@01@@Z @ 0x180042CB4 (--$make_wnf_subscription_state@Uempty_wnf_state@details@wil@@@details@wil@@YAJAEBU_WNF_STATE_NAM.c)
 *     __security_check_cookie @ 0x1800C6A00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C7DF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1 #try_helpers=1
__int64 __fastcall ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::RuntimeClassInitialize(
        ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl *this,
        __int64 a2,
        __int64 a3)
{
  int v4; // eax
  void (__fastcall ***v5)(_QWORD, __int64); // rbx
  _QWORD *v6; // rsi
  void (__fastcall ***v7)(_QWORD, __int64); // r14
  DWORD LastError; // edi
  _QWORD *v9; // rdx
  _QWORD v11[2]; // [rsp+20h] [rbp-98h] BYREF
  _QWORD v12[13]; // [rsp+30h] [rbp-88h] BYREF
  _QWORD *v13; // [rsp+98h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]

  v11[1] = -2LL;
  v12[0] = off_1800D8B28;
  v12[1] = this;
  v13 = v12;
  v4 = wil::details::make_wnf_subscription_state<wil::details::empty_wnf_state>(this, v12, a3, v11);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x1862,
      (__int64)"internal\\sdk\\inc\\wil\\resource.h",
      (const char *)(unsigned int)v4);
    JUMPOUT(0x18003E870LL);
  }
  v5 = (void (__fastcall ***)(_QWORD, __int64))v11[0];
  v6 = (_QWORD *)((char *)this + 72);
  if ( v6 != v11 )
  {
    v7 = (void (__fastcall ***)(_QWORD, __int64))*v6;
    if ( *v6 )
    {
      LastError = GetLastError();
      (**v7)(v7, 1LL);
      SetLastError(LastError);
    }
    *v6 = v5;
    v5 = 0LL;
  }
  if ( v5 )
    (**v5)(v5, 1LL);
  if ( v13 )
  {
    v9 = v12;
    LOBYTE(v9) = v13 != v12;
    (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v13 + 24LL))(v13, v9);
  }
  return 0LL;
}
