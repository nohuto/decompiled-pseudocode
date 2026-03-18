/*
 * XREFs of KeVerifyGroupAffinity @ 0x14015AE18
 * Callers:
 *     sub_1401AC880 @ 0x1401AC880 (sub_1401AC880.c)
 *     NtSetInformationThread @ 0x1405F1400 (NtSetInformationThread.c)
 *     PspBuildCreateProcessContext @ 0x14060D280 (PspBuildCreateProcessContext.c)
 *     NtSetInformationProcess @ 0x14067A5E0 (NtSetInformationProcess.c)
 *     IopConnectInterrupt @ 0x14074338C (IopConnectInterrupt.c)
 *     IopConnectInterruptFullySpecified @ 0x1407855F4 (IopConnectInterruptFullySpecified.c)
 *     ExpProfileCreate @ 0x140917374 (ExpProfileCreate.c)
 * Callees:
 *     <none>
 */

bool __fastcall KeVerifyGroupAffinity(__int64 a1, char a2)
{
  unsigned __int16 v2; // ax

  v2 = *(_WORD *)(a1 + 8);
  return v2 < (unsigned __int16)KiActiveGroups
      && (a2 || *(_QWORD *)a1)
      && (qword_140572748[v2] & *(_QWORD *)a1) == *(_QWORD *)a1
      && !(*(_WORD *)(a1 + 10) | (unsigned __int16)(*(_WORD *)(a1 + 12) | *(_WORD *)(a1 + 14)));
}
