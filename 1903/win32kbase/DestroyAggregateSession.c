/*
 * XREFs of DestroyAggregateSession @ 0x1C02498D4
 * Callers:
 *     TlgRegisterAggregateProviderEx @ 0x1C0249140 (TlgRegisterAggregateProviderEx.c)
 *     CreateTlgAggregateSession @ 0x1C0249224 (CreateTlgAggregateSession.c)
 *     TlgUnregisterAggregateProvider @ 0x1C02497E0 (TlgUnregisterAggregateProvider.c)
 * Callees:
 *     CancelTimerCallbacksAndDeleteTimer @ 0x1C0249914 (CancelTimerCallbacksAndDeleteTimer.c)
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
