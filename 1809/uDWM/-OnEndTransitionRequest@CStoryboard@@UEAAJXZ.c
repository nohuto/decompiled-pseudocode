/*
 * XREFs of ?OnEndTransitionRequest@CStoryboard@@UEAAJXZ @ 0x180032140
 * Callers:
 *     ?OnEndTransitionRequest@CLauncherDismiss@@UEAAJXZ @ 0x180003F30 (-OnEndTransitionRequest@CLauncherDismiss@@UEAAJXZ.c)
 *     ?OnEndTransitionRequest@CLauncherLaunch@@UEAAJXZ @ 0x180003F80 (-OnEndTransitionRequest@CLauncherLaunch@@UEAAJXZ.c)
 *     ?OnEndTransitionRequest@CSlideOutCharm@@UEAAJXZ @ 0x180006420 (-OnEndTransitionRequest@CSlideOutCharm@@UEAAJXZ.c)
 *     ?OnEndTransitionRequest@CAppLaunchSwitch@@UEAAJXZ @ 0x1800A4590 (-OnEndTransitionRequest@CAppLaunchSwitch@@UEAAJXZ.c)
 *     ?OnEndTransitionRequest@CDialogSwitch@@UEAAJXZ @ 0x1800A4620 (-OnEndTransitionRequest@CDialogSwitch@@UEAAJXZ.c)
 *     ?OnEndTransitionRequest@CGroupingStoryboard@@UEAAJXZ @ 0x1800A4660 (-OnEndTransitionRequest@CGroupingStoryboard@@UEAAJXZ.c)
 *     ?OnEndTransitionRequest@CGrowPanel@@UEAAJXZ @ 0x1800A46D0 (-OnEndTransitionRequest@CGrowPanel@@UEAAJXZ.c)
 *     ?OnEndTransitionRequest@CNoAnimation@@UEAAJXZ @ 0x1800A4740 (-OnEndTransitionRequest@CNoAnimation@@UEAAJXZ.c)
 *     ?OnEndTransitionRequest@CShrinkPanel@@UEAAJXZ @ 0x1800A47F0 (-OnEndTransitionRequest@CShrinkPanel@@UEAAJXZ.c)
 * Callees:
 *     ?Release@CStoryboard@@QEAAKXZ @ 0x18002DC7C (-Release@CStoryboard@@QEAAKXZ.c)
 *     ?_EnumerateWindows@CStoryboard@@IEAAJW4EnumWindowFlags@1@@Z @ 0x180032184 (-_EnumerateWindows@CStoryboard@@IEAAJW4EnumWindowFlags@1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CStoryboard::OnEndTransitionRequest(CStoryboard **this)
{
  int v2; // eax
  unsigned int v3; // ebx
  CStoryboard *v4; // rcx

  v2 = CStoryboard::_EnumerateWindows(this, 1LL);
  v3 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v2, 0x143Bu);
  }
  else
  {
    v4 = this[10];
    if ( v4 )
    {
      CStoryboard::Release(v4);
      this[10] = 0LL;
    }
  }
  return v3;
}
