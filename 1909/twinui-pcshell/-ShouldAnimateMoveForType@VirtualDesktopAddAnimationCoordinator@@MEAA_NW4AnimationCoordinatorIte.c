/*
 * XREFs of ?ShouldAnimateMoveForType@VirtualDesktopAddAnimationCoordinator@@MEAA_NW4AnimationCoordinatorItemType@@PEA_N@Z @ 0x1803A5260
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall VirtualDesktopAddAnimationCoordinator::ShouldAnimateMoveForType(__int64 a1, int a2, bool *a3)
{
  *a3 = a2 == 8;
  return ((a2 - 3) & 0xFFFFFFFA) == 0 && a2 != 4;
}
