/*
 * XREFs of sub_18001AE58 @ 0x18001AE58
 * Callers:
 *     LdrResolveDelayLoadedAPI @ 0x1800187C0 (LdrResolveDelayLoadedAPI.c)
 *     LdrGetProcedureAddressForCaller @ 0x18001AEC0 (LdrGetProcedureAddressForCaller.c)
 *     RtlRestoreContext @ 0x18001EE50 (RtlRestoreContext.c)
 *     sub_18002088C @ 0x18002088C (sub_18002088C.c)
 *     sub_18005547C @ 0x18005547C (sub_18005547C.c)
 *     sub_18005575C @ 0x18005575C (sub_18005575C.c)
 *     sub_180055830 @ 0x180055830 (sub_180055830.c)
 *     sub_1800D491C @ 0x1800D491C (sub_1800D491C.c)
 *     sub_1800DA8F4 @ 0x1800DA8F4 (sub_1800DA8F4.c)
 *     sub_1800F74E0 @ 0x1800F74E0 (sub_1800F74E0.c)
 * Callees:
 *     LdrControlFlowGuardEnforced @ 0x18001AE90 (LdrControlFlowGuardEnforced.c)
 */

_BOOL8 sub_18001AE58()
{
  int v0; // eax

  LOBYTE(v0) = LdrControlFlowGuardEnforced();
  return v0 && (BYTE5(LdrSystemDllInitBlock.MitigationOptionsMap.Map[0]) & 3) == 3;
}
