/*
 * XREFs of wil::details::ScopeExitFn__lambda_bf0c31f178687dd5d0af47a31b5c5700___::_ScopeExitFn__lambda_bf0c31f178687dd5d0af47a31b5c5700___ @ 0x1800C066C
 * Callers:
 *     _winrt::immersive_shell_component::PublishServices_::_1_::dtor$4 @ 0x1800C188F (_winrt--immersive_shell_component--PublishServices_--_1_--dtor$4.c)
 * Callees:
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18008E838 (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ?swap@?$vector@Uservice_description@immersive_shell_component@winrt@@V?$allocator@Uservice_description@immersive_shell_component@winrt@@@std@@@std@@QEAAXAEAV12@@Z @ 0x1800C50F4 (-swap@-$vector@Uservice_description@immersive_shell_component@winrt@@V-$allocator@Uservice_descr.c)
 */

void __fastcall wil::details::ScopeExitFn__lambda_bf0c31f178687dd5d0af47a31b5c5700___::_ScopeExitFn__lambda_bf0c31f178687dd5d0af47a31b5c5700___(
        __int64 a1)
{
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    wil::srwlock::lock_exclusive((RTL_SRWLOCK *)(*(_QWORD *)a1 + 80LL), &SRWLock);
    std::vector<winrt::immersive_shell_component::service_description>::swap(*(_QWORD *)a1 + 48LL, *(_QWORD *)(a1 + 8));
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
  }
}
