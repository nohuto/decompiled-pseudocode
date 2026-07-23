/*
 * XREFs of PopInitializePreSleepNotifications @ 0x1407646D0
 * Callers:
 *     PoInitSystem @ 0x1409B3C10 (PoInitSystem.c)
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
  dword_14041104C = v0;
  result = (unsigned int)_InterlockedExchange(&dword_140411040, 0);
  qword_140411038 = 0LL;
  PopPreSleepNotifyWorkItem = 0LL;
  qword_140411030 = (__int64)PopPreSleepNotifyWorker;
  return result;
}
