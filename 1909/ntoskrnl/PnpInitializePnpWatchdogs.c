/*
 * XREFs of PnpInitializePnpWatchdogs @ 0x1409F7DA4
 * Callers:
 *     IopInitializePlugPlayServices @ 0x1409F8468 (IopInitializePlugPlayServices.c)
 * Callees:
 *     PnpWatchdogBugcheckConfigure @ 0x1406F0194 (PnpWatchdogBugcheckConfigure.c)
 *     PnpOpenCCSPnpRegKey @ 0x140755570 (PnpOpenCCSPnpRegKey.c)
 */

NTSTATUS PnpInitializePnpWatchdogs()
{
  NTSTATUS result; // eax
  HANDLE KeyHandle; // [rsp+30h] [rbp+8h] BYREF

  result = PnpOpenCCSPnpRegKey(&KeyHandle);
  if ( result >= 0 )
  {
    *(_QWORD *)PnpWatchdogBugcheckWatchWorkItem = 0LL;
    qword_14045EEB0 = (__int64)PnpWatchdogBugcheckWatchCallback;
    qword_14045EEB8 = (__int64)KeyHandle;
    return PnpWatchdogBugcheckConfigure(KeyHandle);
  }
  return result;
}
