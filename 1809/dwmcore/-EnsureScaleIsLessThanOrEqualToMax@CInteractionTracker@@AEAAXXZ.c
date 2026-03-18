/*
 * XREFs of ?EnsureScaleIsLessThanOrEqualToMax@CInteractionTracker@@AEAAXXZ @ 0x18019F6CC
 * Callers:
 *     ?CheckForOutOfBounds@CInteractionTracker@@AEAAXXZ @ 0x18019EEBC (-CheckForOutOfBounds@CInteractionTracker@@AEAAXXZ.c)
 *     ?SetMaxScale@CInteractionTracker@@AEAAXM@Z @ 0x1801A20EC (-SetMaxScale@CInteractionTracker@@AEAAXM@Z.c)
 * Callees:
 *     ?SetScale@CInteractionTracker@@AEAAXM@Z @ 0x1801A271C (-SetScale@CInteractionTracker@@AEAAXM@Z.c)
 */

void __fastcall CInteractionTracker::EnsureScaleIsLessThanOrEqualToMax(CInteractionTracker *this)
{
  if ( !*((_DWORD *)this + 42) && (*((_BYTE *)this + 532) & 0x20) == 0 )
    CInteractionTracker::SetScale(this, fminf(*((float *)this + 32), *((float *)this + 34)));
}
