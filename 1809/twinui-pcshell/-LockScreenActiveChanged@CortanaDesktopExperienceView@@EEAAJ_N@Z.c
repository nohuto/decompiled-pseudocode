/*
 * XREFs of ?LockScreenActiveChanged@CortanaDesktopExperienceView@@EEAAJ_N@Z @ 0x180189250
 * Callers:
 *     <none>
 * Callees:
 *     ?PostTargetedMessage@CortanaDesktopExperienceView@@AEAAJW4TargetedMessageKind@1@G@Z @ 0x18018A0F0 (-PostTargetedMessage@CortanaDesktopExperienceView@@AEAAJW4TargetedMessageKind@1@G@Z.c)
 */

__int64 __fastcall CortanaDesktopExperienceView::LockScreenActiveChanged(CortanaDesktopExperienceView *this)
{
  CortanaDesktopExperienceView::PostTargetedMessage((char *)this - 72, 3LL);
  return 0LL;
}
