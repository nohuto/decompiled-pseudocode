/*
 * XREFs of KeVerifyGroupAffinity @ 0x14016B72C
 * Callers:
 *     sub_1401A1740 @ 0x1401A1740 (sub_1401A1740.c)
 *     NtSetInformationThread @ 0x1405E9EA0 (NtSetInformationThread.c)
 *     PspBuildCreateProcessContext @ 0x140622378 (PspBuildCreateProcessContext.c)
 *     NtSetInformationProcess @ 0x140671C40 (NtSetInformationProcess.c)
 *     IopConnectInterrupt @ 0x14071074C (IopConnectInterrupt.c)
 *     IopConnectInterruptFullySpecified @ 0x14075CF14 (IopConnectInterruptFullySpecified.c)
 *     ExpProfileCreate @ 0x1408D9BCC (ExpProfileCreate.c)
 * Callees:
 *     <none>
 */

bool __fastcall KeVerifyGroupAffinity(__int64 a1, char a2)
{
  unsigned __int16 v2; // ax

  v2 = *(_WORD *)(a1 + 8);
  return v2 < (unsigned __int16)KiActiveGroups
      && (a2 || *(_QWORD *)a1)
      && (qword_1405416A8[v2] & *(_QWORD *)a1) == *(_QWORD *)a1
      && !(*(_WORD *)(a1 + 10) | (unsigned __int16)(*(_WORD *)(a1 + 12) | *(_WORD *)(a1 + 14)));
}
