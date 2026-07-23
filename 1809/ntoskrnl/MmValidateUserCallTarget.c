/*
 * XREFs of MmValidateUserCallTarget @ 0x14085D4E8
 * Callers:
 *     NtSetInformationProcess @ 0x140672E00 (NtSetInformationProcess.c)
 *     MmCheckForSafeExecution @ 0x140859E44 (MmCheckForSafeExecution.c)
 * Callees:
 *     MiIsProcessCfgEnabled @ 0x1400884AC (MiIsProcessCfgEnabled.c)
 *     MiValidateUserCallTarget @ 0x1406A88E8 (MiValidateUserCallTarget.c)
 */

__int64 MmValidateUserCallTarget()
{
  int v0; // r8d
  unsigned __int64 v1; // r9
  __int64 v3; // rdx
  const signed __int64 **v4; // rdx

  if ( !MiIsProcessCfgEnabled() )
    return 1LL;
  v3 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[1].IdealGlobalNode;
  if ( v0 )
    v4 = (const signed __int64 **)(v3 + 424);
  else
    v4 = (const signed __int64 **)(v3 + 392);
  return MiValidateUserCallTarget(v1, v4);
}
