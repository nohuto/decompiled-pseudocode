/*
 * XREFs of PsSetCreateProcessNotifyRoutineEx @ 0x14076A4F0
 * Callers:
 *     <none>
 * Callees:
 *     PspSetCreateProcessNotifyRoutine @ 0x14076A850 (PspSetCreateProcessNotifyRoutine.c)
 */

NTSTATUS __stdcall PsSetCreateProcessNotifyRoutineEx(PCREATE_PROCESS_NOTIFY_ROUTINE_EX NotifyRoutine, BOOLEAN Remove)
{
  return PspSetCreateProcessNotifyRoutine(NotifyRoutine, (unsigned int)(Remove != 0) + 2);
}
