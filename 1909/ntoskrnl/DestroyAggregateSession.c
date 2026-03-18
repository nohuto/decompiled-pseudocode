/*
 * XREFs of DestroyAggregateSession @ 0x140943294
 * Callers:
 *     TlgRegisterAggregateProviderEx @ 0x14074F5A0 (TlgRegisterAggregateProviderEx.c)
 *     CreateTlgAggregateSession @ 0x14074F774 (CreateTlgAggregateSession.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     CancelTimerCallbacksAndDeleteTimer @ 0x140943210 (CancelTimerCallbacksAndDeleteTimer.c)
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
