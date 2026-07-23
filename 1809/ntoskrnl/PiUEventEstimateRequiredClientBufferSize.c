/*
 * XREFs of PiUEventEstimateRequiredClientBufferSize @ 0x140006544
 * Callers:
 *     PiUEventNotifyClientPendingEvent @ 0x140590A24 (PiUEventNotifyClientPendingEvent.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PiUEventEstimateRequiredClientBufferSize(__int64 a1)
{
  unsigned __int64 v1; // rcx

  v1 = 4160LL * *(unsigned int *)(a1 + 128);
  if ( v1 > 0xFFFFFFFF )
    return 0xFFFFFFFFLL;
  else
    return (unsigned int)v1;
}
