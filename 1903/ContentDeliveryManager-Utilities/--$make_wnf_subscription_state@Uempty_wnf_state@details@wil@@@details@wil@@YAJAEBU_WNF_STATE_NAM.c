/*
 * XREFs of ??$make_wnf_subscription_state@Uempty_wnf_state@details@wil@@@details@wil@@YAJAEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXXZ@wistd@@KPEAPEAU?$wnf_subscription_state@Uempty_wnf_state@details@wil@@@01@@Z @ 0x180043BB4
 * Callers:
 *     ?RuntimeClassInitialize@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@QEAAJXZ @ 0x18003F5BC (-RuntimeClassInitialize@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@QEAA.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003584 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1800035D8 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800CABF4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBD10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::details::make_wnf_subscription_state<wil::details::empty_wnf_state>(
        __int64 a1,
        __int64 a2,
        int a3,
        _QWORD *a4)
{
  _QWORD *v6; // rax
  void (__fastcall ***v7)(_QWORD, __int64); // rdi
  unsigned int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // r8
  int v11; // r14d
  _QWORD *v12; // rsi
  __int64 v13; // r12
  __int64 v14; // r15
  DWORD LastError; // ebx
  unsigned int v17; // [rsp+40h] [rbp-20h] BYREF
  _QWORD *v18; // [rsp+48h] [rbp-18h]
  __int64 v19; // [rsp+50h] [rbp-10h] BYREF
  char v20; // [rsp+58h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  int v22; // [rsp+A0h] [rbp+40h] BYREF

  v22 = a3;
  v17 = 0;
  *a4 = 0LL;
  v6 = operator new(0x88uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = (void (__fastcall ***)(_QWORD, __int64))v6;
  if ( v6 )
  {
    v6[1] = 0LL;
    *v6 = &wil::details::wnf_subscription_state<wil::details::empty_wnf_state>::`vftable';
    if ( *(_QWORD *)(a2 + 112) )
    {
      v6[16] = v6 + 3;
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a2 + 112) + 16LL))(*(_QWORD *)(a2 + 112));
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a2 + 112) + 24LL))(*(_QWORD *)(a2 + 112));
      *(_QWORD *)(a2 + 112) = 0LL;
    }
    else
    {
      v6[16] = 0LL;
    }
  }
  else
  {
    v7 = 0LL;
  }
  if ( !v7 )
  {
    v8 = -2147024882;
    v9 = 909LL;
LABEL_12:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"internal\\sdk\\inc\\wil\\resource.h",
      (const char *)v8);
    goto LABEL_21;
  }
  v10 = v17;
  if ( v17 == -1 )
  {
    v22 = 0;
    v8 = NtQueryWnfStateData(&WNF_SHEL_TARGETED_CONTENT_SUBSCRIPTION_UPDATED, 0LL, 0LL, &v17, 0LL, &v22) | 0x10000000;
    if ( (int)(v8 + 0x80000000) >= 0 && v8 != -805306333 )
    {
      v9 = 916LL;
      goto LABEL_12;
    }
    v10 = v17;
  }
  v18 = v7 + 1;
  v19 = 0LL;
  v20 = 1;
  v11 = RtlSubscribeWnfStateChangeNotification(
          &v19,
          WNF_SHEL_TARGETED_CONTENT_SUBSCRIPTION_UPDATED,
          v10,
          lambda_d93655bd33d44513d4ad201382c30aa7_::_lambda_invoker_cdecl_,
          v7,
          0LL,
          0,
          0);
  if ( v20 )
  {
    v12 = v18;
    v13 = v19;
    v14 = *v18;
    if ( *v18 )
    {
      LastError = GetLastError();
      RtlUnsubscribeWnfNotificationWaitForCompletion(v14);
      SetLastError(LastError);
    }
    *v12 = v13;
  }
  if ( v11 >= 0 )
  {
    *a4 = v7;
    v8 = 0;
    v7 = 0LL;
  }
  else
  {
    v8 = wil::details::in1diag3::Return_NtStatus(
           retaddr,
           (void *)0x3A3,
           (__int64)"internal\\sdk\\inc\\wil\\resource.h",
           (const char *)(unsigned int)v11);
  }
LABEL_21:
  if ( v7 )
    (**v7)(v7, 1LL);
  return v8;
}
