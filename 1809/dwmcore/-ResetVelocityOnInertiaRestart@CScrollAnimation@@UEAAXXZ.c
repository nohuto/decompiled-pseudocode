/*
 * XREFs of ?ResetVelocityOnInertiaRestart@CScrollAnimation@@UEAAXXZ @ 0x1800E7330
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CScrollAnimation::ResetVelocityOnInertiaRestart(CScrollAnimation *this)
{
  *((_BYTE *)this + 296) |= 1u;
}
