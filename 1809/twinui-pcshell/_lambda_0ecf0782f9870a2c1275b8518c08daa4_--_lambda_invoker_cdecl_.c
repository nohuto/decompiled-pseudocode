/*
 * XREFs of _lambda_0ecf0782f9870a2c1275b8518c08daa4_::_lambda_invoker_cdecl_ @ 0x18029FDE0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$StartDidntOpenIn10Seconds@I@CommonStartTelemetry@@SAX$$QEAI@Z @ 0x1802A17F4 (--$StartDidntOpenIn10Seconds@I@CommonStartTelemetry@@SAX$$QEAI@Z.c)
 *     ?PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAX_J@Z @ 0x1803B0CAC (-PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAX_J@Z.c)
 */

void __fastcall lambda_0ecf0782f9870a2c1275b8518c08daa4_::_lambda_invoker_cdecl_(
        PTP_CALLBACK_INSTANCE Instance,
        struct IUnknown *Context,
        PTP_TIMER Timer)
{
  __int64 v4; // r9
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int lpVtbl; // [rsp+38h] [rbp+10h] BYREF

  lpVtbl = (int)Context[8].lpVtbl;
  CommonStartTelemetry::StartDidntOpenIn10Seconds<unsigned int>(&lpVtbl, Context, Timer);
  v5 = ExperienceManagerUtils::PostToUIThread(0LL, Context, (void *)8, v4);
  if ( v5 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      1099LL,
      (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
      (const char *)(unsigned int)v5);
}
