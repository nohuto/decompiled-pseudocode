/*
 * XREFs of ?ndisCheckWatchdogTimer@@YAEXZ @ 0x1C00A057C
 * Callers:
 *     ?ndis5InterruptDpc@@YAXPEAU_KDPC@@PEAX11@Z @ 0x1C00A0420 (-ndis5InterruptDpc@@YAXPEAU_KDPC@@PEAX11@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0040760 (__security_check_cookie.c)
 */

bool ndisCheckWatchdogTimer(void)
{
  struct _KDPC_WATCHDOG_INFORMATION WatchdogInformation; // [rsp+20h] [rbp-28h] BYREF

  memset(&WatchdogInformation, 0, sizeof(WatchdogInformation));
  return KeQueryDpcWatchdogInformation(&WatchdogInformation) >= 0
      && ndisDpcWatchdogLimit
      && WatchdogInformation.DpcWatchdogCount < ndisDpcWatchdogLimit;
}
