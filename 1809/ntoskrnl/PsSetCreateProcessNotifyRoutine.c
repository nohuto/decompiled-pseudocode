/*
 * XREFs of PsSetCreateProcessNotifyRoutine @ 0x140748340
 * Callers:
 *     VfFaultsSetParameters @ 0x1409384A0 (VfFaultsSetParameters.c)
 *     VerifierInitSystem @ 0x1409DAED4 (VerifierInitSystem.c)
 * Callees:
 *     PspSetCreateProcessNotifyRoutine @ 0x140748460 (PspSetCreateProcessNotifyRoutine.c)
 */

NTSTATUS __stdcall PsSetCreateProcessNotifyRoutine(PCREATE_PROCESS_NOTIFY_ROUTINE NotifyRoutine, BOOLEAN Remove)
{
  return PspSetCreateProcessNotifyRoutine(NotifyRoutine, Remove != 0);
}
