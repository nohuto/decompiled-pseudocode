/*
 * XREFs of ?WasInertiaStartedByImpulse@CScrollAnimation@@QEBA_NXZ @ 0x1801D6E5C
 * Callers:
 *     ?WasInertiaStartedByImpulse@CInteractionTracker@@QEBA_NW4ScrollAxis@@@Z @ 0x1801A3498 (-WasInertiaStartedByImpulse@CInteractionTracker@@QEBA_NW4ScrollAxis@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CScrollAnimation::WasInertiaStartedByImpulse(CScrollAnimation *this)
{
  return (*(_BYTE *)((*(__int64 (__fastcall **)(CScrollAnimation *))(*(_QWORD *)this + 280LL))(this) + 8) & 4) != 0;
}
