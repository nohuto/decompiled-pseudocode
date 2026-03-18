/*
 * XREFs of PsSetCreateProcessNotifyRoutine @ 0x14076A730
 * Callers:
 *     VfFaultsSetParameters @ 0x140979DB8 (VfFaultsSetParameters.c)
 *     VerifierInitSystem @ 0x140A1E060 (VerifierInitSystem.c)
 * Callees:
 *     PspSetCreateProcessNotifyRoutine @ 0x14076A850 (PspSetCreateProcessNotifyRoutine.c)
 */

NTSTATUS __stdcall PsSetCreateProcessNotifyRoutine(PCREATE_PROCESS_NOTIFY_ROUTINE NotifyRoutine, BOOLEAN Remove)
{
  return PspSetCreateProcessNotifyRoutine(NotifyRoutine, Remove != 0);
}
