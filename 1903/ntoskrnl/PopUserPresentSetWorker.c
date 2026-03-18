/*
 * XREFs of PopUserPresentSetWorker @ 0x140747F10
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x140067720 (KeSetEvent.c)
 *     KiSetTimerEx @ 0x1400B2A00 (KiSetTimerEx.c)
 *     KeInitializeDpc @ 0x1400B8D00 (KeInitializeDpc.c)
 *     PopSetNotificationWork @ 0x1400EE750 (PopSetNotificationWork.c)
 *     PopNotifyConsoleUserPresent @ 0x14071E580 (PopNotifyConsoleUserPresent.c)
 */

LONG __fastcall PopUserPresentSetWorker(unsigned int a1, char a2)
{
  LONG result; // eax

  if ( byte_140443AD1 )
  {
    _InterlockedExchange(&dword_140443AD8, 1);
    KeInitializeDpc(&PopAwayModeUserPresenceDpcObject, (PKDEFERRED_ROUTINE)PopAwayModeUserPresenceDpc, &dword_140443AD8);
    KiSetTimerEx((__int64)&PopAwayModeUserPresenceTimer, -30000000LL, 0, 0, (__int64)&PopAwayModeUserPresenceDpcObject);
    PopAwaymodeExitReason = a1;
    PopSetNotificationWork(0x40u);
  }
  PopNotifyConsoleUserPresent(0, a2, a1);
  _InterlockedExchange(&PopUserPresentSetStatus, 0);
  result = _InterlockedCompareExchange(&dword_140443AD4, 0, 0);
  if ( result )
    return KeSetEvent(&PopUserPresentCompletedEvent, 0, 0);
  return result;
}
