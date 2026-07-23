/*
 * XREFs of LdrControlFlowGuardEnforcedWithExportSuppression @ 0x18001AE58
 * Callers:
 *     LdrResolveDelayLoadedAPI @ 0x1800187C0 (LdrResolveDelayLoadedAPI.c)
 *     LdrGetProcedureAddressForCaller @ 0x18001AEC0 (LdrGetProcedureAddressForCaller.c)
 *     RtlGuardRestoreContext @ 0x18001EE50 (RtlGuardRestoreContext.c)
 *     LdrpCfgProcessLoadConfig @ 0x18002088C (LdrpCfgProcessLoadConfig.c)
 *     LdrpWriteBackProtectedDelayLoad @ 0x18005551C (LdrpWriteBackProtectedDelayLoad.c)
 *     RtlValidateUserCallTarget @ 0x1800557FC (RtlValidateUserCallTarget.c)
 *     LdrpDoPostSnapWork @ 0x1800558D0 (LdrpDoPostSnapWork.c)
 *     LdrpOverrideExportSuppression @ 0x1800D49DC (LdrpOverrideExportSuppression.c)
 *     AvrfMiniLoadDll @ 0x1800DA9B4 (AvrfMiniLoadDll.c)
 *     RtlpHandleInvalidUserCallTarget @ 0x1800F75C0 (RtlpHandleInvalidUserCallTarget.c)
 * Callees:
 *     LdrControlFlowGuardEnforced @ 0x18001AE90 (LdrControlFlowGuardEnforced.c)
 */

_BOOL8 LdrControlFlowGuardEnforcedWithExportSuppression()
{
  int v0; // eax

  LOBYTE(v0) = LdrControlFlowGuardEnforced();
  return v0 && (BYTE5(LdrSystemDllInitBlock.MitigationOptionsMap.Map[0]) & 3) == 3;
}
