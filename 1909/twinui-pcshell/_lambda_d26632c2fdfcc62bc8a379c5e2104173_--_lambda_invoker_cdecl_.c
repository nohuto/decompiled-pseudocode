/*
 * XREFs of _lambda_d26632c2fdfcc62bc8a379c5e2104173_::_lambda_invoker_cdecl_ @ 0x1803174F0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$StartDidntOpenIn2Seconds@I@CommonStartTelemetry@@SAX$$QEAI@Z @ 0x180319134 (--$StartDidntOpenIn2Seconds@I@CommonStartTelemetry@@SAX$$QEAI@Z.c)
 *     ?PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAX_J@Z @ 0x1804327B0 (-PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAX_J@Z.c)
 */

void __fastcall lambda_d26632c2fdfcc62bc8a379c5e2104173_::_lambda_invoker_cdecl_(
        PTP_CALLBACK_INSTANCE Instance,
        struct IUnknown *Context,
        PTP_TIMER Timer)
{
  __int64 v4; // r9
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int lpVtbl; // [rsp+38h] [rbp+10h] BYREF

  lpVtbl = (int)Context[8].lpVtbl;
  CommonStartTelemetry::StartDidntOpenIn2Seconds<unsigned int>(&lpVtbl, Context, Timer);
  v5 = ExperienceManagerUtils::PostToUIThread(0LL, Context, (void *)7, v4);
  if ( v5 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x440,
      (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
      (const char *)(unsigned int)v5);
}
