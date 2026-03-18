/*
 * XREFs of PsSetCreateProcessNotifyRoutine @ 0x140758F60
 * Callers:
 *     VfFaultsSetParameters @ 0x140979DB8 (VfFaultsSetParameters.c)
 *     VerifierInitSystem @ 0x140A1E23C (VerifierInitSystem.c)
 * Callees:
 *     PspSetCreateProcessNotifyRoutine @ 0x140759080 (PspSetCreateProcessNotifyRoutine.c)
 */

NTSTATUS __stdcall PsSetCreateProcessNotifyRoutine(PCREATE_PROCESS_NOTIFY_ROUTINE NotifyRoutine, BOOLEAN Remove)
{
  return PspSetCreateProcessNotifyRoutine(NotifyRoutine, Remove != 0);
}
