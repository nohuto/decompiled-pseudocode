/*
 * XREFs of PsSetCreateProcessNotifyRoutine @ 0x140749530
 * Callers:
 *     VfFaultsSetParameters @ 0x1409394A0 (VfFaultsSetParameters.c)
 *     VerifierInitSystem @ 0x1409DBED4 (VerifierInitSystem.c)
 * Callees:
 *     PspSetCreateProcessNotifyRoutine @ 0x140749650 (PspSetCreateProcessNotifyRoutine.c)
 */

NTSTATUS __stdcall PsSetCreateProcessNotifyRoutine(PCREATE_PROCESS_NOTIFY_ROUTINE NotifyRoutine, BOOLEAN Remove)
{
  return PspSetCreateProcessNotifyRoutine(NotifyRoutine, Remove != 0);
}
