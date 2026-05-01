/*
 * XREFs of ?WindowsHelloActiveChanged@CortanaDesktopExperienceView@@EEAAJ_N@Z @ 0x18018B680
 * Callers:
 *     <none>
 * Callees:
 *     ?PostTargetedMessage@CortanaDesktopExperienceView@@AEAAJW4TargetedMessageKind@1@G@Z @ 0x18018A0F0 (-PostTargetedMessage@CortanaDesktopExperienceView@@AEAAJW4TargetedMessageKind@1@G@Z.c)
 */

__int64 __fastcall CortanaDesktopExperienceView::WindowsHelloActiveChanged(
        CortanaDesktopExperienceView *this,
        unsigned __int8 a2)
{
  if ( a2 )
    CortanaDesktopExperienceView::PostTargetedMessage((__int64)this - 72, 5u, a2);
  return 0LL;
}
