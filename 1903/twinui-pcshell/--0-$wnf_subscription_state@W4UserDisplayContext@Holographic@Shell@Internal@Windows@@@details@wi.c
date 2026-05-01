/*
 * XREFs of ??0?$wnf_subscription_state@W4UserDisplayContext@Holographic@Shell@Internal@Windows@@@details@wil@@QEAA@$$QEAV?$function@$$A6AXAEBW4UserDisplayContext@Holographic@Shell@Internal@Windows@@@Z@wistd@@@Z @ 0x18009C960
 * Callers:
 *     ??$make_wnf_subscription_state@W4UserDisplayContext@Holographic@Shell@Internal@Windows@@@details@wil@@YAJAEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXAEBW4UserDisplayContext@Holographic@Shell@Internal@Windows@@@Z@wistd@@KPEAPEAU?$wnf_subscription_state@W4UserDisplayContext@Holographic@Shell@Internal@Windows@@@01@@Z @ 0x18009C7E4 (--$make_wnf_subscription_state@W4UserDisplayContext@Holographic@Shell@Internal@Windows@@@details.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall wil::details::wnf_subscription_state<enum Windows::Internal::Shell::Holographic::UserDisplayContext>::wnf_subscription_state<enum Windows::Internal::Shell::Holographic::UserDisplayContext>(
        _QWORD *a1,
        __int64 a2)
{
  a1[1] = 0LL;
  *a1 = &wil::details::wnf_subscription_state<enum Windows::Internal::Shell::Holographic::UserDisplayContext>::`vftable';
  if ( *(_QWORD *)(a2 + 112) )
  {
    a1[16] = a1 + 3;
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a2 + 112) + 16LL))(*(_QWORD *)(a2 + 112));
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a2 + 112) + 24LL))(*(_QWORD *)(a2 + 112));
    *(_QWORD *)(a2 + 112) = 0LL;
  }
  else
  {
    a1[16] = 0LL;
  }
  return a1;
}
