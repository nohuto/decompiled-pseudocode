/*
 * XREFs of ?WindowsHelloActiveChanged@CortanaDesktopExperienceView@@EEAAJ_N@Z @ 0x1801D1EE0
 * Callers:
 *     <none>
 * Callees:
 *     ?PostTargetedMessage@CortanaDesktopExperienceView@@AEAAJW4TargetedMessageKind@1@G@Z @ 0x1801D0850 (-PostTargetedMessage@CortanaDesktopExperienceView@@AEAAJW4TargetedMessageKind@1@G@Z.c)
 */

__int64 __fastcall CortanaDesktopExperienceView::WindowsHelloActiveChanged(
        CortanaDesktopExperienceView *this,
        unsigned __int8 a2)
{
  if ( a2 )
    CortanaDesktopExperienceView::PostTargetedMessage((__int64)this - 72, 5u, a2);
  return 0LL;
}
