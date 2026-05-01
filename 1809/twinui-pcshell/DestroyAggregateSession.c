/*
 * XREFs of DestroyAggregateSession @ 0x1800E3A8C
 * Callers:
 *     CreateTlgAggregateSession @ 0x1800E39F8 (CreateTlgAggregateSession.c)
 *     TlgRegisterAggregateProviderEx @ 0x1800E43E4 (TlgRegisterAggregateProviderEx.c)
 *     TlgUnregisterAggregateProvider @ 0x1800E44E8 (TlgUnregisterAggregateProvider.c)
 * Callees:
 *     free @ 0x180085090 (free.c)
 *     CancelTimerCallbacksAndDeleteTimer @ 0x1800E36E0 (CancelTimerCallbacksAndDeleteTimer.c)
 */

void __fastcall DestroyAggregateSession(void *Block)
{
  if ( Block )
  {
    CancelTimerCallbacksAndDeleteTimer((__int64)Block);
    free(Block);
  }
}
