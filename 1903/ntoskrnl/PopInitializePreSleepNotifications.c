/*
 * XREFs of PopInitializePreSleepNotifications @ 0x140789EE0
 * Callers:
 *     PoInitSystem @ 0x140A06340 (PoInitSystem.c)
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
  dword_1404387A4 = v0;
  result = (unsigned int)_InterlockedExchange(&dword_1404386C0, 0);
  qword_1404386B8 = 0LL;
  PopPreSleepNotifyWorkItem = 0LL;
  qword_1404386B0 = (__int64)PopPreSleepNotifyWorker;
  return result;
}
