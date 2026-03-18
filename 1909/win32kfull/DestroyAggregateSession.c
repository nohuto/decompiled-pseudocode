/*
 * XREFs of DestroyAggregateSession @ 0x1C03687BC
 * Callers:
 *     TlgRegisterAggregateProviderEx @ 0x1C03682A0 (TlgRegisterAggregateProviderEx.c)
 *     CreateTlgAggregateSession @ 0x1C0368420 (CreateTlgAggregateSession.c)
 *     TlgUnregisterAggregateProvider @ 0x1C03686C8 (TlgUnregisterAggregateProvider.c)
 * Callees:
 *     CancelTimerCallbacksAndDeleteTimer @ 0x1C03687FC (CancelTimerCallbacksAndDeleteTimer.c)
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
