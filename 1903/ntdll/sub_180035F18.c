/*
 * XREFs of sub_180035F18 @ 0x180035F18
 * Callers:
 *     sub_180020D8C @ 0x180020D8C (sub_180020D8C.c)
 *     RtlInstallFunctionTableCallback @ 0x1800650D0 (RtlInstallFunctionTableCallback.c)
 *     RtlDeleteFunctionTable @ 0x180065340 (RtlDeleteFunctionTable.c)
 *     RtlDeleteGrowableFunctionTable @ 0x1800654E0 (RtlDeleteGrowableFunctionTable.c)
 *     RtlAddFunctionTable @ 0x180065A00 (RtlAddFunctionTable.c)
 *     RtlAddGrowableFunctionTable @ 0x180065C10 (RtlAddGrowableFunctionTable.c)
 *     sub_180069410 @ 0x180069410 (sub_180069410.c)
 *     sub_180070290 @ 0x180070290 (sub_180070290.c)
 *     sub_180077CE4 @ 0x180077CE4 (sub_180077CE4.c)
 *     sub_180078AA0 @ 0x180078AA0 (sub_180078AA0.c)
 *     sub_18007C0A8 @ 0x18007C0A8 (sub_18007C0A8.c)
 *     RtlSetProtectedPolicy @ 0x18007F090 (RtlSetProtectedPolicy.c)
 *     sub_18007F8D0 @ 0x18007F8D0 (sub_18007F8D0.c)
 *     sub_180080EC0 @ 0x180080EC0 (sub_180080EC0.c)
 *     sub_180081C0C @ 0x180081C0C (sub_180081C0C.c)
 *     RtlInitializeNtUserPfn @ 0x18008C500 (RtlInitializeNtUserPfn.c)
 *     RtlResetNtUserPfn @ 0x18008C620 (RtlResetNtUserPfn.c)
 *     sub_1800D16F0 @ 0x1800D16F0 (sub_1800D16F0.c)
 *     sub_1800D2538 @ 0x1800D2538 (sub_1800D2538.c)
 *     sub_1800D8B78 @ 0x1800D8B78 (sub_1800D8B78.c)
 *     sub_1800DFBC4 @ 0x1800DFBC4 (sub_1800DFBC4.c)
 * Callees:
 *     sub_180032A38 @ 0x180032A38 (sub_180032A38.c)
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 */

void __fastcall sub_180035F18(int a1)
{
  int v2; // edi

  RtlAcquireSRWLockExclusive(&stru_180165010);
  v2 = LdrSystemDllInitBlock.MitigationAuditOptionsMap.Map[2];
  if ( !a1 )
  {
    if ( !LODWORD(LdrSystemDllInitBlock.MitigationAuditOptionsMap.Map[2]) )
      sub_180032A38(4u);
    if ( v2 != -1 )
    {
      LODWORD(LdrSystemDllInitBlock.MitigationAuditOptionsMap.Map[2]) = v2 + 1;
      goto LABEL_6;
    }
LABEL_10:
    RtlReleaseSRWLockExclusive(&stru_180165010);
    __fastfail(0xEu);
  }
  if ( !LODWORD(LdrSystemDllInitBlock.MitigationAuditOptionsMap.Map[2]) )
    goto LABEL_10;
  --LODWORD(LdrSystemDllInitBlock.MitigationAuditOptionsMap.Map[2]);
  if ( v2 == 1 )
    sub_180032A38(2u);
LABEL_6:
  RtlReleaseSRWLockExclusive(&stru_180165010);
}
