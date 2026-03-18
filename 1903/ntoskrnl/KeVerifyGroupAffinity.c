/*
 * XREFs of KeVerifyGroupAffinity @ 0x14015A778
 * Callers:
 *     sub_1401AC160 @ 0x1401AC160 (sub_1401AC160.c)
 *     NtSetInformationThread @ 0x1405F0AF0 (NtSetInformationThread.c)
 *     PspBuildCreateProcessContext @ 0x14060B770 (PspBuildCreateProcessContext.c)
 *     NtSetInformationProcess @ 0x140674ED0 (NtSetInformationProcess.c)
 *     IopConnectInterrupt @ 0x14074148C (IopConnectInterrupt.c)
 *     IopConnectInterruptFullySpecified @ 0x140783294 (IopConnectInterruptFullySpecified.c)
 *     ExpProfileCreate @ 0x140917914 (ExpProfileCreate.c)
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
