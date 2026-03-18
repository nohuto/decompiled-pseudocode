/*
 * XREFs of KeVerifyGroupAffinity @ 0x14016B70C
 * Callers:
 *     sub_1401A1720 @ 0x1401A1720 (sub_1401A1720.c)
 *     NtSetInformationThread @ 0x1405E9EA0 (NtSetInformationThread.c)
 *     PspBuildCreateProcessContext @ 0x140622378 (PspBuildCreateProcessContext.c)
 *     NtSetInformationProcess @ 0x140671C60 (NtSetInformationProcess.c)
 *     IopConnectInterrupt @ 0x14071076C (IopConnectInterrupt.c)
 *     IopConnectInterruptFullySpecified @ 0x14075CF34 (IopConnectInterruptFullySpecified.c)
 *     ExpProfileCreate @ 0x1408D9BEC (ExpProfileCreate.c)
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
