/*
 * XREFs of EtwpRequestFlushTimer @ 0x140014B58
 * Callers:
 *     EtwpSwitchBuffer @ 0x140014FB8 (EtwpSwitchBuffer.c)
 *     EtwpLoggerDpc @ 0x140192E80 (EtwpLoggerDpc.c)
 *     EtwpLogger @ 0x1405C2430 (EtwpLogger.c)
 *     EtwpFlushActiveBuffers @ 0x1405C3178 (EtwpFlushActiveBuffers.c)
 * Callees:
 *     KeSetCoalescableTimer @ 0x14001CDE0 (KeSetCoalescableTimer.c)
 *     KeInsertQueueDpc @ 0x140062190 (KeInsertQueueDpc.c)
 *     KeGetEffectiveIrql @ 0x1400CABB0 (KeGetEffectiveIrql.c)
 */

char __fastcall EtwpRequestFlushTimer(__int64 a1, char a2)
{
  unsigned int v3; // ecx
  ULONG v4; // r9d
  __int64 v5; // rdx
  unsigned int v6; // ecx

  if ( (*(_DWORD *)(a1 + 836) & 0x400) == 0 )
  {
    if ( a2 || (unsigned __int8)KeGetEffectiveIrql() > 2u )
    {
      if ( !_interlockedbittestandset((volatile signed __int32 *)(a1 + 836), 9u) )
        KeInsertQueueDpc((PRKDPC)(a1 + 584), 0LL, 0LL);
      return 1;
    }
    if ( !_interlockedbittestandset((volatile signed __int32 *)(a1 + 836), 0xAu) )
    {
      v3 = *(_DWORD *)(a1 + 224);
      if ( (*(_DWORD *)(a1 + 12) & 0x10) == 0 )
        v3 *= 1000;
      v4 = 500;
      v5 = EtwpOneMs * v3;
      v6 = v3 >> 2;
      if ( v6 < 0x1F4 )
        v4 = v6;
      KeSetCoalescableTimer((PKTIMER)(a1 + 520), (LARGE_INTEGER)v5, 0, v4, 0LL);
      return 1;
    }
  }
  return 0;
}
