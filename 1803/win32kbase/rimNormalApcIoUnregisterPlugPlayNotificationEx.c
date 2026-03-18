/*
 * XREFs of rimNormalApcIoUnregisterPlugPlayNotificationEx @ 0x1C00FCE10
 * Callers:
 *     <none>
 * Callees:
 *     rimApcIoUnregisterPlugPlayNotificationExWorker @ 0x1C00FC47C (rimApcIoUnregisterPlugPlayNotificationExWorker.c)
 */

LONG_PTR __fastcall rimNormalApcIoUnregisterPlugPlayNotificationEx(__int64 a1)
{
  return rimApcIoUnregisterPlugPlayNotificationExWorker(a1 - 88);
}
