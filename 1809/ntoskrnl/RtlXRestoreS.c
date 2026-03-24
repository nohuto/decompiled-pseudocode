/*
 * XREFs of RtlXRestoreS @ 0x1401421F8
 * Callers:
 *     KxContextToKframes @ 0x14008A780 (KxContextToKframes.c)
 *     KeRestoreExtendedAndSupervisorState @ 0x14012F7C4 (KeRestoreExtendedAndSupervisorState.c)
 *     KeRestoreSupervisorState @ 0x1402941E0 (KeRestoreSupervisorState.c)
 *     PspSetContext @ 0x140620390 (PspSetContext.c)
 * Callees:
 *     RtlXRestore @ 0x14012F8F4 (RtlXRestore.c)
 *     XRestoreSHelper @ 0x1401C6420 (XRestoreSHelper.c)
 */

unsigned __int64 __fastcall RtlXRestoreS(__int64 a1, unsigned __int64 a2)
{
  if ( (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
    return XRestoreSHelper(a1, a2 & *(_QWORD *)(a1 + 520));
  else
    return RtlXRestore(a1, a2);
}
