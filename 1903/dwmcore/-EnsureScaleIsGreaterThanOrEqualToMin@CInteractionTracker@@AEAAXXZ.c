/*
 * XREFs of ?EnsureScaleIsGreaterThanOrEqualToMin@CInteractionTracker@@AEAAXXZ @ 0x1801DA3C4
 * Callers:
 *     ?CheckForOutOfBounds@CInteractionTracker@@AEAAXXZ @ 0x1801D9B34 (-CheckForOutOfBounds@CInteractionTracker@@AEAAXXZ.c)
 *     ?SetMinScale@CInteractionTracker@@AEAAXM@Z @ 0x1801DCF4C (-SetMinScale@CInteractionTracker@@AEAAXM@Z.c)
 * Callees:
 *     ?SetScale@CInteractionTracker@@AEAAXMW4TrackerUpdateType@1@@Z @ 0x1801DD590 (-SetScale@CInteractionTracker@@AEAAXMW4TrackerUpdateType@1@@Z.c)
 */

void __fastcall CInteractionTracker::EnsureScaleIsGreaterThanOrEqualToMin(CInteractionTracker *this, __int64 a2)
{
  if ( !*((_DWORD *)this + 42) && (*((_BYTE *)this + 532) & 0x20) == 0 )
    CInteractionTracker::SetScale(this, a2, 0LL);
}
