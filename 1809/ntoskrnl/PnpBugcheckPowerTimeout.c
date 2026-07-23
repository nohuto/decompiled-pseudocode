/*
 * XREFs of PnpBugcheckPowerTimeout @ 0x140288B74
 * Callers:
 *     PopBuildDeviceNotifyListWatchdog @ 0x14057E9F0 (PopBuildDeviceNotifyListWatchdog.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     memset @ 0x1401D1980 (memset.c)
 */

void __noreturn PnpBugcheckPowerTimeout()
{
  ULONG_PTR v0; // rbx
  ULONG_PTR BugCheckParameter4[5]; // [rsp+30h] [rbp-28h] BYREF

  v0 = PnpDelayedRemoveWorkerThread;
  if ( !PnpDelayedRemoveWorkerThread )
  {
    v0 = PnpDeviceEventThread;
    if ( !PnpDeviceEventThread )
      v0 = PnpDeviceActionThread;
  }
  memset(BugCheckParameter4, 0, 0x20uLL);
  LODWORD(BugCheckParameter4[0]) = 163841;
  BugCheckParameter4[1] = (ULONG_PTR)&PnpDeviceCompletionQueue;
  BugCheckParameter4[2] = ExWorkerQueue;
  BugCheckParameter4[3] = IoWorkerQueue;
  KeBugCheckEx(0x9Fu, 4uLL, (unsigned int)PopWatchdogSleepTimeout, v0, (ULONG_PTR)BugCheckParameter4);
}
