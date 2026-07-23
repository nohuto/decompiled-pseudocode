/*
 * XREFs of DestroyAggregateSession @ 0x1409064CC
 * Callers:
 *     TlgRegisterAggregateProviderEx @ 0x1407441C4 (TlgRegisterAggregateProviderEx.c)
 *     CreateTlgAggregateSession @ 0x140744398 (CreateTlgAggregateSession.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     CancelTimerCallbacksAndDeleteTimer @ 0x140906448 (CancelTimerCallbacksAndDeleteTimer.c)
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
