/*
 * XREFs of MmValidateUserCallTarget @ 0x14089865C
 * Callers:
 *     NtSetInformationProcess @ 0x14067A5E0 (NtSetInformationProcess.c)
 *     MmCheckForSafeExecution @ 0x14089209C (MmCheckForSafeExecution.c)
 * Callees:
 *     MiIsProcessCfgEnabled @ 0x14001CC70 (MiIsProcessCfgEnabled.c)
 *     MiValidateUserCallTarget @ 0x1406CC554 (MiValidateUserCallTarget.c)
 */

__int64 MmValidateUserCallTarget()
{
  int v0; // r8d
  unsigned __int64 v1; // r9

  if ( MiIsProcessCfgEnabled() )
    return MiValidateUserCallTarget(
             v1,
             *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[1].IdealNode[14] + (v0 != 0 ? 472LL : 440LL));
  else
    return 1LL;
}
