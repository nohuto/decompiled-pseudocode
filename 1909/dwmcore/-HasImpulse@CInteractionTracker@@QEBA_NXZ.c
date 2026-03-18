/*
 * XREFs of ?HasImpulse@CInteractionTracker@@QEBA_NXZ @ 0x1801D9458
 * Callers:
 *     ?CalculateInertiaCallbackValues@CInteractionTracker@@AEAA?AUInertiaCallbackValues@@XZ @ 0x1801D7C54 (-CalculateInertiaCallbackValues@CInteractionTracker@@AEAA-AUInertiaCallbackValues@@XZ.c)
 *     ?GetProperty@CInteractionTracker@@MEAAJIPEAVCExpressionValue@@@Z @ 0x1801D9020 (-GetProperty@CInteractionTracker@@MEAAJIPEAVCExpressionValue@@@Z.c)
 *     ?TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z @ 0x1801DC840 (-TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CInteractionTracker::HasImpulse(CInteractionTracker *this)
{
  __int64 v2; // rcx
  char v3; // bl
  __int64 v4; // rcx
  __int64 v5; // rcx

  if ( (*((_BYTE *)this + 532) & 0x10) != 0 )
    return 1;
  v2 = *((_QWORD *)this + 41);
  v3 = 0;
  if ( v2 )
  {
    if ( *(float *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 320LL))(v2) + 40) != 0.0 )
      return 1;
  }
  v4 = *((_QWORD *)this + 42);
  if ( v4 )
  {
    if ( *(float *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 320LL))(v4) + 40) != 0.0 )
      return 1;
  }
  v5 = *((_QWORD *)this + 40);
  if ( v5 )
  {
    if ( *(float *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 320LL))(v5) + 40) != 0.0 )
      return 1;
  }
  return v3;
}
