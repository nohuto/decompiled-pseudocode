/*
 * XREFs of PopInitializePreSleepNotifications @ 0x1407634E0
 * Callers:
 *     PoInitSystem @ 0x1409B2C10 (PoInitSystem.c)
 * Callees:
 *     <none>
 */

__int64 PopInitializePreSleepNotifications()
{
  unsigned int v0; // eax
  __int64 result; // rax

  v0 = PopPreSleepNotificationSeconds;
  if ( (unsigned int)PopPreSleepNotificationSeconds < 0x78 )
  {
    v0 = 120;
    PopPreSleepNotificationSeconds = 120;
  }
  if ( v0 > 0xE10 )
  {
    v0 = 3600;
    PopPreSleepNotificationSeconds = 3600;
  }
  dword_14040FFCC = v0;
  result = (unsigned int)_InterlockedExchange(&dword_140410000, 0);
  qword_14040FFF8 = 0LL;
  PopPreSleepNotifyWorkItem = 0LL;
  qword_14040FFF0 = (__int64)PopPreSleepNotifyWorker;
  return result;
}
