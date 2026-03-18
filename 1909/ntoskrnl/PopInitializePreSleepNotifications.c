/*
 * XREFs of PopInitializePreSleepNotifications @ 0x14078C340
 * Callers:
 *     PoInitSystem @ 0x140A0685C (PoInitSystem.c)
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
  dword_140438724 = v0;
  result = (unsigned int)_InterlockedExchange(&dword_140438640, 0);
  qword_140438638 = 0LL;
  PopPreSleepNotifyWorkItem = 0LL;
  qword_140438630 = (__int64)PopPreSleepNotifyWorker;
  return result;
}
