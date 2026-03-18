/*
 * XREFs of MmValidateUserCallTarget @ 0x140898E3C
 * Callers:
 *     NtSetInformationProcess @ 0x140674ED0 (NtSetInformationProcess.c)
 *     MmCheckForSafeExecution @ 0x14089287C (MmCheckForSafeExecution.c)
 * Callees:
 *     MiIsProcessCfgEnabled @ 0x14001C880 (MiIsProcessCfgEnabled.c)
 *     MiValidateUserCallTarget @ 0x1406CD724 (MiValidateUserCallTarget.c)
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
