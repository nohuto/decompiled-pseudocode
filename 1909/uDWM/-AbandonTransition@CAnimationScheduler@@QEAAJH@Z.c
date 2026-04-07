/*
 * XREFs of ?AbandonTransition@CAnimationScheduler@@QEAAJH@Z @ 0x180033534
 * Callers:
 *     ?OnEndTransitionRequest@CSlideOutCharm@@UEAAJXZ @ 0x180033460 (-OnEndTransitionRequest@CSlideOutCharm@@UEAAJXZ.c)
 *     ?OnAnimationStart@CAppArrangementDelayed@@EEAAJXZ @ 0x1800A8410 (-OnAnimationStart@CAppArrangementDelayed@@EEAAJXZ.c)
 *     ?OnEndTransitionRequest@CDialogSwitch@@UEAAJXZ @ 0x1800A8920 (-OnEndTransitionRequest@CDialogSwitch@@UEAAJXZ.c)
 *     ?OnEndTransitionRequest@CShrinkPanel@@UEAAJXZ @ 0x1800A8AF0 (-OnEndTransitionRequest@CShrinkPanel@@UEAAJXZ.c)
 *     ?_WindowEnumCallback@CTDBN@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800ADA50 (-_WindowEnumCallback@CTDBN@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 * Callees:
 *     ?Abandon@CStoryboard@@QEAAXXZ @ 0x1800A733C (-Abandon@CStoryboard@@QEAAXXZ.c)
 */

__int64 __fastcall CAnimationScheduler::AbandonTransition(CAnimationScheduler *this, int a2)
{
  __int64 v2; // rbx
  unsigned int i; // r9d
  CStoryboard *v6; // rcx

  v2 = 0LL;
  for ( i = -2147467259; (unsigned int)v2 < *((_DWORD *)this + 10); v2 = (unsigned int)(v2 + 1) )
  {
    v6 = *(CStoryboard **)(*((_QWORD *)this + 2) + 8 * v2);
    if ( *((_DWORD *)v6 + 6) == 3 && *((_DWORD *)v6 + 18) == a2 )
    {
      CStoryboard::Abandon(v6);
      i = 0;
    }
  }
  return i;
}
