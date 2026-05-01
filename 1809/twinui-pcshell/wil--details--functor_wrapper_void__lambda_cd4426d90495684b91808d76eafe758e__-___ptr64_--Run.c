/*
 * XREFs of wil::details::functor_wrapper_void__lambda_cd4426d90495684b91808d76eafe758e__&___ptr64_::Run @ 0x18009AE30
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StartWatching@AssistantLightManager@Lighting@TwinUI@@AEAAJXZ @ 0x18039B580 (-StartWatching@AssistantLightManager@Lighting@TwinUI@@AEAAJXZ.c)
 */

__int64 __fastcall wil::details::functor_wrapper_void__lambda_cd4426d90495684b91808d76eafe758e______ptr64_::Run(
        __int64 a1)
{
  int started; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  started = TwinUI::Lighting::AssistantLightManager::StartWatching(**(TwinUI::Lighting::AssistantLightManager ***)(a1 + 8));
  if ( started < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      35LL,
      (__int64)"pcshell\\twinui\\lighting\\lib\\assistantlightmanager.cpp",
      (const char *)(unsigned int)started);
  return 0LL;
}
