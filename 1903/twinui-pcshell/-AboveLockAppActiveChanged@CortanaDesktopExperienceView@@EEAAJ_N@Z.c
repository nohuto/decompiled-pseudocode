/*
 * XREFs of ?AboveLockAppActiveChanged@CortanaDesktopExperienceView@@EEAAJ_N@Z @ 0x1801CEA70
 * Callers:
 *     <none>
 * Callees:
 *     ?PostTargetedMessage@CortanaDesktopExperienceView@@AEAAJW4TargetedMessageKind@1@G@Z @ 0x1801D0850 (-PostTargetedMessage@CortanaDesktopExperienceView@@AEAAJW4TargetedMessageKind@1@G@Z.c)
 */

__int64 __fastcall CortanaDesktopExperienceView::AboveLockAppActiveChanged(CortanaDesktopExperienceView *this)
{
  CortanaDesktopExperienceView::PostTargetedMessage((char *)this - 72, 4LL);
  return 0LL;
}
