/*
 * XREFs of ?OnEndTransitionRequest@CAppLaunchSwitch@@UEAAJXZ @ 0x1800A8890
 * Callers:
 *     <none>
 * Callees:
 *     ?OnEndTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEAVCStoryboard@@@Z @ 0x1800054F0 (-OnEndTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEAVCStoryboard@@@Z.c)
 *     ?OnEndTransitionRequest@CStoryboard@@UEAAJXZ @ 0x1800305C0 (-OnEndTransitionRequest@CStoryboard@@UEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CAppLaunchSwitch::OnEndTransitionRequest(CStoryboard **this)
{
  int v2; // eax
  CAnimationScheduler *v3; // rcx
  int v4; // eax
  unsigned int v6; // [rsp+20h] [rbp-18h]

  v2 = CStoryboard::OnEndTransitionRequest(this);
  if ( v2 >= 0 )
  {
    v3 = (CAnimationScheduler *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 30);
    if ( *((_BYTE *)this + 120) )
    {
      v4 = CAnimationScheduler::OnEndTransitionRequestFromStoryboard(v3, 0x3Bu, (struct CStoryboard *)this);
      if ( v4 >= 0 )
        return 0LL;
      v6 = 2652;
    }
    else
    {
      v4 = CAnimationScheduler::OnEndTransitionRequestFromStoryboard(v3, 0x3Au, (struct CStoryboard *)this);
      if ( v4 >= 0 )
        return 0LL;
      v6 = 2656;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800CAB78, 1LL, v4, v6);
    return 0LL;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v2, 0xA53u);
  return 0LL;
}
