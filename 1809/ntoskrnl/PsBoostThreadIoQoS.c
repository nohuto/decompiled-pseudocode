/*
 * XREFs of PsBoostThreadIoQoS @ 0x14010A65C
 * Callers:
 *     KiAbThreadBoostIoPriority @ 0x14010ECF4 (KiAbThreadBoostIoPriority.c)
 * Callees:
 *     KeAbProcessEffectiveIoPriorityChange @ 0x1400D139C (KeAbProcessEffectiveIoPriorityChange.c)
 */

void __fastcall PsBoostThreadIoQoS(__int64 a1, int a2)
{
  if ( a2 )
  {
    _InterlockedDecrement((volatile signed __int32 *)(a1 + 1804));
  }
  else if ( _InterlockedIncrement((volatile signed __int32 *)(a1 + 1804)) == 1 )
  {
    KeAbProcessEffectiveIoPriorityChange(a1, 0);
  }
}
