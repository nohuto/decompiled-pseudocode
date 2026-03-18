/*
 * XREFs of PsSetCreateThreadNotifyRoutine @ 0x140748140
 * Callers:
 *     <none>
 * Callees:
 *     PspSetCreateThreadNotifyRoutine @ 0x1407481B0 (PspSetCreateThreadNotifyRoutine.c)
 */

NTSTATUS __stdcall PsSetCreateThreadNotifyRoutine(PCREATE_THREAD_NOTIFY_ROUTINE NotifyRoutine)
{
  return PspSetCreateThreadNotifyRoutine(NotifyRoutine, 0LL);
}
