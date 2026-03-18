/*
 * XREFs of KeAbProcessBaseIoPriorityChange @ 0x1400803B4
 * Callers:
 *     PsSetIoPriorityThread @ 0x140080338 (PsSetIoPriorityThread.c)
 *     PspNotifyProcessBackgroundTransition @ 0x1400C7500 (PspNotifyProcessBackgroundTransition.c)
 * Callees:
 *     KeAbProcessBaseIoPriorityChangeInternal @ 0x1400803F0 (KeAbProcessBaseIoPriorityChangeInternal.c)
 */

void __fastcall KeAbProcessBaseIoPriorityChange(__int64 a1, int a2, int a3)
{
  __int64 v4; // rdx
  BOOL v5; // eax

  v4 = 0LL;
  if ( a3 >= 2 )
  {
    if ( a2 >= 2 )
      return;
    v4 = 1LL;
    v5 = 1;
  }
  else
  {
    v5 = a2 >= 2;
  }
  if ( v5 )
    KeAbProcessBaseIoPriorityChangeInternal(a1, v4);
}
