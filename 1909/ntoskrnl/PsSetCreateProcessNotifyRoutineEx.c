/*
 * XREFs of PsSetCreateProcessNotifyRoutineEx @ 0x140758D20
 * Callers:
 *     <none>
 * Callees:
 *     PspSetCreateProcessNotifyRoutine @ 0x140759080 (PspSetCreateProcessNotifyRoutine.c)
 */

NTSTATUS __stdcall PsSetCreateProcessNotifyRoutineEx(PCREATE_PROCESS_NOTIFY_ROUTINE_EX NotifyRoutine, BOOLEAN Remove)
{
  return PspSetCreateProcessNotifyRoutine(NotifyRoutine, (unsigned int)(Remove != 0) + 2);
}
