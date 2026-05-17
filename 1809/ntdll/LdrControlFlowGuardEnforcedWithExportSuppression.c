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

  if ( !qword_1801783A0 )
    return 0LL;
  result = 1LL;
  if ( (byte_18017838C & 1) != 0 || (BYTE5(xmmword_180178390) & 3) != 3 )
    return 0LL;
  return result;
}
