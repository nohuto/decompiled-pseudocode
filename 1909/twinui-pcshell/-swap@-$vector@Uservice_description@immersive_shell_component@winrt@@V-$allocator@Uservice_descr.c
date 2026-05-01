/*
 * XREFs of ?swap@?$vector@Uservice_description@immersive_shell_component@winrt@@V?$allocator@Uservice_description@immersive_shell_component@winrt@@@std@@@std@@QEAAXAEAV12@@Z @ 0x1800C50F4
 * Callers:
 *     wil::details::ScopeExitFn__lambda_bf0c31f178687dd5d0af47a31b5c5700___::_ScopeExitFn__lambda_bf0c31f178687dd5d0af47a31b5c5700___ @ 0x1800C066C (wil--details--ScopeExitFn__lambda_bf0c31f178687dd5d0af47a31b5c5700___--_ScopeExitFn__lambda_bf0c.c)
 *     ?PublishServices@immersive_shell_component@winrt@@EEAAJPEAUIServiceProvider@@PEAUIProfferService@@@Z @ 0x1800C1590 (-PublishServices@immersive_shell_component@winrt@@EEAAJPEAUIServiceProvider@@PEAUIProfferService.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::vector<winrt::immersive_shell_component::service_description>::swap(__int64 *a1, __int64 *a2)
{
  __int64 v3; // r8
  __int64 v4; // r8
  __int64 result; // rax
  __int64 v6; // rcx

  if ( a1 != a2 )
  {
    v3 = *a1;
    *a1 = *a2;
    *a2 = v3;
    v4 = a1[1];
    a1[1] = a2[1];
    a2[1] = v4;
    result = a2[2];
    v6 = a1[2];
    a1[2] = result;
    a2[2] = v6;
  }
  return result;
}
