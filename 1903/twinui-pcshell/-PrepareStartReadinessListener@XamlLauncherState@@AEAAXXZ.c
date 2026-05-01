/*
 * XREFs of ?PrepareStartReadinessListener@XamlLauncherState@@AEAAXXZ @ 0x1802FD38C
 * Callers:
 *     ?Initialize@XamlLauncherState@@UEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUICortanaExperienceManager@3456@PEAUIRealmActivationHistory@@PEAUIXamlLauncherStateCallback@@@Z @ 0x1802FAFD0 (-Initialize@XamlLauncherState@@UEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Window.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_3c35c1cad30329477d1975ae8bf095a3___ @ 0x1802F9998 (Windows--Internal--ComTaskPool--QueueTask__lambda_3c35c1cad30329477d1975ae8bf095a3___.c)
 */

void __fastcall XamlLauncherState::PrepareStartReadinessListener(XamlLauncherState *this)
{
  int v2; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  XamlLauncherState *v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = this;
  v2 = Windows::Internal::ComTaskPool::QueueTask__lambda_3c35c1cad30329477d1975ae8bf095a3___((__int64)this, &v4);
  if ( v2 < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x11B,
      (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
      (const char *)(unsigned int)v2);
    *((_BYTE *)this + 974) = 1;
  }
}
