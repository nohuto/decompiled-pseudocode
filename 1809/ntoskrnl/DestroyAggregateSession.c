/*
 * XREFs of DestroyAggregateSession @ 0x14090520C
 * Callers:
 *     TlgRegisterAggregateProviderEx @ 0x140742FD4 (TlgRegisterAggregateProviderEx.c)
 *     CreateTlgAggregateSession @ 0x1407431A8 (CreateTlgAggregateSession.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     CancelTimerCallbacksAndDeleteTimer @ 0x140905188 (CancelTimerCallbacksAndDeleteTimer.c)
 */

void __fastcall DestroyAggregateSession(_QWORD *P)
{
  void *v2; // rcx

  if ( P )
  {
    CancelTimerCallbacksAndDeleteTimer((__int64)P);
    v2 = (void *)P[33];
    if ( v2 )
      ExFreePoolWithTag(v2, 0);
    ExFreePoolWithTag(P, 0);
  }
}
