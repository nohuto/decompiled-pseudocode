/*
 * XREFs of PopInitializePreSleepNotifications @ 0x140763500
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
  dword_14041002C = v0;
  result = (unsigned int)_InterlockedExchange(&dword_14040FF20, 0);
  qword_14040FF18 = 0LL;
  PopPreSleepNotifyWorkItem = 0LL;
  qword_14040FF10 = (__int64)PopPreSleepNotifyWorker;
  return result;
}
