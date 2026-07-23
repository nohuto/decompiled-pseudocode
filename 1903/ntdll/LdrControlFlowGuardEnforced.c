/*
 * XREFs of LdrControlFlowGuardEnforced @ 0x18001AE90
 * Callers:
 *     sub_18001AE58 @ 0x18001AE58 (sub_18001AE58.c)
 *     sub_18001B784 @ 0x18001B784 (sub_18001B784.c)
 *     sub_18001B990 @ 0x18001B990 (sub_18001B990.c)
 *     RtlRestoreContext @ 0x18001EE50 (RtlRestoreContext.c)
 *     sub_18002088C @ 0x18002088C (sub_18002088C.c)
 *     sub_18005521C @ 0x18005521C (sub_18005521C.c)
 *     RtlInstallFunctionTableCallback @ 0x1800650D0 (RtlInstallFunctionTableCallback.c)
 *     RtlDeleteFunctionTable @ 0x180065340 (RtlDeleteFunctionTable.c)
 *     RtlDeleteGrowableFunctionTable @ 0x1800654E0 (RtlDeleteGrowableFunctionTable.c)
 *     RtlAddFunctionTable @ 0x180065A00 (RtlAddFunctionTable.c)
 *     RtlAddGrowableFunctionTable @ 0x180065C10 (RtlAddGrowableFunctionTable.c)
 *     sub_180072FEC @ 0x180072FEC (sub_180072FEC.c)
 *     RtlGuardCheckLongJumpTarget @ 0x180078390 (RtlGuardCheckLongJumpTarget.c)
 *     sub_180078AA0 @ 0x180078AA0 (sub_180078AA0.c)
 *     sub_18007C0A8 @ 0x18007C0A8 (sub_18007C0A8.c)
 *     RtlSetProtectedPolicy @ 0x18007F090 (RtlSetProtectedPolicy.c)
 *     sub_18007F8D0 @ 0x18007F8D0 (sub_18007F8D0.c)
 *     sub_180080EC0 @ 0x180080EC0 (sub_180080EC0.c)
 *     sub_1800D16F0 @ 0x1800D16F0 (sub_1800D16F0.c)
 *     RtlGrowFunctionTable @ 0x1800DFCA0 (RtlGrowFunctionTable.c)
 *     RtlRemoteCall @ 0x1800F8C90 (RtlRemoteCall.c)
 * Callees:
 *     <none>
 */

BOOLEAN LdrControlFlowGuardEnforced(void)
{
  BOOLEAN result; // al

  if ( !LdrSystemDllInitBlock.MitigationOptionsMap.Map[2] )
    return 0;
  result = 1;
  if ( (LdrSystemDllInitBlock.Flags & 1) != 0 )
    return 0;
  return result;
}
