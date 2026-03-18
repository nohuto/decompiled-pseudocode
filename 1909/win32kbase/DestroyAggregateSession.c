/*
 * XREFs of DestroyAggregateSession @ 0x1C0246A1C
 * Callers:
 *     TlgRegisterAggregateProviderEx @ 0x1C02460A4 (TlgRegisterAggregateProviderEx.c)
 *     CreateTlgAggregateSession @ 0x1C024664C (CreateTlgAggregateSession.c)
 *     TlgUnregisterAggregateProvider @ 0x1C0246928 (TlgUnregisterAggregateProvider.c)
 * Callees:
 *     CancelTimerCallbacksAndDeleteTimer @ 0x1C0246A5C (CancelTimerCallbacksAndDeleteTimer.c)
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
