/*
 * XREFs of ??0?$wnf_subscription_state@K@details@wil@@QEAA@$$QEAV?$function@$$A6AXAEBK@Z@wistd@@@Z @ 0x1800E538C
 * Callers:
 *     ??$make_wnf_subscription_state@U_SEB_EVENT_HEADER@@@details@wil@@YAJAEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXAEBU_SEB_EVENT_HEADER@@@Z@wistd@@KPEAPEAU?$wnf_subscription_state@U_SEB_EVENT_HEADER@@@01@@Z @ 0x1800E501C (--$make_wnf_subscription_state@U_SEB_EVENT_HEADER@@@details@wil@@YAJAEBU_WNF_STATE_NAME@@$$QEAV-.c)
 *     ??$make_wnf_subscription_state@K@details@wil@@YAJAEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXAEBK@Z@wistd@@KPEAPEAU?$wnf_subscription_state@K@01@@Z @ 0x1801774E8 (--$make_wnf_subscription_state@K@details@wil@@YAJAEBU_WNF_STATE_NAME@@$$QEAV-$function@$$A6AXAEB.c)
 *     ??$make_wnf_subscription_state@W4ShellState@Holographic@Shell@Internal@Windows@@@details@wil@@YAJAEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXAEBW4ShellState@Holographic@Shell@Internal@Windows@@@Z@wistd@@KPEAPEAU?$wnf_subscription_state@W4ShellState@Holographic@Shell@Internal@Windows@@@01@@Z @ 0x1801B05F8 (--$make_wnf_subscription_state@W4ShellState@Holographic@Shell@Internal@Windows@@@details@wil@@YA.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?_Tidy@?$_Func_class@XAEBU_SEB_EVENT_HEADER@@U_Nil@wistd@@U23@U23@U23@U23@U23@@wistd@@IEAAXXZ @ 0x1800E2500 (-_Tidy@-$_Func_class@XAEBU_SEB_EVENT_HEADER@@U_Nil@wistd@@U23@U23@U23@U23@U23@@wistd@@IEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall wil::details::wnf_subscription_state<unsigned long>::wnf_subscription_state<unsigned long>(
        _QWORD *a1,
        __int64 a2)
{
  _QWORD *v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rdx

  a1[1] = 0LL;
  *a1 = &wil::details::wnf_subscription_state<unsigned long>::`vftable';
  v4 = a1 + 2;
  a1[15] = 0LL;
  v5 = *(_QWORD *)(a2 + 104);
  if ( v5 )
  {
    if ( v5 == a2 )
    {
      v4[13] = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v5 + 8LL))(v5, v4);
      wistd::_Func_class<void,_SEB_EVENT_HEADER const &,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::_Tidy(
        a2,
        v6);
    }
    else
    {
      v4[13] = v5;
      *(_QWORD *)(a2 + 104) = 0LL;
    }
  }
  else
  {
    v4[13] = 0LL;
  }
  return a1;
}
