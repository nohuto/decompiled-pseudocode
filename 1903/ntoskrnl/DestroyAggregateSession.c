/*
 * XREFs of DestroyAggregateSession @ 0x140943824
 * Callers:
 *     TlgRegisterAggregateProviderEx @ 0x14074EB10 (TlgRegisterAggregateProviderEx.c)
 *     CreateTlgAggregateSession @ 0x14074ECE4 (CreateTlgAggregateSession.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     CancelTimerCallbacksAndDeleteTimer @ 0x1409437A0 (CancelTimerCallbacksAndDeleteTimer.c)
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
