/*
 * XREFs of LdrControlFlowGuardEnforced @ 0x180041DE0
 * Callers:
 *     RtlGuardCheckLongJumpTarget @ 0x180002F20 (RtlGuardCheckLongJumpTarget.c)
 *     RtlGuardRestoreContext @ 0x180003240 (RtlGuardRestoreContext.c)
 *     RtlUnwindEx @ 0x180005BF0 (RtlUnwindEx.c)
 *     LdrpResolveProcedureAddress @ 0x18000922C (LdrpResolveProcedureAddress.c)
 *     RtlGuardGrantSuppressedCallAccess @ 0x18002B1F4 (RtlGuardGrantSuppressedCallAccess.c)
 *     LdrpCfgProcessLoadConfig @ 0x180041A48 (LdrpCfgProcessLoadConfig.c)
 *     LdrEnsureMrdataHeapExists @ 0x18005C818 (LdrEnsureMrdataHeapExists.c)
 *     RtlpCallVectoredHandlers @ 0x18006CC90 (RtlpCallVectoredHandlers.c)
 *     RtlDeleteFunctionTable @ 0x18006EB60 (RtlDeleteFunctionTable.c)
 *     RtlDeleteGrowableFunctionTable @ 0x18006ED50 (RtlDeleteGrowableFunctionTable.c)
 *     RtlInstallFunctionTableCallback @ 0x18006F2B0 (RtlInstallFunctionTableCallback.c)
 *     RtlAddFunctionTable @ 0x18006F5E0 (RtlAddFunctionTable.c)
 *     RtlAddGrowableFunctionTable @ 0x18006F8F0 (RtlAddGrowableFunctionTable.c)
 *     RtlGuardCheckImageBase @ 0x180078ED4 (RtlGuardCheckImageBase.c)
 *     RtlSetProtectedPolicy @ 0x180083740 (RtlSetProtectedPolicy.c)
 *     RtlpAddVectoredHandler @ 0x180084210 (RtlpAddVectoredHandler.c)
 *     RtlpRemoveVectoredHandler @ 0x180085530 (RtlpRemoveVectoredHandler.c)
 *     LdrpInitializeExecutionOptions @ 0x1800D30E0 (LdrpInitializeExecutionOptions.c)
 *     RtlRemoteCall @ 0x1800FB0D0 (RtlRemoteCall.c)
 *     RtlpFreeReadOnlyHeap @ 0x180106E40 (RtlpFreeReadOnlyHeap.c)
 * Callees:
 *     <none>
 */

BOOLEAN LdrControlFlowGuardEnforced(void)
{
  BOOLEAN result; // al

  if ( !LdrSystemDllInitBlock.CfgBitMap )
    return 0;
  result = 1;
  if ( (LdrSystemDllInitBlock.Flags & 1) != 0 )
    return 0;
  return result;
}
