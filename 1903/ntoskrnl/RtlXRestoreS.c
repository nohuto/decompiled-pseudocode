/*
 * XREFs of RtlXRestoreS @ 0x14015CAAC
 * Callers:
 *     KxContextToKframes @ 0x140082480 (KxContextToKframes.c)
 *     KeRestoreExtendedAndSupervisorState @ 0x140130664 (KeRestoreExtendedAndSupervisorState.c)
 *     KeRestoreSupervisorState @ 0x1402AABC0 (KeRestoreSupervisorState.c)
 *     PspSetContext @ 0x1405E88D0 (PspSetContext.c)
 * Callees:
 *     RtlXRestore @ 0x140130788 (RtlXRestore.c)
 *     XRestoreSHelper @ 0x1401CC9F0 (XRestoreSHelper.c)
 */

unsigned __int64 __fastcall RtlXRestoreS(__int64 a1, unsigned __int64 a2)
{
  if ( (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
    return XRestoreSHelper(a1, a2 & *(_QWORD *)(a1 + 520));
  else
    return RtlXRestore(a1, a2);
}
