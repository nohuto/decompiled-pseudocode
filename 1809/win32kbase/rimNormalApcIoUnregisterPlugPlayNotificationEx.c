/*
 * XREFs of rimNormalApcIoUnregisterPlugPlayNotificationEx @ 0x1C0052450
 * Callers:
 *     <none>
 * Callees:
 *     rimApcIoUnregisterPlugPlayNotificationExWorker @ 0x1C0052240 (rimApcIoUnregisterPlugPlayNotificationExWorker.c)
 */

LONG_PTR __fastcall rimNormalApcIoUnregisterPlugPlayNotificationEx(__int64 a1)
{
  return rimApcIoUnregisterPlugPlayNotificationExWorker(a1 - 88);
}
