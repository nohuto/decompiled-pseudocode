/*
 * XREFs of PsSetCreateThreadNotifyRoutine @ 0x14076A510
 * Callers:
 *     <none>
 * Callees:
 *     PspSetCreateThreadNotifyRoutine @ 0x14076A580 (PspSetCreateThreadNotifyRoutine.c)
 */

NTSTATUS __stdcall PsSetCreateThreadNotifyRoutine(PCREATE_THREAD_NOTIFY_ROUTINE NotifyRoutine)
{
  return PspSetCreateThreadNotifyRoutine(NotifyRoutine, 0LL);
}
