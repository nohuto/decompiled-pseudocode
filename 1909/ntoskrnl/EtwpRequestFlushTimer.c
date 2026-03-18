/*
 * XREFs of EtwpRequestFlushTimer @ 0x1400E28C0
 * Callers:
 *     EtwpSwitchBuffer @ 0x140003560 (EtwpSwitchBuffer.c)
 *     EtwpLoggerDpc @ 0x14015D4D0 (EtwpLoggerDpc.c)
 *     EtwpFlushActiveBuffers @ 0x1405C5518 (EtwpFlushActiveBuffers.c)
 *     EtwpLogger @ 0x1406ACDA0 (EtwpLogger.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x14009C950 (KeInsertQueueDpc.c)
 *     KeGetEffectiveIrql @ 0x1400A16B0 (KeGetEffectiveIrql.c)
 *     KeSetCoalescableTimer @ 0x1400E29F0 (KeSetCoalescableTimer.c)
 */

char __fastcall EtwpRequestFlushTimer(__int64 a1, char a2)
{
  unsigned int v4; // ecx
  ULONG v5; // r9d
  __int64 v6; // rdx
  unsigned int v7; // ecx

  if ( (*(_DWORD *)(a1 + 836) & 0x400) != 0 )
    return 0;
  if ( a2 || KeGetEffectiveIrql() > 2u )
  {
    if ( !_interlockedbittestandset((volatile signed __int32 *)(a1 + 836), 9u) )
      KeInsertQueueDpc((PRKDPC)(a1 + 584), 0LL, 0LL);
  }
  else
  {
    if ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 836), 0xAu) )
      return 0;
    v4 = *(_DWORD *)(a1 + 224);
    if ( (*(_DWORD *)(a1 + 12) & 0x10) == 0 )
      v4 *= 1000;
    v5 = 500;
    v6 = EtwpOneMs * v4;
    v7 = v4 >> 2;
    if ( v7 < 0x1F4 )
      v5 = v7;
    KeSetCoalescableTimer((PKTIMER)(a1 + 520), (LARGE_INTEGER)v6, 0, v5, 0LL);
  }
  return 1;
}
