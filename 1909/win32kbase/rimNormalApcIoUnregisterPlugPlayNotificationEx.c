/*
 * XREFs of rimNormalApcIoUnregisterPlugPlayNotificationEx @ 0x1C00543F0
 * Callers:
 *     <none>
 * Callees:
 *     rimApcIoUnregisterPlugPlayNotificationExWorker @ 0x1C0054504 (rimApcIoUnregisterPlugPlayNotificationExWorker.c)
 */

__int64 __fastcall rimNormalApcIoUnregisterPlugPlayNotificationEx(__int64 a1)
{
  return rimApcIoUnregisterPlugPlayNotificationExWorker(a1 - 88);
}
