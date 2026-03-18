/*
 * XREFs of PnpInitializePnpWatchdogs @ 0x1409F7E94
 * Callers:
 *     IopInitializePlugPlayServices @ 0x1409F8558 (IopInitializePlugPlayServices.c)
 * Callees:
 *     PnpWatchdogBugcheckConfigure @ 0x1406EE644 (PnpWatchdogBugcheckConfigure.c)
 *     PnpOpenCCSPnpRegKey @ 0x140754AE0 (PnpOpenCCSPnpRegKey.c)
 */

NTSTATUS PnpInitializePnpWatchdogs()
{
  NTSTATUS result; // eax
  HANDLE KeyHandle; // [rsp+30h] [rbp+8h] BYREF

  result = PnpOpenCCSPnpRegKey(&KeyHandle);
  if ( result >= 0 )
  {
    *(_QWORD *)PnpWatchdogBugcheckWatchWorkItem = 0LL;
    qword_14045F210 = (__int64)PnpWatchdogBugcheckWatchCallback;
    qword_14045F218 = (__int64)KeyHandle;
    return PnpWatchdogBugcheckConfigure(KeyHandle);
  }
  return result;
}
