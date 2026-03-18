/*
 * XREFs of EtwpResetFlushTimer @ 0x1400FD66C
 * Callers:
 *     EtwpLogger @ 0x1406ACDA0 (EtwpLogger.c)
 * Callees:
 *     KeCancelTimer @ 0x1400E2D90 (KeCancelTimer.c)
 */

char __fastcall EtwpResetFlushTimer(__int64 a1, char a2)
{
  int v2; // eax

  v2 = *(_DWORD *)(a1 + 836);
  if ( (v2 & 0x400) != 0 )
  {
    if ( a2 )
      LOBYTE(v2) = KeCancelTimer((PKTIMER)(a1 + 520));
    _interlockedbittestandreset((volatile signed __int32 *)(a1 + 836), 0xAu);
  }
  return v2;
}
