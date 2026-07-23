/*
 * XREFs of LdrControlFlowGuardEnforcedWithExportSuppression @ 0x180009B04
 * Callers:
 *     RtlGuardRestoreContext @ 0x180003240 (RtlGuardRestoreContext.c)
 *     RtlUnwindEx @ 0x180005BF0 (RtlUnwindEx.c)
 *     LdrGetProcedureAddressForCaller @ 0x1800094D0 (LdrGetProcedureAddressForCaller.c)
 *     LdrpWriteBackProtectedDelayLoad @ 0x180035C68 (LdrpWriteBackProtectedDelayLoad.c)
 *     RtlValidateUserCallTarget @ 0x180035F48 (RtlValidateUserCallTarget.c)
 *     LdrpDoPostSnapWork @ 0x1800361E8 (LdrpDoPostSnapWork.c)
 *     LdrpCfgProcessLoadConfig @ 0x180041A48 (LdrpCfgProcessLoadConfig.c)
 *     LdrResolveDelayLoadedAPI @ 0x180041E90 (LdrResolveDelayLoadedAPI.c)
 *     LdrpOverrideExportSuppression @ 0x1800D6B50 (LdrpOverrideExportSuppression.c)
 *     AvrfMiniLoadDll @ 0x1800DCAA8 (AvrfMiniLoadDll.c)
 *     RtlpHandleInvalidUserCallTarget @ 0x1800F98D0 (RtlpHandleInvalidUserCallTarget.c)
 * Callees:
 *     <none>
 */

__int64 LdrControlFlowGuardEnforcedWithExportSuppression()
{
  __int64 result; // rax

  if ( !LdrSystemDllInitBlock.CfgBitMap )
    return 0LL;
  result = 1LL;
  if ( (LdrSystemDllInitBlock.Flags & 1) != 0 || (BYTE5(LdrSystemDllInitBlock.MitigationOptionsMap.Map[0]) & 3) != 3 )
    return 0LL;
  return result;
}
