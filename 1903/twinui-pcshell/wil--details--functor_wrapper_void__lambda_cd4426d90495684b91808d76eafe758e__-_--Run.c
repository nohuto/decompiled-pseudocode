/*
 * XREFs of wil::details::functor_wrapper_void__lambda_cd4426d90495684b91808d76eafe758e__&_::Run @ 0x180400F50
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StartWatching@AssistantLightManager@Lighting@TwinUI@@AEAAJXZ @ 0x180400F8C (-StartWatching@AssistantLightManager@Lighting@TwinUI@@AEAAJXZ.c)
 */

__int64 __fastcall wil::details::functor_wrapper_void__lambda_cd4426d90495684b91808d76eafe758e____::Run(__int64 a1)
{
  int started; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  started = TwinUI::Lighting::AssistantLightManager::StartWatching(**(TwinUI::Lighting::AssistantLightManager ***)(a1 + 8));
  if ( started < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x23,
      (__int64)"pcshell\\twinui\\lighting\\lib\\assistantlightmanager.cpp",
      (const char *)(unsigned int)started);
  return 0LL;
}
