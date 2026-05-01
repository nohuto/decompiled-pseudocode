/*
 * XREFs of _lambda_6993ad0a1190e378d2297439533de25a_::_lambda_invoker_cdecl_ @ 0x18029FE40
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$StartDidntOpenIn30Seconds@I@CommonStartTelemetry@@SAX$$QEAI@Z @ 0x1802A1A2C (--$StartDidntOpenIn30Seconds@I@CommonStartTelemetry@@SAX$$QEAI@Z.c)
 *     ?PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAX_J@Z @ 0x1803B0CAC (-PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAX_J@Z.c)
 */

void __fastcall lambda_6993ad0a1190e378d2297439533de25a_::_lambda_invoker_cdecl_(
        PTP_CALLBACK_INSTANCE Instance,
        struct IUnknown *Context,
        PTP_TIMER Timer)
{
  __int64 v4; // r9
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int lpVtbl; // [rsp+38h] [rbp+10h] BYREF

  lpVtbl = (int)Context[8].lpVtbl;
  CommonStartTelemetry::StartDidntOpenIn30Seconds<unsigned int>(&lpVtbl, Context, Timer);
  v5 = ExperienceManagerUtils::PostToUIThread(0LL, Context, (void *)3, v4);
  if ( v5 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      1120LL,
      (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
      (const char *)(unsigned int)v5);
}
