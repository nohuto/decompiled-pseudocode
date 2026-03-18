/*
 * XREFs of DestroyAggregateSession @ 0x1C0355820
 * Callers:
 *     TlgRegisterAggregateProviderEx @ 0x1C03550F0 (TlgRegisterAggregateProviderEx.c)
 *     CreateTlgAggregateSession @ 0x1C0355270 (CreateTlgAggregateSession.c)
 *     TlgUnregisterAggregateProvider @ 0x1C035572C (TlgUnregisterAggregateProvider.c)
 * Callees:
 *     CancelTimerCallbacksAndDeleteTimer @ 0x1C0355860 (CancelTimerCallbacksAndDeleteTimer.c)
 */

void __fastcall DestroyAggregateSession(_QWORD *P)
{
  void *v2; // rcx

  if ( P )
  {
    CancelTimerCallbacksAndDeleteTimer(P);
    v2 = (void *)P[33];
    if ( v2 )
      ExFreePoolWithTag(v2, 0);
    ExFreePoolWithTag(P, 0);
  }
}
